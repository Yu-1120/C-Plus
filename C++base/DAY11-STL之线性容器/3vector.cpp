/*03-������ʹ��*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //1.������������
    vector<int> vi1;//������
    vector<int> vi2(10);//ָ����С
    vector<int> vi3(10,5);//ָ����С�ͳ�ʼֵ
    int a[5] = {1,2,3,4,5};
    vector<int> vi4(a,a+5);//5��,����������λ�� ���������ݳ�ʼ��

    for(size_t i=0;i<5;i++){
        //cout<<vi4[i]<<" ";
        cout<<vi4.at(i)<<" ";
    }
    cout<<endl;

    //ʹ�õ���������vector
    vector<int>::iterator it = vi4.begin();//it��ָ��vi3����ʼ���������
    //������֧��*����
    cout<<*it<<endl;;//��ȡ������ָ���Ԫ��
    it++;//�ƶ�����������һ��Ԫ�ص�λ��
    cout<<*it<<endl;

    //ʹ���������������vector
    for(vector<int>::iterator itt=vi4.begin();itt!=vi4.end();itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;

    //���������
    cout<<"�������:";
    for(vector<int>::reverse_iterator itt=vi4.rbegin();itt!=vi4.rend();itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;

    //��Ա����
    cout<<"��С:"<<vi4.size()<<endl;
    cout<<"����:"<<vi4.capacity()<<endl;
    //������С
    vi4.resize(8,10);
    //vi4.clear();
    //��������
    vi4.reserve(19);
    cout<<"������С��:";
    for(vector<int>::iterator itt=vi4.begin();itt!=vi4.end();itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;
    cout<<"��С:"<<vi4.size()<<endl;
    cout<<"����:"<<vi4.capacity()<<endl;

    cout<<"��Ԫ��:"<<vi4.front()<<endl;
    cout<<"βԪ��:"<<vi4.back()<<endl;
    //����
    vi4.insert(vi4.begin()+2,44);
    vi4.push_back(123);//β������
    cout<<"�������ݺ�:";
    for(vector<int>::iterator itt=vi4.begin();itt!=vi4.end();itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;
    //ɾ��
    vi4.erase(vi4.begin()+3);
    vi4.pop_back();
    cout<<"ɾ�����ݺ�:";
    for(vector<int>::iterator itt=vi4.begin();itt!=vi4.end();itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;
    //�п�
    cout<<"�п�:"<<vi1.empty()<<" "<<vi4.empty()<<endl;

    //�޸�������Ҫ���õ�����
    it = vi4.end()-3;
    cout<<*it<<endl;

    //vector��Ƕ��=�൱��һ����ά����
    vector<vector<int>> vvi;

    return 0;
}
