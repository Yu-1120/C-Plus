/*07-�б��ʹ��*/
#include <iostream>
#include <list>

using namespace std;

//�����Ƚ���
template<typename T>
bool comp(const T &a, const T &b) {
    return a > b;
}

//��������Ƚ���
template<typename T>
class Compare {
public:
    bool operator()(const T &a, const T &b) {
        return a > b;
    }
};


int main() {
    list<int> li1;
    li1.push_back(1);
    li1.push_back(2);
    li1.push_back(3);
    li1.push_back(4);
    li1.push_back(5);
    li1.push_back(6);
    li1.push_back(5);
    li1.push_back(8);
    li1.push_back(9);
    li1.push_back(10);
    li1.push_back(11);

    list<int> li2;
    li2.push_back(31);
    li2.push_back(52);
    li2.push_back(63);
    li2.push_back(14);
    li2.push_back(95);
    li2.push_back(5);
    li2.push_back(87);
    li2.push_back(78);
    li2.push_back(59);
    li2.push_back(111);

    //����
//    cout<<"list1�������:";
//    for(list<int>::iterator itt=li1.begin();itt!=li1.end();itt++){
//        cout<<*itt<<" ";
//    }
//    cout<<endl;
//    cout<<"list2�������:";
//    for(list<int>::iterator itt=li2.begin();itt!=li2.end();itt++){
//        cout<<*itt<<" ";
//    }
//    cout<<endl;
//
//    //����ɾ��
//    li1.insert(++li1.begin(),100);
//    li1.erase(--li1.end());
//    cout<<"����ɾ����:";
//    for(list<int>::iterator itt=li1.begin();itt!=li1.end();itt++){
//        cout<<*itt<<" ";
//    }
//    cout<<endl;
//
//    //��ֵɾ��
//    //li1.remove(5);
//    //li1.unique();
//    cout<<"removeɾ����:";
//    for(list<int>::iterator itt=li1.begin();itt!=li1.end();itt++){
//        cout<<*itt<<" ";
//    }
//    cout<<endl;

    //����
    //li1.sort();
    //li2.sort();
    //ʹ�ú����Ƚ���
    //li1.sort(comp<int>);
    //ʹ�ú�������Ƚ���
    li1.sort(Compare<int>());
    li2.sort(Compare<int>());
    cout << "list1�����:";
    for (list<int>::iterator itt = li1.begin(); itt != li1.end(); itt++) {
        cout << *itt << " ";
    }
    cout << endl;

    cout << "list2�����:";
    for (list<int>::iterator itt = li2.begin(); itt != li2.end(); itt++) {
        cout << *itt << " ";
    }
    cout << endl;

    //����
    //li1.splice(++li1.begin(),li2);
    //li1.splice(++li1.begin(),li2,++li2.begin(),--li2.end());

    //�ϲ�
    //li1.merge(li2);
    li1.merge(li2, Compare<int>());//�ϲ��ıȽϷ���Ҫ������ıȽϷ���һ��

    cout << "list1�������:";
    for (list<int>::iterator itt = li1.begin(); itt != li1.end(); itt++) {
        cout << *itt << " ";
    }
    cout << endl;
    cout << "list2�������:";
    for (list<int>::iterator itt = li2.begin(); itt != li2.end(); itt++) {
        cout << *itt << " ";
    }
    cout << endl;

    //ɾ��li1�����ڵ��ظ�Ԫ��
    li1.unique();

    cout << "list1�������:";
    for (list<int>::iterator itt = li1.begin(); itt != li1.end(); itt++) {
        cout << *itt << " ";
    }
    cout << endl;

    return 0;
}
