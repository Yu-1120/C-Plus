/*01-��������ʵ��*/
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
    MyArray(const MyArray &arr)
    {
        this->len = arr.len;
        this->pdata = new int[this->len];
        memcpy(this->pdata, arr.pdata, this->len*sizeof(int));
    }

    //��ӡ
    void print_arr()
    {
        for(size_t i=0;i<this->len;i++)
            cout<<this->pdata[i]<<" ";
        cout<<endl;
    }

private:
    int *pdata;
    size_t len;
};


int main()
{
    MyArray arr1;
    arr1.print_arr();

    int arr[] = {1,2,3,4,5,6,7,8,9};
    MyArray arr2(arr,9);
    arr2.print_arr();

    MyArray arr3 = arr2;
    arr3.print_arr();

    return 0;
}
