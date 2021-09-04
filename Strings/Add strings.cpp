class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int carry = 0;
        string s;
        int i = num1.size()-1, j = num2.size()-1;
        while(i>=0 || j>=0 || carry){
            int a = (i>=0) ? num1[i--] - '0' : 0;
            int b = (j>=0) ? num2[j--] - '0' : 0;
            int sum = a + b + carry;
            carry = sum/10;
            s.push_back( (sum%10) + '0');
        }
        
        reverse(s.begin(), s.end());
        return s;
    }
};
