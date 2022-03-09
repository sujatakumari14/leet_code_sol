class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
        vector<int> answer;
        int min,sub;
        vector<int>v;
        
        //finding all the indices where c is present
        for(int i=0;i<s.length();i++){
            
            if(s[i]==c)
                v.push_back(i);
        }
        
        
        //finding min distance
        
        for(int i=0;i<s.length();i++){
            min=INT_MAX;
            for(int j=0;j<v.size();j++){
                sub=i-v[j];
                if(sub<0)
                    sub=sub*(-1);
                
                if(min>sub){
                    min=sub;
                }
            }
       answer.push_back(min);
        }
        
        return answer;
    }
};