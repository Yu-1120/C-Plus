/*05-ϵͳԤ�����쳣*/
#include <iostream>
#include <stdexcept>//ϵͳԤ�����쳣ͷ�ļ�

using namespace std;

int main()
{
    try {
        //int *pi = new int[0x1fffffff];//�ռ����,�׳��ڴ�����쳣

        string str("hello");
        char ch = str.at(10);//Խ�磬�׳�Խ���쳣
        cout<<ch<<endl;
    }/* catch (bad_alloc &e) {//�ڴ�����쳣
        cout<<"������bad_alloc���쳣"<<endl;
        cout<<e.what()<<endl;//�쳣ԭ��
    } catch(out_of_range &e){//Խ���쳣
        cout<<"������out_of_range���쳣"<<endl;
        cout<<e.what()<<endl;//�쳣ԭ��
    }*/catch(exception &e){//���Բ�������Ԥ������쳣
        cout<<"������exception���쳣"<<endl;
        cout<<e.what()<<endl;//�쳣ԭ��
    }

    return 0;
}
