class Solution
{
public:
    bool isPalindrome(int x)
    {
        int num = x;
        int revNum = 0;
        while (num)
        {
            revNum = (revNum * 10) + (num % 10);
            num /= 10;
        }

        if ((revNum == x) && x >= 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
