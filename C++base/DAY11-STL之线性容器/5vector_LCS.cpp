/*04-ʹ��vectorʵ����������Ӵ�*/
#include <iostream>
#include <vector>

using namespace std;

string getLCS(const string &str1,const string &str2)
{
    //��¼��Ӵ���str1�еĽ���λ�úͳ���
    int max_end = 0,max_len = 0;

    //�����ȽϾ���(��ά����)
    vector<vector<int>> arr(str1.length(),vector<int>(str2.length()));
    for(size_t i=0;i<str1.length();i++){
        for(size_t j=0;j<str2.length();j++){
            //�Ƚ��ַ������ȽϽ��д�����
            if(str1.at(i)==str2.at(j)){//��ֵ  ���Ͻ�+1
                //������Ͻǲ�����
                if(i==0||j==0)
                    arr.at(i).at(j) = 1;
                else
                    arr.at(i).at(j) = arr.at(i-1).at(j-1)+1;

                //��¼����Ⱥʹ�ʱstr1�����һ���ַ���λ��
                if(arr.at(i).at(j)>max_len){
                    max_len = arr.at(i).at(j);
                    max_end = i;
                }
            }
            else{
                arr.at(i).at(j) = 0;
            }
        }
    }

    //����������Ӵ�
    return str1.substr(max_end-max_len+1,max_len);
}

int main()
{
    string str1 = "kkkhellowebyebye";
    string str2 = "ghsasabyehellod";

    cout<<getLCS(str1,str2)<<endl;

    return 0;
}

