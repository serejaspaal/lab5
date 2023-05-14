#include "tractor.h"

void Tractor::setcount()
{
    printf("\nВведите количество тягачей - ");
    scanf("%d", &count);
    std::ofstream fout;
    fout.open(".trac.txt");
    fout << count;
    fout.close();
}

void Tractor::getcount()
{
    std::ifstream fin;
    fin.open(".trac.txt");
    if (fin.is_open())
    {
        if (fin.peek() != EOF)
        {
            std::string ch;
            fin >> ch;

            printf("Количество тягачей - %s\n", ch.c_str());
        }
        else
            printf("Данные отсутствуют\n");
    }
    else
        printf("Ошибка открытия файла TRACTOR\n");
    fin.close();
}
