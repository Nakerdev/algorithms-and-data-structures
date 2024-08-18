#include <iostream>
#include <vector>
#include <stack>

int main()
{
    std::vector<int> numberSequence = { 2, 5, 3, 7, 8, 1, 9 }; //[-1, 2, 2, 3, 7, -1, 1]
    //std::vector<int> numberSequence = { 5, 7, 4, 9, 8, 10 }; //[-1, 5, -1, 4, 4, 8]
    std::stack<int> smallerNumberStack;
    std::vector<int> computedNumberSequence;

    for(const int& number : numberSequence)
    {
        if(smallerNumberStack.empty())
        {
            smallerNumberStack.push(number);
            computedNumberSequence.push_back(-1);
            continue;
        }

        auto lastSmallerNumber = smallerNumberStack.top();
        if(lastSmallerNumber < number)
        { 
            computedNumberSequence.push_back(lastSmallerNumber);
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
                }
                copyStack.pop();
            }
            computedNumberSequence.push_back(smallerNumber);
        }

        smallerNumberStack.push(number);
    }

    for(const int& num : computedNumberSequence)
    {
        std::cout << num << ", ";
    }

    return 0;
}

