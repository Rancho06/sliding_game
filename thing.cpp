#include "thing.h"

Thing::Thing(QPixmap* mp,int nx, int ny){
	pixMap=mp;
	setPixmap(*mp);
	x=nx;
	y=ny;
	setPos(x,y);
}
