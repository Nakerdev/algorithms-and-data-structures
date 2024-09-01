#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numberSequence = { 1, 7, 3, 2, 4, 7, 5, 8, 7 };

    int lastNumber = numberSequence[numberSequence.size() - 1];
    numberSequence.pop_back();

    int counter = 0;
    for(const int& number : numberSequence)
    {
        if(number == lastNumber) ++counter;
    }

    std::cout << "The last number is repeated " << counter << " times." << std::endl;

    return 0;
}

