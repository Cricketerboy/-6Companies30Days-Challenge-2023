//count nice pairs in an array
class Solution {
public:
int reverse(int num) {
    int temp=0;
    while(num) {
        temp=temp*10 + num%10;
        num=num/10;
    }
    return temp;
}
    int countNicePairs(vector<int>& nums) {
        int result=0;
        int M=1e9+7;
        unordered_map<int,int>mp;
        for(int i=nums.size()-1;i>=0;i--) {
            int diff=nums[i]-reverse(nums[i]);
            if(mp.count(diff)==true) {
                result=(result+mp[diff])%M;
            }
            mp[diff]++;
        }
        return result;
    }
};