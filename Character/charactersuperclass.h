#ifndef CHARACTER_H
#define CHARACTER_H

#include <QGraphicsRectItem>
#include <QObject>
#include "game.h"
#include <QTimer>
#include <QKeyEvent>

class Game;

enum facing {leftDir,rightDir};

class CharacterSuperClass : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
private:


public:
    CharacterSuperClass(Game *);

    double GetMass()
    {
        return mass;
    }
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

protected:
    facing WhichWay;
    double mass;            //should affect terminal velocity
    double velocityHor;
    int timeVarGravity;
    double accGrav;
    bool GravityOn;
    int JumpCount;
    int JumpStrength;
    int TerminalVelo;
    Game * Chargame;

    //character dimensions
    double CharWidth;
    double CharHeight;

    //bool for movement
    bool MoveR;
    bool MoveD;
    bool MoveL;
    bool MoveU;

public slots:
    void Gravity();

    void MoveRight();
    void MoveDown();
    void MoveLeft();
    void MoveUp();      //Jump

};

#endif // CHARACTER_H


