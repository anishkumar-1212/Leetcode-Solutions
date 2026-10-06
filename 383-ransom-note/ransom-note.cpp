class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> freq;
        //counting the frequency of ransomNOte
        for(char c:magazine){
            freq[c]++;
        }
        for(char x: ransomNote){
            if(freq[x]>0){
                freq[x]--;
            }else{
                return false;
            }
        }
        return true;
    }
};