#include<bits/stdc++.h>
using namespace std;

int prime(int);
int i;

int main()
{

    int n,primeNo;

	// printf("\n\n Recursion : Check a number is prime number or not :\n");
	// printf("--------------------------------------------------------\n");
	
    printf(" Input any positive number : ");
    scanf("%d",&n);
    
    i = n/2;

    primeNo = prime(n);//call the function checkForPrime

   if(primeNo==1)
        printf(" The number %d is a prime number. \n\n",n);
   else
      printf(" The number %d is not a prime number. \n\n",n);
   return 0;
}

int prime(int n)
{
    if(i==1)
    {
        return 1;
    }
    else if(n %i==0)
    {
         return 0;
    }     
    else
       {
         i = i -1; 
         prime(n);//calling the function checkForPrime itself recursively
      }
}
