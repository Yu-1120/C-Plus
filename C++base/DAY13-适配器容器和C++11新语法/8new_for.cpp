/*07 - forѭ�����÷�*/
#include <iostream>
#include <vector>
#include <typeinfo>
#include <ctime>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};

    for(int x:arr)
        cout<< x<<" ";
    cout<<endl;

    //��auto���ʹ��
    for(auto x:arr)
        cout<< x<<" ";
    cout<<endl;

    vector<int> vi(arr,arr+9);
    srand(time(0));
    //�޸�����
    for(auto &x:vi)
        x = rand()%100;
    //��������
    for(auto x:vi)
        cout<< x<<" ";
    cout<<endl;

    return 0;
}
