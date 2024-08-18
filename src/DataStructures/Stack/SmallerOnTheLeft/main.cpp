#include <iostream>
#include <vector>
#include <stack>

int FindPreviousSmallerElement(const std::stack<int>& alreadyComputedNumbers, const int& number)
{
    int previousSmallerNumber = -1;
    std::stack<int> alreadyComputedNumbers_copy = alreadyComputedNumbers;
    while (!alreadyComputedNumbers_copy.empty()) 
    {
        auto lastNumber = alreadyComputedNumbers_copy.top();
        if(lastNumber < number)
        {
            previousSmallerNumber = lastNumber;
            break;
        }
        alreadyComputedNumbers_copy.pop();
    }
    return previousSmallerNumber;
}

int main()
{
    std::vector<int> numberSequence = { 2, 5, 3, 7, 8, 3, 1, 9 }; //output: -1, 2, 2, 3, 7, 2, -1, 1
    //std::vector<int> numberSequence = { 5, 7, 4, 9, 8, 10 }; //output: -1, 5, -1, 4, 4, 8
    std::stack<int> alreadyComputedNumbers;

    for(int i = 0; i < numberSequence.size(); ++i)
    {
        auto number = numberSequence[i];
        if(alreadyComputedNumbers.empty())
        {
            alreadyComputedNumbers.push(number);
            numberSequence[i] = -1;
            continue;
        }
        
        numberSequence[i] = FindPreviousSmallerElement(alreadyComputedNumbers, number);
        alreadyComputedNumbers.push(number);
    }

    for(const int& num : numberSequence)
    {
        std::cout << num << ", ";
    }

    return 0;
}

