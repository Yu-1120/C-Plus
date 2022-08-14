#include <iostream>
#include <unistd.h>
#include "mytime.hpp"

using namespace std;

int main()
{
    mytime t(15,35,50);

    while(1){
        t.print_time();
        sleep(1);
        t.run();
    }

    return 0;
}
