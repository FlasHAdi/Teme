#include "TV.h"

TV::TV(int h, int w) 
{
    height = h;
    width = w;  
}

TV::~TV()
{

}

void TV::printTvInfo()
{
    std::cout << arie() << std::endl; // 200
}