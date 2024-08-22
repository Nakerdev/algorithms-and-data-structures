#include <iostream>
#include <sstream>
#include <vector>
#include <queue>
#include <bitset>

bool IsThereMoreThanOnePlayer(const std::queue<std::string>& players)
{
    return players.size() > 1;
}

std::string HotPotatoGame(const std::queue<std::string>& childrens, int passes)
{
    std::queue<std::string> gameQueue = childrens;
    int gameCounter = passes;
    while(IsThereMoreThanOnePlayer(gameQueue))
    {
        auto children = gameQueue.front();
        gameQueue.pop();
        if(gameCounter == 1)
        {
            gameCounter = passes;
        }
        else
        {
            gameQueue.push(children);
            --gameCounter;
        }
    }
    return gameQueue.front(); 
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

