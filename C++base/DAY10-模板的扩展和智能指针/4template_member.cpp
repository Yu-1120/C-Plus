/*04 - ��ģ���ģ���Ա*/
#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;

template <typename T>
class Beta{
public:
    Beta(int i,T t):t1(i),t2(t){}

    void show()const
    {
        t1.show();
        t2.show();
    }

    //����ģ���Ա
    template <typename V>
    V bobo(V v,T t)
    {
        return t1.get_value()+t2.get_value()+v/t;
    }

private:
    //��ģ���Ա
    template <typename K>
    class Test{
    public:
        Test(K k):value(k){}

        void show()const
        {
            cout<<this->value<<endl;
        }

        K get_value()const
        {
            return this->value;
        }

    private:
        K value;
    };

    //ʹ����ģ���Ա
    Test<int> t1;
    Test<T> t2;
};


int main()
{
    //ʹ�ô�����ģ���Ա����ģ��
    //T ---> double  K--->int
    Beta<double> bt(14,44.5);
    bt.show();

    //V---int
    cout<<bt.bobo<int>(5,3.14)<<endl;
    //V---double
    cout<<bt.bobo(7.8,2.64)<<endl;

    return 0;
}
