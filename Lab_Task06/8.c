#include<stdio.h>
int main()
{
    int n=5,c=2,i;
    for( i=0 ;i<n; i++)
    {
      int x=(i%2==0);
      switch (x){
      case 1:
      if (i==c){
      printf("  *  \n");
      c+=4;}
      else
      printf("*****\n");
      break;
      case 0:
      printf(" * * \n");
      break;
      }
    }
}