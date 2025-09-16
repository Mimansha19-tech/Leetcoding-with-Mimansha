class Solution
{
public:
    bool isPalindrome(int x)
    {
        int dup = x;
        long long rev = 0;
        for (; x > 0; x = x / 10)
        {
            int ld = x % 10;
            if (rev > INT_MAX || rev == INT_MAX && ld < 7)
                return 0;
            if (rev < INT_MIN || rev == INT_MIN && ld > -8)
                return 0;
            rev = rev * 10 + ld;
        }
        if (dup == rev)
            cout << " true";
        else
            cout << "false";
        return rev == dup;
    }
};