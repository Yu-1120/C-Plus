/*03 - ����ģ��*/
#include <iostream>

using namespace std;

class Float{
public:
    Float(float f=0.0f):f(f){}

    //����>�����
    bool operator>(const Float &ff)
    {
        return this->f>ff.f;
    }

    //����<<
    friend ostream& operator<<(ostream &os,const Float &ff)
    {
        return os<<ff.f;
    }

private:
    float f;
};

//��������ģ��
template<typename T/*���Ͳ���*/,typename K>
T mymax(T a,T b)
{
    K x;

    T max = a>b?a:b;

    return max;
}


int main()
{
    //����ģ���ʹ��---������˵�Ѻ�������ȥ���
    //cout<<mymax<int>(10,20)<<endl;
    //cout<<mymax<double>(76.5,23.1)<<endl;
    //cout<<mymax<Float>(Float(12.3f),Float(34.1f))<<endl;

    //����ģ��������ƶ�
    //cout<<mymax(10,20)<<endl;
    //cout<<mymax(76.5,23.1)<<endl;

    //cout<<mymax(10,20)<<endl;//�����Ͳ���δ�������β��У��޷��ƶ�
    cout<<mymax<int,char>(10,20)<<endl;

    return 0;
}
