/*02-加法函数的重载*/
#include <iostream>

using namespace std;

int add(int a,int b)
{
    cout<<"add(int,int)"<<endl;
    return a+b;
}

double add(double a,double b)
{
    cout<<"add(double,double)"<<endl;
    return a+b;
}

double add(int a,double b)
{
    cout<<"add(int,double)"<<endl;
    return a+b;
}

double add(double a,int b)
{
    cout<<"add(double,int)"<<endl;
    return a+b;
}


int main()
{
    cout<<add(1,2)<<endl;
    cout<<add(1.1,2)<<endl;
    cout<<add(1.1,2.2)<<endl;
    cout<<add(1,2.2)<<endl;

    return 0;
}
