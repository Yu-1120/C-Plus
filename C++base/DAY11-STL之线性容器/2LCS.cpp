/*02-��������Ӵ�*/
#include <iostream>

using namespace std;

//�������
string getLCS(const string &str1,const string &str2)
{
    //��¼��Ӵ���str1�е���ʼλ�úͳ���
    size_t max_start = 0,max_len = 0;

    for(size_t i=0;i<str1.length();i++){
        for(size_t j=0;j<str2.length();j++){
            //���㵱ǰ������Ӵ�
            size_t k,l;
            for(k=i,l=j;k<str1.length()&&l<str2.length();k++,l++){
                if(str1.at(k)!=str2.at(l))
                    break;
            }
            //��¼����ȵĹ����Ӵ�
            if(k-i>max_len){
                max_len = k-i;
                max_start = i;
            }

        }
    }

    return str1.substr(max_start,max_len);
}

//�������
string getLCS1(const string &str1,const string &str2)
{
    //��¼��Ӵ���str1�еĽ���λ�úͳ���
    int max_end = 0,max_len = 0;

    //�����ȽϾ���
    int **arr = new int *[str1.length()];
    for(size_t i=0;i<str1.length();i++){
        arr[i] = new int[str2.length()];
        for(size_t j=0;j<str2.length();j++){
            //�Ƚ��ַ������ȽϽ��д�����
            if(str1.at(i)==str2.at(j)){//��ֵ  ���Ͻ�+1
                //������Ͻǲ�����
                if(i==0||j==0)
                    arr[i][j] = 1;
                else
                    arr[i][j] = arr[i-1][j-1]+1;

                //��¼����Ⱥʹ�ʱstr1�����һ���ַ���λ��
                if(arr[i][j]>max_len){
                    max_len = arr[i][j];
                    max_end = i;
                }
            }
            else{
                arr[i][j] = 0;
            }
        }
    }

    //�ͷſռ�
    for(size_t i=0;i<str1.length();i++){
        delete[] arr[i];
    }
    delete[] arr;

    //����������Ӵ�
    return str1.substr(max_end-max_len+1,max_len);
}

int main()
{
    string str1 = "kkkhelaalowebyebye";
    string str2 = "kkkhelaalowebyebye111";

    cout<<getLCS(str1,str2)<<endl;
    cout<<getLCS1(str1,str2)<<endl;

    return 0;
}


