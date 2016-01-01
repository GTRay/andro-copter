/*!
* \file gamepad.h
* \brief Class to encapsulate the SDL interface into a object-oriented one.
* \author Romain Baud
* \version 0.1
* \date 2012.12.29
*/

#ifndef GAMEPAD_H
#define GAMEPAD_H

#include <QList>
#include <QVector>
#include <QString>
#include <QStringList>
#include <QMap>
#include <QThread>
#include <QDebug>

// Axes and keys binding (Moving to Ubuntu Linux and gamepad changed to xbox 360).
#define AXIS_ROLL  4
#define AXIS_PITCH  5
#define AXIS_YAW  0
#define AXIS_THRUST  1
#define AXIS_LONGITUDINAL  7
#define AXIS_LATERAL  6
#define BUTTON_A  0
#define BUTTON_B  1
#define BUTTON_X  2
#define BUTTON_Y  3
#define BUTTON_LB  4
#define BUTTON_RB  5
#define BUTTON_BACK  6
#define BUTTON_START  7
#define BUTTON_Xbox  8
#define BUTTON_LeftStick  9
#define BUTTON_RightStick  10




/// Encapsulate the SDL joystick interface.
class Gamepad
{
public:
	/// Default constructor.
    Gamepad();
	
	/// Destructor.
    ~Gamepad();

	/// Get the list of all the names of all the recognized gamepads.
	/// \return the list of the gamepads.
    QStringList getGamepadsList();
	
	/// Starts the gamepad monitoring of the selected gamepad index.
	/// This index can be obtained by choosing a name from the list returned by
	/// the getGamepadsList() method.
	/// \param the index of the gamepad to monitor.
    void startMonitoring(int index);
	
	/// Main loop of the gamepad informations fetching. It should not be
	/// called, call start() instead, to run it in another thread.
    void run();

	/// Get the name of the gamepad this object is listening to.
	/// \return the name of the current gamepad.
    QString getName();
	
	/// Get the list of all the axes of the monitored gamepad. Each number of
    /// the QVector corresponds to the value of an analog axis, and is mapped
    /// between -1 and 1.
	/// \return the list of the axes.
    QVector<double> getAxes();
	
	/// Get the list of all the buttons of the monitored gamepad. true means
	/// pushed, false means released.
	/// \return the list of the buttons.
    QVector<bool> getButtons();
	
    /// Get if the gamepad is still connected or not.
	/// \return true if the gamepad is still connected, false otherwise.
    bool isGamepadStillConnected();

private:
    QString name;
    QVector<double> axes;
    QVector<bool> buttons;
    int gamepadIndex;
};

#endif // GAMEPAD_H
