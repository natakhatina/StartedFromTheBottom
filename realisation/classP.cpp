#include "../headers/classP.h"
#include <iostream>

char Point::getCh() const {
    return ch;
}

void Point::setCh(char ch) {
    Point::ch = ch;
}

float Point::getF() const {
    return f;
}

void Point::setF(float f) {
    Point::f = f;
}

char* Point::getCh_Adress()  {
    return &ch;
}

float* Point::getF_Adress() {
    return &f;
}

void Point::setCh_Uk(char *pch)  {
    Point::ch = *pch;
}

void Point::setF_Uk(float *pf){
    Point::f=*pf;
}

void Point::Number3(float f3) {
    int x=(int)Point::f;
    int y=(int)f3;
    Point::f=(float)x+f3-(float)y;
}

