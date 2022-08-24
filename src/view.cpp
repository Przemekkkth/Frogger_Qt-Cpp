#include "view.h"
#include <QKeyEvent>
#include <QApplication>

View::View()
    : m_gameScene(new GameScene(this))
{
    setScene(m_gameScene);
    resize(sceneRect().width() + 2, sceneRect().height() + 2);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}


void View::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Escape)
    {
        QApplication::instance()->quit();
    }

    QGraphicsView::keyPressEvent(event);
}
