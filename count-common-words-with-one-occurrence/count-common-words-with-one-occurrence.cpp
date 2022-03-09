class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        vector<string>s;
        
        for(int i=0;i<words1.size();i++){
            for(int j=0;j<words2.size();j++){
                if(words1[i]==words2[j]){
                    s.push_back(words2[j]);
                }
            }
        }
        
        //map
        map<string,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        //finding unique
        int count=0;
        for(auto &it : mp) {                //searching using value of map
        if(it.second == 1) { 
            count++; 
            } 
        } 

        return count;
    }
};