class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        sort(intervals.begin(),intervals.end());
        result.push_back(intervals[0]);//insert first interval
        int j=0;//t store the result
        for(int i=1;i<intervals.size();i++){
            if(result[j][1]>=intervals[i][0])
                result[j][1]=max(result[j][1],intervals[i][1]);
            else{
                j++;
                result.push_back(intervals[i]);
            }
                
            
        }
        return result;
        
        
        
    }
};