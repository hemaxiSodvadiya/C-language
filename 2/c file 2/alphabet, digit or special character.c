#include<stdio.h>
int main()
{
 char ch;
 printf("Enter Any Character:-");
 scanf("%c",&ch);
 if(ch>='0' && ch<='9')
 {
  printf("Character is Digit..");
 }
 else if(ch>='A' && ch<='Z')
 {
  printf("Character is Capital Letter..");
 }
 else if(ch>='a' && ch<='z')
 {
  printf("Character is Small Letter...");
 }
 else
 {
  printf("Character is Special Character..");
 }

}
