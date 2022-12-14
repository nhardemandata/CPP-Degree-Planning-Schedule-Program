#include "CompSci.h" // include the header file

#include <iostream> // included libraries and algorithms
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std; // using the standard namespace

CompSci::CompSci() { // default CompSci class
    studentName = ""; // default student name
    studentMajor = "Computer Science"; // default major will be Computer Science
    list<string> classesTaken; // default classes already taken
}
// WORKS
void CompSci::EnterStudentNameAndInfo() { // method for student to enter their name and pull up their info
    string search; // search for this string to locate student info
    string readLine; // variable that is searched for student name
    string classLine; // variable to hold completed classes that are added to outfile       
    ifstream readFile; // file to open
    ofstream outFile; // file to be saved

    readFile.open("CSTranscripts.txt"); // open the read file
    outFile.open("CompSciSchedule.txt"); // open the schedule file, create it for student

    if (readFile.is_open()) { // if file open success
        cout << "Enter name of student to pull up completed classes: (LastName, FirstName)\n"; // prompt for student name
        getline(cin, search); // store student name in variable
        while(getline(readFile, readLine)) { // while searching for student name
            if (readLine == search) { // if student name is found

                outFile << readLine << endl; // store student name in schedule file
                outFile << endl; // blank line

                getline(readFile, classLine); // grab major/classes taken
                while (classLine != "\n ") { // while there is still information on following lines
                    if (classLine.empty()){ // end the while loop if the variable is empty
                        break; // exit for empty line
                    }

                    outFile << classLine << endl; // add classes taken to schedule file
                    getline(readFile, classLine); // grab next class

                }
            }
        }
    }
    else {
        cout << "File not opened." << endl; // file failed to open
    }

    cout << "Schedule started!" << endl; // visual confirmation
    cout << endl; // line for readability
    readFile.close(); // close the read file
    outFile.close(); // close the schedule file
}
// WORKS
void CompSci::ViewDegreePlan() { // method for student to view the recommended degree plan/path
    
    string info; // variable to hold degree plan file line and display it
    ifstream readFile; // file to open

    readFile.open("CSDegreePlan.txt"); // open the read file

    if (readFile.is_open()) { // if file open success
        cout << "This is the recommended Computer Science Degree Plan." << endl; // explanatory prompt
        cout << "It does not need to be followed and is solely for " << endl;
        cout << "example purposes. Feel fre to reach out to the admissions " << endl;
        cout << "office should you have any questions. Thank you." << endl;
        cout << endl; // line for easy reading

        getline(readFile, info); // grab line information to display

        while (!readFile.eof()) { // while there is still information in the file
            cout << info << endl; // output information
            getline(readFile, info); // grab next line to output
        }
        
    }
    else {
        cout << "File not opened." << endl; // file failed to open
    }

    cout << endl; // line for easy reading
    cout << "Think about these classes as you construct your schedule!" << endl;  // ending recommendation
    cout << endl; // line for readability
    readFile.close(); // close the read file

}
// WORKS
void CompSci::SelectClassSchedule() { // method for student to view class offerings, rubrics, and add to schedule

    string fileLine; // variable to read line form file and output
    int classAddIndex; // index for student to add classes or not
    string classToAdd; // variable to add class to student schedule

    ifstream readFile; // read file with classes and rubrics
    ofstream outFile; // write file with student schedule

    readFile.open("CSRubricOfferings.txt"); // open class offerings file

    if (readFile.is_open()) { // if class offerings file is open

        getline(readFile, fileLine); // grab line for output

        while (!readFile.eof()) { // while the end of file has not been reached
            
            cout << fileLine << endl; // output that line
            getline(readFile, fileLine); // grab next line

        }
    }
    else {

        cout << "Rubrics/Offerings file did not open." << endl; // file not opened

    }

    cout << endl; // new line for easy reading

    readFile.close(); // close read file to read open it and start fresh

    readFile.open("CSRubricOfferings.txt"); // open class offerings file 
    outFile.open("CompSciSchedule.txt", ios::app); // open student degree plan with info on completed classes 

    cout << "Would you like to add a class to your schedule?" << endl; // explanatory prompt
    cout << "Please enter '0' for no, '1' for yes." << endl;

    cin >> classAddIndex; // index to add class or not

    outFile << endl; // new line for readability
    outFile << "Major with classes already completed are above." << endl; // line detailing lication of previously completed classes
    outFile << endl; // new line for readability
    outFile << "Classes for this semester:" << endl; // student selected classes follow

        while (classAddIndex != 0) { // while the student wishes to keep adding classes

            cin.ignore(); // ignore previous input

            cout << "Which class would you like to add?" << endl; // explanatory prompt
            cout << "Exmaple for Technical Writing, type: Technical Writing" << endl;

            getline(cin, classToAdd); // student types class to add

            if (readFile.is_open()) { // if the file is open

                while (!readFile.eof()) { // while file is not at its end

                    if (classToAdd == fileLine) { // if file line matches student input

                        outFile << endl; // new line for readability
                        outFile << classToAdd << endl; // add the class to schedule
                        SkipLines(readFile, 1); // skip line with rubric
                        getline(readFile, fileLine); // grab class info on line
                        outFile << fileLine << endl; // add class info to schedule
                        getline(readFile, fileLine); // grab class info on next line
                        outFile << fileLine << endl; // add to schedule

                    } 
                    else { // if file line does not match

                    getline(readFile, fileLine); // grab next line
                
                    }                
                }

            }

            cout << endl; // new line for readability
            cout << "Would you like to add another class to your schedule?" << endl; // prompt to continue adding classes or not
            cout << "Please enter '0' for no, '1' for yes." << endl;

            cin >> classAddIndex; // index to add class or not
            readFile.close(); // close read file
            readFile.open("CSRubricOfferings.txt"); // reopen read file


        }

    readFile.close(); // close read file
    outFile.close(); // close out file

    cout << endl; // new line for readability
    cout << "Thank you for taking the time to enroll today." << endl; // explanatory end of program prompt
    cout << "Please be on the lookout for your schedule in your inbox." << endl;
    cout << "Be sure to check with your local community college if you need to " << endl;
    cout << "complete any pre-requisites."  << endl;
    cout << "Have a great day!" << endl;
}
// WORKS
void CompSci::SkipLines(ifstream& fFile, int nLines) { // method to skip lines in file search maneuvering 
    string dummyLine; // variable to hold line that should be skipped
    for (int i = 0; i < nLines; ++i) { //  for loop for executing for the number of lines to be skipped
        getline(fFile, dummyLine); // grab that that is being skipped
    }
}