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
        return Fraction(this->x*fb.y+fb.x*this->y/*����*/,this->y*fb.y/*��ĸ*/);
    }

    Fraction operator-(const Fraction &fb)
    {
        return Fraction(this->x*fb.y-fb.x*this->y/*����*/,this->y*fb.y/*��ĸ*/);
    }

    //== > +=
    bool operator==(const Fraction &fb)
    {
        return this->x*fb.y == this->y*fb.x;
    }

    bool operator>(const Fraction &fb)
    {
        return this->x*fb.y > this->y*fb.x;
    }

    Fraction& operator+=(const Fraction &fb)
    {
        this->x = this->x*fb.y+fb.x*this->y;
        this->y = this->y*fb.y;

        return *this;
    }

    //��Ԫ����
    friend Fraction operator+(const Fraction &fa, const Fraction &fb);
    friend Fraction operator*(const Fraction &fa, const Fraction &fb);
    friend Fraction operator/(const Fraction &fa, const Fraction &fb);
    friend istream& operator>>(istream &is, Fraction &fb);
    friend ostream& operator<<(ostream &os, const Fraction &fb);

private:
    int x;//����
    int y;//��ĸ
};

Fraction operator*(const Fraction &fa, const Fraction &fb)
{
    return Fraction(fa.x*fb.x/*����*/,fa.y*fb.y/*��ĸ*/);
}

Fraction operator/(const Fraction &fa, const Fraction &fb)
{
    return Fraction(fa.x*fb.y/*����*/,fa.y*fb.x/*��ĸ*/);
}

istream& operator>>(istream &is, Fraction &fb)
{
    return is>>fb.x>>fb.y;
}

ostream& operator<<(ostream &os, const Fraction &fb)
{
    return os<<fb.x<<"/"<<fb.y;
}

int main()
{
    Fraction fa;
    Fraction fb;
    cout<<"�������һ������:";
    cin>>fa;
    cout<<"������ڶ�������:";
    cin>>fb;

    cout<<(fa==fb)<<endl;
    cout<<(fa>fb)<<endl;
    fa += fb;
    cout<<fa<<endl;


    return 0;
}

