#include "tank.h"

Tank::Tank(QPixmap* mp,int nx,int ny):Thing(mp,nx,ny){
	life=4;
	value=300;
}

void Tank::move(){
	moveBy(-2,0);



}
