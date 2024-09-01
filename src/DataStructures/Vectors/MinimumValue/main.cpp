#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numberSequence = { 5, 3, 8, 6, 2, 9 };

    int minimunNumber = numberSequence[0];
    for(const int& number : numberSequence)
    {
        if(number < minimunNumber) minimunNumber = number;
    }

    std::cout << "The minimum number is: " << minimunNumber << std::endl;

    return 0;
}

