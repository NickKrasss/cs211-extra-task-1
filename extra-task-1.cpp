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

