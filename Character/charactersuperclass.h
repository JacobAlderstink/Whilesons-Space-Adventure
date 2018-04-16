#ifndef CHARACTER_H
#define CHARACTER_H
#include <QGraphicsRectItem>
#include <QObject>
#include "game.h"
class Game;
enum facing {leftDir,rightDir};
class CharacterSuperClass : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
private:


public:
    Character();
    double GetMass(){
        return mass;    //should affect terminal velocity
    }

protected:
    facing WhichWay;
    double mass;
    double velocityHor;


};

#endif // CHARACTER_H


