// Combination sum III
class Solution {
    private:
    void solve(int index, int sum,int n,vector<int>&ans,vector<vector<int>>&ans2,int k ) {
        if(sum==n && k==0) {
            ans2.push_back(ans);
            return;
        }
        if(sum>n) {
            return;
        }
        for(int i=index;i<=9;i++) {
            if(i>n) {
                break;
            }
            ans.push_back(i);
            solve(i+1,sum+i,n,ans,ans2,k-1);
            ans.pop_back();
        } 
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ans;
        vector<vector<int>>ans2;
        solve(1,0,n,ans,ans2,k);
        return ans2;
    }
};