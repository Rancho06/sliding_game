#include "bullet.h"

Bullet::Bullet(QPixmap* mp,int nx,int ny):Thing(mp,nx,ny){
	life=1;
	value=50;
}

void Bullet::move(){
	moveBy(-4,0);



}
