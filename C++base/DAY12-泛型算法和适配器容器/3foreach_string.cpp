/*03-for_each����string*/
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

//����
void modify(string &s)
{
    if (s == "hello")
        s = "byebye";
}

int main()
{
    array<string, 5> as = {"hello", "welcome", "UK", "Japan", "Friday"};
    cout << as.begin() << endl;             //��ӡ��ַ
    for_each(as.begin(), as.end(), modify); //��ַ����ִַ�У�ĳ������

    for (array<string, 5>::iterator it = as.begin(); it != as.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
