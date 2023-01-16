#ifndef TV_H
#define TV_H

#pragma once
#include<iostream>
class TV
{
public:
    TV(int h, int w);
    ~TV();
    
    int arie() {return height * width;}

    void printTvInfo();
private:
    int height;
    int width;
};

#endif