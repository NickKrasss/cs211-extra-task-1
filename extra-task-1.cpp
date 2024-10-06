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

// Функция для преобразования времени в формат с плавающей запятой (часы)
double to_float_hours(int hours, int minutes, int seconds)
{
    assert(minutes >= 0 && minutes <= 60);
    assert(seconds >= 0 && seconds <= 60);

    return hours + (minutes / 60.0) + (seconds / 3600.0);
}


