/*03-�쳣���׳��Ͳ���*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class A{
public:
    //���׳��κ��쳣
    void show()throw()
    {
        cout<<"show A"<<endl;
    }
};

//foo���������׳�int,double,const char *,A *���͵��쳣
void foo()throw(int,double,const char *,A *)
{
    srand(time(0));
    int s = rand()%5;//0 1 2 3 4

    cout<<"foo start!"<<endl;

    if(s==0){
        cout<<"��������!"<<endl;
    }
    else if(s==1){
        //�׳�int���쳣
        throw 1;
    }
    else if(s==2){
        //�׳�double���쳣
        throw 3.14;
    }
    else if(s==3){
        //�ų�const char *���쳣
        throw "�����";
    }
    else if(s==4){
        //�ų�A *���쳣
        throw new A;
    }

    cout<<"foo finished!"<<endl;
}

int main()
{
    try{
        foo();
        cout<<"after foo!"<<endl;
    }catch (int e) {//����int�쳣
        cout<<"������int���쳣="<<e<<endl;
    }
    catch (double e) {//����double�쳣
        cout<<"������double���쳣="<<e<<endl;
    }
    catch (const char *e) {//����const char *�쳣
        cout<<"������const char *���쳣="<<e<<endl;
        cout<<"�޷�����,�����׳�"<<endl;
        throw e;
    }

    cout<<"app finished!"<<endl;
    return 0;
}
