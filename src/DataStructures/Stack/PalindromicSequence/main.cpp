#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>

void deserializeNumberSequence(
    const std::string& serializedNumberSequence,
    std::vector<int>& numberSequence)
{
    std::stringstream inputStream(serializedNumberSequence);
    std::string sequenceElement;
    while(std::getline(inputStream, sequenceElement, ' '))
    {
        numberSequence.push_back(std::stoi(sequenceElement));
    }
}

bool isPalindrome(
    const int& numberOfElements,
    const std::vector<int>& numberSequence)
{
    if(numberOfElements == 1)
    {
        return true;
    }

    int intermediateElementOfTheSequence = static_cast<int>(numberSequence.size()) / 2;
    
    std::stack<int> elementsStack;
    for(int i = 1; i < intermediateElementOfTheSequence; ++i) 
    {
        elementsStack.push(numberSequence[i]);
    }

    if(numberOfElements % 2 != 0)
    {
        intermediateElementOfTheSequence += 1;
    }

    for(int i = intermediateElementOfTheSequence; i <= numberOfElements ; ++i) 
    {
        if(numberSequence[i] != elementsStack.top())
        {
            return false;
        }
        elementsStack.pop();
    }

    return true;
}

int main()
{
    std::cout << "Enter a sequence of numbers separated by spaces. \n";
    std::cout << "First number should be the number of elements and the rest the sequence of numbers. \n";
    std::cout << "Example: 3 1 2 1 ('3' is the number of elements and '1 2 1' the sequence of numbers to check). \n";
    std::cout << "Your sequence: ";
    std::string input = "";
    std::getline(std::cin, input);

    std::vector<int> numberSequence;
    try
    {
        deserializeNumberSequence(input, numberSequence);
    } 
    catch (const std::invalid_argument&)
    {
        std::cout << "[ERROR] Input should be a sequence of integers." << std::endl;
        return 1;
    }

    if(numberSequence.empty())
    {
        std::cout << "[INFO] Sequence with no elements can not be checked as palindromic or not." << std::endl;
        return 1;
    }

    int numberOfElements = numberSequence[0];
    if(numberOfElements == 0)
    {
        std::cout << "[INFO] Sequence with no elements can not be checked as palindromic or not." << std::endl;
        return 1;
    } 
    if(numberOfElements != (numberSequence.size() - 1))
    {
        std::cout << "[ERROR] The number of elements in the sequence not match with the number of the elemenets defined in the input." << std::endl;
        return 1;
    }

    std::cout << (isPalindrome(numberOfElements, numberSequence) ? "Yes" : "No") << std::endl;
    return 0;
}

