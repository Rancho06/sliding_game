#include "player.h"

Player::Player(QPixmap* mp,int nx,int ny):Thing(mp,nx,ny){
	x=nx;
	y=ny;
	count=0;
	life=3;
	timer1=new QTimer();
	timer1->setInterval(20);
	connect(timer1,SIGNAL(timeout()),this,SLOT(jumpstep()));
}

void Player::move(){
}

void Player::moveLeft(){
	moveBy(-10,0);
	x-=10;
}
void Player::moveRight(){
	moveBy(10,0);
	x+=10;
}

void Player::jump(){
	timer1->start();
	
}

void Player::jumpstep(){
	if(count==100){
		timer1->stop();
		count=0;
	}
	else if(count<50){
		moveBy(0,-4);
		y-=4;
		count++;
	}
	else if(count<100){
		moveBy(0,4);
		y+=4;
		count++;
	}

}
