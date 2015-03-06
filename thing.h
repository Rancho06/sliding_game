#ifndef THING_H
#define THING_H

#include <QGraphicsPixmapItem>
#include <QPixmap>

class Thing: public QGraphicsPixmapItem{
public:
	Thing(QPixmap*, int, int);
	virtual void move()=0;
	int getlife(){return life;};
	void setlife(int l){life=l;};
	int getvalue(){return value;};

protected:
	int life;
	int value;	
private:
	int x;
	int y;
	int vX;
	int vY;
	QPixmap *pixMap;

};


#endif
