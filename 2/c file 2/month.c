#include <stdio.h>
void main()
{
   char month;
   printf("Enter Month latter:- ");
   scanf("%c",&month);
   switch(month)
   {
	case 'J':
	       printf("January");
	       break;
	case 'F':
	       printf("February");
	       break;
	case 'M':
	       printf("March");
	       break;
	case 'A':
	       printf("April");
	       break;
	case 'Y':
	       printf("May");
	       break;
	case 'U':
	       printf("June");
	       break;
	case 'L':
	       printf("July");
	       break;
	case 'G':
	       printf("August");
	       break;
	case 'S':
	       printf("September");
	       break;
	case 'O':
	       printf("October");
	       break;
	case 'N':
	       printf("November");
	       break;
	case 'D':
	       printf("December");
	       break;
	default:
	       printf("invalid Month number. \nPlease try again...");
	       break;
      }
}

