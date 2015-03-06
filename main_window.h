#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include "graphicswindow.h"
#include <QDockWidget>
#include <QListWidget>
#include <QTextEdit>
#include <QPixmap>
#include <QKeyEvent>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QString>

/**
	This class creates all the widgets displayed in the window
	@author Shu Zhou
*/
class MainWindow: public QMainWindow{
	Q_OBJECT
	public:
		MainWindow(QApplication*);
		
		/**  Get a pointer to the graphics window
		@return A pointer to the graphics window
		*/
		GraphicsWindow* getgraphwindow(){return gw;};
		QLineEdit* getnameline(){return nameline;};
		QLineEdit* getscoreline(){return scoreline;};
		QLineEdit* getlifeline(){return lifeline;};
		QTextEdit* getmessagebox(){return messagebox;};
		QString getname(){return nameline->text();};
	protected:
		void keyPressEvent(QKeyEvent*);
		
	private:/// A pointer to the graphics window
		GraphicsWindow* gw;
		QLineEdit* nameline;
		QLineEdit* scoreline;
		QTextEdit* messagebox;
		QLineEdit* lifeline;
		
		
};


#endif
