class Solution {
public:
    int fib(int N) {
        int t1=1,t2=1,nextTerm=0;
        if(N==0){
            return 0;
        }
        else if(N==1){
            return 1;
        }
        else if(N==2){
            return 1;
        }
        else
        {
            for(int i=3;i<=N;i++)
            {
                nextTerm=t1+t2;
                t1=t2;
                t2=nextTerm;
            }
            return nextTerm;
        }
    }
};
