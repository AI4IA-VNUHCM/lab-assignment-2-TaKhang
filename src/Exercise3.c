/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void primefactors(int num)
{
	int count;
	for(count=2;num>1;count++)
	{
		while (num%count==0)
		{
			num=num/count;
			printf("%d ",count);
			if (num==1){
			break;}
			printf(" * ");
		}
	}
}

int main(int argc, char *argv[])
 {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	primefactors(testcase);
	return 0;
}
