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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *neutralButton;
    QPushButton *forwardButton;
    QPushButton *reverseButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *currentSetting;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(745, 447);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        neutralButton = new QPushButton(centralWidget);
        neutralButton->setObjectName(QStringLiteral("neutralButton"));
        neutralButton->setGeometry(QRect(260, 130, 161, 71));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        neutralButton->setFont(font);
        neutralButton->setContextMenuPolicy(Qt::NoContextMenu);
        forwardButton = new QPushButton(centralWidget);
        forwardButton->setObjectName(QStringLiteral("forwardButton"));
        forwardButton->setGeometry(QRect(500, 130, 161, 71));
        forwardButton->setFont(font);
        reverseButton = new QPushButton(centralWidget);
        reverseButton->setObjectName(QStringLiteral("reverseButton"));
        reverseButton->setGeometry(QRect(20, 130, 161, 71));
        reverseButton->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 291, 71));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 0, 161, 111));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 20, 191, 41));
        QFont font1;
        font1.setPointSize(18);
        label_3->setFont(font1);
        currentSetting = new QLabel(centralWidget);
        currentSetting->setObjectName(QStringLiteral("currentSetting"));
        currentSetting->setGeometry(QRect(420, 30, 311, 21));
        currentSetting->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calibrate Throttle", Q_NULLPTR));
        neutralButton->setText(QApplication::translate("MainWindow", "Neutral", Q_NULLPTR));
        forwardButton->setText(QApplication::translate("MainWindow", "Full Forward", Q_NULLPTR));
        reverseButton->setText(QApplication::translate("MainWindow", "Full Reverse", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><br><span style=\" font-weight:600;\">PWM Duty Cycle:</span><br>\n"
"<br>Full Reverse: 1.0 ms\n"
"<br>Neutral: &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1.5 ms\n"
"<br>Full Forward: 2.0 ms\n"
"</body>\n"
"</html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Current Setting:", Q_NULLPTR));
        currentSetting->setText(QApplication::translate("MainWindow", "Neutral", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
