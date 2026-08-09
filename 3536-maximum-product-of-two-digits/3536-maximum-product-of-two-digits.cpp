class Solution {
public:
    int maxProduct(int n) {
        int m1 =-1;
        int m2 =-1;
        while(n>0){
          int  rem = n%10;
            n /=10;
            if(rem>m1){
                m2 = m1;
                m1 = rem;
            }else if(rem >m2){
                m2 = rem;
            }
        }
        return m1*m2;
        
        
    }
};