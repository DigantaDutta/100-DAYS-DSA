class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        reverse(digits.begin(),digits.end());
        int i=0,carry=0,sum;
        do
        {
            sum=carry;
            sum+=digits[i];
            if(i==0)sum+=1;

            digits[i]=sum%10;
            carry=sum/10;
            i++;
            if(i>=n && carry==1)digits.resize(n+1);
        }while(carry);

        reverse(digits.begin(),digits.end());
        return digits;
        
    }
};