#include<stdio.h>

int main(){
	int ang1,ang2,ang3;
	
	printf("enter first angle:-");
	scanf("%d",&ang1);
	printf("enter second angle:-");
	scanf("%d",&ang2);
	ang3 = 180-(ang1+ang2);
	printf("Third angle of the trianglen:- %d",ang3);
}
