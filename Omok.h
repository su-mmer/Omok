#ifndef OMOK_H
#define OMOK_H

#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include <algorithm>


//  방향키
namespace DIRECTION_KEY
{
    enum
    {
        LEFT = 75,
        RIGHT = 77,
        UP = 72,
        DOWN = 80
    };

}
#define SPACE 32
#define ESC 27

//  맵 크기
#define MAX_X 15
#define MAX_Y 15


using namespace std;

struct location
{
    int x;
    int y;
};

class GAME
{
    private:
        vector<vector<int>> board(MAX_X, vector<int>(MAX_Y));

    public:
        void initGame();
        void startGame();
}

#endif // !OMOK_H
