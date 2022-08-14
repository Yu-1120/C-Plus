/*05-���ؼ̳�*/
#include <iostream>

using namespace std;

//�绰��
class Phone{
public:
    Phone(double p=1000):price(p)
    {
        cout<<"Phone()"<<endl;
    }

    ~Phone()
    {
        cout<<"~Phone()"<<endl;
    }

    //��˽�еĳ�Ա�Ľӿ�
    double get_price()
    {
        return this->price;
    }

    void call()
    {
        cout<<"��绰"<<endl;
    }

private:
    double price;
};

//MP3��
class Mp3{
public:
    Mp3(double p=300):price(p)
    {
        cout<<"Mp3()"<<endl;
    }

    ~Mp3()
    {
        cout<<"~Mp3()"<<endl;
    }

    //��˽�еĳ�Ա�Ľӿ�
    double get_price()
    {
        return this->price;
    }

    void play(string song)
    {
        cout<<"����"<<song<<endl;
    }

private:
    double price;
};

//�����
class Camera{
public:
    Camera(double p=500):price(p)
    {
        cout<<"Camera()"<<endl;
    }

    ~Camera()
    {
        cout<<"~Camera()"<<endl;
    }

    //��˽�еĳ�Ա�Ľӿ�
    double get_price()
    {
        return this->price;
    }

    void capture()
    {
        cout<<"����"<<endl;
    }

private:
    double price;
};

//���ؼ̳�
class SmartPhone:public Phone,public Mp3,public Camera{
public:
    double get_price()
    {
        return Phone::get_price()+Mp3::get_price()+Camera::get_price()+3000;
    }

};

int main()
{
    SmartPhone iphone13;
    cout<<iphone13.get_price()<<endl;
    cout<<iphone13.Camera::get_price()<<endl;
    iphone13.play("������");

    return 0;
}
