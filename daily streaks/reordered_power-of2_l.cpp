class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        
        vector<string> powr;
        for(int i=0;i<=30;i++){
            int p = pow(2,i);
            powr.push_back(to_string(p));
        }
        for(int i=0;i<=30;i++){
            sort(powr[i].begin(),powr[i].end());
        }
        for(int i=0;i<=30;i++){
            if(powr[i] == s ) return true;
        }
        return false;
    }
};