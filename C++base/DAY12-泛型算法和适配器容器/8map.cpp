/*08 - ӳ���ʹ��*/
#include <iostream>
#include <map>


using namespace std;

int main()
{
    map<char,string> cs;

    //�����������������
    typedef map<char,string>::iterator IT;

    //����
    cs.insert(pair<char,string>('A',"����"));
    cs.insert(pair<char,string>('C',"����"));
    cs.insert(pair<char,string>('F',"�ν�"));
    cs.insert(pair<char,string>('D',"������"));
    cs.insert(pair<char,string>('B',"�˽���"));

    //ͨ��key�±����value
    cs['A'] = "�˸�";
    cs['E'] = "ʱǨ";

    //�жϲ����Ƿ�ɹ�
    pair<IT,bool> res = cs.insert(make_pair('X',"�ֳ�"));
    if(res.second){
        cout<<"����ɹ���"<<endl;
    }
    else{
        cout<<"����ʧ�ܣ�"<<endl;
    }

    //����
    for(IT it=cs.begin();it!=cs.end();it++){  //�������ظ���key
        cout<<it->first<<":"<<it->second<<endl;
    }

    //���� ------ ͨ��key����value
    char key;
    cout<<"������Ҫ���ҵ�key:";
    cin>>key;
    IT itt = cs.find(key);
    if(itt==cs.end()){
        cout<<"û�и�����"<<endl;
    }
    else{
        cout<<"value="<<itt->second<<endl;
    }

    return 0;
}
