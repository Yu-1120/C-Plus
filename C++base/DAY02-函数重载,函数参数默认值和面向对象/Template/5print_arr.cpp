/*05-��ӡ����*/
#include <iostream>

using namespace std;

void print_arr(int *a,int n=5,char op=',')
{
    //��ӡ�������ڶ���
    for(int i=0;i<n-1;i++)
        cout<<a[i]<<op;

    //��ӡ���һ��
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
