class Solution {
public:
    int reverse(int x) {
        long int flag=0,rev=0,x1=x;
        if(x<0)
        {
            flag=1; x1=x; x1=-x1;
        }
        while(x1)
        {
            rev=rev*10+x1%10;
            x1=x1/10;
        }
        rev=flag?-rev:rev;
        if(rev<INT_MIN || rev>INT_MAX) return 0;
        
        return rev;
    }
};
