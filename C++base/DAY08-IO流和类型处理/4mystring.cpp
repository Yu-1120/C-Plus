/*04-mystring�����չ*/
#include <iostream>
#include <cstring>

using namespace std;

class mystring{
public:
    //���캯��
    mystring(const char *s=NULL)
    {
        if(!s){//û�д�����
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

    //�������캯��
    mystring(const mystring &s)
    {
        this->len = s.len;
        this->str = new char[this->len];
        strcpy(this->str,s.str);
    }

    //��������
    ~mystring()
    {
        delete[] this->str;
    }

    //+
    mystring operator+(const mystring &s)
    {
        char *tmp_buf = new char[this->len+s.len];
        memset(tmp_buf,0,this->len+s.len);
        strcpy(tmp_buf,this->str);
        strcat(tmp_buf,s.str);

        mystring tmp_str(tmp_buf);
        //�ͷ�
        delete[] tmp_buf;

        return tmp_str;
    }

    //+=
    mystring& operator+=(const mystring &s)
    {
        //�ж��Ƿ���Ҫ����
        if(this->len<strlen(this->str)+strlen(s.str)+1){
            char *tmp = this->str;
            this->str = new char[this->len+s.len];
            strcpy(this->str,tmp);
            //�޸�len
            this->len += s.len;

            delete[] tmp;
        }

        //ƴ��
        strcat(this->str,s.str);

        return *this;
    }

    //��ֵ
    mystring& operator=(const mystring &s)
    {
        //��ֹ�Ը�ֵ
        if(this==&s)
            return *this;

        //�ͷžɿռ�
        delete[] this->str;
        //����ռ�
        this->str = new char[s.len];
        this->len = s.len;
        //��������
        for(size_t i=0;i<s.len;i++){
            this->str[i] = s.str[i];
        }

        return *this;
    }

    //�е�
    bool operator==(const mystring &s)
    {
        return strcmp(this->str,s.str)==0;
    }

    //[]
    char& operator[](int n)
    {
        return this->str[n];
    }

    //(char)
    operator char()
    {
        return this->str[0];
    }

    //��������Ƚ��ַ���
    bool operator()(const mystring &s)
    {
        return strcmp(this->str,s.str)==0;
    }

    //��ȡ�ռ��С
    size_t capacity()
    {
        return this->len;
    }

    //��ȡ�ַ�������
    size_t size()
    {
        return strlen(this->str);
    }

    //��ȡָ��λ�õ��ַ�
    char& at(size_t n)
    {
        if(n>=this->len){//Խ��
            throw out_of_range("at�±�Խ��");
        }

        return this->str[n];
    }

    //�޸��ַ������� ��׳��
    void modify_str(const char *s)
    {
        if(!s){//Ϊ���޸�Ϊ����Ϊ10�Ŀմ�
            delete[] this->str;
            this->len = 10;
            this->str = new char[this->len];
            memset(this->str,0,10);
        }
        else{//�ǿ�
            if(this->len<strlen(s)+1){//�ռ䲻��
                //�����ռ�
                delete[] this->str;
                this->len = strlen(s)+1;
                this->str = new char[this->len];
            }
            strcpy(this->str,s);
        }
    }

    friend ostream& operator<<(ostream &os,const mystring &s);

private:
    char *str;//�ַ��������׵�ַ
    size_t len;//�ռ��С
};

ostream& operator<<(ostream &os,const mystring &s)
{
    return os<<s.str;
}

int main()
{
    mystring str1("hello");
    mystring str2("world");

    str1 += str2;
    cout<<str1<<endl;
    cout<<(str1==str2)<<endl;

    //str1.at(55) = 'x';
    cout<<str1<<endl;

    return 0;
}
