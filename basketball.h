#ifndef BASKETBALL_H
#define BASKETBALL_H

#include "thing.h"

class Basketball: public Thing{
public:
	Basketball(QPixmap*, int ,int);
	void move();
private:
};

#endif
