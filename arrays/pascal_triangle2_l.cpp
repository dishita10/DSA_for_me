class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> r;
        long long res=1;
        for(int i=0;i<=rowIndex;i++){
            r.push_back(res);
            res*=(rowIndex-i);
            res/=(i+1);
            
        }
        return r;
    }
};