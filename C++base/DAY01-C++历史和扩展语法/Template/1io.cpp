/*01-C++的标准输入输出*/
#include <iostream>

using namespace std;

int main()
{
    int num = 10,num_1 = 20;
    const char *s = "byebye";
    int *p_num = &num;
    double d_num = 3.14;
    char buf[1024] = {};

    //std::cout << "今天很热!" << std::endl;
    //cout << "今天很热!" << endl;
    cout<<num<<endl;
    cout<<s<<endl;//输出指针内容
    cout<<p_num<<endl;//输出指针的地址
    cout<<d_num<<endl;

    //连续输出
    cout<<num<<" "<<p_num<<" "<<d_num<<endl;

    //标准输入
    //cout<<"请输入一个整数:";
    cout<<"请输入一个浮点数:";
    //cin>>num;
    cin>>d_num;
    cout<<"d_num = "<<d_num<<endl;

    cout<<"请输入两个整数:";
    cin>>num>>num_1;
    cout<<"num = "<<num<<endl;

    cout<<"请输入一段文字:";
    cin>>buf;
    cout<<"buf = "<<buf<<endl;

    return 0;
}
