class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(),maxlen =0;
        int l=0,r=0;
        int len = 256;
        int hash[len];
        for(int i=0;i<256;i++){
            hash[i]=-1;
        }
        while(r<n){
            if(hash[s[r]]!=-1 && hash[s[r]]>=l){
                l = hash[s[r]]+1;
            }
            len = r-l+1;
            maxlen = max(len,maxlen);
            hash[s[r]] = r;
            r++;
        }
        return maxlen;
    }
};