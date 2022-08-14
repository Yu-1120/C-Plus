/*08 - ��ģ��ĵݹ�ʵ����*/
#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;

template <typename T>
class MyArray{
public:
    //���캯��
    MyArray(T *arr=NULL,size_t len=10):len(len)
    {
        //����ռ� ----- Ĭ�����쳣
        this->pdata = new T[this->len];
        //��ʼ������Ԫ��
        if(arr){
            //�����������ʹ����������ݽ��г�ʼ��
            memcpy(this->pdata, arr, this->len*sizeof(T));
        }
        else{
            //û�д�����ͳ�ʼ��Ϊ0
            //memset(this->pdata, 0, this->len*sizeof(T));
        }
    }

    //��������
    ~MyArray()
    {
        delete[] this->pdata;
    }

    //�������캯��
    MyArray(const MyArray &arr):len(arr.len)/*��ʼ�������б�*/
    {
        //this->len = arr.len;
        this->pdata = new T[this->len];
        memcpy(this->pdata, arr.pdata, this->len*sizeof(T));
    }

    //����=�����
    MyArray& operator=(const MyArray &arr)
    {
        //��ֹ�Ը�ֵ
        if(this==&arr)
            return *this;

        //�ͷžɿռ�
        delete[] this->pdata;
        //����ռ�
        this->pdata = new T[arr.len];
        this->len = arr.len;
        //��������
        for(size_t i=0;i<arr.len;i++){
            this->pdata[i] = arr.pdata[i];
        }

        return *this;
    }

    //�������,����[]
    T& operator[](int n)
    {
        return this->pdata[n];
    }

    //at��Ա�����������׳�out_of_range���쳣
    T& at(size_t n)
    {
        //�±���Ч
        if(n<this->len)
            return this->pdata[n];

        //��Ч�׳�out_of_range���쳣
        throw out_of_range("at�±�Խ��");
    }

    //����(ǿת) ------ (int)�õ������һ��Ԫ��
    operator T()
    {
        return this->pdata[0];
    }

    //ǿת(size_t)���õ����鳤��
    operator size_t()
    {
        return this->len;
    }

    //����() ----- �������� ---- �������
    T operator()(const MyArray &arr)
    {
        T sum = 0;
        for(size_t i=0;i<arr.len;i++){
            sum += arr.pdata[i];
        }

        return sum;
    }

    //����<<
    friend ostream& operator<<(ostream &os,const MyArray &arr)
    {
        for(size_t i=0;i<arr.len-1;i++)
            os<<arr.pdata[i]<<",";

        return os<<arr.pdata[arr.len-1];
    }

private:
    T *pdata;
    /*const */size_t len;
};


int main()
{
    MyArray<int> arr;
    arr[1] = 111;
    cout<<arr<<endl;

    //�ݹ�ʵ����
    MyArray<MyArray<int>> arr1;
    arr1[1][1] = 100;
    cout<<arr1[1][1]<<endl;
    cout<<arr1<<endl;

    return 0;
}
