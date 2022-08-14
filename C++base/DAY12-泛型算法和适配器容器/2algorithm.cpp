/*02-�����㷨*/
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

//��ģ��
template <typename T>
class A{
public:
    A(T t=0):t(t){}

    //����<�����
    bool operator<(const A &a)const
    {
        return this->t<a.t;
    }

    bool operator>(const A &a)const
    {
        return this->t>a.t;
    }

    //����==�����֧�ֲ���
    bool operator==(const A &a)const
    {
        return this->t==a.t;
    }

    //���
    friend ostream& operator<<(ostream &os,const A &a)
    {
        return os<<a.t;
    }

private:
    T t;
};

//����ģ��Ƚ���
template <typename T>
bool comp(const T &a,const T &b)
{
    return a>b;
}

//����������ģ��Ƚ���
template <typename T>
class Comparetor{
public:
    bool operator()(const T &a,const T &b)
    {
        return a>b;
    }
};

//�Բ���+1
template <typename T>
void inc_T(T &t)
{
    t++;
}

//��ӡ
template <typename T>
void print_T(const T &t)
{
    cout<<t<<endl;
}

//���������ӡ
template <typename T>
class Print_T{
public:
    void operator()(const T &t)
    {
        cout<<t<<endl;
    }
};

//��ӡģ��
template <typename T>
void print(T *a,int n)
{
    for(int i=0;i<n;i++){
        cout <<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    //1.����
    int arr[9] = {6,1,9,3,7,2,8,5,4};
    // sort(arr,arr+9);//arr~arr+9-1�ķ�Χ������  ��С��������
    //ʹ�ñȽ�������
    sort(arr,arr+9,comp<int>);//�����˺���ģ��Ƚ������Ӵ�С����
    print(arr,9);

    // //����������
    array<int,10> arr1 = {5,2,3,1,7,9,4,8,11,6};
    sort(arr1.begin()+1,arr1.end()-2);//ָ������Χ   //ֻ�������м�ļ���Ԫ��  5 1 2 3 4 7 8 9 11 6
    cout<<"array1�����:";
    for(array<int,10>::iterator it=arr1.begin();it!=arr1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    array<A<int>,10> arr2 = {5,2,3,1,7,9,4,8,11,6};
    //Ĭ��<����
    //sort(arr2.begin(),arr2.end());
    //�����Ƚ���
    //sort(arr2.begin(),arr2.end(),comp<A<int>>);
    //��������Ƚ���
    sort(arr2.begin(),arr2.end(),Comparetor<A<int>>());  //д����comp<int ���>
    cout<<"array2�����:";
    for(array<A<int>,10>::iterator it=arr2.begin();it!=arr2.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //2.����
    cout<<"---------------------����----------------------"<<endl;
    int *p = find(arr,arr+9,9);//�鵽9��Ԫ��
     cout<<*p<<endl; // 9 �����9��Ԫ�صĸ����������鳤��==(���񶼲����˼)
    if(p==arr+9){
        cout<<"û�ҵ�!"<<endl;
    }
    else{
        cout<<"�ҵ��� "<<*p<<endl;
    }

    //��������
    cout<<"---------------------��������----------------------"<<endl;
    array<int,10>::iterator it = find(arr1.begin(),arr1.end(),11);
    if(it==arr1.end()){
        cout<<"û�ҵ�!"<<endl;
    }
    else{
        cout<<"�ҵ��� "<<*it<<endl;
    }

    //�����Ͳ���
    cout<<"---------------------�����Ͳ���----------------------"<<endl;
    array<A<int>,10>::iterator itt = find(arr2.begin(),arr2.end(),A<int>(12));
    if(itt==arr2.end()){
        cout<<"û�ҵ�!"<<endl;
    }
    else{
        cout<<"�ҵ��� "<<*it<<endl;
    }

    //3.����
    cout<<"-----------------����--------------------------"<<endl;
    for_each(arr,arr+9,inc_T<int>);//+1
    //print(arr,9);
    //for_each(arr,arr+9,print_T<int>);//��ӡ
    //for_each(arr,arr+9,Print_T<int>());
    //����������
    for_each(arr2.begin(),arr2.end(),Print_T<A<int>>());

    return 0;
}
