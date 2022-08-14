/*09-字符串类的静态函数*/
#include <iostream>
#include <cstring>

using namespace std;

class mystring{
public:
    //构造函数
    mystring(const char *s=NULL)
    {
        if(!s){//没有传参数
            this->len = 10;
            this->str = new char[this->len];
            memset(this->str,0,10);
        }
        else{
            this->len = strlen(s)+1;
            this->str = new char[this->len];
            strcpy(this->str,s);
        }
    }

    //拷贝构造函数
    mystring(const mystring &s)
    {
        this->len = s.len;
        this->str = new char[this->len];
        strcpy(this->str,s.str);
    }

    //析构函数
    ~mystring()
    {
        delete[] this->str;
    }

    //打印字符串
    void show()
    {
        cout<<this->str<<endl;
    }

    //获取空间大小
    size_t get_len()
    {
        return this->len;
    }

    //获取字符串长度
    size_t get_size()
    {
        return strlen(this->str);
    }

    //获取指定位置的字符
    char at(size_t n)
    {
        if(n>=this->len){//越界
            return -1;
        }

        return this->str[n];
    }

    //修改字符串内容 健壮性
    void modify_str(const char *s)
    {
        if(!s){//为空修改为长度为10的空串
            delete[] this->str;
            this->len = 10;
            this->str = new char[this->len];
            memset(this->str,0,10);
        }
        else{//非空
            if(this->len<strlen(s)+1){//空间不够
                //调整空间
                delete[] this->str;
                this->len = strlen(s)+1;
                this->str = new char[this->len];
            }
            strcpy(this->str,s);
        }
    }

    //静态成员函数，分配字符串空间
    static char *get_space(size_t n)
    {
        return new char[n];
    }

private:
    char *str;//字符串内容首地址
    size_t len;//空间大小
};


int main()
{
    char *s = mystring::get_space(100);
    strcpy(s,"welcome");

    cout<<s<<endl;

    return 0;
}
