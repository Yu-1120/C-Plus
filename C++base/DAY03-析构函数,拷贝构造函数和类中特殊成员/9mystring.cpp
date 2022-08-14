/*09-�ַ�����ľ�̬����*/
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

    //��̬��Ա�����������ַ����ռ�
    static char *get_space(size_t n)
    {
        return new char[n];
    }

private:
    char *str;//�ַ��������׵�ַ
    size_t len;//�ռ��С
};


int main()
{
    char *s = mystring::get_space(100);
    strcpy(s,"welcome");

    cout<<s<<endl;

    return 0;
}
