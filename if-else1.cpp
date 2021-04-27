#include<iostream>

using namespace std;

int main()
{
   int m,s;
   cout<<"Enter your marks obtained in maths and science: ";
   cin>>m>>s;
   cout<<"your marks in maths are "<<m<<" and your marks in science are "<<s<<endl;
   
   if(m>20&&s>20)
   {
      cout<<"Congrats you are getting a book of 45 rupees.";
   }
   else if(m>20||s>20)
   {
      cout<<"Congrats you are getting a pen of 15 rupees.";
   }
   else
   {
      cout<<"Fuckkkk you are failed in both subjects.";
   }
   
   

   return 0;

}