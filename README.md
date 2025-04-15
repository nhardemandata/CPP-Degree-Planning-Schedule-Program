# 🎓 Degree Planning Schedule Program (C++)

A modular C++ application designed to assist students and academic advisors in planning and tracking degree progress across various STEM disciplines. This project was developed as the final assignment for a Programming Fundamentals III course.

---

## 🗂️ Project Overview

This program enables users to:

- **View Degree Plans**: Access predefined course sequences for majors such as Computer Science, Computer Engineering, Cybersecurity, Electrical Engineering, and Mathematics.
- **Analyze Transcripts**: Input and evaluate student transcripts to determine completed courses and identify remaining requirements.
- **Plan Course Offerings**: Review available courses per term to assist in academic scheduling.

---

## 📁 Repository Structure

├── DegreeMain.cpp # Main driver of the application ├── CompSci.cpp / CompSci.h # Computer Science module ├── CompEng.cpp / CompEng.h # Computer Engineering module ├── CySec.cpp / CySec.h # Cybersecurity module ├── ElecEng.cpp / ElecEng.h # Electrical Engineering module ├── Math.cpp / Math.h # Mathematics module ├── [Major]DegreePlan.txt # Degree requirements for each major ├── [Major]RubricOfferings.txt # Course offerings per term ├── [Major]Transcripts.txt # Sample student transcripts

---


*Note: Replace `[Major]` with the respective major abbreviation (e.g., `CS`, `CE`, `CyS`, `EE`, `Math`).*

---

## 🚀 Getting Started

### Prerequisites

- A C++ compiler supporting C++11 or later (e.g., `g++`)
- A terminal or command prompt environment

### Compilation Instructions

```bash
g++ DegreeMain.cpp CompSci.cpp CompEng.cpp CySec.cpp ElecEng.cpp Math.cpp -o DegreePlanner
./DegreePlanner
```

---
