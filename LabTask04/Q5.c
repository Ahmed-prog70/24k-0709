#include<stdio.h>
int main(){
    char ch;
    printf("Input any character: ");
    scanf("%c", &ch);
    if(ch<=47|| (ch>=58 && ch<=64) || (ch>=91 && ch<=96)|| ch>=123)
    {
    printf("It is a special character");}
    else if (ch>=48 && ch<=57){
    printf("It is a digit");}
    else if (ch>=65 && ch<=90){
    printf("It is a capital alphabet");}
    else if (ch>=97 && ch<=122 ){
    printf("It is a small alphabet.");}
    return 0;
}