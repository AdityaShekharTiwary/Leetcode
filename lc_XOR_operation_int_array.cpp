class Solution {
public:
    int xorOperation(int n, int start)
    {
        int xor_nums=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=start+(2*i);
             xor_nums=xor_nums^arr[i];
        }

        return xor_nums;
    }
};
