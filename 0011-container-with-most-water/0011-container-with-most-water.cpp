class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0;
        int r = h.size()-1;
        int ans =0;
        while(l<r){
            int he = min(h[l],h[r]);
            int w = r-l;
            int a = w*he;
           
            if(h[l]<h[r]){
                l++;
            }
            else{
                r--;
            }
             ans = max(a,ans);
        }
        return ans;
    }
};