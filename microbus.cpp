#include "microbus.h"

void MicroBus::setcount()
{
    printf("\nВведите количество микроавтобусов - ");
    scanf("%d", &count);
    std::ofstream fout;
    fout.open(".mbus.txt");
    fout << count;
    fout.close();
}

void MicroBus::getcount()
{
    std::ifstream fin;
    fin.open(".mbus.txt");
    if (fin.is_open())
    {
        if (fin.peek() != EOF)
        {
            std::string ch;
            fin >> ch;

            printf("Количество микроавтобусов - %s\n", ch.c_str());
        }
        else
            printf("Данные отсутствуют\n");
    }
    else
        printf("Ошибка открытия файла MICROBUS\n");
    fin.close();
}