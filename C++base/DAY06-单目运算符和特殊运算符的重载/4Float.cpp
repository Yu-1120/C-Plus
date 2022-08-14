/*04-��Ŀ�������������ϰ*/
#include <iostream>

using namespace std;

class Float{
public:
    Float(double d=0.0):data(d){}

    //����-��(����)
    Float operator-()
    {
        return Float(-this->data);
    }

    //����ǰ++
    Float& operator++()
    {
        ++this->data;
        return *this;
    }

    //���غ�++
    Float operator++(int)
    {
        return Float(this->data++);
    }

    //����==
    bool operator==(const Float &d)
    {
        //��������Ӧ��ֱ���е�
        //return this->data==d.data;
        return this->data-d.data>-1e-15 && this->data-d.data<1e-15;
    }

    //+=
    Float& operator+=(const Float &d)
    {
        this->data += d.data;
        return *this;
    }

    friend ostream& operator<<(ostream &os,const Float &i);
    friend Float operator--(Float &i,int);
    friend Float& operator--(Float &i);

private:
    double data;
};

ostream& operator<<(ostream &os,const Float &i)
{
    return os<<i.data;
}

//���غ�--
Float operator--(Float &i,int)
{
    return Float(i.data--);
}

//����ǰ--
Float& operator--(Float &i)
{
    --i.data;
    return i;
}

int main()
{
    Float f1(1.1);
    Float f2(1.1);

    cout<<(f1==f2)<<endl;

    //f2 = ++f1;
    //f2 = -f1;
    f2 += f1;

    cout<<f1<<endl;
    cout<<f2<<endl;

    return 0;
}
