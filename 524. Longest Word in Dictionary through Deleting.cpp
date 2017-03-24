#Given a string and a string dictionary, find the longest string in the dictionary that can be formed by deleting some characters of the given string. If there are more than one possible results, return the longest word with the smallest lexicographical order. If there is no possible result, return the empty string.
# By saxion

string findLongestWord(string s, vector<string>& d) {
    string ans;
    for(int i=0;i<d.size();i++){ // iterate the dictionary
        int pi=0, pj=0; // pi track the string size; pj track the size of subset of current word;
        for(;pi<s.size() && pj<d[i].size();pi++){
            pj+=s[pi]==d[i][pj]; // record if s contains the word in order.
        }
        if(pj==d[i].size()&&(ans.size()<d[i].size()||(ans.size()==d[i].size()&&ans>d[i]))) // replace current ans if the word is in the string && (it is loger than previous answer or it has same size but smaller lexicographical order)
            ans=d[i];
    }
    return ans;
}
