class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int, int> freq;
        for(char c: magazine){
            freq[c-'a']++;
        }
        for(char c: ransomNote){
            if(freq[c-'a']>0){
                freq[c-'a']--;
            }else{
                return false;
            }
        }
        return true;
    }
};