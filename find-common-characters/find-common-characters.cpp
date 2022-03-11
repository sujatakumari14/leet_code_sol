class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
     unordered_multiset<char>mset,temp;
        
        //inserting the v[0] string in the  multisetset
        for(int j=0;j<words[0].size();j++){
                mset.insert(words[0][j]);
        }   
        
        
        for(int i=1;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                auto itr=mset.find(words[i][j]);
                 if(itr!=mset.end()){
                     temp.insert(words[i][j]);
                     mset.erase(itr);
                 }
            }          
            mset.clear();
            mset=temp;
           
            temp.clear();
        }
        vector<string> v(mset.size());
        
       int i=0;
        for(auto &value:mset){ 
            
            v[i].push_back(value);
            i++;
        }
        return v;
    }
};