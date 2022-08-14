/*06-ǿת�ͺ���������ϰ*/
#include <iostream>
#include <cstring>

using namespace std;

class Product{
public:
    Product(double p=0.0,size_t c=0):price(p),count(c){}

    //��ȡ����
    operator size_t()
    {
        return this->count;
    }

    //��ȡ����
    operator double()
    {
        return this->price;
    }

    //�������� ---- ���ܼ�
    double operator()()
    {
        return this->price*this->count;
    }


    friend ostream& operator<<(ostream &os,const Product &p);
private:
    double price;//����
    size_t count;//����
};

ostream& operator<<(ostream &os,const Product &p)
{
    return os<<"����:"<<p.price<<" ����:"<<p.count;
}

int main()
{
    Product Tesla(345623.5,10);

    cout<<"����:"<<(size_t)Tesla<<endl;
    cout<<"����:"<<(double)Tesla<<endl;
    cout<<"�ܼ�:"<<Tesla()<<endl;

    return 0;
}
