//recursive solution
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0) return false;
        if(n==1) return true;
        return(n%3==0 && isPowerOfThree(n/3));
    }
};
//iterative solution
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1) return false;
        while(n%3==0) {
            n /= 3;
        }
        if(n==1) return true;
        return false;
    }
};
//O(1) solution
class Solution {
public:
    // 3 ^ x = n
    // log10(3 ^ x) = log10(n)
    // x log10(3) = log10(n)
    // x = log10(n) / log10(3)
    bool isPowerOfThree(int n) {
        if(n==0) return false;
        // check if the ceil value is same as the non-ceil value
        // if yes i.e it is indeed an integer
        else if(ceil(log10(n)/log10(3)) == (log10(n)/log10(3))) {
            return true;
        }
        return false;
    }
};