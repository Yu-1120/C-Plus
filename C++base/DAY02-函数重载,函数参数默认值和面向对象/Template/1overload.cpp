/*01-函数重载*/
#include <iostream>

using namespace std;

//以下函数构成重载关系
void print()
{
    cout<<"print()"<<endl;
}

void print(int a)
{
    cout<<"print(int)"<<endl;
}


void print(double a)
{
    cout<<"print(double)"<<endl;
}

void print(int a,double b)
{
    cout<<"print(int,double)"<<endl;
}

void print(double a,int b)
{
    cout<<"print(double,int)"<<endl;
}

int main()
{
    print();
    print(1);
    print(3.15);
    print(2,4.6);
    print(1.5,7);

    //print(12,23);

    return 0;
}
