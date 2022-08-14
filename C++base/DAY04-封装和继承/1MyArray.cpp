/*01-数组对象的实现*/
#include <iostream>
#include <cstring>

using namespace std;

class MyArray{
public:
    //构造函数
    MyArray(int *arr=NULL,size_t len=10):len(len)
    {
        //分配空间
        this->pdata = new int[this->len];
        //初始化数组元素
        if(arr){
            //传入了数组就使用数组的数据进行初始化
            memcpy(this->pdata, arr, this->len*sizeof(int));
        }
        else{
            //没有传数组就初始化为0
            memset(this->pdata, 0, this->len*sizeof(int));
        }
    }

    //析构函数
    ~MyArray()
    {
        delete[] this->pdata;
    }

    //拷贝构造函数
    MyArray(const MyArray &arr)
    {
        this->len = arr.len;
        this->pdata = new int[this->len];
        memcpy(this->pdata, arr.pdata, this->len*sizeof(int));
    }

    //打印
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
