#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QColorDialog>
#include "paintscene.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    /**
     * @brief handleOpenFile обработка открытия файла
     */
    void handleOpenFile();
    /**
     * @brief handleSaveFile обработка сохранения
     */
    void handleSaveFile();
    /**
     * @brief picName имя картинки вместе с URL
     */
    QString picName;
signals:
    void setPicInGraphView(QPixmap fileName);
private:
    /**
     * @brief timer Таймер для подготовки актуальных размеров графической сцены
     */
    QTimer *timer;
    /**
     * @brief scene рисовалка
     */
    PaintScene *scene;
    void resizeEvent(QResizeEvent * event);
    /**
     * @brief ui юай
     */
    Ui::MainWindow *ui;

private slots:
    /**
     * @brief slotTimer слот для таймера актуального размера
     */
    void slotTimer();
};
#endif // MAINWINDOW_H
