#include "bomb.h"

Bomb::Bomb(QPixmap* mp,int nx,int ny):Thing(mp,nx,ny){
	life=1;
	value=50;
	
}

void Bomb::move(){
	moveBy(-1,4);
}
