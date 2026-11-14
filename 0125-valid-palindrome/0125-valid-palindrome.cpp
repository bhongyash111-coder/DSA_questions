class Solution {
public:
    bool isPalindrome(string s) {
        string r;
        for(auto x:s){
            if(isalnum(x)){
                r.push_back(tolower(x));
            }
        }
        int i =0,j=r.size()-1;
        int flag =1;
        while(i<j){
            if(r[i]==r[j]){
                i++;
                j--;
            }
            else{flag =0;
            break;
            }
        }
        return(flag==1)?true:false;
    }
};