/*04 - ��ջ*/
#include <iostream>
#include <vector>
#include <list>
#include <stack>

using namespace std;

int main()
{
    //�����ջ����
    //stack<int,vector<int>> sv;
    //stack<string> ss;//deque
    //stack<string,vector<string>> ss;
    stack<string,list<string>> ss;

    //��ջ
    ss.push("��");
    ss.push("��");
    ss.push("��");
    ss.push("��");
    ss.push("!");

    //��ջ
    while(!ss.empty()){
        cout<<ss.top()<<endl;//ջ��Ԫ��
        // ss.pop();������������Ǹ�
    }
    cout<<endl;


    return 0;
}
