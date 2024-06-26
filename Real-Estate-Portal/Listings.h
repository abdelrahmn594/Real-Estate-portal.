/********************************************************************************
** Form generated from reading UI file 'ListingsplqCrI.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef LISTINGSPLQCRI_H
#define LISTINGSPLQCRI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <QStackedWidget>
#include <QScrollArea>
#include <QToolButton>
#include <QMenu>
#include <QAction>
#include <QMouseEvent>
#include "System.h"
#include "UserAddProperty.h"
#include "PropertyDetails.h"
QT_BEGIN_NAMESPACE

class Listings : public QWidget
{
public:
    QWidget* widget;
    QLabel* label;
    QPushButton* pushButton_3;
    QWidget* widget_2;
    QLabel* label_2;
    QComboBox* comboBox;
    QLabel* label_3;
    QComboBox* comboBox_2;
    QLabel* label_4;
    QComboBox* comboBox_3;
    QLabel* label_5;
    QLineEdit* lineEdit;
    QFrame* line;
    QLineEdit* lineEdit_2;
    QLabel* label_6;
    QLineEdit* lineEdit_3;
    QFrame* line_2;
    QLineEdit* lineEdit_4;
    QPushButton* pushButton;
    QFrame* line_5;
    QScrollArea* scrollArea;
    QWidget* scrollAreaWidgetContents;
    QWidget* widget_3;
    QWidget* horizontalWidget;
    QHBoxLayout* horizontalLayout;
    QLabel* label_13;
    QFrame* line_6;
    QLabel* label_14;
    QLabel* label_15;
    QFrame* line_7;
    QLabel* label_16;
    QLabel* label_17;
    QLabel* label_18;
    QFrame* line_8;
    QPushButton* pushButton_2;
    QPushButton* pushButton_4;
    QLabel* label_19;
    QWidget* widget_4;
    QLabel* label_20;
    QLabel* label_21;
    QWidget* horizontalWidget_2;
    QHBoxLayout* horizontalLayout_3;
    QLabel* label_24;
    QFrame* line_10;
    QLabel* label_25;
    QPushButton* pushButton_6;

    void setupUi(QStackedWidget* ListingsClass,System* system);
    void drawBoxes(QWidget* scrollAreaWidgetContents, unordered_map<string, Property*> filtered, System* system,QScrollArea* scrollArea,QStackedWidget* ListedComponents);
    void drawBoxes(QWidget* scrollAreaWidgetContents, map<int, unordered_map<string, Property*>> filtered, System* system, QScrollArea* scrollArea, QStackedWidget* ListedComponents);

    void retranslateUi(QStackedWidget* ListingsClass);
    

};

namespace Ui {
    class ListingsClass : public Listings {};
} // namespace Ui
class ClickEventFilter : public QObject {
public:
    QList<QWidget*> widgets;
    ClickEventFilter(QStackedWidget* stackedWidget, System* system, string propertyId, QObject* parent = nullptr);
    QStackedWidget* stackedWidget;
    System* system;
    string propertyId;
    void addWidget(QWidget* widget);

protected:
    // Override eventFilter to handle mouse events
    bool eventFilter(QObject* obj, QEvent* event)  override;
};
QT_END_NAMESPACE

#endif // LISTINGSPLQCRI_H
