#include <iostream>
#include "headers/classP.h"

int main() {
    //std::cout << "Hello, World!" << std::endl;
    Point A;
    A.setCh('aaaaaaaaa');
    A.setF(1.2);
    std::cout << "char: "<<A.getCh()<< "  float: "<<A.getF() << std::endl;
    std::cout << "char: "<<(int*)A.getCh_Adress()<< "  float: "<<A.getF_Adress() << std::endl;
    printf("%x\n",A.getCh_Adress());

    float x=2.3;
    float *px=&x;
    A.setF_Uk(px);
    std::cout << "float: "<<A.getF() << std::endl;
    // №2
    std::cout << "Область памяти как int: "<<(int)*A.getF_Adress()<< std::endl;
    x=5;
    A.setF_Uk(px);
    std::cout << "Область памяти как int: "<<(int)*A.getF_Adress()<< std::endl;
    
    return 0;
}