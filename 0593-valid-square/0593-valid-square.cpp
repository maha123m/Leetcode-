class Solution {
public:
    double distance(vector <int> p1,vector <int> p2){// this function to find distance between two points
        return sqrt((p2[0]-p1[0])*(p2[0]-p1[0])+(p2[1]-p1[1])*(p2[1]-p1[1]));
        
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>> points ={p1,p2,p3,p4};
        vector<double> result;//to store distance between points 
        for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
                double Distance= distance(points[i],points[j]);
                if(Distance!=0){
                    result.push_back(Distance);
                }
                else{
                    return false;
                }  
            }
        }
            sort(result.begin(),result.end());// sorted vector
            result.erase(unique(result.begin(),result.end()),result.end());
            if(result.size()==2){
                return true;
            }
            else{
                return false;
            }
        }   
   
};