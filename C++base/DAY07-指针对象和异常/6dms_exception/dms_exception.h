#ifndef DMS_EXCEPTION_H
#define DMS_EXCEPTION_H

#include <string>
using namespace std;

//�쳣�Ļ���
class dms_exception{
public:
    dms_exception(string msd="dms exception")throw();
    //����what����
    virtual string what()throw();

private:
    string description;
};

//�������쳣����
class dms_server_exception:public dms_exception{
public:
    dms_server_exception(string msg="server exception")throw();
};

//�ͻ����쳣����
class dms_client_exception:public dms_exception{
public:
    dms_client_exception(string msg="client exception")throw();
};

#endif // DMS_EXCEPTION_H
