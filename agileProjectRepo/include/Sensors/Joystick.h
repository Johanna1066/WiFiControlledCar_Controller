#pragma once
//------Joystick---------

// enumeration to decide wich type the joystick object is

class Joystick
{
private:
    int joystickPIN{};
    int value{};

public:
    Joystick(int);

    ~Joystick();

    void initiateJoystick();

    void doReading();

    int getValue();
};

Joystick::Joystick(int pinIN)
{
    joystickPIN = pinIN;
}

Joystick::~Joystick()
{
}

void Joystick::initiateJoystick()
{
    pinMode(joystickPIN, INPUT);
}

void Joystick::doReading()
{
    value = analogRead(joystickPIN);
}

int Joystick::getValue()
{
    // Serial.println(horizontalValue);
    return value;
}
