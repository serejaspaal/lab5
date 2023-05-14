#ifndef C_M_BUS
#define C_M_BUS

#include "avia.h"

class MicroBus : public Avia
{
public:
    MicroBus():Avia(){};
    void setcount() override;
    void getcount() override;
};

#endif