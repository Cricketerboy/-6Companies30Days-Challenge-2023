//valid square
class Solution {
public:
    int get_length(vector<int>& a, vector<int>& b) {
        return (a[0]-b[0])*(a[0]-b[0]) + (a[1]-b[1])*(a[1]-b[1]);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        if(p1==p3 && p2==p4) {
            return false;
        }
        int a,b,c,d,e,f;
        vector<int>sides={
          a= get_length(p1,p2),
          b= get_length(p1,p3),
          c= get_length(p1,p4),
          d= get_length(p2,p3),
          e= get_length(p2,p4),
          f= get_length(p3,p4),
        };
        unordered_map<int,int>mp;
        for(auto &i:sides) {
            if(!mp.count(i)) {
                mp.insert({i,1});
            }
            else {
                mp[i]++;
            }
        }
        if(mp.size()!=2) {
            return false;
        }
        
        for(auto& x:mp) {
            return (x.second==4) || (x.second==2);
        }
        return false;
    }
};