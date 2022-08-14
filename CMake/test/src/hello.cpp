#include <iostream>
#include "config.h" 
#include "addition.h"
#include "subtract.h"
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    
   cout << "VERSION "<<PROJECY_VERSION_MAJOR<< "." << PROJECY_VERSION_MINOR <<  endl;
     
    #ifdef CXK  //有定义就输出
    cout << CXK << endl;    
    #endif // DEBUG

    cout << add(12,12) << endl;
    cout << sub(12,12) << endl;
    return 0; 
}