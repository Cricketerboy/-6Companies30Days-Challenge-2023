//number of boomerangs
class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int total=0;
        for(int i=0;i<points.size();i++) {
            map<int,int>mp;
            for(int j=0;j<points.size();j++) {
                int distance=((points[i][0]-points[j][0])*(points[i][0]-points[j][0])) + ((points[i][01]-points[j][1])*(points[i][1]-points[j][1]));
                mp[distance]++;
            }
           for(auto i:mp) {
               if(i.second) {
                   total+=(i.second)*(i.second-1);
               }
           }
        }
        return total;
    }
};