/*02-C++堆内存管理*/
#include <iostream>

using namespace std;

int main()
{
    //分配
    //int *p_num = new int;
    //分配并初始化
    int *p_num = new int(456);

    //分配多个同类型的连续空间
    int *p_arr = new int[5];//分配5个int型连续空间

    //*p_num = 100;
    p_arr[0] = 1;
    p_arr[1] = 2;
    p_arr[2] = 3;
    p_arr[3] = 4;
    p_arr[4] = 5;

    cout<<p_num<<endl;
    cout<<"*p_num = "<<*p_num<<endl;

    for(int i=0;i<5;i++)
        cout<<p_arr[i]<<" ";
    cout<<endl;

    //释放
    delete p_num;
    delete[] p_arr;

    return 0;
}
