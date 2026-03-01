class Solution {
public:
    int matchCount(string &a, string &b) {
        int count = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == b[i]) count++;
        }
        return count;
    }

    void findSecretWord(vector<string>& wordlist, Master& master) {
        for (int at = 0; at < 100; at++) {
            string guessWord;
            if(at%2==0){
            unordered_map<string,int>map1;
            for(string word:wordlist){
                for(string wd:wordlist){
                    if(matchCount(word,wd)==0){
                        map1[word]++;
                    }
                }
            }
            int mincount=INT_MIN;
            for(int i=0;i<wordlist.size();i++){
                if(mincount<map1[wordlist[i]]){
                    mincount=map1[wordlist[i]];
                    guessWord=wordlist[i];
                }
            }}
            else{
                guessWord=wordlist[rand()%wordlist.size()];
            }

            int matches = master.guess(guessWord);
            if (matches == guessWord.size()) return;
            vector<string> newList;
            for (auto &word : wordlist) {
                if (matchCount(word, guessWord) == matches) {
                    newList.push_back(word);
                }
            }
            
            wordlist = newList;
        }
    }
};
