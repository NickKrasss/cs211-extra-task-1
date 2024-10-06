#include <iostream>
#include <assert.h>

// ������� ��� ���������� ������� �� ������� � ��������
double seconds_difference(double time_1, double time_2)
{
    return time_2 - time_1;
}

// ������� ��� ���������� ������� �� ������� � �����
double hours_difference(double time_1, double time_2)
{
    return (time_2 - time_1) / 3600.0;
}

// ������� ��� �������������� ������� � ������ � ��������� ������� (����)
double to_float_hours(int hours, int minutes, int seconds)
{
    assert(minutes >= 0 && minutes <= 60);
    assert(seconds >= 0 && seconds <= 60);

    return hours + (minutes / 60.0) + (seconds / 3600.0);
}

// ������� ��� �������������� ������� � 24-������� ������
double to_24_hour_clock(double hours)
{
    assert(hours >= 0);

    double minutes = hours - floor(hours);
    int floor_hours = floor(hours);

    return (floor_hours % 24 + minutes);
}

// ������� ��� ��������� ����� �� ������
int get_hours(int seconds)
{
    return (seconds / 3600) % 4;
}

// ������� ��� ��������� ����� �� ������
int get_minutes(int seconds)
{
    return (seconds % 3600) / 60;
}

// ������� ��� ��������� ������ �� ������
int get_seconds(int seconds)
{
    return seconds % 60;
}

