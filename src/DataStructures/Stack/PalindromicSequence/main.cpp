#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>

int main()
{
    std::string input;

    std::cout << "Enter a sequence of numbers separated by spaces:" << std::endl;
    std::getline(std::cin, input);

    std::stringstream inputStream(input);
    std::vector<int> numberSequence;
    std::string sequenceElement;
    while(std::getline(inputStream, sequenceElement, ' '))
    {
        numberSequence.push_back(std::stoi(sequenceElement));
    }

    std::stack<int> reversedNumberSequece;
    for(const int& number : numberSequence)
    {
        reversedNumberSequece.push(number);
    }

    if(numberSequence.size() != reversedNumberSequece.size())
    {
        std::cout << "No" << std::endl;
        return 1;
    }

    for(int i = 0; i < numberSequence.size(); ++i)
    {
        auto lastNumber = reversedNumberSequece.top();
        reversedNumberSequece.pop();
        if(numberSequence[i] != lastNumber)
        {
            std::cout << "No" << std::endl;
            return 1;
        }
    }

    std::cout << "Yes" << std::endl;
    return 0;
}
