/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *labelCurrentValue;
    QPushButton *neutralButton;
    QPushButton *decrementButton;
    QPushButton *incrementButton;
    QDoubleSpinBox *spinValue;
    QLabel *label_3;
    QComboBox *comboBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(791, 564);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(540, 10, 251, 151));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 10, 181, 41));
        QFont font;
        font.setPointSize(18);
        label_2->setFont(font);
        labelCurrentValue = new QLabel(centralWidget);
        labelCurrentValue->setObjectName(QStringLiteral("labelCurrentValue"));
        labelCurrentValue->setGeometry(QRect(380, 10, 131, 41));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        labelCurrentValue->setFont(font1);
        neutralButton = new QPushButton(centralWidget);
        neutralButton->setObjectName(QStringLiteral("neutralButton"));
        neutralButton->setGeometry(QRect(240, 230, 151, 61));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        neutralButton->setFont(font2);
        decrementButton = new QPushButton(centralWidget);
        decrementButton->setObjectName(QStringLiteral("decrementButton"));
        decrementButton->setGeometry(QRect(30, 230, 151, 61));
        decrementButton->setFont(font2);
        incrementButton = new QPushButton(centralWidget);
        incrementButton->setObjectName(QStringLiteral("incrementButton"));
        incrementButton->setGeometry(QRect(450, 230, 151, 61));
        incrementButton->setFont(font2);
        spinValue = new QDoubleSpinBox(centralWidget);
        spinValue->setObjectName(QStringLiteral("spinValue"));
        spinValue->setGeometry(QRect(210, 330, 231, 61));
        spinValue->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 340, 161, 31));
        QFont font3;
        font3.setPointSize(15);
        label_3->setFont(font3);
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 20, 141, 27));
        QFont font4;
        font4.setPointSize(12);
        comboBox->setFont(font4);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 791, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PWM Duty Cycle", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "  <html><head/><body><span style=\" font-weight:600;\">PWM Duty Cycle:</span><br>\n"
"<br>50 Hz, 20ms frame, 12 bit resolution\n"
"<br>\n"
"<br><span style=\" font-weight:600;\">Duty Cycle Reference</span>\n"
"<br>Full Reverse: 1.0 ms  - 204\n"
"<br>Neutral 1.5 ms&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;- 307\n"
"<br>Full Forward 2.0 ms  - 409\n"
"</body>\n"
"</html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Current Setting: ", Q_NULLPTR));
        labelCurrentValue->setText(QApplication::translate("MainWindow", "307", Q_NULLPTR));
        neutralButton->setText(QApplication::translate("MainWindow", "Neutral", Q_NULLPTR));
        decrementButton->setText(QApplication::translate("MainWindow", "Decrement", Q_NULLPTR));
        incrementButton->setText(QApplication::translate("MainWindow", "Increment", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Set Duty Cycle", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Throttle ESC", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Steering", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
