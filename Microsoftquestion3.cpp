// Bulls and Cows
class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0,cows=0;
        unordered_map<char,int>mp1,mp2;
        for(int i=0;i<secret.length();i++) {
            if(secret[i]==guess[i]) {
                bulls++;
            }
            else {
                mp1[secret[i]]++;
                mp2[guess[i]]++;
            }
        }
        for(auto i:mp1) {
            if(mp2.find(i.first)!=mp2.end()) {
                cows+=min(i.second,mp2[i.first]);
            }
        }
        string ans=to_string(bulls) + "A" + to_string(cows) + "B";
        return ans;
    }
};