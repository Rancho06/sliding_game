#include "graphicswindow.h"
#include <cmath>
#include "main_window.h"
/** 
Constructor sets up the scene
@param e_b A pointer tothe error Box
*/
GraphicsWindow::GraphicsWindow(QLineEdit* sl,QLineEdit* ll,QTextEdit* mb,MainWindow* m_w){
	mw=m_w;
	scoreline=sl;
	lifeline=ll;
	messagebox=mb;
	totalpoints=0;
	this->setFixedSize(700,500);
	counttimer=0;
	timer=new QTimer();
	timer->setInterval(18);
	layoutphoto=new QPixmap("layout.png");
	tankphoto=new QPixmap("tank.png");
	planephoto=new QPixmap("plane.png");
	ballphoto=new QPixmap("ball.png");
	soldierphoto=new QPixmap("soldier.png");
	bombphoto=new QPixmap("bomb.png");
	bulletphoto=new QPixmap("bullet.png");
	playerphoto=new QPixmap("player.png");
	basketballphoto=new QPixmap("basketball.png");
	
	
	scene = new QGraphicsScene();
	myThings=new QVector<Thing*>;
	myWeapons=new QVector<Thing*>;
	myLayouts=new QVector<MyLayout*>;
    
    //This sets the size of the window and gives it a title.
    this->setSceneRect( 0,0,WINDOW_MAX_X*2, WINDOW_MAX_Y*2 );
    this->setWindowTitle("Game");
    this->setScene(scene);
}


void GraphicsWindow::createthings(){
	int divid=counttimer%800;
	switch(divid){
		case 2: plane=new Plane(planephoto,600,0);
				myThings->push_back(plane);
				scene->addItem(plane);
				plane->setZValue(2);
				break;
		case 56:
		case 234:bomb=new Bomb(bombphoto,plane->pos().x()+20,plane->pos().y()+20);
				myThings->push_back(bomb);
				scene->addItem(bomb);
				bomb->setZValue(2);
				break;
		case 202:tank=new Tank(tankphoto,600,330);
				myThings->push_back(tank);
				scene->addItem(tank);
				tank->setZValue(3);
				break;
		case 90:
		case 300:
		case 502:soldier=new Soldier(soldierphoto,600,290);
				myThings->push_back(soldier);
				scene->addItem(soldier);
				soldier->setZValue(5);
				break;
		case 100:
		case 310:
		case 512:
				if(soldier!=NULL){
					bullet=new Bullet(bulletphoto, soldier->pos().x(),soldier->pos().y()+15);
					myThings->push_back(bullet);
					scene->addItem(bullet);
					bullet->setZValue(4);
				}
				break;
		case 602:ball=new Rock(ballphoto,600,200);
				myThings->push_back(ball);
				scene->addItem(ball);
				ball->setZValue(4);
				break;
	
	}
	
	if((*myLayouts)[0]->pos().x()<=-580){
		delete (*myLayouts)[0];
		myLayouts->pop_front();
		myLayouts->front()->setZValue(0);
	}
	for(int i=0;i<myLayouts->size();i++){
		(*myLayouts)[i]->move();
	}
	
	for(int i=0;i<myWeapons->size();i++){
		if((*myWeapons)[i]==NULL);
		else if((*myWeapons)[i]->pos().x()>=620||(*myWeapons)[i]->getlife()<=0){
			delete (*myWeapons)[i];
			(*myWeapons)[i]=NULL;
			
		}
		else{
			(*myWeapons)[i]->move();
		}
	}
	
	for(int i=myWeapons->size()-1;i>=0;i--){
		if((*myWeapons)[i]==NULL)
			myWeapons->remove(i);
	
	}
	for(int i=0;i<myThings->size();i++){
		if((*myThings)[i]==NULL);
		else if((*myThings)[i]->pos().x()<=-100||(*myThings)[i]->pos().y()>=350||(*myThings)[i]->getlife()<=0){
			delete (*myThings)[i];
			(*myThings)[i]=NULL;
			
		}
		else{
			(*myThings)[i]->move();
		}
	}
	
	for(int i=myThings->size()-1;i>=0;i--){
		if((*myThings)[i]==NULL)
			myThings->remove(i);
	
	}
	
	
	for(int j=0;j<myThings->size();j++){
		if((*myThings)[j]==NULL);
		else {
		for(int i=0; i<myWeapons->size();i++){
			if((*myWeapons)[i]==NULL);
			else if ((*myWeapons)[i]->collidesWithItem((*myThings)[j])){
				(*myWeapons)[i]->setlife(0);
				(*myThings)[j]->setlife((*myThings)[j]->getlife()-1);
				totalpoints+=(*myThings)[j]->getvalue();
				if(totalpoints>30000) timer->setInterval(10);
				else if(totalpoints>5000) timer->setInterval(15);
				scoreline->clear();
				QString str;
				str.setNum(totalpoints);
				scoreline->insert(str);
			}
		}
		
		if(player->collidesWithItem((*myThings)[j])){
				player->setlife(player->getlife()-1);
				(*myThings)[j]->setlife(0);
				lifeline->clear();
				QString str;
				str.setNum(player->getlife());
				lifeline->insert(str);
				
		}
		}
		
		
	}
	counttimer++;
	if(player->getlife()==0){this->quitgame();}

}

void GraphicsWindow::createlayout(){
	MyLayout* layout=new MyLayout(this,layoutphoto,600,0);
	myLayouts->push_back(layout);
	scene->addItem(layout);
	layout->setZValue(1);
}

void GraphicsWindow::createinitiallayout(){
	totalpoints=0;
	MyLayout* layout=new MyLayout(this,layoutphoto,50,0);
	myLayouts->push_back(layout);
	player=new Player(playerphoto,0,310);
	scene->addItem(player);
	player->setZValue(10);
	scene->addItem(layout);
	layout->setZValue(0);
}


void GraphicsWindow::playerMoveRight(){
	player->moveRight();
}

void GraphicsWindow::playerMoveLeft(){
	player->moveLeft();
}

void GraphicsWindow::playerJump(){
	player->jump();
}

void GraphicsWindow::playerOpenFire(){
	basketball=new Basketball(basketballphoto,player->getX()+15,player->getY()+15);
	scene->addItem(basketball);
	basketball->setZValue(2);
	myWeapons->push_back(basketball);
}

void GraphicsWindow::quitgame(){
	timer->stop();
	for(int i=0;i<myThings->size();i++){
		delete (*myThings)[i];	
	}
	myThings->clear();
	for(int i=0;i<myWeapons->size();i++){
		delete (*myWeapons)[i];	
	}
	myWeapons->clear();
	for(int i=0;i<myLayouts->size();i++){
		delete (*myLayouts)[i];
	}
	myLayouts->clear();
	delete player;
	player=NULL; 
	messagebox->clear();
	messagebox->append("Congratulations! Your Final Score is: ");
	messagebox->append(scoreline->text());
	mw->releaseKeyboard();
}




