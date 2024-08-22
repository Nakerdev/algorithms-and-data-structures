#include <iostream>
#include <sstream>
#include <vector>
#include <queue>
#include <bitset>

bool IsThereMoreThanOnePlayer(const std::queue<std::string>& players)
{
    return players.size() > 1;
}

std::string HotPotatoGame(std::queue<std::string>& childrens, int passes)
{
    int gameCounter = passes;
    while(IsThereMoreThanOnePlayer(childrens))
    {
        auto children = childrens.front();
        childrens.pop();
        if(gameCounter == 1)
        {
            gameCounter = passes;
        }
        else
        {
            childrens.push(children);
            --gameCounter;
        }
    }
    return childrens.front(); 
}

int main()
{
    std::queue<std::string> childrens;
    childrens.push("Alice");
    childrens.push("Bob");
    childrens.push("Charlie");
    childrens.push("David");
    childrens.push("Eve");

    auto winner = HotPotatoGame(childrens, 3);

    std::cout << "The winner is: " << winner << std::endl;

    return 0;
}

