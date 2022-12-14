#include "level.h"
#include "game.h"
#include "car.h"
#include "log.h"
#include "turtles.h"
#include <QGraphicsPixmapItem>

Level::Level(QGraphicsScene *scene)
    : m_scene(scene), m_currentLevel(0)
{

}

void Level::loadLevel()
{
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Water0p.x(), Game::Water0p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(0));
        m_scene->addItem(tileItem);
    }
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Water0p.x(), Game::Water0p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(1));
        m_scene->addItem(tileItem);
    }
    //0
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Grass2p.x(), Game::Grass2p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(0));
        m_scene->addItem(tileItem);
    }

    QGraphicsPixmapItem* _0tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Grass0p.x(), Game::Grass0p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
    _0tileItem->setPos(Game::convertGridPointToPixel(0), Game::convertGridPointToPixel(0));
    m_scene->addItem(_0tileItem);

    QGraphicsPixmapItem* _3tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Grass0p.x(), Game::Grass0p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
    _3tileItem->setPos(Game::convertGridPointToPixel(3), Game::convertGridPointToPixel(0));
    m_scene->addItem(_3tileItem);

    QGraphicsPixmapItem* _8tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Grass0p.x(), Game::Grass0p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
    _8tileItem->setPos(Game::convertGridPointToPixel(8), Game::convertGridPointToPixel(0));
    m_scene->addItem(_8tileItem);

    QGraphicsPixmapItem* _14tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Grass0p.x(), Game::Grass0p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
    _14tileItem->setPos(Game::convertGridPointToPixel(Game::WINDOW_WIDTH-1), Game::convertGridPointToPixel(0));
    m_scene->addItem(_14tileItem);
    //1
    QGraphicsPixmapItem* tileItem1 = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Grass1p.x(), Game::Grass1p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
    tileItem1->setPos(Game::convertGridPointToPixel(0), Game::convertGridPointToPixel(1));
    m_scene->addItem(tileItem1);


    QGraphicsPixmapItem* tileItem4 = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Grass1p.x(), Game::Grass1p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
    tileItem4->setPos(Game::convertGridPointToPixel(3), Game::convertGridPointToPixel(1));
    m_scene->addItem(tileItem4);

    QGraphicsPixmapItem* tileItem5 = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Grass1p.x(), Game::Grass1p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
    tileItem5->setPos(Game::convertGridPointToPixel(4), Game::convertGridPointToPixel(1));
    m_scene->addItem(tileItem5);

    QGraphicsPixmapItem* tileItem8 = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Grass1p.x(), Game::Grass1p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
    tileItem8->setPos(Game::convertGridPointToPixel(7), Game::convertGridPointToPixel(1));
    m_scene->addItem(tileItem8);

    QGraphicsPixmapItem* tileItem9 = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Grass1p.x(), Game::Grass1p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
    tileItem9->setPos(Game::convertGridPointToPixel(8), Game::convertGridPointToPixel(1));
    m_scene->addItem(tileItem9);

    QGraphicsPixmapItem* tileItem12 = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Grass1p.x(), Game::Grass1p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
    tileItem12->setPos(Game::convertGridPointToPixel(11), Game::convertGridPointToPixel(1));
    m_scene->addItem(tileItem12);

    QGraphicsPixmapItem* tileItem14 = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Grass1p.x(), Game::Grass1p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
    tileItem14->setPos(Game::convertGridPointToPixel(13), Game::convertGridPointToPixel(1));
    m_scene->addItem(tileItem14);
    //2
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Water0p.x(), Game::Water0p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(Game::WINDOW_HEIGHT-14));
        m_scene->addItem(tileItem);
    }
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Water0p.x(), Game::Water0p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(Game::WINDOW_HEIGHT-13));
        m_scene->addItem(tileItem);
    }
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Water0p.x(), Game::Water0p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(Game::WINDOW_HEIGHT-12));
        m_scene->addItem(tileItem);
    }
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Water0p.x(), Game::Water0p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(Game::WINDOW_HEIGHT-12));
        m_scene->addItem(tileItem);
    }
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Water0p.x(), Game::Water0p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(Game::WINDOW_HEIGHT-11));
        m_scene->addItem(tileItem);
    }
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Water0p.x(), Game::Water0p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(Game::WINDOW_HEIGHT-10));
        m_scene->addItem(tileItem);
    }
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Water0p.x(), Game::Water0p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(Game::WINDOW_HEIGHT-9));
        m_scene->addItem(tileItem);
    }
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Asphalt0p.x(), Game::Asphalt0p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(Game::WINDOW_HEIGHT-8));
        m_scene->addItem(tileItem);
    }
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Asphalt3p.x(), Game::Asphalt3p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(Game::WINDOW_HEIGHT-7));
        m_scene->addItem(tileItem);
    }
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Asphalt2p.x(), Game::Asphalt2p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(Game::WINDOW_HEIGHT-6));
        m_scene->addItem(tileItem);
    }
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Asphalt5p.x(), Game::Asphalt5p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(Game::WINDOW_HEIGHT-5));
        m_scene->addItem(tileItem);
    }
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Asphalt4p.x(), Game::Asphalt4p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(Game::WINDOW_HEIGHT-4));
        m_scene->addItem(tileItem);
    }
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Asphalt2p.x(), Game::Asphalt2p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(Game::WINDOW_HEIGHT-3));
        m_scene->addItem(tileItem);
    }
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Asphalt1p.x(), Game::Asphalt1p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(Game::WINDOW_HEIGHT-2));
        m_scene->addItem(tileItem);
    }
    //Last row
    for(int i = 0; i < Game::WINDOW_WIDTH; ++i)
    {
        QGraphicsPixmapItem* tileItem = new QGraphicsPixmapItem(QPixmap(Game::PATH_TO_TILE_PIXMAP).copy(Game::Asphalt0p.x(), Game::Asphalt0p.y(), Game::GRID_SIZE, Game::GRID_SIZE));
        tileItem->setPos(Game::convertGridPointToPixel(i), Game::convertGridPointToPixel(Game::WINDOW_HEIGHT-1));
        m_scene->addItem(tileItem);
    }
}

void Level::loadCars()
{
    if(m_currentLevel == 0)
    {
        //0 row
        makeCar(Game::CarType::RACER, QPoint(8, Game::WINDOW_HEIGHT-2), 4, Game::Direction::LEFT);

        //1
        makeCar(Game::CarType::BULLDOZER, QPoint(5, Game::WINDOW_HEIGHT-3), 4, Game::Direction::RIGHT);

        //2
        makeCar(Game::CarType::CAR, QPoint(10, Game::WINDOW_HEIGHT-4), 4, Game::Direction::RIGHT);

        //3
        makeCar(Game::CarType::TIR, QPoint(10, Game::WINDOW_HEIGHT-5), 4, Game::Direction::LEFT);

        //4
        makeCar(Game::CarType::TIR, QPoint(10, Game::WINDOW_HEIGHT-6), 4, Game::Direction::RIGHT);

        //5
        makeCar(Game::CarType::RACER, QPoint(14, Game::WINDOW_HEIGHT-7), 4, Game::Direction::LEFT);

    }
}

void Level::loadLogs()
{
    if(m_currentLevel == 0)
    {
        makeLog(2, QPoint(8, 2), 1, Game::Direction::LEFT);

        makeLog(1, QPoint(8, 6), 3, Game::Direction::LEFT);
        makeLog(1, QPoint(14, 6), 3, Game::Direction::LEFT);
        makeLog(1, QPoint(0, 6), 3, Game::Direction::LEFT);
        makeLog(1, QPoint(4, 6), 3, Game::Direction::LEFT);

        makeLog(2, QPoint(8, 5), 4, Game::Direction::RIGHT);
        makeLog(2, QPoint(0, 5), 4, Game::Direction::RIGHT);
        makeLog(2, QPoint(13, 5), 4, Game::Direction::RIGHT);

        makeLog(2, QPoint(0, 3), 2, Game::Direction::RIGHT);
        makeLog(2, QPoint(8, 3), 2, Game::Direction::RIGHT);
        makeLog(2, QPoint(14, 3), 2, Game::Direction::RIGHT);
        makeLog(2, QPoint(4, 3), 2, Game::Direction::RIGHT);

    }
    else if(m_currentLevel == -1)
    {
        makeLog(2, QPoint(8, 2), 1, Game::Direction::LEFT);
        makeLog(2, QPoint(13, 2), 1, Game::Direction::LEFT);

        makeLog(2, QPoint(0, 3), 2, Game::Direction::RIGHT);
        makeLog(2, QPoint(8, 3), 2, Game::Direction::RIGHT);
        makeLog(2, QPoint(14, 3), 2, Game::Direction::RIGHT);
        makeLog(2, QPoint(4, 3), 2, Game::Direction::RIGHT);

        makeLog(2, QPoint(8, 4), 1, Game::Direction::RIGHT);
        makeLog(2, QPoint(0, 4), 1, Game::Direction::RIGHT);
        makeLog(2, QPoint(13, 4), 1, Game::Direction::RIGHT);

        makeLog(2, QPoint(8, 5), 1, Game::Direction::RIGHT);
        makeLog(2, QPoint(0, 5), 1, Game::Direction::RIGHT);
        makeLog(2, QPoint(13, 5), 1, Game::Direction::RIGHT);

        makeLog(2, QPoint(8, 6), 1, Game::Direction::LEFT);
        makeLog(2, QPoint(14, 6), 1, Game::Direction::LEFT);
        makeLog(2, QPoint(0, 6), 1, Game::Direction::LEFT);
        makeLog(2, QPoint(4, 6), 1, Game::Direction::LEFT);

        makeLog(2, QPoint(0, 7), 1, Game::Direction::LEFT);
        makeLog(2, QPoint(4, 7), 1, Game::Direction::LEFT);


    }
}

void Level::loadTurtles()
{
    if(m_currentLevel == 0)
    {
        makeTurtles(3, QPoint(0,2), 1, Game::Direction::LEFT);
        makeTurtles(3, QPoint(12,2), 1, Game::Direction::LEFT);

        makeTurtles(3, QPoint(0, 7), 2, Game::Direction::RIGHT);
        makeTurtles(3, QPoint(7, 7), 2, Game::Direction::RIGHT);

        makeTurtles(4, QPoint(0, 4), 4, Game::Direction::LEFT);
        makeTurtles(4, QPoint(7, 4), 4, Game::Direction::LEFT);
    }
}

void Level::makeCar(Game::CarType type, QPoint point, int speed, Game::Direction direction)
{
    Car* car = new Car(type);
    m_scene->addItem(car);
    car->setPosition(point);
    car->setSpeed(speed);
    car->setDirection(direction);
}

void Level::makeLog(int length, QPoint point, int speed, Game::Direction direction)
{
    Log* log = new Log(length);
    m_scene->addItem(log);
    log->setPosition(point.x(), point.y());
    log->setDirection(direction);
    log->setSpeed(speed);
}

void Level::makeTurtles(int count, QPoint point, int speed, Game::Direction direction)
{
    Turtles* turtles = new Turtles(count);
    m_scene->addItem(turtles);
    turtles->setPosition(point.x(), point.y());
    turtles->setDirection(direction);
    turtles->setSpeed(speed);
}
