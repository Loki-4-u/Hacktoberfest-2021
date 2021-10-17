#include <stdio.h>
void tohanoi(int n, char s,
					char a, char d)
{

	if (n == 1)
	{
		printf("move from %c -> %c\n",s,d);
		return ;
	}
	tohanoi(n - 1, s, d, a);
	printf("move from %c -> %c  \n",s,d);
	tohanoi(n - 1, a, s, d);
}

// Driver code
int main()
{
    printf("Tower of hanoi\n\n AJAY KUMAR \nRoll No:18115004\n\n");
	int n ;

	printf("Enter no of disks\n");
	scanf("%d",&n);
	tohanoi(n, 'A', 'B', 'c');
	return 0;
}
