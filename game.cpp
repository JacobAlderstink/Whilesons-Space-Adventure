#include "game.h"
#include <Character/charactersuperclass.h>

Game::Game()
{
/*Main Menu
 * Settings Screen
 * Pause Screen?
 */
    //creating the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1500,1500);

    //adding scene to view
    setScene(scene);

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // this will have to be turned off to allow character tracking
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1500,1500);                              // Will need to be changed to setFixedHeight(HEIGHT)

    //Just here for gravity testing purposes
    CharacterSuperClass *Character = new CharacterSuperClass();
    Character->setPos(200,200);
    scene->addItem(Character);

    show();

}
