/*06-C++���ļ���*/
#include <iostream>
#include <fstream>

using namespace std;

class Date{
public:
    Date(int y=2022,int m=3,int d=21):year(y),month(m),day(d){}

    friend ostream& operator<<(ostream &os,const Date &dt)  //����ֱ��д��ǰ��
    {
        return os<<dt.year<<" "<<dt.month<<" "<<dt.day;
    }

    //sprintf sscanf  fprintf fscanf
    friend istream& operator>>(istream &is,Date &dt)
    {
        return is>>dt.year>>dt.month>>dt.day;
    }

private:
    int year;
    int month;
    int day;
};


int main()
{
    //ofstream ofs("a.txt");//Ĭ�ϴ�out+trunc
    ofstream ofs;
    ofs.open("a.txt",ios::out|ios::trunc); 
    // ios::in ----- ����
    // ios::out ---- д��
    // ios::app ---- ׷�Ӵ�
    // ios::trunc --- ��մ�
    if(!ofs.is_open()){
        cout<<"��ʧ��!"<<endl;
        exit(-1);
    }

    //-----------------------------д����--------------------------------
    //ofs.write("hello",5);
    //ofs.write("xiaoxiao",8);
    //ofs<<"byebye";
    Date dt;
    cout<<dt<<endl;
    ofs<<dt;//ofs<<dt.year<<"-"<<dt.month<<"-"<<dt.day;

    //�ر��ļ�
    ofs.close();
   //---------------------------------------------------------------------
    //���ļ�
    ifstream ifs("a.txt");//Ĭ��ios::in��
    if(!ifs.is_open()){  //1Ϊ�ļ������ڣ���ʧ��
        cout<<"��ʧ��!"<<endl;
        exit(-1);
    }

    //--------------------------������----------------------------
    char buf[100] = {};
    int num = 0;

    //ifs.read(buf,sizeof(buf));
    //cout<<buf<<endl;
    //ifs>>num;
    //cout<<num<<endl;

    //������Ĵ���
    //ifs.clear();

    //ifs>>buf;
    //cout<<buf<<endl;     .gcount()����ֻ����readȥ��
    //cout<<"������"<<ifs.gcount()<<"�ֽ�"<<endl;

    Date dt1(1111,3,3);
    cout<<dt1<<endl;
    ifs>>dt1;//ifs>>dt1.year>>dt1.month>>dt1.day;
    cout<<dt1<<endl;

    ifs.close();
    //---------------------------------------------------------------------
    return 0;
}
