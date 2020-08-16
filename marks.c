#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {int marks;
 printf("Enter your marks:\n");
 scanf("%d",&marks);
 if(marks>=85)
 {
 	printf("you have secured Grade A\n");
 }
 else if(marks>=70)
 {
 	printf("you have secured Grade B\n");
 }
 else if(marks>=55)
 {
 	printf("you have secured Grade C\n");
 }
 else if(marks>=40)
 {
 	printf("you have secured Grade D\n");
 }
 else
 {
 	printf("you have failed");
}
	return 0;
}
