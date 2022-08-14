/*06-���ؼ̳е��Ż� ----- ��̳�*/
#include <iostream>

using namespace std;

//��Ʒ��
class Product{
public:
    Product(int p=0):price(p)
    {

    }

    double get_price()
    {
        return this->price;
    }

private:
    double price;
};

//�绰�� --- ��̳�
class Phone:virtual public Product{
public:
    Phone(double p=1000):Product(p)
    {
        cout<<"Phone()"<<endl;
    }

    ~Phone()
    {
        cout<<"~Phone()"<<endl;
    }

    void call()
    {
        cout<<"��绰"<<endl;
    }

};

//MP3��
class Mp3:virtual public Product{
public:
    Mp3(double p=300):Product(p)
    {
        cout<<"Mp3()"<<endl;
    }

    ~Mp3()
    {
        cout<<"~Mp3()"<<endl;
    }

    void play(string song)
    {
        cout<<"����"<<song<<endl;
    }
};

//�����
class Camera:virtual public Product{
public:
    Camera(double p=500):Product(p)
    {
        cout<<"Camera()"<<endl;
    }

    ~Camera()
    {
        cout<<"~Camera()"<<endl;
    }

    void capture()
    {
        cout<<"����"<<endl;
    }
};

//���ؼ̳�
class SmartPhone:public Phone,public Mp3,public Camera{
public:
    SmartPhone(double a=0,double b=0,double c=0):Product(a+b+c+3000)
    {

    }

};

int main()
{
    SmartPhone iphone13(1200,500,800);
    cout<<iphone13.get_price()<<endl;
    iphone13.play("������");

    return 0;
}
