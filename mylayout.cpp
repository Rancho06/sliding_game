#include "mylayout.h"
#include "graphicswindow.h"

MyLayout::MyLayout(GraphicsWindow* g_w,QPixmap* mp,int nx,int ny):Thing(mp,nx,ny){
	gw=g_w;
	x=nx;
	y=ny;
}

void MyLayout::move(){
	if(x==50) gw->createlayout();
	moveBy(-1,0);
	x--;
	



}
