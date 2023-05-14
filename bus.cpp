#include "bus.h"

void Bus::setcount()
{
    printf("\nВведите количество пассажирских автобусов - ");
    scanf("%d", &count);
    std::ofstream fout;
    fout.open(".bus.txt");
    fout << count;
    fout.close();
}

void Bus::getcount()
{
    std::ifstream fin;
    fin.open(".bus.txt");
    if (fin.is_open())
    {
        if (fin.peek() != EOF)
        {
            std::string ch;
            fin >> ch;

            printf("Количество пассажирских автобусов - %s\n", ch.c_str());
        }
        else
            printf("Данные отсутствуют\n");
    }
    else
        printf("Ошибка открытия файла BUS\n");
    fin.close();
}
