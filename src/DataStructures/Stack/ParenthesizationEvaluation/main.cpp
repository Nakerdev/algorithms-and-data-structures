#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>

int main()
{
    std::cout << "A sequence of parentheses (, ), [, ] terminated in period. \n";
    std::cout << "Your sequence: ";
    std::string input = "";
    std::getline(std::cin, input);

    if(input.back() != '.')
    {
        std::cout << "[ERROR] Sequence must terminated in period.";
        return 1;
    }

    std::stack<char> openParentheses;
    std::vector<char> parenthesesSequence(input.begin(), input.end());
    for(int i = 0; i < parenthesesSequence.size() - 1; ++i)
    {
        auto character = parenthesesSequence[i];
        if(character == '(' || character == '[')
        {
            openParentheses.push(character);
        }
        else if((character == ')' || character == ']') && openParentheses.empty())
        {
            std::cout << "Incorrect " << (i + 1) << std::endl;
            return 1;
        }
        else 
        {
            auto lastOpenParentheses = openParentheses.top();
            if((lastOpenParentheses == '(' && character != ')')
                || (lastOpenParentheses == '[' && character != ']')) 
            {
                std::cout << "Incorrect " << (i + 1) << std::endl;
                return 1;
            }
            openParentheses.pop();
        }
    }

    if(!openParentheses.empty())
    {
        std::cout << "Incorrect " << (parenthesesSequence.size() - 1) << std::endl;
        return 1;
    }

    std::cout << "Correct" << std::endl;
    return 0;
}

