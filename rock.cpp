#include "rock.h"

Rock::Rock(QPixmap* mp,int nx,int ny):Thing(mp,nx,ny){
	x=nx;
	y=ny;
	dy=1;
	life=6;
	value=300;
}

void Rock::move(){
	if(y==340) dy=-1;
	if(y==200) dy=1;
	moveBy(-1,dy);
	x--;y+=dy;



}
