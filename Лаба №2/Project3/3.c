#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    double n = 4;
    double L = 393;

    int k = 2; 
    int m = 6; 

    double result = n / L;

    printf("%*s n = %.*f, L = %.*f\n",
        k + m + 10, "Данные:", k, n, k, L);

    printf("%-*s Результат: %+.*f\n",
        k + m + 10, "", k + m + 2, result);
}
