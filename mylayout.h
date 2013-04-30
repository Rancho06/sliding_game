#ifndef MYLAYOUT_H
#define MYLAYOUT_H

#include "thing.h"

class GraphicsWindow;
class MyLayout: public Thing{
public:
	MyLayout(GraphicsWindow*,QPixmap*, int ,int);
	void move();
	
private:
	GraphicsWindow* gw;
	int x;
	int y;
	



};

#endif
