/*03-��Ԫ*/
#include <iostream>

using namespace std;

void print()
{
    cout<<"print()"<<endl;
}

void print(int/*��Ԫ*/)
{
    cout<<"print(int)"<<endl;
}

int main()
{
    print();
    print(1);

    return 0;
}
