#ifndef ROCK_H
#define ROCK_H

#include "thing.h"

class Rock: public Thing{
public:
	Rock(QPixmap*, int ,int);
	void move();
	
private:
	int x;
	int y;
	int dy;
	



};

#endif
