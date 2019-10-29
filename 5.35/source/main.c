#include<stdio.h>
#include<stdlib.h>
main()
{
	int i;
	unsigned long long int n1=1, n2=0,ans=0, temp = 0;
	while (1)
	{

		printf("%llu ", ans);
		if (ans < temp) { break; }
		temp = ans;

		ans = n1 + n2;
		n1 = n2;
		n2 = ans;
		
	}
	system("pause");
}