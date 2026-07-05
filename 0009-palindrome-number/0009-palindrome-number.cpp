class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int y=x;
        int rev=0;
        while(y!=0){
            int digit = y%10;
            if(rev > INT_MAX/10 || rev < INT_MIN/10)
            return false;
            rev=rev*10+digit;
            y=y/10;
        }
        if(x==rev)
            return true;
        else return false;
           }
};