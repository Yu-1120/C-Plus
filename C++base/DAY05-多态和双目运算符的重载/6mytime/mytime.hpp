#ifndef MYTIME_HPP
#define MYTIME_HPP

//�������
class mytime{
public:
    //����ֻ�����������
    mytime(int h=15,int m=27,int s=30);//����Ĭ��ֵд��������
    ~mytime();

    void print_time();
    void run();

private:
    int hour;
    int min;
    int sec;
};


#endif // MYTIME_HPP
