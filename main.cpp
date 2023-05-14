#include "avia.h"
#include "bus.h"
#include "microbus.h"
#include "repair.h"
#include "tractor.h"

int main(int argc, char **argv)
{
    printf("********************************************************************************\n"
           "*            Нижегородский  государственный  технический университет           *\n"
           "*            Лабораторная  работа №1.  Задание  3.                             *\n"
           "*            Выполнил  студент группы:  22-ИВТ-3.  Игнатушин Серёжа            *\n"
           "********************************************************************************\n");
    std::string help{"-h"}, HELP{"--help"}, create{"-c"}, CREATE{"--create"}, read("-r"), READ("--read");
    if (argc == 1)
    {
        printf("Ошибка.\nЗапустите программу с опцией -h или --help, чтобы узнать как ей пользоваться.\n"
               "Для этого введите в терминале ./lab -h\n");
    }
    else
    {
        int key = 1;
        if (argv[1] == help)
        {
            key = 1;
        }
        if (argv[1] == HELP)
        {
            key = 1;
        }
        if (argv[1] == create)
        {
            key = 2;
        }
        if (argv[1] == CREATE)
        {
            key = 2;
        }
        if (argv[1] == read)
        {
            key = 3;
        }
        if (argv[1] == READ)
        {
            key = 3;
        }
        Bus bus;
        MicroBus mbus;
        RepairCar rcar;
        Tractor trac;
        std::ofstream out;
        std::ifstream in;
        switch (key)
        {
        case 1:
            helper();
            break;
        case 2:
            scancount(&bus);
            scancount(&mbus);
            scancount(&rcar);
            scancount(&trac);
            printf("\n");
            out.open(".all.txt");
            out << Avia::allcount;
            out.close();
            printf("%d\n",Avia::allcount);
            break;
        case 3:
            printcount(&bus);
            printcount(&mbus);
            printcount(&rcar);
            printcount(&trac);
            in.open(".all.txt");
            if (in.is_open())
            {
                if (in.peek() != EOF)
                {
                    std::string ch;
                    in >> ch;
                    printf("Общее количество транспорта - %s\n", ch.c_str());
                }
                else
                    printf("Данные отсутствуют\n");
            }
            else
                printf("Ошибка открытия файла AVIA\n");
            in.close();
            break;
        }

        return 0;
    }
}