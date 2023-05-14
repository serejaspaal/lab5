#ifndef C_AVIA
#define C_AVIA

#include <cstdio>
#include <fstream>
#include <string>



void helper();

class Avia
{
    friend void scancount(Avia *avi);
protected:
    int count;

public:
    static int allcount;

    Avia(){};
    virtual void setcount() = 0;
    virtual void getcount() = 0;
};




void printcount(Avia *avi);


#endif