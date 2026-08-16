class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int>ex;
        for(int i =0;i<h.size();i++){
            ex.push_back(h[i]);
        }
        sort(ex.begin(),ex.end());
        int cnt =0;

        for(int i =0;i<ex.size();i++){
            if(ex[i]!=h[i]){
                cnt++;
            }
        }
        return cnt++;

    }
};