class Solution {
public:
    string firstPalindrome(vector<string>& words) {
         
         string s="";
        
        for(int str=0;str<words.size();str++){
            int i=0,flag=1;
            int j=words[str].size()-1;
            while(i<=j){
                if(words[str][i]!=words[str][j]){
                    flag=0;
                    break;
                }
                i++;
                j--;
            }
            if(flag==1){
               
                s+=words[str];
                break;
            }
        }
        return s;
        
    }
};