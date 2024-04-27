#ifndef DESIGNEROQAKAG_H
#define DESIGNEROQAKAG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "Propertycard.h"
#include "Dialog.h"
#include "Signup.h"
#include "signup.h"
#include "ui_Signup.h"

QT_BEGIN_NAMESPACE
QT_BEGIN_NAMESPACE


Signup::Signup(QWidget* parent)
    : QWidget(parent)
{
    //ui.setupUi(this);
}
/********************************************************************************
** Form generated from reading UI file 'designerOQAkAg.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/







void Signup::setupUi(QWidget* Signup, System* system)
{
    if (Signup->objectName().isEmpty())
        Signup->setObjectName("Signup");
    Signup->resize(1024, 717);
    frame = new QFrame(Signup);
    frame->setObjectName("frame");
    frame->setGeometry(QRect(-3, -5, 1031, 732));
    frame->setStyleSheet(QString::fromUtf8("*{\n"
        "font-family:sans-serif;\n"
        "}\n"
        "QWidget{\n"
        "background-image: url(Login.png);\n"
        "background: rgba(255, 255, 255, 0.1) url(:/Assets/Login.png);\n"
        "}\n"
        "QPushButton{\n"
        "border-radius: 5px;\n"
        "font-size:20px;\n"
        "color: black ;\n"
        "font-weight:bold;\n"
        "background: #CCD0CD ;\n"
        "}\n"
        "QPushButton:hover {\n"
        "    background:#5287FE;\n"
        "     color: white;\n"
        "\n"
        "}\n"
        "QLabel{\n"
        "border-style:solid;\n"
        "border-color:black;\n"
        "border-bottom:2px;\n"
        "color:black;\n"
        "}"));
    frame->setFrameShape(QFrame::Shape::StyledPanel);
    frame->setFrameShadow(QFrame::Shadow::Raised);
    frame_2 = new QFrame(frame);
    frame_2->setObjectName("frame_2");
    frame_2->setGeometry(QRect(600, 20, 385, 671));
    frame_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
        "		background : white;\n"
        "		border-radius:20px;\n"
        "		}\n"
        "		QLineEdit{\n"
        "		padding-left: 15px;\n"
        "		color:black;\n"
        "		background: #FAFAFA;\n"
        "		border: none;\n"
        "		border-radius:15px;\n"
        "		font-size:15px;\n"
        "		}\n"
        ""));
    frame_2->setFrameShape(QFrame::Shape::StyledPanel);
    frame_2->setFrameShadow(QFrame::Shadow::Raised);
    frame_2->setLineWidth(1);
    label = new QLabel(frame_2);
    label->setObjectName("label");
    label->setGeometry(QRect(50, 50, 131, 51));
    label->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "		border-radius:0px;\n"
        "	border-bottom:2px solid black;\n"
        "		font-weight:bold;\n"
        "		color:black;\n"
        "font-size:18px;\n"
        "		}\n"
        ""));
    label_2 = new QLabel(frame_2);
    label_2->setObjectName("label_2");
    label_2->setGeometry(QRect(50, 130, 121, 16));
    label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "		font-size:18px;\n"
        "		font-weight:700px;\n"
        "		color:black;\n"
        "	}"));
    lineEdit = new QLineEdit(frame_2);
    lineEdit->setObjectName("lineEdit");
    lineEdit->setGeometry(QRect(50, 160, 231, 41));
    label_3 = new QLabel(frame_2);
    label_3->setObjectName("label_3");
    label_3->setGeometry(QRect(60, 220, 121, 16));
    label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "		font-size:18px;\n"
        "		font-weight:700px;\n"
        "		color:black;\n"
        "	}"));
    label_7 = new QLabel(frame_2);
    label_7->setObjectName("label_7");
    label_7->setGeometry(QRect(50, 220, 91, 16));
    label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "		font-size:18px;\n"
        "		font-weight:700px;\n"
        "		color:black;\n"
        "		}"));
    lineEdit_3 = new QLineEdit(frame_2);
    lineEdit_3->setObjectName("lineEdit_3");
    lineEdit_3->setGeometry(QRect(50, 250, 231, 41));
    label_8 = new QLabel(frame_2);
    label_8->setObjectName("label_8");
    label_8->setGeometry(QRect(50, 310, 91, 16));
    label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "		font-size:18px;\n"
        "		font-weight:700px;\n"
        "		color:black;\n"
        "		}"));
    lineEdit_4 = new QLineEdit(frame_2);
    lineEdit_4->setObjectName("lineEdit_4");
    lineEdit_4->setGeometry(QRect(40, 340, 231, 41));
    label_9 = new QLabel(frame_2);
    label_9->setObjectName("label_9");
    label_9->setGeometry(QRect(50, 390, 91, 16));
    label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "		font-size:18px;\n"
        "		font-weight:700px;\n"
        "		color:black;\n"
        "		}"));
    lineEdit_5 = new QLineEdit(frame_2);
    lineEdit_5->setObjectName("lineEdit_5");
    lineEdit_5->setGeometry(QRect(40, 420, 231, 41));
    label_10 = new QLabel(frame_2);
    label_10->setObjectName("label_10");
    label_10->setGeometry(QRect(50, 480, 131, 16));
    label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "		font-size:18px;\n"
        "		font-weight:700px;\n"
        "		color:black;\n"
        "		}"));
    lineEdit_6 = new QLineEdit(frame_2);
    lineEdit_6->setObjectName("lineEdit_6");
    lineEdit_6->setGeometry(QRect(40, 510, 231, 41));
    pushButton = new QPushButton(frame_2);
    pushButton->setObjectName("pushButton");
    pushButton->setGeometry(QRect(110, 570, 151, 50));
    label_11 = new QLabel(frame_2);
    label_11->setObjectName("label_11");
    label_11->setGeometry(QRect(55, 640, 201, 20));
    label_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "		font-weight:700;\n"
        "		color:black;\n"
        "font-size:15px\n"
        "		}"));
    pushButton_2 = new QPushButton(frame_2);
    pushButton_2->setObjectName("pushButton_2");
    pushButton_2->setGeometry(QRect(257, 636, 61, 24));
    pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
        "text-decoration:underline;\n"
        "background:white;\n"
        "font-size:15px;\n"
        "color:#3F6793;\n"
        "font-weight:700;\n"
        "}"));

    retranslateUi(Signup);

    QMetaObject::connectSlotsByName(Signup);
} // setupUi

void Signup::retranslateUi(QWidget* Signup)
{
    Signup->setWindowTitle(QCoreApplication::translate("Signup", "Form", nullptr));
    label->setText(QCoreApplication::translate("Signup", "Sign up", nullptr));
    label_2->setText(QCoreApplication::translate("Signup", "First Name", nullptr));
    lineEdit->setPlaceholderText(QCoreApplication::translate("Signup", "Enter First Name", nullptr));
    label_3->setText(QString());
    label_7->setText(QCoreApplication::translate("Signup", "Last Name", nullptr));
    lineEdit_3->setPlaceholderText(QCoreApplication::translate("Signup", "Enter Last Name", nullptr));
    label_8->setText(QCoreApplication::translate("Signup", "National Id", nullptr));
    lineEdit_4->setPlaceholderText(QCoreApplication::translate("Signup", "Enter National Id", nullptr));
    label_9->setText(QCoreApplication::translate("Signup", "Password", nullptr));
    lineEdit_5->setPlaceholderText(QCoreApplication::translate("Signup", "Enter Password", nullptr));
    label_10->setText(QCoreApplication::translate("Signup", "Phone Number", nullptr));
    lineEdit_6->setPlaceholderText(QCoreApplication::translate("Signup", "Enter Phone number", nullptr));
    pushButton->setText(QCoreApplication::translate("Signup", "Sign up", nullptr));
    label_11->setText(QCoreApplication::translate("Signup", "<html><head/><body><p>You already have account?</p></body></html>", nullptr));
    pushButton_2->setText(QCoreApplication::translate("Signup", "Log in", nullptr));
} // retranslateUi



// namespace Ui

QT_END_NAMESPACE

#endif // DESIGNEROQAKAG_H


Signup::~Signup()
{}