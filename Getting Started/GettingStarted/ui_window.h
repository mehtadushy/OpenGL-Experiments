/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QSlider>
#include <QtGui/QWidget>
#include "myglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    MyGLWidget *myGLWidget;
    QSlider *xRot;
    QSlider *yRot;
    QSlider *zRot;

    void setupUi(QWidget *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QString::fromUtf8("Window"));
        Window->resize(821, 693);
        myGLWidget = new MyGLWidget(Window);
        myGLWidget->setObjectName(QString::fromUtf8("myGLWidget"));
        myGLWidget->setGeometry(QRect(0, 0, 631, 691));
        myGLWidget->setMouseTracking(true);
        xRot = new QSlider(Window);
        xRot->setObjectName(QString::fromUtf8("xRot"));
        xRot->setGeometry(QRect(640, 50, 160, 19));
        xRot->setMaximum(360);
        xRot->setSingleStep(15);
        xRot->setPageStep(15);
        xRot->setOrientation(Qt::Horizontal);
        xRot->setTickPosition(QSlider::TicksAbove);
        xRot->setTickInterval(15);
        yRot = new QSlider(Window);
        yRot->setObjectName(QString::fromUtf8("yRot"));
        yRot->setGeometry(QRect(640, 120, 160, 19));
        yRot->setMaximum(360);
        yRot->setSingleStep(15);
        yRot->setPageStep(15);
        yRot->setOrientation(Qt::Horizontal);
        yRot->setTickPosition(QSlider::TicksAbove);
        yRot->setTickInterval(15);
        zRot = new QSlider(Window);
        zRot->setObjectName(QString::fromUtf8("zRot"));
        zRot->setGeometry(QRect(640, 190, 160, 19));
        zRot->setMaximum(360);
        zRot->setSingleStep(15);
        zRot->setPageStep(15);
        zRot->setOrientation(Qt::Horizontal);
        zRot->setTickPosition(QSlider::TicksAbove);
        zRot->setTickInterval(15);

        retranslateUi(Window);
        QObject::connect(xRot, SIGNAL(valueChanged(int)), myGLWidget, SLOT(setXRotation(int)));
        QObject::connect(yRot, SIGNAL(valueChanged(int)), myGLWidget, SLOT(setYRotation(int)));
        QObject::connect(zRot, SIGNAL(valueChanged(int)), myGLWidget, SLOT(setZRotation(int)));

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QWidget *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
