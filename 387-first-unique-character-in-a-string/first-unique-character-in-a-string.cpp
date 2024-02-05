class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> count(26,0);
        for(int i=0;i<s.size();i++){
           count[s[i]-'a']++;//s[i]-97
           //as if character is 'a' then a-a=0 i.e at index 0 put 1;
           //if character appears only once then return value of i
           //'b'-'a'=1
        }
        for(int i=0;i<s.size();i++){
            if(count[s[i]-'a']==1){
                return i;
            }
        }
            
    return -1;  
        }
    
};
