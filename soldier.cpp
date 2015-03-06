#include "soldier.h"

Soldier::Soldier(QPixmap* mp,int nx,int ny):Thing(mp,nx,ny){
	life=2;
	value=200;
}

void Soldier::move(){
	moveBy(-2,0);



}
