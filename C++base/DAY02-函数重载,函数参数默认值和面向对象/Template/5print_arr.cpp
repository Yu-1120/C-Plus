/*05-打印数组*/
#include <iostream>

using namespace std;

void print_arr(int *a,int n=5,char op=',')
{
    //打印到倒数第二个
    for(int i=0;i<n-1;i++)
        cout<<a[i]<<op;

    //打印最后一个
    cout<<a[n-1]<<endl;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};

    print_arr(arr);
    print_arr(arr,7);
    print_arr(arr,3,' ');
    print_arr(arr,7,'-');

    return 0;
}
