#include <iostream>
#include"student.h"
#pragma once
class Student
{
public:
    void display();
    void set_value(int n, const char *name1, char s);
private:
    int num;
    char name[20];
    char sex;
};