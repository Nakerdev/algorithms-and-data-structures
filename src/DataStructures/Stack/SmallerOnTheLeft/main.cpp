#include <iostream>
#include <vector>
#include <stack>

int main()
{
    //std::vector<int> numberSequence = { 2, 5, 3, 7, 8, 1, 9 }; //[-1, 2, 2, 3, 7, -1, 1]
    std::vector<int> numberSequence = { 5, 7, 4, 9, 8, 10 }; //[-1, 5, -1, 4, 4, 8]
    std::stack<int> smallerNumberStack;

    for(int i = 0; i < numberSequence.size(); ++i)
    {
        auto number = numberSequence[i];
        if(smallerNumberStack.empty())
        {
            smallerNumberStack.push(number);
            numberSequence[i] = -1;
            continue;
        }

        auto lastSmallerNumber = smallerNumberStack.top();
        if(lastSmallerNumber < number)
        { 
            numberSequence[i] = lastSmallerNumber;
        }
        else 
        {
             int smallerNumber = -1;
             std::stack<int> copyStack = smallerNumberStack;
             while (!copyStack.empty()) 
             {
                auto lastNumber = copyStack.top();
                if(lastNumber < number)
                {
                    smallerNumber = lastNumber;
                    break;
                }
                copyStack.pop();
            }
            numberSequence[i] = smallerNumber;
        }

        smallerNumberStack.push(number);
    }

    for(const int& num : numberSequence)
    {
        std::cout << num << ", ";
    }

    return 0;
}

