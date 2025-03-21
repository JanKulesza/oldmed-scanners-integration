#ifndef EVENTS_H
#define EVENTS_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QWidget>
#include <QMimeData>
#include <QGraphicsPixmapItem>

class Events
{
public:
    Events();
};

class Custom_View : public QGraphicsView
{
    Q_OBJECT
public:
    explicit Custom_View(QWidget* parent = nullptr); // Default argument here

protected:
    void dragEnterEvent(QDragEnterEvent* event) override;
    void dragLeaveEvent(QDragLeaveEvent* event) override;
    void dragMoveEvent(QDragMoveEvent* event) override;
    void dropEvent(QDropEvent* event) override;

private:
    QGraphicsScene* scene;
};

#endif // EVENTS_H