#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
//	PFnotModified=Page Fault  not modified;
//  PFModified=Page Fault  modified;
//	MAT=Memory Access Time;
//	Modifiedper=Modified Percentage
//	EAT=Effective Acces Time;
//	PFR=Page Fault Rate;
	double PFnotModified, PFModified, MAT, Modifiedper, EAT,PFR;
    printf("Enter the time for Page Fault not modified in milliseconds: ");
	scanf("%lf",&PFnotModified);
	PFnotModified *=pow(10,-3);
	printf("Enter the time for Page Fault modified in milliseconds: ");
	scanf("%lf",&PFModified); 
	PFModified *=pow(10,-3);
	printf("Enter the time for Memory Access in nano seconds: ");
	scanf("%lf",&MAT);
	MAT *=pow(10,-9); 
	printf("Enter the modified percentage: ");
	scanf("%lf",&Modifiedper);
	Modifiedper = Modifiedper/100;
	printf("Enter the time for Efficiency Access in nano seconds: ");
	scanf("%lf",&EAT);
	EAT *=pow(10,-9); 
	printf("Page Fault Rate:");
	PFR = (EAT-MAT)/(Modifiedper*PFModified + (1-Modifiedper)*PFnotModified - MAT);
	printf("%lf",PFR);
	getch();
}
