class Solution
{
private:
    int *arr;
    int size;
    int target;

public:
    Solution(int *a, int s)
    {

        size = s;
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            *(arr + i) = *(a + i);
        }
    }

    int **giveResult(int &t)
    {
        target = t;
        int k = 0, l = 0;
        int **newArr = new int *[size];
        for (int i = 0; i < size; i++)
        {
            *(newArr + i) = new int[2];
        }
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (*(arr + i) + *(arr + j) == target)
                {
                    *(*(newArr + k) + l++) = *(arr + i);
                    *(*(newArr + k++) + l++) = *(arr + j);
                    l = 0;
                }
            }
        }
        *(*(newArr + k) + l++) = -1;
        *(*(newArr + k++) + l++) = -1;
        for (int i = 0; i < size; i++)
        {
            if (*(*(newArr + i) + 0) == -1)
            {
                t = i;
                break;
            }
        }
        return newArr;
    }

    ~Solution()
    {
        delete arr;
    }
};

