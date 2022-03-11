class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int count=0;
        vector<int> alpha(26,0),temp(26,0);
         
          for(int i=0;i<chars.length();i++){
              alpha[chars[i]-'a']++;
              
          }
        
        
        for(int i=0;i<words.size();i++){
            temp=alpha;
            
            int flag=1;
            for(int j=0;j<words[i][j];j++){
                if(temp[words[i][j]-'a']<=0){
                    flag=0;
                    break;
                }
                temp[words[i][j]-'a']--;
                            
            }
            if(flag==1){
                count+=words[i].size();
            }
        }
       return count; 
    }
};