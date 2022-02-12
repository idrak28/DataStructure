//
// Created by Shahriar Nasim Nafi on 22/9/21.
//

#include <iostream>

using namespace std;

const int SLOW = 1;
const int MEDIUM = 2;
const int FAST = 3;


class Fan {

    int speed = SLOW;
    bool on = false;
    double radius = 5;


public:
    string color = "blue";

    int getSpeed() const {
        return speed;
    }

    void setSpeed(int s) {
        speed = s;
    }

    bool isOn() {
        return on;
    }

    void setOn(bool o) {
        on = o;
    }

    double getRadius() {
        return radius;
    }

    void setRadius(double r) {
        radius = r;
    }

    string getColor() {
        return color;
    }

    void setColor(string c) {
        color = c;
    }

    Fan() = default;

    string toString() {
        string strings = "";
        if (on == true) {
            strings.append("Fan speed: ");
            strings.append(to_string(speed));
            strings.append(", color: ");
            strings.append(color);
            strings.append(", radius: ");
            strings.append(to_string(radius));
            strings.append(".");
        } else {
            strings.append("Fan color: ");
            strings.append(color);
            strings.append(", radius: ");
            strings.append(to_string(radius));
            strings.append(" and fan is off.");
        }
        return strings;
    }


};

int main() {

    Fan fan1, fan2;
    fan1.setSpeed(FAST);
    fan1.setRadius(10);
    fan1.setColor("yellow");
    fan1.setOn(true);

    fan2.setSpeed(MEDIUM);
    fan2.setOn(false);

    cout << fan1.toString() << endl;
    cout << fan2.toString() << endl;
}
