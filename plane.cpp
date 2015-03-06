#include "plane.h"

Plane::Plane(QPixmap* mp,int nx,int ny):Thing(mp,nx,ny){
	life=1;
	value=0;
}

void Plane::move(){
	moveBy(-2,0);
}
