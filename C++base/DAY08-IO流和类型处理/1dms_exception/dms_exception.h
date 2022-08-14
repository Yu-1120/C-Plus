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

//����������Ӧ�쳣
class dms_server_no_response_exception:public dms_server_exception{
public:
    dms_server_no_response_exception(string msg="server no response exception")throw();
};

//��������Դ�����쳣
class dms_server_no_resource_exception:public dms_server_exception{
public:
    dms_server_no_resource_exception(string msg="server no resource exception")throw();
};

//�ͻ����쳣����
class dms_client_exception:public dms_exception{
public:
    dms_client_exception(string msg="client exception")throw();
};

//�ͻ��������쳣
class dms_client_no_connection_exception:public dms_client_exception{
public:
    dms_client_no_connection_exception(string msg="client no connection exception")throw();
};

//�ͻ�������Խ���쳣
class dms_client_outofrange_exception:public dms_client_exception{
public:
    dms_client_outofrange_exception(string msg="client outofrange exception")throw();
};

#endif // DMS_EXCEPTION_H
