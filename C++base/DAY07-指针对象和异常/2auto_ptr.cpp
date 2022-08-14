/*02-ָ�����*/
#include <iostream>
#include <cstring>

using namespace std;

class A{
public:
    A(){cout<<"A()"<<endl;}
    ~A(){cout<<"~A()"<<endl;}

    void show()
    {
        cout<<"show A"<<endl;
    }
};

//ʵ��һ��ָ����󣬹���A���͵�ָ��
class myauto_ptr{
public:
    myauto_ptr(A *p=NULL):pdata(p)
    {
        cout<<"myauto_ptr()"<<endl;
    }

    ~myauto_ptr()
    {
        cout<<"~myauto_ptr()"<<endl;
        if(this->pdata)
            delete this->pdata;
    }

    //����->�����
    A *operator->()
    {
        return this->pdata;
    }

    //����*�����
    A& operator*()
    {
        return *this->pdata;
    }

private:
    A *pdata;//Ҫ�����ָ��
};

int main()
{
    A *pa = new A;

    //ʹ��ָ��������pa ----- �������ͷ�pa
    myauto_ptr ap(pa);
    //------------------
    //�������Ϊnewһ�����󴫽�ȥһ������ͬʱ�����˴���ȥ�Ķ���ķ���
    //------------------
    //ͨ��ָ�������ʹ����ָ��ָ��ĳ�Ա
    // ap->show();
    //ap.operator->()->show();
    ///--------
    //     A()
    // myauto_ptr()
    // show A
    // ~myauto_ptr()
    // ~A()

    //������ָ�����õ��������
    (*ap).show(); //������Ч����ͬ 
    //ap.operator*().show();
    //     A()
    // myauto_ptr()
    // show A
    // ~myauto_ptr()
    // ~A()
    // PS C:\U

    return 0;
}
