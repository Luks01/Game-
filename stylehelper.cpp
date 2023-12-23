#include "stylehelper.h"


QString StyleHelper::getMainWidgetStyle()
{
    return "QWidget{"
           "background-image: url(:/resourse/images/bg.png);"
           "}";
}

QString StyleHelper::getStartButtonStyle()
{
    return "QPushButton{"
        "color:#fff;"
        "background:none;"
        "border:none;"
        "border-radius:19px;"
        "font-family:'Roboto Medium';"
        "font-size:16px;"
        "background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(89, 156, 208, 255), stop:1 rgba(65, 118, 184, 255));"
        "}"
    "QPushButton::hover{"
    "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(104, 175, 230, 255), stop:1 rgba(132, 185, 252, 255));"
    "}"
    "QPushButton::pressed{"
    "background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(89, 156, 208, 255), stop:1 rgba(65, 118, 184, 255));"
           "}";
}

QString StyleHelper::getStartButtonGameStyle()
{
    return "QPushButton{"
           "color:#fff;"
           "background:none;"
           "border:none;"
           "border-radius:19px;"
           "font-family:'Roboto Medium';"
           "font-size:16px;"
           "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 57, 57, 255), stop:1 rgba(250, 53, 53, 255));"
           "}"
           "QPushButton::pressed{"
           "background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(89, 156, 208, 255), stop:1 rgba(65, 118, 184, 255));"
           "}";
}

QString StyleHelper::getLeftButtonStyle()
{
    return "QPushButton{"
           "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.00487805 rgba(106, 106, 106, 255), stop:1 rgba(100, 100, 100, 255));"
           "background-image: url(:/resourse/images/cross_small.png);"
           "background-repeat:no-repeat;"
           "background-position: center center;"
           "border:1px solid #333;"
           "border-top-left-radius:8px;"
           "border-bottom-left-radius:8px;"
           "}";
}

QString StyleHelper::getRightButtonStyle()
{
    return "QPushButton{"
           "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.00487805 rgba(106, 106, 106, 255), stop:1 rgba(100, 100, 100, 255));"
           "background-image: url(:/resourse/images/zero_small.png);"
           "background-repeat:no-repeat;"
           "background-position: center center;"
           "border:1px solid #333;"
           "border-left:none;"
           "border-top-right-radius:8px;"
           "border-bottom-right-radius:8px;"
           "}";
}

QString StyleHelper::getLeftButtonActiveStyle()
{
    return "QPushButton{"
           "background-color: #2d313b;"
           "background-image: url(:/resourse/images/cross_small.png);"
           "background-repeat:no-repeat;"
           "background-position: center center;"
           "border:1px solid #333;"
           "border-top-left-radius:8px;"
           "border-bottom-left-radius:8px;"
           "}";
}

QString StyleHelper::getRightButtonActiveStyle()
{
    return "QPushButton{"
           "background-color: #2d313b;"
           "background-image: url(:/resourse/images/zero_small.png);"
           "background-repeat:no-repeat;"
           "background-position: center center;"
           "border:1px solid #333;"
           "border-left:none;"
           "border-top-right-radius:8px;"
           "border-bottom-right-radius:8px;"
           "}";
}

QString StyleHelper::getTabWidgetStyle()
{
    return "QTabWidget{"
           "border:none;"
           "}"
           "QTabWidget::pane{"
           "border:1px solid #222;"
           "border-radius:3px;"
           "}"
           "QWidget#tab{"
           "background: rgb(33, 40, 50);"
           "}";
}

QString StyleHelper::getBlankButtonStyle()
{
    return "QPushButton{"
            "border:none;"
            "background: #272D39;"
            "}"
            "QPushButton::hover{"
            "background: #372D49;"
           "}";
}

QString StyleHelper::getCrossNormalStyle()
{
    return "QPushButton{"
           "border:none;"
           "background: #272D39 url(:/resourse/images/cross_large.png) no-repeat center center;"
           "}"
           "QPushButton::hover{"
           "background-color: #372D49;"
           "}";
}

QString StyleHelper::getCrossVictoryStyle()
{
    return "QPushButton{"
           "border:none;"
           "background: #20401B url(:/resourse/images/cross_large.png) no-repeat center center;"
           "}";
}
QString StyleHelper::getCrossLostStyle()
{
    return "QPushButton{"
           "border:none;"
           "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(203, 0, 0, 255), stop:1 rgba(217, 0, 0, 255));"
           "background-image: url(:/resourse/images/cross_large.png);"
           "background-repeat:no-repeat;"
           "background-position:center center;"
           "}";
}



QString StyleHelper::getZeroNormalStyle()
{
    return "QPushButton{"
           "border:none;"
           "background: #272D39 url(:/resourse/images/zero_large.png) no-repeat center center;"
           "}"
           "QPushButton::hover{"
           "background-color: #372D49;"
           "}";
}

QString StyleHelper::getZeroVictoryStyle()
{
    return "QPushButton{"
           "border:none;"
           "background: #20401B url(:/resourse/images/zero_large.png) no-repeat center center;"
           "}";
}
QString StyleHelper::getZeroLostStyle()
{
    return "QPushButton{"
           "border:none;"
           "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(203, 0, 0, 255), stop:1 rgba(217, 0, 0, 255));"
           "background-image: url(:/resourse/images/zero_large.png);"
           "background-repeat:no-repeat;"
           "background-position:center center;"
           "}";
}

QString StyleHelper::getNormalMessageStyle()
{
    return "QLabel{"
            "font-family:'Roboto-medium';"
            "font-size:12px;"
            "background:none;"
            "color:#ffffff;"
           "}";
}
QString StyleHelper::getVictoryMessageStyle()
{
    return "QLabel{"
           "font-family:'Roboto-medium';"
           "font-size:12px;"
           "background:#055902;"
           "border:1px solid #1C7C32;"
           "color:#ffffff;"
           "}";
}
QString StyleHelper::getLostMessageStyle()
{
    return "QLabel{"
           "font-family:'Roboto-medium';"
           "font-size:12px;"
           "background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(203, 0, 0, 255), stop:1 rgba(217, 0, 0, 255));"
           "color:#ffffff;"
           "}";
}

QString StyleHelper::getAboutTextStyle()
{
    return "QLabel{"
           "font-family:'Roboto-medium';"
           "font-size:12px;"
           "color:#ffffff;"
           "font-style:italic;"
           "}";
}
