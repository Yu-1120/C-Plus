/*09 - ��ģ��ľֲ��ػ�*/
#include <iostream>
#include <cstring>

using namespace std;

//ͨ����ģ��
template<typename T1, typename T2, typename T3>
class Trib {
public:
    Trib() { cout << "Trib<T1,T2,T3>" << endl; }
};

//�ֲ��ػ�
//1.�ػ�һ�������Ͳ���
template<typename T1, typename T2>
class Trib<T1, T2, int> {
public:
    Trib() { cout << "Trib<T1,T2,int>" << endl; }
};

template<typename T1>
class Trib<T1, double, int> {
public:
    Trib() { cout << "Trib<T1,double,int>" << endl; }
};

//2.�ػ����Ͳ����Ĺ�ϵ
template<typename T1, typename T2>
class Trib<T1, T2, T2> {
public:
    Trib() { cout << "Trib<T1,T2,T2>" << endl; }
};

template<typename T1>
class Trib<T1, T1, T1> {
public:
    Trib() { cout << "Trib<T1,T1,T1>" << endl; }
};

//3.�ػ������ָ������
template<typename T1, typename T2, typename T3>
class Trib<T1 *, T2 *, T3 *> {
public:
    Trib() { cout << "Trib<T1*,T2*,T3*>" << endl; }
};

template<typename T1, typename T2, typename T3>
class Trib<T1[], T2[], T3[]> {
public:
    Trib() { cout << "Trib<T1[],T2[],T3[]>" << endl; }
};

int main() {
    //Trib<char,double,int> t1;
    //Trib<char,long,int> t2;
    Trib<char, long, double> t3;

    //Trib<char,double,double> t4;
    //Trib<double,double,double> t5;
    //���Ϊ�������أ�ֻ�Ǵ�������ͳ̶���
    Trib<char *, long *, double *> t6;
    Trib<char[], long[], double[]> t7;

    return 0;
}
