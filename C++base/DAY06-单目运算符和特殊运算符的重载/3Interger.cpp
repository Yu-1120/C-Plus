/*03-��Ŀ�����������*/
#include <iostream>

using namespace std;

class Interger{
public:
    Interger(int d=0):data(d){}

    //����-��(����)
    Interger operator-()
    {
        return Interger(-this->data);
    }

    //����ǰ++
    Interger& operator++()
    {
        ++this->data;
        return *this;
    }

    //���غ�--
    Interger operator--(int)
    {
        return Interger(this->data--);
    }

    friend ostream& operator<<(ostream &os,const Interger &i);
    friend Interger operator++(Interger &i,int);
    friend Interger& operator--(Interger &i);

private:
    int data;
};

ostream& operator<<(ostream &os,const Interger &i)
{
    return os<<i.data;
}

//���غ�++
Interger operator++(Interger &i,int)
{
    return Interger(i.data++);
}

//����ǰ--
Interger& operator--(Interger &i)
{
    --i.data;
    return i;
}

int main()
{
    Interger i1(10);
    Interger i2(20);

    //i2 = -i1;
    //cout<<i2<<endl;

    //i2 = ++i1;
    //i2 = i1++;
    //i2 = --i1;
    i2 = i1--;
    cout<<i1<<endl;
    cout<<i2<<endl;

    return 0;
}
