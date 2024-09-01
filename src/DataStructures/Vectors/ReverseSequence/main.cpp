#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numberSequence = { 10, 11, 12, 15, 14, 13 };

    std::vector<int> reversedSequence;
    for(int i = static_cast<int>(numberSequence.size() - 1); i >= 0; --i)
    {
        reversedSequence.push_back(numberSequence[i]);
    }

    for(int number : reversedSequence)
    {
        std::cout << number << " ";
    }

    return 0;
}

