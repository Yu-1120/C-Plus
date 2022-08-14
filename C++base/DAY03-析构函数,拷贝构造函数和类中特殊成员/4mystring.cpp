/*04-字符串类的析构函数*/
#include <iostream>
#include <cstring>

using namespace std;

class mystring{
public:
    //构造函数
    mystring(const char *s=NULL)
    {
        if(!s){//没有传参数
            len = 10;
            str = new char[len];
            memset(str,0,10);
        }
        else{
            len = strlen(s)+1;
            str = new char[len];
            strcpy(str,s);
        }
    }

    //析构函数
    ~mystring()
    {
        delete[] this->str;
    }

    //打印字符串
    void show()
    {
        cout<<str<<endl;
    }

    //获取空间大小
    size_t get_len()
    {
        cout<<this<<endl;
        return len;
    }

    //获取指定位置的字符
    char at(size_t n)
    {
        if(n>=len){//越界
            return -1;
        }

        return this->str[n];
    }

    //修改字符串内容 健壮性
    void modify_str(const char *s)
    {
        if(!s){//为空修改为长度为10的空串
            delete[] str;
            len = 10;
            str = new char[len];
            memset(str,0,10);
        }
        else{//非空
            if(len<strlen(s)+1){//空间不够
                //调整空间
                delete[] str;
                len = strlen(s)+1;
                str = new char[len];
            }
            strcpy(str,s);
        }
    }

private:
    char *str;//字符串内容首地址
    size_t len;//空间大小
};


int main()
{
    //mystring str1;
    mystring str1("welcome to GEC!");
    str1.show();
    cout<<str1.get_len()<<endl;

    size_t n;
    cout<<"请输入指定位置:";
    cin>>n;
    cout<<"该位置的字符为"<<str1.at(n)<<endl;

    return 0;
}
