#include "basketball.h"

Basketball::Basketball(QPixmap* mp,int nx,int ny):Thing(mp,nx,ny){
	life=1;
	value=0;
}

void Basketball::move(){
		moveBy(3,0);
	
}
