#include <iostream>
#include <cstdlib>
#include <ctime>

#include "dms_exception.h"

using namespace std;

//dmsϵͳ�������ݽӿ� ------ �������쳣 �ͻ����쳣 ...
void send_data()
{
    srand(time(0));
    int r = rand()%8;

    if(r==0){
        cout<<"���ͳɹ�"<<endl;
    }
    else if(r==1){//�������쳣
        throw dms_server_exception("dms�������쳣");
    }
    else if(r==2){//�ͻ����쳣
        throw dms_client_exception("dms�ͻ����쳣");
    }
    else if(r==3){//�����쳣
        throw dms_exception("dms�����쳣");
    }
    else if(r==4){//����������Ӧ�쳣
        throw dms_server_no_response_exception("dms����������Ӧ�쳣");
    }
    else if(r==5){//��������Դ�����쳣
        throw dms_server_no_resource_exception("dms��������Դ�����쳣");
    }
    else if(r==6){//�ͻ����������쳣
        throw dms_client_no_connection_exception("dms�ͻ����������쳣");
    }
    else if(r==7){//�ͻ�������Խ���쳣
        throw dms_client_outofrange_exception("dms�ͻ�������Խ���쳣");
    }

}

int main()
{
    //ִ�п����׳��쳣�Ĵ���
    try {
        send_data();
    } catch (dms_server_no_response_exception &e) {
        cout<<"����������Ӧ�쳣"<<endl;
        cout<<e.what()<<endl;
    } catch (dms_server_no_resource_exception &e) {
        cout<<"��������Դ�����쳣"<<endl;
        cout<<e.what()<<endl;
    } catch (dms_server_exception &e) {
        cout<<"�������쳣"<<endl;
        cout<<e.what()<<endl;
    } catch (dms_client_outofrange_exception &e) {
        cout<<"�ͻ�������Խ���쳣"<<endl;
        cout<<e.what()<<endl;
    } catch (dms_client_no_connection_exception &e) {
        cout<<"�ͻ����������쳣"<<endl;
        cout<<e.what()<<endl;
    } catch (dms_client_exception &e) {
        cout<<"�ͻ����쳣"<<endl;
        cout<<e.what()<<endl;
    } catch (dms_exception &e) {
        cout<<"�����쳣"<<endl;
        cout<<e.what()<<endl;
    }

    return 0;
}
