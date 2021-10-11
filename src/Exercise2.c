/*
2. Write a function to calculate the factorial with given integer n,
which satisfies the following:
	if n is odd, factorial = 1 * 3 * 5 * … * n
	if n is even, factorial = 2 * 4 * 6 * … * n
Ex:
______________________________________
| Input: 11                          |
| Output: 10395                      |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


	//Your codes here
	
	unsigned int doublefactorial(unsigned int n) 
{ 
    if (n == 0 || n==1) 
      return 1; 
    return n*doublefactorial(n-2); 
} 
   
int main() 
{ 
    printf("%d", doublefactorial(11)); 
    return 0; 
} 
