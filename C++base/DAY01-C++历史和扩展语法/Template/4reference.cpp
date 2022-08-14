/*引用作为函数参数和返回值*/
#include <iostream>

using namespace std;

void myswap(int a,int b)
{
    a = a+b;
    b = a-b;
    a = a-b;
}

//引用作为函数参数
void myrswap(int& a,int &b)
{
    a = a+b;
    b = a-b;
    a = a-b;
}

//引用作为函数的返回值
int &getnum()
{
    static int num = 333;

    return num;
}

int &getmax(int& x,int& y)
{
    return x>y?x:y;
}

//数组引用
void set_arr(int (&r_arr)[5])
{
    cout<<sizeof(r_arr)<<endl;
}

int main()
{
    int num_1 = 30, num_2 = 20;

    //myswap(num_1, num_2);
    myrswap(num_1, num_2);
    cout<<num_1<<" "<<num_2<<endl;

    //getnum() = 222;
    //cout<<getnum()<<endl;
    //cout<<getmax(num_1,num_2)<<endl;

    getmax(num_1,num_2) = 100;
    cout<<num_1<<" "<<num_2<<endl;

    //指针的引用
    int *p = NULL;
    int *&rp = p;

    rp = &num_1;

    cout<<p<<" "<<rp<<" "<<&num_1<<endl;

    int arr[] = {1,2,3,4,5};
    set_arr(arr);

    return 0;
}
