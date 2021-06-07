#include<bits/stdc++.h>
using namespace std;
int main()  
{     
   union abc {  
      int a;  
      char cha;  
   }var;  
   var.cha = 'A';  
   cout<<var.a;  
   return 0;
}  