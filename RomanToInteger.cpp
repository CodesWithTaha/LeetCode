class Solution {
public:
int romanToInt(string s)
{
    int num = 0;
    bool negative = false;
    if (s[0] == '-')
    {
        negative = true;
    }
    int length = s.length();

    for (int i = 0; i < length; i++)
    {
        int currNum = 0;
        int nextNum = 0;
        switch (s[i])
        {
        case 'I':
        {
            currNum = 1;
            break;
        }

        case 'V':
        {
            currNum = 5;
            break;
        }

        case 'X':
        {
            currNum = 10;
            break;
        }

        case 'L':
        {
            currNum = 50;
            break;
        }

        case 'C':
        {
            currNum = 100;
            break;
        }

        case 'D':
        {
            currNum = 500;
            break;
        }

        case 'M':
        {
            currNum = 1000;
            break;
        }

        default:
        {
            currNum = 0;
            break;
        }
        }

        if (i + 1 < length)
        {
            switch (s[i + 1])
            {
            case 'I':
            {
                nextNum = 1;
                break;
            }

            case 'V':
            {
                nextNum = 5;
                break;
            }

            case 'X':
            {
                nextNum = 10;
                break;
            }

            case 'L':
            {
                nextNum = 50;
                break;
            }

            case 'C':
            {
                nextNum = 100;
                break;
            }

            case 'D':
            {
                nextNum = 500;
                break;
            }

            case 'M':
            {
                nextNum = 1000;
                break;
            }

            default:
            {
                nextNum = 0;
                break;
            }
            }
        }

        if (currNum < nextNum)
        {
            num -= currNum;
        }

        else
        {
            num += currNum;
        }
    }
    if (negative)
    {
        return -num;
    }
    else
    {
        return num;
    }
}
};
