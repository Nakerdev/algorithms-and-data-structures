#include <iostream>
#include <sstream>
#include <vector>
#include <queue>
#include <bitset>

int main()
{
    std::cout << "Introduce a positive integer: ";
    std::string input = "";
    std::getline(std::cin, input);

    int number = 0;
    try
    {
        number = std::stoi(input);
    } 
    catch (const std::invalid_argument&)
    {
        std::cout << "[ERROR] Input should be a integer." << std::endl;
        return 1;
    }

    if(number < 0)
    {
        std::cout << "[ERROR] Input should be a positive integer." << std::endl;
        return 1;
    }
    if(number == 0)
    {
        return 0;
    }

    std::queue<std::string> binarySequence;
    binarySequence.push("1");
    for(int i = 0; i < number; ++i)
    {
        std::string firstBinaryNumber = binarySequence.front();
        binarySequence.pop();

        std::cout << firstBinaryNumber << std::endl;

        binarySequence.push(firstBinaryNumber + "0");
        binarySequence.push(firstBinaryNumber + "1");
    }
    
    return 0;
}

