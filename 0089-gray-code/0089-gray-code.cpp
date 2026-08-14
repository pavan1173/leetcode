class Solution {
public:
    vector<int> grayCode(int n) {
        int tot = 1<<n;
        vector<int> res(tot);
        for(int i=0;i<tot;++i){
            res[i]=i^(i>>1);
        } return res;
        
    }
};