/*05-�������ǿת�ͺ�������*/
#include <iostream>
#include <cstring>

using namespace std;

class MyArray{
public:
    //���캯��
    MyArray(int *arr=NULL,size_t len=10):len(len)
    {
        //����ռ�
        this->pdata = new int[this->len];
        //��ʼ������Ԫ��
        if(arr){
            //�����������ʹ����������ݽ��г�ʼ��
            memcpy(this->pdata, arr, this->len*sizeof(int));
        }
        else{
            //û�д�����ͳ�ʼ��Ϊ0
            memset(this->pdata, 0, this->len*sizeof(int));
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
        this->pdata = new int[this->len];
        memcpy(this->pdata, arr.pdata, this->len*sizeof(int));
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
        this->pdata = new int[arr.len];
        this->len = arr.len;
        //��������
        for(size_t i=0;i<arr.len;i++){
            this->pdata[i] = arr.pdata[i];
        }

        return *this;
    }

    //�������,����[]
    int& operator[](int n)
    {
        return this->pdata[n];
    }

    //����(ǿת) ------ (int)�õ������һ��Ԫ��
    operator int()
    {
        return this->pdata[0];
    }

    //ǿת(size_t)���õ����鳤��
    operator size_t()
    {
        return this->len;
    }

    //����() ----- �������� ---- �������
    int operator()(const MyArray &arr)
    {
        int sum = 0;
        for(size_t i=0;i<arr.len;i++){
            sum += arr.pdata[i];
        }

        return sum;
    }

    //����<<
    friend ostream& operator<<(ostream &os,const MyArray &arr);

private:
    int *pdata;
    /*const */size_t len;
};

ostream& operator<<(ostream &os,const MyArray &arr)
{
    for(size_t i=0;i<arr.len-1;i++)
        os<<arr.pdata[i]<<",";

    return os<<arr.pdata[arr.len-1];
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    MyArray arr2(arr,9);
    cout<<arr2<<endl;

    MyArray arr1;
    cout<<arr1<<endl;
    arr1 = arr2;
    cout<<arr1<<endl;

    arr1[0] = 10;//arr1.operator[](0) = 10; ===> arr1.pdata[0] = 10;
    cout<<arr1<<endl;
    cout<<arr2<<endl;
    cout<<arr2[5]<<endl;

    cout<<(int)arr1<<endl;//arr1.operator int(); ===> arr1.pdata[0]
    cout<<"arr1�ĳ���Ϊ"<<(size_t)arr1<<endl;

    //�����������
    cout<<"arr1��ͽ��Ϊ"<<arr1(arr1)<<endl;//arr1.operator()(arr1);
    cout<<"arr2��ͽ��Ϊ"<<arr1(arr2)<<endl;

    return 0;
}
