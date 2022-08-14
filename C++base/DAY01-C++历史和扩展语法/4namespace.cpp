#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

namespace ns1{
	int add(int a,int b)
	{
		return a+b;
	}
}

namespace ns2{
	double add(double a,double b)
	{
		return a+b;
	}
}

namespace ns3{
	char *add(const char *s1,const char *s2)
	{
		char *s = (char *)malloc(strlen(s1)+strlen(s2)+1);
		if(s){
			strcpy(s,s1);
			strcat(s,s2);
		}

		return s;
	}
}


int main()
{
	printf("10+2 = %d\n", ns1::add(10,2));
	printf("3.14+2.68 = %lg\n", ns2::add(3.14,2.68));
	
	char *str = ns3::add("hello ","GZFX2108");
	printf("%s\n", str);
	free(str);

	return 0;
}

