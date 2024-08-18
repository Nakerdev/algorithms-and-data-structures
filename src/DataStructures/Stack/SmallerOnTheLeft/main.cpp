#include <iostream>
#include <vector>
#include <stack>

int main()
{
    std::vector<int> numberSequence = { 2, 5, 3, 7, 8, 1, 9 };
    std::stack<int> smallerNumbers;

    for(int i = 0; i < numberSequence.size(); ++i)
    {
        auto number = numberSequence[i];
        while(!smallerNumbers.empty())
        {
            if(smallerNumbers.top() >= number)
            {
                smallerNumbers.pop();
            }
            else 
            {
                break;
            }
        }

        if(smallerNumbers.empty())
        {
            numberSequence[i] = -1;
        }
        else
        {
            numberSequence[i] = smallerNumbers.top();
        }

        smallerNumbers.push(number);
    }

    for(const int& num : numberSequence)
    {
        std::cout << num << ", ";
    }

    return 0;
}

