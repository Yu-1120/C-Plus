/*06 - ���е�ʹ��*/
#include <iostream>
#include <list>
#include <queue>

using namespace std;

int main()
{
    queue<int> qi;                  // deque��Ϊ�ײ�����
    queue<string, list<string>> qs; // deque��˳��list����ʽ�Ķ���

    qs.push("����");
    qs.push("����");
    qs.push("����");

    cout << "��С:" << qs.size() << endl;
    while (!qs.empty())
    {
        cout << qs.front() << " "; //����Ԫ��
        qs.pop();
    }
    cout << endl;

    return 0;
}
