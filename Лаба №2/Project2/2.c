#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    int N = 4;
    int K = 2; 

    printf("Сейчас %d часов %d минут 00 секунд\n", N, K);

    int minutes_since_midnight = N * 60 + K;
    printf("Идет %d минута суток\n", minutes_since_midnight);

    int remaining_hours = 23 - N;
    int remaining_minutes = 60 - K;

    if (K == 0)
    {
        remaining_hours = 24 - N;
        remaining_minutes = 0;
    }

    printf("До полуночи осталось %d часов и %d минут\n", remaining_hours, remaining_minutes);

    int minutes_since_8 = (N - 8) * 60 + K;
    int seconds_since_8 = minutes_since_8 * 60;

    if (N < 8)
    {
        minutes_since_8 = (24 + N - 8) * 60 + K;
        seconds_since_8 = minutes_since_8 * 60;
    }

    printf("С 8.00 прошло %d секунд\n", seconds_since_8);

    double part_of_day = (double)N / 24.0;
    double part_of_hour = (double)K / 60.0;

    printf("Текущий час = %.2f суток и текущая минута = %.2f часа\n", part_of_day, part_of_hour);
}
