/*01 - ģ��ʵ�ֶ��ֲ���*/
#include <iostream>
#include <cstring>

using namespace std;

//����ģ��
template <typename T>
int search(T *arr,int n,T dt)
{
    //L��ʾ���ҵ���ʼλ�ã�R��ʾ���ҵĽ���λ��
    int L = 0;
    int R = n-1;
    int mid = 0;

    while(L<=R){
        //�ҳ��м�Ԫ��
        mid = (L+R)/2;

        //�Ƚ��м�Ԫ�غͲ���Ŀ��
        if(arr[mid]==dt){
            return mid;
        }
        else if(arr[mid]>dt){
            //ǰ�ӱ��в���
            R = mid-1;
        }
        else{
            L = mid+1;
        }
    }

    return -1;
}

//����ģ����ػ�
template <>
int search<const char *>(const char **arr,int n,const char *dt)
{
    //L��ʾ���ҵ���ʼλ�ã�R��ʾ���ҵĽ���λ��
    int L = 0;
    int R = n-1;
    int mid = 0;

    while(L<=R){
        //�ҳ��м�Ԫ��
        mid = (L+R)/2;

        //�Ƚ��м�Ԫ�غͲ���Ŀ��
        if(strcmp(arr[mid],dt)==0){
            return mid;
        }
        else if(strcmp(arr[mid],dt)>0){
            //ǰ�ӱ��в���
            R = mid-1;
        }
        else{
            L = mid+1;
        }
    }

    return -1;
}

//��ģ��
template <typename T>
class Searcher{
public:
    int operator()(T *arr,int from,int to,T dt)
    {
        //�����м�Ԫ���±�
        int mid = (from+to)/2;

        //2.�ݹ��������
        if(from>to)
            return -1;

        //1.�������
        if(arr[mid]==dt)
            return mid;
        else if(arr[mid]>dt)//ǰ�ӱ����
            return operator()(arr,from,mid-1,dt);
        else
            return operator()(arr,mid+1,to,dt);
    }
};

//��Ա�ػ�
template <>
int Searcher<const char *>::operator()(const char **arr,int from,int to,const char *dt)
{
    //�����м�Ԫ���±�
    int mid = (from+to)/2;

    //2.�ݹ��������
    if(from>to)
        return -1;

    //1.�������
    if(strcmp(arr[mid],dt)==0)
        return mid;
    else if(strcmp(arr[mid],dt)>0)//ǰ�ӱ����
        return operator()(arr,from,mid-1,dt);
    else
        return operator()(arr,mid+1,to,dt);
}

int main()
{
    int a[] = {1,3,5,7,9,11,13,15,17,19};
    const char *ca[] = {"Japan","UK","byebye","template","welcome"};
    const char buf[] = "UK";

    //cout<<search(a,10,111)<<endl;
    //cout<<search(ca,5,buf)<<endl;

    Searcher<int> sc;
    cout<<sc(a,0,9,11)<<endl;
    Searcher<const char *> ss;
    cout<<ss(ca,0,4,buf)<<endl;

    return 0;
}
