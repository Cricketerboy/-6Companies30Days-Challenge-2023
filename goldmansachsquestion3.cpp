//max points on a line
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int ans=1;
        for(int i=0;i<points.size()-1;i++) {
            unordered_map<double,int>mp;
            for(int j=i+1;j<points.size();j++) {
                if(points[i][0]==points[j][0]){
                    mp[1000001]++;
                }
                else {
                    double slope=(double)(points[j][1]-points[i][1])/(double)(points[i][0]-points[j][0]);
                    mp[slope]++;
                }
            }
            int temp=0;
              for(auto i:mp) {
                  temp=max(temp,i.second);
              }
              ans=max(ans,(temp+1));
        }
        return ans;
    }
};