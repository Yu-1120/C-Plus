#ifndef COMPARETOR_H
#define COMPARETOR_H

//��ģ�������
template <typename T>
class Comparetor{
public:
    Comparetor(T mx,T my);

    T max()const;
    T min()const;

private:
    T x;
    T y;
};

//ģ�廮��
#include "comparetor.cpp"

#endif // COMPARETOR_H
