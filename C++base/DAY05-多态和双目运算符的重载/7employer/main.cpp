#include <iostream>
#include "employer.hpp"

using namespace std;

int main()
{
    Employer ep("�廢�Ͻ�","�ŷ�","���",300000.0);
    ep.show();

    Employer ep1 = ep;

    return 0;
}
