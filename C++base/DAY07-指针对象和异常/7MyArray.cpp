/*05-�������ǿת�ͺ�������*/
#include <iostream>
#include <cstring>

using namespace std;

class MyArray{
public:
    //���캯��
    MyArray(int *arr=NULL,size_t len=10):len(len)
    {
        //����ռ� ----- Ĭ�����쳣
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

    //at��Ա�����������׳�out_of_range���쳣
    int& at(size_t n)
    {
        //�±���Ч
        if(n<this->len)
            return this->pdata[n];

        //��Ч�׳�out_of_range���쳣
        throw out_of_range("at�±�Խ��");
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

    try {
        MyArray arr1(NULL,0x1fffffff);

        //arr2.at(11) = 100;
    } catch (out_of_range &e) {//�±�Խ��
        cout<<e.what()<<endl;
    } catch (bad_alloc &e) {//�ڴ�������
        cout<<e.what()<<endl;
    }

    return 0;
}
