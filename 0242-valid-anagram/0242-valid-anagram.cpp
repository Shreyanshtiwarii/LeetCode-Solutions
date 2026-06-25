class Solution {

    char tolower(char ch){
        if (ch >= 'a' && ch <= 'z')
            return ch;
        if (ch >= 'A' && ch <= 'Z')
            return ch - 'A' + 'a';
            return ch;
    }

public:
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length()) return false;
        int freq1[26]={0};
        int freq2[26]={0};
        for(char ch:s){
            ch=tolower(ch);
            freq1[ch-'a']++;
        }
        for(char ch:t){
            ch=tolower(ch);
            freq2[ch-'a']++;
        }
        int i=0;
        while(i<26){
            if(freq1[i]!=freq2[i]) return false;
            i++;
        }
        return true;
    }
};