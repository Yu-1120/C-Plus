#include <iostream>
#include <cstdio>

namespace ns1{
	int num_1 = 1;
	namespace ns2{
		int num_2 = 2;
		namespace ns3{
			int num_3 = 3;
		}
	}
}


int main()
{
	printf("%d\n", ns1::num_1);
	printf("%d\n", ns1::ns2::num_2);
	printf("%d\n", ns1::ns2::ns3::num_3);

	return 0;
}

