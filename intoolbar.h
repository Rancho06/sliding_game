#ifndef INTOOLBAR_H
#define INTOOLBAR_H
#include <QtGui/QApplication>
#include <QToolBar>
#include <QAction>
#include "main_window.h"

/**
This class creates three actions in the tool bar to start, quit and pause
@author Shu Zhou
*/
class InToolBar: public QToolBar{
Q_OBJECT
private:/// A pointer to the main window
	MainWindow* mw;
	/// A pointer to the QApplication object
	QApplication* qa;
	QTimer* timer;
public:
	InToolBar(MainWindow*,QApplication*);
public slots:
	void startGame();
	void restartGame();
	void quitGame();
	void finishGame();
	void pauseGame();
	void handletimer();
};

#endif
