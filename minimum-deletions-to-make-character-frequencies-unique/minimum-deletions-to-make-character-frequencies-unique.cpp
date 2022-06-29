class Solution {
public:
    int minDeletions(string s) {
        
        unordered_map<char,int>mp;
        int len=s.length();
        vector<int>v;
        int count=0;
        
        for(int i=0;i<len;i++) mp[s[i]]++;
        
        for(const auto&[key,value]:mp )v.push_back(value);
        
        sort(v.begin(),v.end(),std::greater<int>());
        
        len=v.size();
        
        for(int i=0;i<len-1;i++){
            while(v[i]<=v[i+1]){
                
                if(v[i]==0&&v[i+1]==0) break;
                count++;
                v[i+1]--;
                
            }
            
        }
        
        return count;
    }
};