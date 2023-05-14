#ifndef C_BUS
#define C_BUS

#include "avia.h"

class Bus : public Avia
{
public:
    Bus():Avia(){};
    void setcount() override;
    void getcount() override;
};

#endif