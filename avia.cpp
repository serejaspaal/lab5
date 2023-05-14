#include "avia.h"

void helper()
{
    {
        printf("Help:\nДля использования программы необходимо запустить ее с помощью терминала,"
               "введя \nопции (-h,--help,-c,--create,-r,--read)\n"
               "Например : ./lab -c\n");
    }
}

void printcount(Avia *avi)
{
    avi->getcount();
}

int Avia::allcount = 0;


void scancount(Avia *avi)
{
    do
    {
        avi->setcount();
        if ((avi->count < 0) or (avi->count > 100000))
            printf("Ошибка ввода\n");

    } while ((avi->count < 0) or (avi->count > 100000));

    Avia::allcount += avi->count;
}
