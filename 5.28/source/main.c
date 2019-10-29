#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char S[1024] ;

	char c;
	while (scanf_s("%s", S,sizeof(S)) == 1 ) 
	{
		//scanf_s("%s", S, sizeof(S));
		int a, N = strlen(S); 
		for (a = 0; a < N; a++)
		{
			if (islower(S[a]))
			{
				c = toupper(S[a]);
				printf("%c", c );
			}
			else
			{
				c = tolower(S[a]);
				printf("%c",c);
			}
		}
	}
	system("pause");
}