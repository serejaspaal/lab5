#ifndef C_RCAR
#define C_RCAR

#include "avia.h"

class RepairCar : public Avia
{
public:
    RepairCar():Avia(){};
    void setcount() override;
    void getcount() override;
};

#endif