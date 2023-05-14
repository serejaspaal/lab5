#ifndef C_TRAC
#define C_TRAC

#include "avia.h"


class Tractor : public Avia
{
public:
    Tractor():Avia(){};
    void setcount() override;
    void getcount() override;
};

#endif