class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> v;
        int k=0;
      unordered_set<char> set1,set2,set3,temp;
        set1={'q','w','e','r','t','y','u','i','o','p'};
        set2={'a','s','d','f','g','h','j','k','l'};
        set3={'z','x','c','v','b','n','m'};
        
        for(int i=0;i<words.size();i++){
            int flag=1;
           
            if(set1.find(tolower(words[i][0]))!=set1.end())
                temp=set1;
            
            else if(set2.find(tolower(words[i][0]))!=set2.end())
                temp=set2;
            
            else
                temp=set3;
            
            for(int j=1;j<words[i].size();j++){
                
                 if(temp.find(tolower(words[i][j]))==temp.end()){
                     flag=0;
                     break;
                 }
            }
            
          if(flag==1){
              
              v.push_back(words[i]); 
              k++;
          }  
            
          temp.clear(); 
        }
        return v; 
        }
        
       
        
    
};