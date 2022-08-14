/*04-�ַ��������������*/
#include <iostream>
#include <cstring>

using namespace std;

class mystring{
public:
    //���캯��
    mystring(const char *s=NULL)
    {
        if(!s){//û�д�����
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

    //��������
    ~mystring()
    {
        delete[] this->str;
    }

    //��ӡ�ַ���
    void show()
    {
        cout<<str<<endl;
    }

    //��ȡ�ռ��С
    size_t get_len()
    {
        cout<<this<<endl;
        return len;
    }

    //��ȡָ��λ�õ��ַ�
    char at(size_t n)
    {
        if(n>=len){//Խ��
            return -1;
        }

        return this->str[n];
    }

    //�޸��ַ������� ��׳��
    void modify_str(const char *s)
    {
        if(!s){//Ϊ���޸�Ϊ����Ϊ10�Ŀմ�
            delete[] str;
            len = 10;
            str = new char[len];
            memset(str,0,10);
        }
        else{//�ǿ�
            if(len<strlen(s)+1){//�ռ䲻��
                //�����ռ�
                delete[] str;
                len = strlen(s)+1;
                str = new char[len];
            }
            strcpy(str,s);
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
    cout<<str1.get_len()<<endl;

    size_t n;
    cout<<"������ָ��λ��:";
    cin>>n;
    cout<<"��λ�õ��ַ�Ϊ"<<str1.at(n)<<endl;

    return 0;
}
