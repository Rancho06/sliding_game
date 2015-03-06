#ifndef PLAYER_H
#define PLAYER_H

#include "thing.h"
#include <QTimer>

class Player: public QObject,public Thing{
Q_OBJECT
public:
	Player(QPixmap*, int ,int);
	void move();
	void moveLeft();
	void moveRight();
	void jump();
	int getX(){return x;};
	int getY(){return y;};
	
private:
	int x;
	int y;
	QTimer* timer1;
	int count;
public slots:
	void jumpstep();


};

#endif
