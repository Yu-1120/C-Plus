/*05-多重继承*/
#include <iostream>

using namespace std;

//电话类
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

    //读私有的成员的接口
    double get_price()
    {
        return this->price;
    }

    void call()
    {
        cout<<"打电话"<<endl;
    }

private:
    double price;
};

//MP3类
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

    //读私有的成员的接口
    double get_price()
    {
        return this->price;
    }

    void play(string song)
    {
        cout<<"播放"<<song<<endl;
    }

private:
    double price;
};

//相机类
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

    //读私有的成员的接口
    double get_price()
    {
        return this->price;
    }

    void capture()
    {
        cout<<"拍照"<<endl;
    }

private:
    double price;
};

//多重继承
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
    iphone13.play("蔡徐坤");

    return 0;
}
