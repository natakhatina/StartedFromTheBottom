//
// Created by Student on 16.11.2018.
//

#ifndef STARTEDFROMTHEBOTTOM_CLASSP_H
#define STARTEDFROMTHEBOTTOM_CLASSP_H

class Point{
private:
    char ch;
    float f;
public:
    char getCh() const;

    void setCh(char ch);

    float getF() const;

    void setF(float f);

    char* getCh_Adress();

    float* getF_Adress();

    void setCh_Uk(char *pch);

    void setF_Uk(float *pf);

    void Number3 (float f3);

};

#endif //STARTEDFROMTHEBOTTOM_CLASSP_H
