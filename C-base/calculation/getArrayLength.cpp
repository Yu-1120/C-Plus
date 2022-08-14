#include <iostream>
using namespace std;
//求数组的长度
template <typename T>
int count(T &n)
{
    int s1 = sizeof(n);
    int s2 = sizeof(n[0]);
    return s1 / s2;
}
int main()
{
    int a[] = {1, 2, 3};
    char m[] = {'a', 'b', '\0', 'c', 'd'};
    char b[] = {"ab\0c"};
    string c = "asdasddddda";
    cout << count(a) << endl;                                                //整形数组的长度
    cout << count(m) << endl;                                                //字符行数组的长度
    cout << c.size() << endl;                                                //字符串数组的长度可用size（）或length（）函数来求
                                                                             // cout << strlen(b) << endl;                             // strlen（）函数可用来求字符数组的长度。
    cout << sizeof(b) << "  " << sizeof('a') << "  " << sizeof("a") << endl; // b的大小是5， "a"是字符串，包含'a和'\0'.返回的是2
    cout << sizeof(c) << endl;                                               //其等于string类的大小。
    return 0;
}
