//In the original code the output was wrong value because the the unput exceeded the range of int.
#include<stdio.h>
#include<conio.h>
int main(){
  unsigned int a =3000000000;
  printf("%u", a);

}
