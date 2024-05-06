#include "UserAddProperty.h"
#include <QMessageBox>
#include "Dialog.h"

UserAddProperty::UserAddProperty(QWidget* parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
}
void UserAddProperty::setupUi(QStackedWidget* Form, System* system)
{
	if (Form->objectName().isEmpty())
		Form->setObjectName("Form");
	Form->resize(801, 741);
	frame = new QFrame(Form);
	frame->setObjectName("frame");
	frame->setGeometry(QRect(0, 0, 801, 741));
	frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
		"        font-family:Sans Serif Collection;\n"
		"        background:#1B425E;\n"
		"        font-size:24px;\n"
		"}\n"
		"#homeImage{\n"
		"background:#1B425E;\n"
		"border:none;\n"
		"}\n"
		"#headLabel{\n"
		"        background:#1B425E;\n"
		"        color:#CCD0CD;\n"
		"        font-weight:600;\n"
		"        font-size:30px;\n"
		"}\n"
		"#frame_2{\n"
		"        background:#CCD0CD;\n"
		"}\n"
		"QLabel{\n"
		"color:#2B2A2A;\n"
		"  background:#CCD0CD;\n"
		"}\n"
		"\n"
		"QLineEdit{\n"
		"        border:solid;\n"
		"       border-radius:5px;\n"
		"       background: white;\n"
		"        color:#2B2A2A;\n"
		"        font-size:15px;\n"
		"  }\n"
		"QComboBox{\n"
		"        background: white;\n"
		"        color:#2B2A2A;\n"
		"        border-style:solid; \n"
		" }\n"
		"QSpinBox{\n"
		"background: white;\n"
		" color:#2B2A2A;\n"
		"}\n"
		"#textEdit{\n"
		"        background: white;\n"
		"        color:#2B2A2A;\n"
		"        border-style:solid;\n"
		"        border-radius:5px;\n"
		"        font-size:15px;\n"
		" }\n"
		"#pushButton{\n"
		"background: #1B425E;\n"
		"color:white;\n"
		"border-st"
		"yle:solid;\n"
		"border-radius:5px;\n"
		"}\n"
		"#pushButton:hover{\n"
		"background: white;\n"
		"color: #1B425E;\n"
		"}\n"
		"#locationImage{\n"
		"background:#CCD0CD;\n"
		"border:none;\n"
		"}\n"
		"#squareFootage{\n"
		"background:#CCD0CD;\n"
		"border:none;\n"
		"}\n"
		"#dollarImage{\n"
		"background:#CCD0CD;\n"
		"border:none;\n"
		"}\n"
		"#roomNumber{\n"
		"background:#CCD0CD;\n"
		"border:none;\n"
		"}\n"
		"#type{\n"
		"background:#CCD0CD;\n"
		"border:none;\n"
		"}\n"
		"#description{\n"
		"background:#CCD0CD;\n"
		"border:none;\n"
		"}\n"
		"\n"
		"\n"
		""));
	frame->setFrameShape(QFrame::Shape::StyledPanel);
	frame->setFrameShadow(QFrame::Shadow::Raised);
	headLabel = new QLabel(frame);
	headLabel->setObjectName("headLabel");
	headLabel->setGeometry(QRect(270, 20, 301, 51));
	frame_2 = new QFrame(frame);
	frame_2->setObjectName("frame_2");
	frame_2->setGeometry(QRect(-10, 100, 991, 681));
	frame_2->setFrameShape(QFrame::Shape::StyledPanel);
	frame_2->setFrameShadow(QFrame::Shadow::Raised);
	lineEdit = new QLineEdit(frame_2);
	lineEdit->setObjectName("lineEdit");
	lineEdit->setGeometry(QRect(220, 160, 161, 41));
	lineEdit->setInputMethodHints(Qt::InputMethodHint::ImhDigitsOnly);
	lineEdit_2 = new QLineEdit(frame_2);
	lineEdit_2->setObjectName("lineEdit_2");
	lineEdit_2->setGeometry(QRect(40, 160, 171, 41));
	lineEdit_2->setInputMethodHints(Qt::InputMethodHint::ImhDigitsOnly);
	comboBox = new QComboBox(frame_2);
	comboBox->addItem(QString());
	comboBox->addItem(QString());
	comboBox->addItem(QString());
	comboBox->addItem(QString());
	comboBox->addItem(QString());
	comboBox->setObjectName("comboBox");
	comboBox->setGeometry(QRect(40, 70, 341, 41));
	comboBox->setCursor(QCursor(Qt::PointingHandCursor));
	formLabels = new QLabel(frame_2);
	formLabels->setObjectName("formLabels");
	formLabels->setGeometry(QRect(100, 20, 91, 31));
	label = new QLabel(frame_2);
	label->setObjectName("label");
	label->setGeometry(QRect(490, 10, 61, 51));
	label_2 = new QLabel(frame_2);
	label_2->setObjectName("label_2");
	label_2->setGeometry(QRect(470, 120, 61, 31));
	label_3 = new QLabel(frame_2);
	label_3->setObjectName("label_3");
	label_3->setGeometry(QRect(690, 120, 61, 31));
	spinBox = new QSpinBox(frame_2);
	spinBox->setObjectName("spinBox");
	spinBox->setGeometry(QRect(540, 160, 101, 41));
	spinBox->setCursor(QCursor(Qt::PointingHandCursor));
	spinBox->setMinimum(0);
	spinBox->setMaximum(2000);
	spinBox->setValue(0);
	spinBox_2 = new QSpinBox(frame_2);
	spinBox_2->setObjectName("spinBox_2");
	spinBox_2->setGeometry(QRect(650, 160, 111, 41));
	spinBox_2->setCursor(QCursor(Qt::PointingHandCursor));
	spinBox_2->setMinimum(0);
	spinBox_2->setMaximum(100);
	spinBox_2->setSingleStep(1);
	spinBox_2->setValue(0);
	comboBox_2 = new QComboBox(frame_2);
	comboBox_2->addItem(QString());
	comboBox_2->addItem(QString());
	comboBox_2->addItem(QString());
	comboBox_2->addItem(QString());
	comboBox_2->addItem(QString());
	comboBox_2->addItem(QString());
	comboBox_2->addItem(QString());
	comboBox_2->addItem(QString());
	comboBox_2->setObjectName("comboBox_2");
	comboBox_2->setGeometry(QRect(430, 70, 331, 41));
	comboBox_2->setCursor(QCursor(Qt::PointingHandCursor));
	label_4 = new QLabel(frame_2);
	label_4->setObjectName("label_4");
	label_4->setGeometry(QRect(580, 120, 71, 31));
	lineEdit_3 = new QLineEdit(frame_2);
	lineEdit_3->setObjectName("lineEdit_3");
	lineEdit_3->setGeometry(QRect(430, 160, 101, 41));
	lineEdit_3->setInputMethodHints(Qt::InputMethodHint::ImhDigitsOnly);
	label_5 = new QLabel(frame_2);
	label_5->setObjectName("label_5");
	label_5->setGeometry(QRect(370, 250, 131, 41));
	textEdit = new QTextEdit(frame_2);
	textEdit->setObjectName("textEdit");
	textEdit->setGeometry(QRect(90, 330, 641, 161));
	textEdit->setMaximumHeight(200);
	pushButton = new QPushButton(frame_2);
	pushButton->setObjectName("pushButton");
	pushButton->setGeometry(QRect(310, 540, 201, 41));
	pushButton->setCursor(QCursor(Qt::PointingHandCursor));
	locationImage = new QPushButton(frame_2);
	locationImage->setObjectName("locationImage");
	locationImage->setGeometry(QRect(40, 10, 51, 51));
	QIcon icon;
	icon.addFile(QString::fromUtf8(":/Assets/location.png"), QSize(), QIcon::Normal, QIcon::Off);
	locationImage->setIcon(icon);
	locationImage->setIconSize(QSize(40, 40));
	dollarImage = new QPushButton(frame_2);
	dollarImage->setObjectName("dollarImage");
	dollarImage->setGeometry(QRect(430, 120, 31, 31));
	QIcon icon1;
	icon1.addFile(QString::fromUtf8(":/Assets/price.png"), QSize(), QIcon::Normal, QIcon::Off);
	dollarImage->setIcon(icon1);
	dollarImage->setIconSize(QSize(28, 28));
	roomNumber = new QPushButton(frame_2);
	roomNumber->setObjectName("roomNumber");
	roomNumber->setGeometry(QRect(660, 120, 31, 31));
	QIcon icon2;
	icon2.addFile(QString::fromUtf8(":/Assets/number-of-rooms.png"), QSize(), QIcon::Normal, QIcon::Off);
	roomNumber->setIcon(icon2);
	roomNumber->setIconSize(QSize(25, 25));
	squareFootage = new QPushButton(frame_2);
	squareFootage->setObjectName("squareFootage");
	squareFootage->setGeometry(QRect(540, 120, 31, 31));
	QIcon icon3;
	icon3.addFile(QString::fromUtf8(":/Assets/squareFootage.png"), QSize(), QIcon::Normal, QIcon::Off);
	squareFootage->setIcon(icon3);
	squareFootage->setIconSize(QSize(40, 40));
	type = new QPushButton(frame_2);
	type->setObjectName("type");
	type->setGeometry(QRect(440, 10, 41, 51));
	QIcon icon4;
	icon4.addFile(QString::fromUtf8(":/Assets/Type.png"), QSize(), QIcon::Normal, QIcon::Off);
	type->setIcon(icon4);
	type->setIconSize(QSize(45, 45));
	description = new QPushButton(frame_2);
	description->setObjectName("description");
	description->setGeometry(QRect(330, 250, 41, 41));
	QIcon icon5;
	icon5.addFile(QString::fromUtf8(":/Assets/description.png"), QSize(), QIcon::Normal, QIcon::Off);
	description->setIcon(icon5);
	description->setIconSize(QSize(40, 40));
	label_6 = new QLabel(frame_2);
	label_6->setObjectName("label_6");
	label_6->setGeometry(QRect(90, 490, 71, 21));
	label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
		"font-size:10px;\n"
		"}"));
	homeImage = new QPushButton(frame);
	homeImage->setObjectName("homeImage");
	homeImage->setGeometry(QRect(210, 20, 51, 51));
	QIcon icon6;
	icon6.addFile(QString::fromUtf8(":/Assets/propertyHead.png"), QSize(), QIcon::Normal, QIcon::Off);
	homeImage->setIcon(icon6);
	homeImage->setIconSize(QSize(50, 50));
	QObject::connect(textEdit, &QTextEdit::textChanged, [=]() {
		QString text = textEdit->toPlainText();
		int charCount = text.length();
		// Update the character count label
		label_6->setText("Characters: " + QString::number(charCount));
		if (charCount > 200) {
			text.truncate(200);
			textEdit->setText(text);
			charCount = 200;
			textEdit->moveCursor(QTextCursor::End);
		}

		});
		retranslateUi(Form);
		QObject::connect(pushButton, &QPushButton::clicked, [=]() { {
				try {
					onPushButtonClick(system,Form);
					lineEdit->clear();
					lineEdit_2->clear();
					lineEdit_3->clear();
					comboBox->setCurrentIndex(0); // Reset to default index
					comboBox_2->setCurrentIndex(0); // Reset to default index
					textEdit->clear();
					spinBox->setValue(0);
					spinBox_2->setValue(0);

				}
				catch (const exception& e) {
					QDialog* qdialog = new QDialog();
					Dialog dialog;
					dialog.setupUi(qdialog, e.what());
					qdialog->exec();
				}
			}
			});
		QMetaObject::connectSlotsByName(Form);
		}
		void UserAddProperty::onPushButtonClick(System* system, QStackedWidget* Form) {
			QString apartmentNumber = lineEdit->text();
			QString buildingNumber = lineEdit_2->text();
			QString price = lineEdit_3->text();
			QString location = comboBox->currentText();
			QString propertyType = comboBox_2->currentText();
			QString description = textEdit->toPlainText();
			int space = spinBox->value();
			int room = spinBox_2->value();
			bool isbuildingNumber = true;
			bool isapartmentNumber = true;
			bool isPrice = true;
			for (int i = 0; i < buildingNumber.size(); i++) {
				if (buildingNumber[i].isSymbol() || buildingNumber[i].isSpace() || buildingNumber[i].isLetter() || buildingNumber[i].isMark()) {
					isbuildingNumber = false;
				}
			}
			for (int i = 0; i < apartmentNumber.size(); i++) {
				if (apartmentNumber[i].isSymbol() || apartmentNumber[i].isSpace() || apartmentNumber[i].isLetter() || apartmentNumber[i].isMark()) {
					isapartmentNumber = false;
				}
			}
			for (int i = 0; i < price.size(); i++) {
				if (price[i].isSymbol() || price[i].isSpace() || price[i].isLetter() || price[i].isMark()) {
					isPrice = false;
				}
			}
			if (apartmentNumber.isEmpty() || buildingNumber.isEmpty() || price.isEmpty() || location.isEmpty() ||
				propertyType.isEmpty() || space == 0 || room == 0 || description.isEmpty()) {
				throw exception("Fill all fields!");
			}
			else if (isbuildingNumber == false) {
				throw exception("Enter Valid Building Number");
			}
			else if (isapartmentNumber == false) {
				throw exception("Enter Valid Apartment Number");
			}
			else if (space < 49) {
				throw exception("Minimum Space is 50");
			}
			else if (price.toInt() < 499999) {
				throw exception("Minimum price $500,000");
			}
			else if (isPrice == false) {
				throw exception("Enter Valid Price");
			}
			else {
				system->AddProperty(location.toLocal8Bit().constData(), propertyType.toLocal8Bit().constData(), buildingNumber.toLocal8Bit().constData(), apartmentNumber.toInt(), space, room, price.toInt(), system->currentUserName, system->currentUserId, description.toLocal8Bit().constData());
				QMessageBox::information(this, "Success", "Request submitted successfully");
				for (int i = 0; i < Form->count(); ++i) {
					QWidget* currentWidget = Form->widget(i);
					if (currentWidget->objectName() == "Listings") {
						currentWidget = new Listings();
						Listings* listings = dynamic_cast<Listings*>(currentWidget);
						Form->hide();
						Form->setCurrentWidget(currentWidget);
						listings->setupUi(Form, system);
						Form->show();
						break;
					}
				}
			}
		}
		void UserAddProperty::retranslateUi(QStackedWidget* Form)
		{
			Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
			headLabel->setText(QCoreApplication::translate("Form", "Add Property Request", nullptr));
			lineEdit->setPlaceholderText(QCoreApplication::translate("Form", "  Apartment Number", nullptr));
			lineEdit_2->setPlaceholderText(QCoreApplication::translate("Form", "  Building Number", nullptr));
			comboBox->setItemText(0, QCoreApplication::translate("Form", "Cairo", nullptr));
			comboBox->setItemText(1, QCoreApplication::translate("Form", "Giza", nullptr));
			comboBox->setItemText(2, QCoreApplication::translate("Form", "Alexandria", nullptr));
			comboBox->setItemText(3, QString());
			comboBox->setItemText(4, QString());

			comboBox->setPlaceholderText(QCoreApplication::translate("Form", "  Choose Location", nullptr));
			formLabels->setText(QCoreApplication::translate("Form", "Location", nullptr));
			label->setText(QCoreApplication::translate("Form", "Type", nullptr));
			label_2->setText(QCoreApplication::translate("Form", "Price", nullptr));
			label_3->setText(QCoreApplication::translate("Form", "Room", nullptr));
			label_6->setText("Characters: 0");
			comboBox_2->setItemText(0, QCoreApplication::translate("Form", "Apartment", nullptr));
			comboBox_2->setItemText(1, QCoreApplication::translate("Form", "Duplex", nullptr));
			comboBox_2->setItemText(2, QCoreApplication::translate("Form", "Town House", nullptr));
			comboBox_2->setItemText(3, QCoreApplication::translate("Form", "Twin House", nullptr));
			comboBox_2->setItemText(4, QCoreApplication::translate("Form", "Pent House", nullptr));
			comboBox_2->setItemText(5, QCoreApplication::translate("Form", "Villa", nullptr));
			comboBox_2->setItemText(6, QCoreApplication::translate("Form", "Chalet", nullptr));
			comboBox_2->setItemText(7, QString());

			comboBox_2->setPlaceholderText(QCoreApplication::translate("Form", "  Choose Type", nullptr));
			label_4->setText(QCoreApplication::translate("Form", "Space", nullptr));
			lineEdit_3->setPlaceholderText(QCoreApplication::translate("Form", "Price", nullptr));
			label_5->setText(QCoreApplication::translate("Form", " Description", nullptr));
			pushButton->setText(QCoreApplication::translate("Form", "Submit", nullptr));
			locationImage->setText(QString());
			dollarImage->setText(QString());
			roomNumber->setText(QString());
			squareFootage->setText(QString());
			type->setText(QString());
			description->setText(QString());
			homeImage->setText(QString());
		}