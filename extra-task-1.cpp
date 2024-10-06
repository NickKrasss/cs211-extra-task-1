#include <iostream>
#include <assert.h>

// Функция для вычисления разницы во времени в секундах
double seconds_difference(double time_1, double time_2)
{
    return time_2 - time_1;
}

// Функция для вычисления разницы во времени в часах
double hours_difference(double time_1, double time_2)
{
    return (time_2 - time_1) / 3600.0;
}

