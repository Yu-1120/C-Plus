/*06-˫�˶��е�ʹ��*/
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> di(10,5);//����Ϊ10����ʼֵΪ5

    cout<<"�������:";
    for(deque<int>::iterator itt=di.begin();itt!=di.end();itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;

    //ͷ������
    di.push_front(100);
    di.push_back(200);

    cout<<"�����:";
    for(deque<int>::iterator itt=di.begin();itt!=di.end();itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;

    //ͷ��ɾ��
    di.pop_front();
    cout<<"ɾ����:";
    for(deque<int>::iterator itt=di.begin();itt!=di.end();itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;

    //ͷ��ɾ��
    cout<<"�������:";
    for(deque<int>::reverse_iterator itt=di.rbegin();itt!=di.rend();itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;


    return 0;
}
