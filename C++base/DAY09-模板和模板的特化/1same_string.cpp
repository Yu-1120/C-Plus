/*01 - ��ҵ,��ȡ�ַ���ǰ����ͬ�Ĳ���*/
#include <iostream>

using namespace std;

int main()
{
    string str1,str2,str3;
    //��¼�ַ���ǰ����ͬ�ĳ���
    int front_len = 0,back_len = 0;

    //����Ҫ�Ƚϵ��ַ���
    cout<<"�������һ���ַ���:";
    getline(cin,str1);
    cout<<"������ڶ����ַ���:";
    getline(cin,str2);

    cout<<str1<<endl;
    cout<<str2<<endl;

    size_t min_len = str1.length()<str2.length()?str1.length():str2.length();
    //��ǰ���������������ͬ�ַ��ĳ���
    size_t i;
    for(i=0;i<min_len;i++){
        //������һ����ͬ���ַ����˳�
        if(str1.at(i)!=str2.at(i))
            break;
    }
    front_len = i;

    //�Ӻ���ǰ�����ַ�����������ͬ�ַ��ĳ���
    for(i=0;i<min_len;i++){
        if(str1.at(str1.length()-1-i)!=str2.at(str2.length()-1-i))
            break;
    }
    back_len = i;

    //��������ַ�����ͬ
    if(str1==str2){
        cout<<"�ϲ����:"<<str1<<endl;
    }
    else{
        str3 = str1.substr(0,front_len)+str1.substr(str1.length()-back_len,back_len);
        cout<<"�ϲ����:"<<str3<<endl;
    }

    return 0;
}