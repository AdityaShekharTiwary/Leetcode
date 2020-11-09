class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry= 0,n=digits.size(),digit,i=n-2;
        digits[n-1]+=1;
        carry = digits[n-1]/10;
        digits[n-1]%=10;

        while(carry!=0){
            if(i<0){
                digits.insert(digits.begin(),carry);
                break;
            }
            else{
                digits[i]+=carry;
                carry = digits[i]/10;
                digits[i]%=10;
                i--;
            }
        }
        return digits;
    }
};
