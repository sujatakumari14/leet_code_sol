class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int i,count=0;
        for(i=0;i<words.size();i++){
            int flag=1;
            for(int k=0;k<pref.size();k++){
               
                 if(words[i][k]!=pref[k]){
                     flag=0;
                     break;
                 }
               
            }
            if(flag==1){
              count++;
            }
        }
        return count;
    }
};