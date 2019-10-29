#include<stdio.h>
#include<stdlib.h>
main()
	{
		int n1=0, n2=0, minMultiple=1;
		printf("Enter two integer:");
		scanf_s("%d%d",&n1,&n2);
		while (1)
		{
			if (minMultiple%n1 == 0 && minMultiple%n2 == 0)
			{
				
				printf("The Lcm = %d", minMultiple);
				break;
			}
			else
			{
				minMultiple++;
			}
		}
		system("pause");
	}
