/*08-˫Ŀ�����������*/
#include <iostream>

using namespace std;

//����
class Fraction{
public:
    Fraction(int x=0,int y=1):x(x),y(y){}
    //��ӡ
    void print()
    {
        cout<<this->x<<"/"<<this->y<<endl;
    }


    //��Ա��������+�����
    Fraction operator+(const Fraction &fb)
    {
        cout<<"NO 1"<<endl;
        //1/2+1/3 = 3/6+2/6
        return Fraction(this->x*fb.y+fb.x*this->y/*����*/,this->y*fb.y/*��ĸ*/);
    }

    Fraction operator-(const Fraction &fb)
    {
        return Fraction(this->x*fb.y-fb.x*this->y/*����*/,this->y*fb.y/*��ĸ*/);
    }

    //��Ԫ����
    friend Fraction operator+(const Fraction &fa, const Fraction &fb);
    friend Fraction operator*(const Fraction &fa, const Fraction &fb);
    friend Fraction operator/(const Fraction &fa, const Fraction &fb);

private:
    int x;//����
    int y;//��ĸ
};

//ʹ��ȫ�ֺ�������+
Fraction operator+(const Fraction &fa, const Fraction &fb)
{
    cout<<"NO 2"<<endl;
    //1/2+1/3 = 3/6+2/6 = 5/6
    return Fraction(fa.x*fb.y+fb.x*fa.y/*����*/,fa.y*fb.y/*��ĸ*/);
}

Fraction operator*(const Fraction &fa, const Fraction &fb)
{
    return Fraction(fa.x*fb.x/*����*/,fa.y*fb.y/*��ĸ*/);
}

Fraction operator/(const Fraction &fa, const Fraction &fb)
{
    return Fraction(fa.x*fb.y/*����*/,fa.y*fb.x/*��ĸ*/);
}

int main()
{
    Fraction fa(1,2);
    Fraction fb(1,3);

    Fraction fc = fa+fb;//fa.operator+(fb);
    fc.print();

    fc = fa-fb;
    fc.print();


    fc = fa*fb;
    fc.print();

    fc = fa/fb;
    fc.print();

    return 0;
}

