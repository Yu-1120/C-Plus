/*12 - C++Ԥ��������ָ��*/
#include <iostream>
#include <memory>

using namespace std;

class Object{
public:
    Object(string s=""):str(s){}
    ~Object(){cout<<"~Object()"<<endl;}

    void show()const
    {
        cout<<this->str<<endl;
    }

    void set_str(const string &s)
    {
        this->str = s;
    }

private:
    string str;
};

int main()
{
    //���� string *��ָ��
    auto_ptr<string> pa(new string("hello"));
    unique_ptr<string> us(new string("welcome"));
    shared_ptr<string> ss(new string("byebye"));

    //cout<<pa->c_str()<<endl;
    //cout<<us->c_str()<<endl;
    //cout<<ss->c_str()<<endl;

    auto_ptr<string> pa1 = pa;//pa�����ÿ�
    //cout<<pa->c_str()<<endl;���ݵ���ʧЧ
    cout<<pa1->c_str()<<endl;
    //unique_ptr<string> us1 = us;//��ֹ�����͸�ֵ
    shared_ptr<string> ss1 = ss;//����
    ss1->append("����");
    cout<<ss->c_str()<<endl;
    cout<<ss1->c_str()<<endl;

    auto_ptr<Object> ao(new Object("hello"));
    unique_ptr<Object> uo(new Object("welcome"));
    shared_ptr<Object> so(new Object("byebye"));

    auto_ptr<Object> ao1 = ao;//ao1���ÿ�
    //unique_ptr<Object> uo1;
    //uo1 = uo;//��ֹ�����͸�ֵ
    shared_ptr<Object> so1;
    so1 = so;//����
    so1->set_str("���");

    so->show();
    so1->show();


    return 0;
}
