#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

using namespace std;

 float circle (float*,float*,float*);
 
 
 struct point
 {
 	float x;	
 	float y;
 	float z;
 };
 
 int main()
 
 {
 
 	struct point open;
 	float r1,r2,r3;
 	cout << "Enter r of circle 1 : ";
 	cin >> r1;
 	cout << "Enter r of circle 2 : ";
 	cin >> r2;
	cout << "Enter r of circle 3 : ";
	cin >> r3; 
 	open.x=r1;
 	open.y=r2;
 	open.z=r3;
 	
	circle (&open.x,&open.y,&open.z);
	
	
 }
 
 float circle(float *c1,float *c2,float *c3)
 {	
 	float const pi=22.0/7.0;
 	float area1,area2,area3;
 	// circle r1
 	area1 = pi*(*c1)*(*c1);
 	// circle r2
 	area2 = pi*(*c2)*(*c2);
 	// circle r3
 	area3 = pi*(*c3)*(*c3);
 	
 	float Circle[] = {area1,area2,area3};
 	
 if (Circle[0] > 0 && Circle[1] > 0 && Circle[2] > 0)
 {
 	for(int i=0;i<3;i++)
 	{
 		printf("Circle %d space = %.2f \n",i+1,Circle[i]);
 	}
 }
 else
 {
 	cout << "NO SPACE" << endl;
 }
 	
 
 
 }
