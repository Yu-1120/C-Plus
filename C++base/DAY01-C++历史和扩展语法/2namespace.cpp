#include <iostream>
#include <cstdio>

//命名空间
namespace ns1{
	int num_1 = 10;

	void show(int n)
	{
		printf("ns1:%d\n", n);
	}
}

namespace ns2{
	int num_1 = 111;

	void show(int n)
	{
		printf("ns2:%d\n", n);
	}
}

//属于匿名命名空间
void print()
{
	printf("this is print fuction!\n");
}

//定义匿名命名空间
namespace{
	int num = 1;
}

//using ns2::num_1;//接下来可以直接使用ns2::num_1
//using ns1::num_1;
using namespace ns1;//直接使用ns1中的所有内容
//using namespace ns2;//直接使用ns1中的所有内容

int main()
{
	printf("ns1::num_1 = %d\n", ns1::num_1);
	printf("ns2::num_1 = %d\n", ns2::num_1);

	ns1::show(100);
	
	
	printf("num_1 = %d\n", num_1);
	show(876);
	
	//访问匿名命名空间中的数据
	::print();
	::num = 2222;

	return 0;
}

