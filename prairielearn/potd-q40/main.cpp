#include "OfficeHour.h"
#include "Student.h"
#include <iostream>

using namespace std;

int main() {
    Student Billy = Student(8, "THEORY");
    Student Joel = Student(3, "MP");
    Student Jean = Student(8, "MP");
    Student Taylor = Student(6, "LAB");
    Student TimTim = Student(7, "THEORY");

    queue<Student> officeHourQueue;
    officeHourQueue.push(Billy);
    officeHourQueue.push(Joel);
    officeHourQueue.push(Jean);
    officeHourQueue.push(Taylor);
    officeHourQueue.push(TimTim);

    Staffer Wade = Staffer("m", 5);
    Staffer Mattox = Staffer("LAB", 1);
    vector<Staffer> onDutyStaff {Wade, Mattox};

    int expectedWaitTime = waitTime(officeHourQueue, onDutyStaff, 5);

    cout << "The expected wait time for Taylor, the fourth student in the queue, is " << to_string(expectedWaitTime) << " minutes." << endl;

    // add your own tests here!

    return 0;
};
