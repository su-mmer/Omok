#ifndef OMOK_H
#define OMOK_H

#include <iostream>
#include <windows.h>


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


#endif // !OMOK_H

