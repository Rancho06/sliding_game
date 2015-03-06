#include "main_window.h"
#include <QMenuBar>
#include "intoolbar.h"
#include <QAction>
#include <iostream>

using namespace std;

/**
Constructor:
 To create the child widgets
@param app a pointer to the QApplication Object in the qtpuzzle.cpp
*/
MainWindow::MainWindow(QApplication* app):QMainWindow(){
	this->setFocus();
	lifeline=new QLineEdit();
	scoreline=new QLineEdit();
	messagebox=new QTextEdit();
	//creating the central graphics window
	gw=new GraphicsWindow(scoreline,lifeline,messagebox,this);
	this->setCentralWidget(gw);
	
	//creating the menu bar with a sub action called exit, which stops the game
	QMenuBar* mb=menuBar();
	QMenu* fileMenu=new QMenu("File");
	QAction* q=new QAction("Exit",this);
	fileMenu->addAction(q);
	mb->addMenu(fileMenu);
	
	//creating the tool bar
	InToolBar *toolbar=new InToolBar(this,app);
	connect(q,SIGNAL(triggered()),toolbar,SLOT(quitGame()));
	this->addToolBar(toolbar);
	
	nameline=new QLineEdit();
	QDockWidget* qdw2=new QDockWidget("User name");
	qdw2->setWidget(nameline);
	addDockWidget(Qt::TopDockWidgetArea,qdw2);
	qdw2->setFeatures(QDockWidget::NoDockWidgetFeatures);
	
	
	lifeline->setReadOnly(true);
	QDockWidget* qdw4=new QDockWidget("Lives Left");
	qdw4->setWidget(lifeline);
	addDockWidget(Qt::TopDockWidgetArea,qdw4);
	qdw4->setFeatures(QDockWidget::NoDockWidgetFeatures);
	
	QDockWidget* qdw=new QDockWidget("User Score");
	qdw->setWidget(scoreline);
	scoreline->setReadOnly(true);
	addDockWidget(Qt::TopDockWidgetArea,qdw);
	qdw->setFeatures(QDockWidget::NoDockWidgetFeatures);
	
	
	messagebox->setReadOnly(true);
	QDockWidget* qdw3=new QDockWidget("Message Box");
	qdw3->setWidget(messagebox);
	addDockWidget(Qt::LeftDockWidgetArea,qdw3);
	qdw3->setFeatures(QDockWidget::NoDockWidgetFeatures);
	
}


void MainWindow::keyPressEvent(QKeyEvent* e){
	switch(e->key()){
		case Qt::Key_Left:
			gw->playerMoveLeft();
			break;
		case Qt::Key_Right:
			gw->playerMoveRight();
			break;
		case Qt::Key_Up:
			gw->playerJump();
			break;
		case Qt::Key_Space:
			gw->playerOpenFire();
			break;
	}
}


