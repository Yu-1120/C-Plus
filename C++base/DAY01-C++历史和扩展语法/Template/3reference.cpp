/*03-引用*/
#include <iostream>

using namespace std;

int main()
{
    int num = 10,num_1 = 123;
    //引用
    int& r_num = num;//必须初始化
    cout<<"num = "<<num<<endl;
    cout<<"r_num = "<<r_num<<endl;

    //num = 111;
    //r_num = 222;
    r_num = num_1;//修改引用的值
    cout<<"num = "<<num<<endl;
    cout<<"r_num = "<<r_num<<endl;
    cout<<&num<<" "<<&r_num<<endl;//地址相同

    //常量的引用
    const int& cr = 10;
    cout<<"cr = "<<cr<<endl;
    cout<<"&cr = "<<&cr<<endl;

    return 0;
}
