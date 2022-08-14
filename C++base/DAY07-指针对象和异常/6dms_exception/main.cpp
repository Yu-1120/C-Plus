#include <iostream>
#include <cstdlib>
#include <ctime>

#include "dms_exception.h"

using namespace std;


void send_data()
{
    srand(time(0));
    int r = rand()%4;

    if(r==0){
        cout<<"??????"<<endl;
    }
    else if(r==1){
        throw dms_server_exception("dms????????");
    }
    else if(r==2){//???????
        throw dms_client_exception("dms???????");
    }
    else if(r==3){
        throw dms_exception("dms??????");
    }

}

int main()
{
    //??§á?????????????
    try {
        send_data();
    }  catch (dms_server_exception &e) {
        cout<<"????????"<<endl;
        cout<<e.what()<<endl;
    } catch (dms_client_exception &e) {
        cout<<"???????"<<endl;
        cout<<e.what()<<endl;
    } catch (dms_exception &e) {
        cout<<"??????"<<endl;
        cout<<e.what()<<endl;
    }

    return 0;
}
