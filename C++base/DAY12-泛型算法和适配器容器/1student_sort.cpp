#include <iostream>
#include <list>

using namespace std;

class student {
public:
    student(int id = 0, string name = "", int age = 0) : id(id), name(name), age(age) {}

    //������ȥ�أ�==�ж�name,��Ҫȥ���ĸ�ֵ��Ҫȥ���Ǹ�
    bool operator==(const student &s) const {  //Ϊʲô�Ƿ��ز���ֵ��
        return this->name == s.name;
    }

    //Ĭ�ϰ�id��С��������
    bool operator<(const student &s) const {
        return this->id < s.id;
    }

    bool operator>(const student &s) const {
        return this->age > s.age;
    }

    //�Լ���Ϊ�������������Ƚ��� name����
    bool operator()(const student &s1, const student &s2) {
        return s1.name < s2.name;
    }

    //�������
    friend ostream &operator<<(ostream &os, const student &s) {
        return os << s.id << ":" << s.name << ":" << s.age;
    }

private:
    int id;
    string name;
    int age;
};

//�����Ƚ��� T-student ===> ����Ӵ�С
template<typename T>
bool comp(const T &a, const T &b) {
    return a > b;
}

int main() {
    list<student> ban;
    list<student> xue;

    ban.push_back(student(4, "�ŷ�", 23));
    ban.push_back(student(2, "����", 26));
    ban.push_back(student(5, "����", 19));
    ban.push_back(student(1, "����", 31));
    ban.push_back(student(6, "����", 50));

    xue.push_back(student(9, "�ܲ�", 35));
    xue.push_back(student(7, "����", 27));
    xue.push_back(student(11, "����", 26));
    xue.push_back(student(8, "��Τ", 24));
    xue.push_back(student(10, "����", 31));

    //�ϲ�
    ban.splice(ban.end(), xue);
    //�ϲ����
    cout << "�ϲ���:" << endl;
    for (list<student>::iterator it = ban.begin(); it != ban.end(); it++) {
        cout << *it << endl;
    }
    cout << "------------------------------------------------" << endl;

    //ȥ������ ----- ����������(��������Ƚ���),ȥ��
    ban.sort(student());
    ban.unique();//��Ҫȥ����---operator==
    cout << "��������ȥ�غ�:" << endl;
    for (list<student>::iterator it = ban.begin(); it != ban.end(); it++) {
        cout << *it << endl;
    }
    cout << "------------------------------------------------" << endl;

    //��ѧ����������
    ban.sort(); //��Ҫȥ����  operator<
    cout << "ѧ�����������:" << endl;
    for (list<student>::iterator it = ban.begin(); it != ban.end(); it++) {
        cout << *it << endl;
    }
    cout << "------------------------------------------------" << endl;

    //�����併������ 
    ban.sort(comp<student>);  //��Ҫȥ����  operator>
    cout << "���併�������:" << endl;
    for (list<student>::iterator it = ban.begin(); it != ban.end(); it++) {
        cout << *it << endl;
    }
    cout << "------------------------------------------------" << endl;

    return 0;
}
