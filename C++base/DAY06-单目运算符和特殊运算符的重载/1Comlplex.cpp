/*01-���������������*/
#include <iostream>

using namespace std;

class Complex{
public:
    explicit Complex(double r=0.0,double i=0.0):real(r),imag(i){}

    //����ʵ��+ - *
    Complex operator+(const Complex &c)
    {
        return Complex(this->real+c.real,this->imag+c.imag);
    }

    Complex operator-(const Complex &c)
    {
        return Complex(this->real-c.real,this->imag-c.imag);
    }

    Complex operator*(const Complex &c)
    {
        return Complex(this->real*c.real-this->imag*c.imag,
                       this->imag*c.real+this->real*c.imag);
    }

    //����== !=
    bool operator==(const Complex &c)
    {
        return this->real==c.real && this->imag==c.imag;
    }

    bool operator!=(const Complex &c)
    {
        return !(this->real==c.real && this->imag==c.imag);
    }

    //����+= fa+fb  fa += fb
    Complex& operator+=(const Complex &c)
    {
        this->real += c.real;
        this->imag += c.imag;

        return *this;
    }

    //ʵ��Complex+double
    Complex operator+(const double &d)
    {
        return Complex(this->real+d,this->imag);
    }

    void print()
    {
        cout<<this->real<<(this->imag>=0 ? "+" : "")
            <<this->imag<<"i"<<endl;
    }

    friend Complex operator+(const double &d,const Complex &c);
    friend istream& operator>>(istream &is,Complex &c);
    friend ostream& operator<<(ostream &os,const Complex &c);

private:
    double real;//ʵ��
    double imag;//�鲿
};

//����double+Complex
Complex operator+(const double &d,const Complex &c)
{
    return Complex(d+c.real,c.imag);
}

//����cin>>Complex�����
istream& operator>>(istream &is,Complex &c)
{
    //�ֱ�����ʵ�����鲿
    return is>>c.real>>c.imag;
}

//����cout<<Complex�����
ostream& operator<<(ostream &os,const Complex &c)
{
    //�ֱ����ʵ�����鲿
    return os<<c.real<<(c.imag>=0 ? "+" : "")
            <<c.imag<<"i";
}

int main()
{
    Complex c1(2,3);
    Complex c2(5,-4);

    Complex c3 = c1+c2;
    c3.print();

    c3 = c1-c2;
    c3.print();

    c3 = c1*c2;
    c3.print();

    cout<<(c1==c2)<<endl;

    //c1 += c2;
    //c1.print();
    //c3 = c1+2.1;
    c3 = 2.3+c1;
    c3.print();

    //Complex c = 2.1;//��ʽת�� ===> Complex(2.1)
    //Complex c = Complex(2.1);
    //c.print();
    cout<<"������һ������:";
    cin>>c1;//operator>>(cin,c1);===>cin>>c1.real>>c1.imag;
    //c1.print();
    cout<<c1<<endl;//operator<<(cout,c1);===>cout<<c.real<<(c.imag>=0 ? "+" : "")<<c.imag<<"i";


    return 0;
}
