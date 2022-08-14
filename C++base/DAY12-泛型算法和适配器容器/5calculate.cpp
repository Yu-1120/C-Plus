/*05 - ��ջ�����������ʽ*/
#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <cstring>
#include <cstdlib>

using namespace std;

//�Ƚ���������ȼ� ��-�� ����-��
bool get_prio(char op1,char op2)
{
    return (op1=='*'||op1=='/')&&(op2=='+'||op2=='-');
}

//����򵥱��ʽ
int cal(int a,int b,char op)
{
    switch (op) {
        case '+':
            return a+b;
            // break;
        case '-':
            return a-b;
            // break;
        case '*':
            return a*b;
            // break;
        default:
            return a/b;
    }
}

//�����������ʽ�ַ���
int calculate(const char *s)
{
    int a1 = 0,a2 = 0;
    char oper;//�����

    //׼��������ջ�������ջ
    stack<int> arg;//������ջ
    stack<char> op;//�����ջ

    //�������ʽ����
    while(*s){
        //1.����������
        if(*s=='('){
            op.push(*s);
            s++;
        }
        else if(*s>='0'&&*s<='9'){//2.����������
            arg.push(atoi(s));
            //
            //�ƶ�����һ������� 
            while(*s>='0'&&*s<='9')
                s++;//char * ��һ���ַ��ģ�����Ҫ�Ӽӱ���ÿһ���ַ�
        }
        else if(*s==')'){//3.����������
            //һֱȡ��������������һ����������㣬ֱ������������
            do{
                a2 = arg.top();//�ڶ�������
                //
                arg.pop();
                a1 = arg.top();//��һ������
                arg.pop();
                oper = op.top();//�����
                op.pop();
                //������������ջ
                arg.push(cal(a1,a2,oper));
            }while(op.top()!='(');//û������������һֱȥ��
            //ȡ��������
            op.pop();
            s++;
        }
        //****************************************
        else if(op.empty()||op.top()=='('||get_prio(*s,op.top())){
            //4.����� --- �����ջΪ�գ����ȼ�����ջ���������ջ��Ϊ�����ţ�ֱ���������ջ
            op.push(*s);
            s++;
        }
        else{//����� - ���ȼ�������ջ���������ȡ��������������һ�����������
            a2 = arg.top();//�ڶ�������
            arg.pop();
            a1 = arg.top();//��һ������
            arg.pop();
            oper = op.top();//�����
            op.pop();
            //������������ջ
            arg.push(cal(a1,a2,oper));
        }
        //****************************************
    }

    //һֱȡ��������������һ����������㣬ֱ�������ջΪ��
    while(!op.empty()){
        a2 = arg.top();//�ڶ�������
        arg.pop();
        a1 = arg.top();//��һ������
        arg.pop();
        oper = op.top();//�����
        op.pop();
        //������������ջ
        arg.push(cal(a1,a2,oper));
    }

    //����ڲ�����ջ
    return arg.top();
}

int main()
{
    //const char *expr = "(10+2)/3+6*5";
    const char *expr = "(10+8)/(3+6)*5+100/5";

    cout<<calculate(expr)<<endl;

    return 0;
}
