#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){
    double distX = 0, distY = 0, XW1, XW2, YH1 , YH2;
	XW1 = R1->x + R1->w;
	XW2 = R2->x + R2->w;
	YH1 = R1->y - R1->h;
	YH2 = R2->y - R2->h;

	distX = min(XW1,XW2) - max(R1->x,R2->x);
	distY = min(R1->y,R2->y) - max(YH1,YH2);
	
	if(distX > 0 && distY >0){
		return distX * distY;
	}
	else{
	return 0;
	}
}
