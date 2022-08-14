/*08 - ��ģ��ĳ�Ա�ػ�*/
#include <iostream>
#include <cstring>

using namespace std;

//��ģ��ʵ�ֺ�����������
template <typename T>
class Sortor{
public:
    //�������� --- ��������
    void operator()(T *arr,int n)
    {
        int L = 0;
        int R = n-1;

        //�˳�����
        if(n<=1)
            return;


        T tmp = arr[L];
        while(L<R){
            //�������Ϊ��׼���Ƚ��ұ�
            while(L<R&&arr[R]>=tmp)
                R--;
            arr[L] = arr[R];
            //�Ƚ����
            while(L<R&&arr[L]<=tmp)
                L++;
            arr[R] = arr[L];
        }

        //����׼�Ż��غ�λ��
        arr[L] = tmp;

        //�ݹ�ǰ��ķ���ͺ���ķ���
        operator()(arr,L);
        operator()(arr+L+1,n-L-1);
    }

    void print(T *arr,int n)
    {
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

//�����ģ��ĳ�Ա�ػ� ----- �ػ����غ�������ĳ�Ա����
template <>
void Sortor<const char *>::operator()(const char **arr,int n)
{
    int L = 0;
    int R = n-1;

    //�˳�����
    if(n<=1)
        return;


    const char *tmp = arr[L];
    while(L<R){
        //�������Ϊ��׼���Ƚ��ұ�
        while(L<R&&strcmp(arr[R],tmp)>=0)
            R--;
        arr[L] = arr[R];
        //�Ƚ����
        while(L<R&&strcmp(arr[L],tmp)<=0)
            L++;
        arr[R] = arr[L];
    }

    //����׼�Ż��غ�λ��
    arr[L] = tmp;

    //�ݹ�ǰ��ķ���ͺ���ķ���
    operator()(arr,L);
    operator()(arr+L+1,n-L-1);
}

int main()
{

    int a[] = {5,9,6,8,4,7,1,15,2};
    double d_a[] = {3.9,6.8,4.1,7.5,3.6,8.9,2.4,9.7,1.3};
    string str_a[] = {"welcome","template","UK","byebye","Japan"};
    const char *str_a1[] = {"welcome","template","UK","byebye","Japan"};

    Sortor<int> si;
    si(a,9);
    si.print(a,9);

    Sortor<double> sd;
    sd(d_a,9);
    sd.print(d_a,9);

    Sortor<string> ss;
    ss(str_a,5);
    ss.print(str_a,5);

    Sortor<const char *> sc;
    sc(str_a1,5);
    sc.print(str_a1,5);

    return 0;
}
