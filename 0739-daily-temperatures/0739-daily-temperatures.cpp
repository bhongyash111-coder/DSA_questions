class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        stack<int>s;
        int n = nums.size();
        vector<int>ans(n,0);
        for(int i =0;i<n;i++){
            while(!s.empty() && nums[i]>nums[s.top()]){
                int prev = s.top();
                s.pop();
                ans[prev]=i-prev;
            }
            s.push(i);
        }
        return ans;
    }
};