// Computer Engineer Class
#ifndef CompEng_H // define, if not already defined
#define CompEng_H

#include <iostream> // included libraries and algorithms
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <list>

using namespace std; // using the standard namespace

class CompEng { // class definition

    private:
        string studentName; // name of student
        string studentMajor; // student's major
        list<string> classesTaken; // list of classes already taken by student
    
    public:
        CompEng(); // default constructor
        ifstream CETranscriptsFiles; // open Transcripts file
        ofstream CEStudentsSchedule; // write selected schedule to file
        void EnterStudentNameAndInfo(); // method for student to enter their name and view their transcript 
                                        // to get student info and display for verification
        void ViewDegreePlan(); // method to view recommended major degree plan
        void SelectClassSchedule(); // method for student to select schedule and view course rubric


        void SkipLines(ifstream&, int); // method to skip lines in file search


}; // end of class

#endif // end of if not defined