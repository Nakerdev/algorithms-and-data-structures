#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include <unordered_map>

std::unordered_map<char, char> openAndCloseCharacters = 
    {
        { '(', ')' },
        { '[', ']' }
    };

bool IsOpeningCharacter(const char& character)
{
    return openAndCloseCharacters.count(character) > 0;
}

bool IsParenthesesSequenceCorrectlyNested(
    const std::vector<char>& parenthesesSequence, 
    int& errorPosition)
{
    std::stack<char> openCharacters;
    for(int i = 0; i < parenthesesSequence.size() - 1; ++i)
    {
        auto character = parenthesesSequence[i];

        if(IsOpeningCharacter(character))
        {
            openCharacters.push(character);
            continue;
        }

        if(openCharacters.empty())
        {
            errorPosition = (i + 1);
            return false;
        }
        else 
        {
            auto lastOpenCharacter = openCharacters.top();
            auto closeCharacter = openAndCloseCharacters.at(lastOpenCharacter);
            if(character != closeCharacter) 
            {
                errorPosition = (i + 1);
                return false;
            }
            openCharacters.pop();
        }
    }

    if(!openCharacters.empty())
    {
        errorPosition = (static_cast<int>(parenthesesSequence.size()) - 1);
        return false;
    }

    return true;
}

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

    int errorPosition = 0;
    std::vector<char> parenthesesSequence(input.begin(), input.end());
    if(IsParenthesesSequenceCorrectlyNested(parenthesesSequence, errorPosition))
    {
        std::cout << "Correct" << std::endl;
    }
    else 
    {
        std::cout << "Incorrect " << errorPosition << std::endl;
    }

    return 0;
}

