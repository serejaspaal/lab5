#include "repair.h"

void RepairCar::setcount()
{

    printf("\nВведите количество передвижных ремонтных мастерских - ");
    scanf("%d", &count);
    std::ofstream fout;
    fout.open(".rcar.txt");
    fout << count;
    fout.close();
}

void RepairCar::getcount()
{
    std::ifstream fin;
    fin.open(".rcar.txt");
    if (fin.is_open())
    {
        if (fin.peek() != EOF)
        {
            std::string ch;
            fin >> ch;

            printf("Количество передвижных ремонтных мастерских - %s\n", ch.c_str());
        }
        else
            printf("Данные отсутствуют\n");
    }
    else
        printf("Ошибка открытия файла REPAIRCAR\n");
    fin.close();
}