/*06-�ַ�����Ŀ������캯��*/
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

    //��ӡ�ַ���
    void show()
    {
        cout<<this->str<<endl;
    }

    //��ȡ�ռ��С
    size_t get_len()
    {
        return this->len;
    }

    //��ȡ�ַ�������
    size_t get_size()
    {
        return strlen(this->str);
    }

    //��ȡָ��λ�õ��ַ�
    char at(size_t n)
    {
        if(n>=this->len){//Խ��
            return -1;
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

private:
    char *str;//�ַ��������׵�ַ
    size_t len;//�ռ��С
};


int main()
{
    //mystring str1;
    mystring str1("welcome to GEC!");
    str1.show();

    mystring str2 = str1;
    str2.show();
    str1.modify_str("byebye");
    str1.show();
    str2.show();

    cout<<str1.get_size()<<endl;

    return 0;
}
