#include <iostream>
#include<cstring>
using namespace std;

int main()
{
   char s[1000], r[1000];
   int begin, end, count = 0;

   cout<<"enter the string"<<endl;
   cin>>s;
   
   while (s[count] != '\0')
      count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      r[begin] = s[end];
      end--;
   }

   r[begin] = '\0';

   cout<<"reverse string:"<<r<<endl;

   return 0;
}
