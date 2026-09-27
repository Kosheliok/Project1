#include <stdio.h>
#include <locale.h>
void subtask1()
{
    printf("1:\n");
    printf("123\n\n"); // подзадание 1
}

void subtask2()
{
    printf("2:\n");
    printf("1\n2\n3\n\n"); // подзадание 2
}

void subtask3()
{
    printf("3:\n");
    printf("\t1\n\t\t2\n\t\t\t3\n\n"); // подзадание 3
}

void subtask4() 
{
    printf("4:\n");
    printf("%1d\n%2d\n%3d\n%4d\n\n", 1, 2, 3, 4); // подзадание 4
}

void subtask5()
{
    printf("5:\n");
    printf("%10.3f\n", 12.234657); // подзадание 5
}

void subtask6()
{
    printf("6:\n");
    printf("%12.5f\n", 12.234657); // подазадие 6
}

void subtask7()
{
    setlocale(LC_ALL, "RUS");
    printf("7:\n");
    printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2); // подазадие 7
}

void subtask89()
{
    printf("89:\n");
    printf("8) Целочисленное: 7 / 5 = %d\n", 7 / 5);
    printf("   Вещественное:   7.0 / 5.0 = %.2f\n", 7.0 / 5.0); // Подзадание 8:

    printf("9) 2000 * 4 = %d\n", 2000 * 4); // Подзадание 9:
}

void subtas10()
{
    printf("10:\n");

    double a = 5.;
    double b = 2000000.;
    double result = a / b;

    printf("Исходный вариант:\n");
    printf("%g разделить %e равно %f\n\n", a, b, result);

    printf("Все %d (некорректно):\n");
    printf("%d разделить %d равно %d\n\n", (int)a, (int)b, (int)result); // Приведение типов для избежания UB

    printf("Все %f:\n");
    printf("%f разделить %f равно %f\n\n", a, b, result);

    printf("Все %g:\n");
    printf("%g разделить %g равно %g\n\n", a, b, result);


    printf("Все %e:\n");
    printf("%e разделить %e равно %e\n", a, b, result);
}

int main()
{
    subtask1();
    subtask2();
    subtask3();
    subtask4();
    subtask5();
    subtask6();
    subtask7();
    subtask89();
    subtas10();
}
