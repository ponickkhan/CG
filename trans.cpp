#include "graphics.h"
#include <iostream>
using namespace std;
int main()
{
	int x1, x2, x3, y1, y2, y3, tx, ty;
	int gd = DETECT, gm;
	cout << "Enter the cooridnates of line [x1,y1,x2,y2]:";
		cin >> x1 >> y1 >> x2 >> y2;
	cout << "\nEnter x and y translation:";
		cin >> tx >> ty;
	initgraph(&gd, &gm, "");
	line(x1, y1, x2, y2);
	line(x1 + tx, y1 + ty, x2 + tx, y2 + ty);



	getch();
	closegraph();
	return 0;
}
