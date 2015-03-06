#include "intoolbar.h"
#include "graphicswindow.h"
#include <cmath>
#include <iostream>

using namespace std;

/**
Construtor:
 For creating three actions
*/
InToolBar::InToolBar(MainWindow* m_w,QApplication* q_a):QToolBar(){
	//start game action
	mw=m_w;qa=q_a;
	timer=mw->getgraphwindow()->gettimer();
	QAction *StartGameAction=new QAction("Start",this);
	this->addAction(StartGameAction);
	connect(StartGameAction,SIGNAL(triggered()),this,SLOT(startGame()));
	
	QAction *RestartGameAction=new QAction("Restart",this);
	this->addAction(RestartGameAction);
	connect(RestartGameAction,SIGNAL(triggered()),this,SLOT(restartGame()));
	
	
	QAction *FinishGameAction=new QAction("Finish Game",this);
	this->addAction(FinishGameAction);
	connect(FinishGameAction,SIGNAL(triggered()),this,SLOT(finishGame()));
	
	QAction *PauseGameAction=new QAction("Pause/Resume",this);
	this->addAction(PauseGameAction);
	connect(PauseGameAction,SIGNAL(triggered()),this,SLOT(pauseGame()));
	
	//quit game action
	QAction *QuitGameAction=new QAction("Exit",this);
	this->addAction(QuitGameAction);
	connect(QuitGameAction,SIGNAL(triggered()),this,SLOT(quitGame()));
	connect(timer,SIGNAL(timeout()),this,SLOT(handletimer()));

}

/**
This function display the board on the graphics window and clear error box and list box
*/
void InToolBar::startGame(){
	
	if(mw->getname()==""){
		mw->getmessagebox()->clear();
		mw->getmessagebox()->append("You must enter your name before clicking start button.");
		return;
	}
	if(!timer->isActive()){
		mw->grabKeyboard();
		timer->start();
		mw->getlifeline()->clear();
		mw->getscoreline()->clear();
		mw->getmessagebox()->clear();
		mw->getlifeline()->insert("3");
		mw->getscoreline()->insert("0");
 		mw->getgraphwindow()->createinitiallayout();
 	}
}

/**
This funtion just quits the game and stops the program
*/
void InToolBar::quitGame(){
	qa->exit(0);
}

void InToolBar::restartGame(){
	finishGame();
	startGame();

}


void InToolBar::finishGame(){
	mw->getgraphwindow()->quitgame();
}


void InToolBar::pauseGame(){
	if(mw->getgraphwindow()->getplayer()==NULL) return;
	if(timer->isActive())
		timer->stop();
	else
		timer->start();

}

void InToolBar::handletimer(){

	mw->getgraphwindow()->createthings();

}

