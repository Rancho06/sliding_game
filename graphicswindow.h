#ifndef GRAPHICSWINDOW_H
#define GRAPHICSWINDOW_H


#include "mylayout.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QLineEdit>
#include <QGraphicsRectItem>
#include <QVector>
#include <QTextEdit>
#include "tank.h"
#include "plane.h"
#include "rock.h"
#include "soldier.h"
#include "thing.h"
#include "bullet.h"
#include "bomb.h"
#include "player.h"
#include "basketball.h"

#define WINDOW_MAX_X 300
#define WINDOW_MAX_Y 200

#include <QGraphicsView>
#include <QTimer>
/**
This class creates the scene and prepares the background on which the tiles are built
@author Shu Zhou
*/
class MainWindow;
class GraphicsWindow : public QGraphicsView {
public:
    explicit GraphicsWindow(QLineEdit*,QLineEdit*,QTextEdit*,MainWindow*);
 
    /** @return A pointer to the current scene*/
    QGraphicsScene* getscene(){return scene;};
	void createthings();
	QTimer* gettimer(){return timer;};
	void createlayout();
	void createinitiallayout();
	void playerMoveLeft();
	void playerMoveRight();
	void playerJump();
	void playerOpenFire();
	void quitgame();
	Player* getplayer(){return player;};
    
private:
	MainWindow* mw;
	int counttimer;
	int totalpoints;
	QTimer* timer;
	QLineEdit* scoreline;
	QLineEdit* lifeline;
	QTextEdit* messagebox;
	/// A pointer to the scene
    QGraphicsScene *scene;
    QPixmap* layoutphoto;
    QPixmap* tankphoto;
	QPixmap* planephoto;
	QPixmap* soldierphoto;
	QPixmap* ballphoto;
	QPixmap* ufophoto;
	QPixmap* bombphoto;
	QPixmap* bulletphoto;
	QPixmap* playerphoto;
	QPixmap* basketballphoto;
	QVector<Thing*>* myThings;
	QVector<Thing*>* myWeapons;
	QVector<MyLayout*>* myLayouts;
	Plane* plane;
	Tank* tank;
	Soldier* soldier;
	Rock* ball;
	Player* player;
	Basketball* basketball;
	Bomb* bomb;
  	Bullet* bullet;
};

#endif
