// Main Program

#include "CompSci.h" // include header files
#include "Math.h"
#include "ElecEng.h"
#include "CySec.h"
#include "CompEng.h"

#include <iostream> // included libraries and algorithms
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <list>

using namespace std; // using the standard namespace

int main() { // begin main program

    int majorDegree; // variable for student to select major

    CompSci x; // Computer Science object
    Math y; // Math object
    ElecEng z; // Electrical Engineer object
    CySec w; // Cyber Security object
    CompEng v; // Computer Engineer object

    cout << endl; // new line for readability
    cout << "Welcome to the University!" << endl; // welcome and directional prompt
    cout << endl; // new line for readability
    cout << "We are thrilled that you chose us to further your education." << endl; // continued prompt
    cout << "Please navigate this system to pull up the transcript for " << endl;
    cout << "and add courses to your schedule for the upcoming semester." << endl;

    cout << endl; // new line for readability

    cout << "Select your major: " << endl; // prompt for student to select major
    cout << "1 for Computer Science" << endl;
    cout << "2 for Computer Engineer" << endl;
    cout << "3 for Electrical Engineer" << endl;
    cout << "4 for Cyber Security" << endl;
    cout << "5 for Math" << endl;

    cout << endl; // new line for readability

    cin >> majorDegree; // user inputted major
    cin.ignore(); // ignore cin after major iinput

    switch(majorDegree) { // switch statement

        case 1: // Computer Science

            x.EnterStudentNameAndInfo(); // student enters name to pull up transcript

            x.ViewDegreePlan(); // tentative degree plan

            x.SelectClassSchedule(); // student views class rubrics and schedules classes

            break; // return to main menu

        case 2: // Computer Engineer

            v.EnterStudentNameAndInfo(); // student enters name to pull up transcript

            v.ViewDegreePlan(); // tentative degree plan

            v.SelectClassSchedule(); // student views class rubrics and schedules classes

            break; // return to main menu

        case 3: // Electrical Engineer

            z.EnterStudentNameAndInfo(); // student enters name to pull up transcript

            z.ViewDegreePlan(); // tentative degree plan

            z.SelectClassSchedule(); // student views class rubrics and schedules classes

            break; // return to main menu

        case 4: // Cyber Security

            w.EnterStudentNameAndInfo(); // student enters name to pull up transcript

            w.ViewDegreePlan(); // tentative degree plan

            w.SelectClassSchedule(); // student views class rubrics and schedules classes

            break; // return to main menu

        case 5: // Math

            y.EnterStudentNameAndInfo(); // student enters name to pull up transcript

            y.ViewDegreePlan(); // tentative degree plan

            y.SelectClassSchedule(); // student views class rubrics and schedules classes

            break; // return to main menu

    }

    cout << endl; // new line for readability
    cout << "Excellent choice of classes." << endl; // program ending prompt
    cout << "Thank you for choosing the University for this semester -" << endl;
    cout << "here's to a successful academic journey!" << endl;

    return 0; // end of main program

}