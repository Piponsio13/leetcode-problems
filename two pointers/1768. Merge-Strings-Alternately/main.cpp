class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";

        if(word1.size() == word2.size()){
            for(int i = 0; i < word1.size(); i++){
                ans+=word1[i];
                ans+=word2[i];
            }

            return ans;
        }

        int currChars = 0;

        for(int i = 0; i < word1.size(); i++){
            ans+=word1[i];
            if(i < word2.size()){
                currChars++;
                ans+=word2[i];
            }
        }

        for(int i = currChars; i < word2.size(); i++){
            ans+=word2[i];
        }        

        return ans;
    }
};