#ifndef WIDGET_H
#define WIDGET_H
#include<QPainter>
#include <QWidget>
#include<QTimer>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
protected:
    void paintEvent(QPaintEvent *event);
private slots:
    void on_leftButton_clicked();
    void on_rightButton_clicked();
    void on_startButton_clicked();
    void onGameAreaButtonClicked();
    void onComputerSlot();
    void on_aboutButton_clicked();

private:
    Ui::Widget *ui;
    void setInterfaceStyle();
    void changeButtonStatus(int num);

    void ConfigurationTabWidget();
    void addFonts();
    void setGameAreaButtonStyle();
    void start();
    void LockPlayer();
    void ComputerInGame();
    void chekGameStop();
    void endGame();
    void EndGameStyle(int row,int colum);
    void changeButtonStyle(int row, int colum, QString style);
    void ConfigurationGameAreaButtons();
    char gameArea[3][3]={
        {'-','-','-'},
        {'-','-','-'},
        {'-','-','-'}
    };
    char player='X'; // По умолчанию начинаем за крестик
    int progress = 0; // кол-во ходов
    bool gameStart = false;
    bool playerLocked = true;
    QTimer *timer;
    bool stop;
    char winner;
};
#endif // WIDGET_H
