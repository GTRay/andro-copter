/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "plotter.h"
#include "spacespin.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_7;
    QGroupBox *regulatorsGroup;
    QGridLayout *gridLayout_3;
    QPushButton *resetDeviceYawButton;
    QLabel *label_10;
    SpaceSpin *reguCoefRollI;
    QLabel *label_9;
    SpaceSpin *reguCoefPitchP;
    QLabel *label_8;
    SpaceSpin *reguCoefYawP;
    SpaceSpin *reguCoefPitchI;
    SpaceSpin *reguCoefPitchD;
    SpaceSpin *reguCoefYawD;
    QLabel *label_6;
    QLabel *label_7;
    SpaceSpin *reguCoefRollP;
    SpaceSpin *reguCoefYawI;
    QLabel *label_11;
    SpaceSpin *reguCoefRollD;
    QCheckBox *regulatorsOnCheckBox;
    QPushButton *emergencyButton;
    QCheckBox *loggingCheckbox;
    QLabel *label_21;
    SpaceSpin *reguCoefAltitudeP;
    SpaceSpin *reguCoefAltitudeI;
    SpaceSpin *reguCoefAltitudeD;
    QGroupBox *phoneConnectGroup;
    QHBoxLayout *horizontalLayout;
    QLabel *statusLabel;
    QGroupBox *phoneStateGroup;
    QGridLayout *gridLayout_4;
    QLabel *label_12;
    Plotter *rollGraphic;
    Plotter *pitchGraphic;
    QLabel *currentYawLabel;
    Plotter *yawGraphic;
    QLabel *currentRollCommandLabel;
    QLabel *label_16;
    QLabel *currentBatteryLabel;
    QLabel *currentRollLabel;
    QFrame *line;
    QLabel *currentYawCommandLabel;
    QLabel *label_17;
    QLabel *regulatorStateLabel;
    QLabel *currentTemperatureLabel;
    QLabel *label_19;
    QLabel *label_18;
    QLabel *currentPitchLabel;
    QLabel *label;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *currentPitchCommandLabel;
    QLabel *label_13;
    Plotter *altitudeGraphic;
    QLabel *label_3;
    QLabel *currentAltitudeLabel;
    QLabel *label_22;
    QLabel *currentAltitudeCommandLabel;
    QGroupBox *quadControlGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label_20;
    QCheckBox *lockYawTargetCheckBox;
    QSlider *thrustSlider;
    QSlider *yawSlider;
    QLabel *label_4;
    QLabel *label_5;
    QSlider *pitchSlider;
    QLabel *yawLabel;
    QLabel *pitchLabel;
    QLabel *thrustLabel;
    QSlider *rollSlider;
    QLabel *rollLabel;
    QCheckBox *altitudeLockCheckbox;
    QGroupBox *messagesGroup;
    QGridLayout *gridLayout;
    QPushButton *clearLogButton;
    QPushButton *saveLogButton;
    QPlainTextEdit *logEdit;
    QGroupBox *fpvBox;
    QGridLayout *gridLayout_5;
    QCheckBox *fpvSaveFramesCheckbox;
    QPushButton *fpvTakePictureButton;
    QLabel *fpvVideoLabel;
    QComboBox *fpvCombo;
    QLabel *fpvStatusLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1019, 579);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_7 = new QGridLayout(centralWidget);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        regulatorsGroup = new QGroupBox(centralWidget);
        regulatorsGroup->setObjectName(QStringLiteral("regulatorsGroup"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(regulatorsGroup->sizePolicy().hasHeightForWidth());
        regulatorsGroup->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(regulatorsGroup);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        resetDeviceYawButton = new QPushButton(regulatorsGroup);
        resetDeviceYawButton->setObjectName(QStringLiteral("resetDeviceYawButton"));

        gridLayout_3->addWidget(resetDeviceYawButton, 6, 2, 1, 2);

        label_10 = new QLabel(regulatorsGroup);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 0, 2, 1, 1);

        reguCoefRollI = new SpaceSpin(regulatorsGroup);
        reguCoefRollI->setObjectName(QStringLiteral("reguCoefRollI"));
        reguCoefRollI->setEnabled(true);
        reguCoefRollI->setDecimals(3);
        reguCoefRollI->setMaximum(10);
        reguCoefRollI->setSingleStep(0.01);

        gridLayout_3->addWidget(reguCoefRollI, 3, 2, 1, 1);

        label_9 = new QLabel(regulatorsGroup);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 0, 1, 1, 1);

        reguCoefPitchP = new SpaceSpin(regulatorsGroup);
        reguCoefPitchP->setObjectName(QStringLiteral("reguCoefPitchP"));
        reguCoefPitchP->setDecimals(3);
        reguCoefPitchP->setMaximum(10);
        reguCoefPitchP->setSingleStep(1);
        reguCoefPitchP->setValue(0);

        gridLayout_3->addWidget(reguCoefPitchP, 2, 1, 1, 1);

        label_8 = new QLabel(regulatorsGroup);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 3, 0, 1, 1);

        reguCoefYawP = new SpaceSpin(regulatorsGroup);
        reguCoefYawP->setObjectName(QStringLiteral("reguCoefYawP"));
        reguCoefYawP->setEnabled(true);
        reguCoefYawP->setFrame(true);
        reguCoefYawP->setReadOnly(false);
        reguCoefYawP->setAccelerated(false);
        reguCoefYawP->setDecimals(3);
        reguCoefYawP->setMaximum(10);
        reguCoefYawP->setSingleStep(0.01);
        reguCoefYawP->setValue(0);

        gridLayout_3->addWidget(reguCoefYawP, 1, 1, 1, 1);

        reguCoefPitchI = new SpaceSpin(regulatorsGroup);
        reguCoefPitchI->setObjectName(QStringLiteral("reguCoefPitchI"));
        reguCoefPitchI->setEnabled(true);
        reguCoefPitchI->setDecimals(3);
        reguCoefPitchI->setMaximum(10);
        reguCoefPitchI->setSingleStep(1);

        gridLayout_3->addWidget(reguCoefPitchI, 2, 2, 1, 1);

        reguCoefPitchD = new SpaceSpin(regulatorsGroup);
        reguCoefPitchD->setObjectName(QStringLiteral("reguCoefPitchD"));
        reguCoefPitchD->setDecimals(3);
        reguCoefPitchD->setMaximum(5);
        reguCoefPitchD->setSingleStep(0.01);

        gridLayout_3->addWidget(reguCoefPitchD, 2, 3, 1, 1);

        reguCoefYawD = new SpaceSpin(regulatorsGroup);
        reguCoefYawD->setObjectName(QStringLiteral("reguCoefYawD"));
        reguCoefYawD->setEnabled(true);
        reguCoefYawD->setDecimals(3);
        reguCoefYawD->setMaximum(5);
        reguCoefYawD->setSingleStep(0.01);

        gridLayout_3->addWidget(reguCoefYawD, 1, 3, 1, 1);

        label_6 = new QLabel(regulatorsGroup);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(regulatorsGroup);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        reguCoefRollP = new SpaceSpin(regulatorsGroup);
        reguCoefRollP->setObjectName(QStringLiteral("reguCoefRollP"));
        reguCoefRollP->setEnabled(true);
        reguCoefRollP->setDecimals(3);
        reguCoefRollP->setMaximum(10);
        reguCoefRollP->setSingleStep(1);
        reguCoefRollP->setValue(0);

        gridLayout_3->addWidget(reguCoefRollP, 3, 1, 1, 1);

        reguCoefYawI = new SpaceSpin(regulatorsGroup);
        reguCoefYawI->setObjectName(QStringLiteral("reguCoefYawI"));
        reguCoefYawI->setEnabled(true);
        reguCoefYawI->setDecimals(3);
        reguCoefYawI->setMaximum(10);
        reguCoefYawI->setSingleStep(0.01);

        gridLayout_3->addWidget(reguCoefYawI, 1, 2, 1, 1);

        label_11 = new QLabel(regulatorsGroup);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 0, 3, 1, 1);

        reguCoefRollD = new SpaceSpin(regulatorsGroup);
        reguCoefRollD->setObjectName(QStringLiteral("reguCoefRollD"));
        reguCoefRollD->setEnabled(true);
        reguCoefRollD->setDecimals(3);
        reguCoefRollD->setMaximum(5);
        reguCoefRollD->setSingleStep(0.01);

        gridLayout_3->addWidget(reguCoefRollD, 3, 3, 1, 1);

        regulatorsOnCheckBox = new QCheckBox(regulatorsGroup);
        regulatorsOnCheckBox->setObjectName(QStringLiteral("regulatorsOnCheckBox"));

        gridLayout_3->addWidget(regulatorsOnCheckBox, 5, 0, 1, 2);

        emergencyButton = new QPushButton(regulatorsGroup);
        emergencyButton->setObjectName(QStringLiteral("emergencyButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(emergencyButton->sizePolicy().hasHeightForWidth());
        emergencyButton->setSizePolicy(sizePolicy2);
        emergencyButton->setMinimumSize(QSize(0, 0));
        emergencyButton->setMaximumSize(QSize(16777215, 16777215));
        emergencyButton->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(emergencyButton, 6, 0, 1, 2);

        loggingCheckbox = new QCheckBox(regulatorsGroup);
        loggingCheckbox->setObjectName(QStringLiteral("loggingCheckbox"));

        gridLayout_3->addWidget(loggingCheckbox, 5, 2, 1, 2);

        label_21 = new QLabel(regulatorsGroup);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_3->addWidget(label_21, 4, 0, 1, 1);

        reguCoefAltitudeP = new SpaceSpin(regulatorsGroup);
        reguCoefAltitudeP->setObjectName(QStringLiteral("reguCoefAltitudeP"));
        reguCoefAltitudeP->setDecimals(3);
        reguCoefAltitudeP->setMaximum(50);

        gridLayout_3->addWidget(reguCoefAltitudeP, 4, 1, 1, 1);

        reguCoefAltitudeI = new SpaceSpin(regulatorsGroup);
        reguCoefAltitudeI->setObjectName(QStringLiteral("reguCoefAltitudeI"));
        reguCoefAltitudeI->setEnabled(true);
        reguCoefAltitudeI->setDecimals(1);
        reguCoefAltitudeI->setMaximum(10000);
        reguCoefAltitudeI->setSingleStep(1);

        gridLayout_3->addWidget(reguCoefAltitudeI, 4, 2, 1, 1);

        reguCoefAltitudeD = new SpaceSpin(regulatorsGroup);
        reguCoefAltitudeD->setObjectName(QStringLiteral("reguCoefAltitudeD"));
        reguCoefAltitudeD->setDecimals(3);

        gridLayout_3->addWidget(reguCoefAltitudeD, 4, 3, 1, 1);


        gridLayout_7->addWidget(regulatorsGroup, 1, 0, 2, 1);

        phoneConnectGroup = new QGroupBox(centralWidget);
        phoneConnectGroup->setObjectName(QStringLiteral("phoneConnectGroup"));
        sizePolicy1.setHeightForWidth(phoneConnectGroup->sizePolicy().hasHeightForWidth());
        phoneConnectGroup->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(phoneConnectGroup);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        statusLabel = new QLabel(phoneConnectGroup);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        sizePolicy1.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(statusLabel);


        gridLayout_7->addWidget(phoneConnectGroup, 0, 0, 1, 1);

        phoneStateGroup = new QGroupBox(centralWidget);
        phoneStateGroup->setObjectName(QStringLiteral("phoneStateGroup"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(10);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(phoneStateGroup->sizePolicy().hasHeightForWidth());
        phoneStateGroup->setSizePolicy(sizePolicy3);
        phoneStateGroup->setMinimumSize(QSize(300, 0));
        gridLayout_4 = new QGridLayout(phoneStateGroup);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_12 = new QLabel(phoneStateGroup);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_4->addWidget(label_12, 11, 0, 1, 1);

        rollGraphic = new Plotter(phoneStateGroup);
        rollGraphic->setObjectName(QStringLiteral("rollGraphic"));

        gridLayout_4->addWidget(rollGraphic, 15, 0, 1, 2);

        pitchGraphic = new Plotter(phoneStateGroup);
        pitchGraphic->setObjectName(QStringLiteral("pitchGraphic"));

        gridLayout_4->addWidget(pitchGraphic, 12, 0, 1, 2);

        currentYawLabel = new QLabel(phoneStateGroup);
        currentYawLabel->setObjectName(QStringLiteral("currentYawLabel"));

        gridLayout_4->addWidget(currentYawLabel, 6, 1, 1, 1);

        yawGraphic = new Plotter(phoneStateGroup);
        yawGraphic->setObjectName(QStringLiteral("yawGraphic"));

        gridLayout_4->addWidget(yawGraphic, 8, 0, 1, 2);

        currentRollCommandLabel = new QLabel(phoneStateGroup);
        currentRollCommandLabel->setObjectName(QStringLiteral("currentRollCommandLabel"));

        gridLayout_4->addWidget(currentRollCommandLabel, 14, 1, 1, 1);

        label_16 = new QLabel(phoneStateGroup);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_4->addWidget(label_16, 14, 0, 1, 1);

        currentBatteryLabel = new QLabel(phoneStateGroup);
        currentBatteryLabel->setObjectName(QStringLiteral("currentBatteryLabel"));

        gridLayout_4->addWidget(currentBatteryLabel, 0, 1, 1, 1);

        currentRollLabel = new QLabel(phoneStateGroup);
        currentRollLabel->setObjectName(QStringLiteral("currentRollLabel"));

        gridLayout_4->addWidget(currentRollLabel, 13, 1, 1, 1);

        line = new QFrame(phoneStateGroup);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 4, 0, 1, 2);

        currentYawCommandLabel = new QLabel(phoneStateGroup);
        currentYawCommandLabel->setObjectName(QStringLiteral("currentYawCommandLabel"));

        gridLayout_4->addWidget(currentYawCommandLabel, 7, 1, 1, 1);

        label_17 = new QLabel(phoneStateGroup);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_4->addWidget(label_17, 0, 0, 1, 1);

        regulatorStateLabel = new QLabel(phoneStateGroup);
        regulatorStateLabel->setObjectName(QStringLiteral("regulatorStateLabel"));

        gridLayout_4->addWidget(regulatorStateLabel, 2, 1, 1, 1);

        currentTemperatureLabel = new QLabel(phoneStateGroup);
        currentTemperatureLabel->setObjectName(QStringLiteral("currentTemperatureLabel"));
        currentTemperatureLabel->setEnabled(false);

        gridLayout_4->addWidget(currentTemperatureLabel, 1, 1, 1, 1);

        label_19 = new QLabel(phoneStateGroup);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_4->addWidget(label_19, 2, 0, 1, 1);

        label_18 = new QLabel(phoneStateGroup);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setEnabled(false);

        gridLayout_4->addWidget(label_18, 1, 0, 1, 1);

        currentPitchLabel = new QLabel(phoneStateGroup);
        currentPitchLabel->setObjectName(QStringLiteral("currentPitchLabel"));

        gridLayout_4->addWidget(currentPitchLabel, 9, 1, 1, 1);

        label = new QLabel(phoneStateGroup);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 13, 0, 1, 1);

        label_14 = new QLabel(phoneStateGroup);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_4->addWidget(label_14, 7, 0, 1, 1);

        label_15 = new QLabel(phoneStateGroup);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_4->addWidget(label_15, 9, 0, 1, 1);

        currentPitchCommandLabel = new QLabel(phoneStateGroup);
        currentPitchCommandLabel->setObjectName(QStringLiteral("currentPitchCommandLabel"));

        gridLayout_4->addWidget(currentPitchCommandLabel, 11, 1, 1, 1);

        label_13 = new QLabel(phoneStateGroup);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_4->addWidget(label_13, 6, 0, 1, 1);

        altitudeGraphic = new Plotter(phoneStateGroup);
        altitudeGraphic->setObjectName(QStringLiteral("altitudeGraphic"));

        gridLayout_4->addWidget(altitudeGraphic, 18, 0, 1, 2);

        label_3 = new QLabel(phoneStateGroup);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_4->addWidget(label_3, 16, 0, 1, 1);

        currentAltitudeLabel = new QLabel(phoneStateGroup);
        currentAltitudeLabel->setObjectName(QStringLiteral("currentAltitudeLabel"));

        gridLayout_4->addWidget(currentAltitudeLabel, 16, 1, 1, 1);

        label_22 = new QLabel(phoneStateGroup);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_4->addWidget(label_22, 17, 0, 1, 1);

        currentAltitudeCommandLabel = new QLabel(phoneStateGroup);
        currentAltitudeCommandLabel->setObjectName(QStringLiteral("currentAltitudeCommandLabel"));

        gridLayout_4->addWidget(currentAltitudeCommandLabel, 17, 1, 1, 1);


        gridLayout_7->addWidget(phoneStateGroup, 0, 1, 5, 1);

        quadControlGroupBox = new QGroupBox(centralWidget);
        quadControlGroupBox->setObjectName(QStringLiteral("quadControlGroupBox"));
        quadControlGroupBox->setEnabled(false);
        sizePolicy.setHeightForWidth(quadControlGroupBox->sizePolicy().hasHeightForWidth());
        quadControlGroupBox->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(quadControlGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(quadControlGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label_20 = new QLabel(quadControlGroupBox);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_2->addWidget(label_20, 3, 0, 1, 1);

        lockYawTargetCheckBox = new QCheckBox(quadControlGroupBox);
        lockYawTargetCheckBox->setObjectName(QStringLiteral("lockYawTargetCheckBox"));
        lockYawTargetCheckBox->setChecked(true);

        gridLayout_2->addWidget(lockYawTargetCheckBox, 4, 0, 1, 1);

        thrustSlider = new QSlider(quadControlGroupBox);
        thrustSlider->setObjectName(QStringLiteral("thrustSlider"));
        thrustSlider->setMaximum(255);
        thrustSlider->setOrientation(Qt::Horizontal);
        thrustSlider->setTickPosition(QSlider::NoTicks);

        gridLayout_2->addWidget(thrustSlider, 0, 1, 1, 1);

        yawSlider = new QSlider(quadControlGroupBox);
        yawSlider->setObjectName(QStringLiteral("yawSlider"));
        yawSlider->setMinimum(-100);
        yawSlider->setMaximum(100);
        yawSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(yawSlider, 1, 1, 1, 1);

        label_4 = new QLabel(quadControlGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(quadControlGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        pitchSlider = new QSlider(quadControlGroupBox);
        pitchSlider->setObjectName(QStringLiteral("pitchSlider"));
        pitchSlider->setMinimum(-100);
        pitchSlider->setMaximum(100);
        pitchSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(pitchSlider, 2, 1, 1, 1);

        yawLabel = new QLabel(quadControlGroupBox);
        yawLabel->setObjectName(QStringLiteral("yawLabel"));

        gridLayout_2->addWidget(yawLabel, 1, 2, 1, 1);

        pitchLabel = new QLabel(quadControlGroupBox);
        pitchLabel->setObjectName(QStringLiteral("pitchLabel"));

        gridLayout_2->addWidget(pitchLabel, 2, 2, 1, 1);

        thrustLabel = new QLabel(quadControlGroupBox);
        thrustLabel->setObjectName(QStringLiteral("thrustLabel"));
        thrustLabel->setMinimumSize(QSize(40, 0));

        gridLayout_2->addWidget(thrustLabel, 0, 2, 1, 1);

        rollSlider = new QSlider(quadControlGroupBox);
        rollSlider->setObjectName(QStringLiteral("rollSlider"));
        rollSlider->setMinimum(-100);
        rollSlider->setMaximum(100);
        rollSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(rollSlider, 3, 1, 1, 1);

        rollLabel = new QLabel(quadControlGroupBox);
        rollLabel->setObjectName(QStringLiteral("rollLabel"));

        gridLayout_2->addWidget(rollLabel, 3, 2, 1, 1);

        altitudeLockCheckbox = new QCheckBox(quadControlGroupBox);
        altitudeLockCheckbox->setObjectName(QStringLiteral("altitudeLockCheckbox"));

        gridLayout_2->addWidget(altitudeLockCheckbox, 4, 1, 1, 2);


        gridLayout_7->addWidget(quadControlGroupBox, 3, 0, 1, 1);

        messagesGroup = new QGroupBox(centralWidget);
        messagesGroup->setObjectName(QStringLiteral("messagesGroup"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(messagesGroup->sizePolicy().hasHeightForWidth());
        messagesGroup->setSizePolicy(sizePolicy4);
        gridLayout = new QGridLayout(messagesGroup);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        clearLogButton = new QPushButton(messagesGroup);
        clearLogButton->setObjectName(QStringLiteral("clearLogButton"));

        gridLayout->addWidget(clearLogButton, 1, 1, 1, 1);

        saveLogButton = new QPushButton(messagesGroup);
        saveLogButton->setObjectName(QStringLiteral("saveLogButton"));

        gridLayout->addWidget(saveLogButton, 1, 2, 1, 1);

        logEdit = new QPlainTextEdit(messagesGroup);
        logEdit->setObjectName(QStringLiteral("logEdit"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(logEdit->sizePolicy().hasHeightForWidth());
        logEdit->setSizePolicy(sizePolicy5);
        logEdit->setReadOnly(true);
        logEdit->setCenterOnScroll(false);

        gridLayout->addWidget(logEdit, 0, 1, 1, 2);


        gridLayout_7->addWidget(messagesGroup, 4, 0, 1, 1);

        fpvBox = new QGroupBox(centralWidget);
        fpvBox->setObjectName(QStringLiteral("fpvBox"));
        sizePolicy.setHeightForWidth(fpvBox->sizePolicy().hasHeightForWidth());
        fpvBox->setSizePolicy(sizePolicy);
        fpvBox->setMinimumSize(QSize(400, 0));
        gridLayout_5 = new QGridLayout(fpvBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        fpvSaveFramesCheckbox = new QCheckBox(fpvBox);
        fpvSaveFramesCheckbox->setObjectName(QStringLiteral("fpvSaveFramesCheckbox"));

        gridLayout_5->addWidget(fpvSaveFramesCheckbox, 3, 0, 1, 2);

        fpvTakePictureButton = new QPushButton(fpvBox);
        fpvTakePictureButton->setObjectName(QStringLiteral("fpvTakePictureButton"));
        fpvTakePictureButton->setEnabled(true);

        gridLayout_5->addWidget(fpvTakePictureButton, 4, 0, 1, 2);

        fpvVideoLabel = new QLabel(fpvBox);
        fpvVideoLabel->setObjectName(QStringLiteral("fpvVideoLabel"));

        gridLayout_5->addWidget(fpvVideoLabel, 2, 0, 1, 2);

        fpvCombo = new QComboBox(fpvBox);
        fpvCombo->setObjectName(QStringLiteral("fpvCombo"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(fpvCombo->sizePolicy().hasHeightForWidth());
        fpvCombo->setSizePolicy(sizePolicy6);

        gridLayout_5->addWidget(fpvCombo, 0, 0, 1, 2);

        fpvStatusLabel = new QLabel(fpvBox);
        fpvStatusLabel->setObjectName(QStringLiteral("fpvStatusLabel"));
        sizePolicy1.setHeightForWidth(fpvStatusLabel->sizePolicy().hasHeightForWidth());
        fpvStatusLabel->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(fpvStatusLabel, 1, 0, 1, 1);


        gridLayout_7->addWidget(fpvBox, 0, 2, 3, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "AndroCopter remote", 0));
        regulatorsGroup->setTitle(QApplication::translate("MainWindow", "Phone internal regulators control", 0));
        resetDeviceYawButton->setText(QApplication::translate("MainWindow", "Reset orientation", 0));
        label_10->setText(QApplication::translate("MainWindow", "Integral (Ki)", 0));
        label_9->setText(QApplication::translate("MainWindow", "Proportional (Kp)", 0));
        label_8->setText(QApplication::translate("MainWindow", "Roll:", 0));
        label_6->setText(QApplication::translate("MainWindow", "Yaw:", 0));
        label_7->setText(QApplication::translate("MainWindow", "Pitch:", 0));
        label_11->setText(QApplication::translate("MainWindow", "Derivative (Kd)", 0));
        regulatorsOnCheckBox->setText(QApplication::translate("MainWindow", "Regulators ON", 0));
        emergencyButton->setText(QApplication::translate("MainWindow", "Emergency stop", 0));
        loggingCheckbox->setText(QApplication::translate("MainWindow", "Logging", 0));
        label_21->setText(QApplication::translate("MainWindow", "Altitude:", 0));
        phoneConnectGroup->setTitle(QApplication::translate("MainWindow", "Smartphone connection", 0));
        statusLabel->setText(QApplication::translate("MainWindow", "...", 0));
        phoneStateGroup->setTitle(QApplication::translate("MainWindow", "Current state sent by the phone", 0));
        label_12->setText(QApplication::translate("MainWindow", "Motor pitch command []:", 0));
        currentYawLabel->setText(QApplication::translate("MainWindow", "0", 0));
        currentRollCommandLabel->setText(QApplication::translate("MainWindow", "0", 0));
        label_16->setText(QApplication::translate("MainWindow", "Motor roll command []:", 0));
        currentBatteryLabel->setText(QApplication::translate("MainWindow", "0", 0));
        currentRollLabel->setText(QApplication::translate("MainWindow", "0", 0));
        currentYawCommandLabel->setText(QApplication::translate("MainWindow", "0", 0));
        label_17->setText(QApplication::translate("MainWindow", "Battery voltage [V]:", 0));
        regulatorStateLabel->setText(QApplication::translate("MainWindow", "OFF", 0));
        currentTemperatureLabel->setText(QApplication::translate("MainWindow", "0", 0));
        label_19->setText(QApplication::translate("MainWindow", "Regulator state:", 0));
        label_18->setText(QApplication::translate("MainWindow", "Temperature [\302\260C]:", 0));
        currentPitchLabel->setText(QApplication::translate("MainWindow", "0", 0));
        label->setText(QApplication::translate("MainWindow", "Roll angle [deg]:", 0));
        label_14->setText(QApplication::translate("MainWindow", "Motor yaw command []:", 0));
        label_15->setText(QApplication::translate("MainWindow", "Pitch angle [deg]:", 0));
        currentPitchCommandLabel->setText(QApplication::translate("MainWindow", "0", 0));
        label_13->setText(QApplication::translate("MainWindow", "Yaw angle [deg]:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Altitude [m]:", 0));
        currentAltitudeLabel->setText(QApplication::translate("MainWindow", "0", 0));
        label_22->setText(QApplication::translate("MainWindow", "Altitude command []:", 0));
        currentAltitudeCommandLabel->setText(QApplication::translate("MainWindow", "0", 0));
        quadControlGroupBox->setTitle(QApplication::translate("MainWindow", "Quadcopter control", 0));
        label_2->setText(QApplication::translate("MainWindow", "Mean thrust [%]:", 0));
        label_20->setText(QApplication::translate("MainWindow", "Roll angle [deg]:", 0));
        lockYawTargetCheckBox->setText(QApplication::translate("MainWindow", "Lock yaw", 0));
        label_4->setText(QApplication::translate("MainWindow", "Pitch angle [deg]:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Yaw angle [deg]:", 0));
        yawLabel->setText(QApplication::translate("MainWindow", "0", 0));
        pitchLabel->setText(QApplication::translate("MainWindow", "0", 0));
        thrustLabel->setText(QApplication::translate("MainWindow", "0", 0));
        rollLabel->setText(QApplication::translate("MainWindow", "0", 0));
        altitudeLockCheckbox->setText(QApplication::translate("MainWindow", "Altitude lock (regulation)", 0));
        messagesGroup->setTitle(QApplication::translate("MainWindow", "Messages", 0));
        clearLogButton->setText(QApplication::translate("MainWindow", "Clear", 0));
        saveLogButton->setText(QApplication::translate("MainWindow", "Save", 0));
        fpvBox->setTitle(QApplication::translate("MainWindow", "FPV", 0));
        fpvSaveFramesCheckbox->setText(QApplication::translate("MainWindow", "Save the frames", 0));
        fpvTakePictureButton->setText(QApplication::translate("MainWindow", "Take a HD picture", 0));
        fpvVideoLabel->setText(QApplication::translate("MainWindow", "...", 0));
        fpvCombo->clear();
        fpvCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Disabled", 0)
         << QApplication::translate("MainWindow", "Low definition", 0)
         << QApplication::translate("MainWindow", "High definition", 0)
        );
        fpvStatusLabel->setText(QApplication::translate("MainWindow", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
