# EduCore-C++

### A Personal C++ Project | Student Management System

**EduCore-C++** is a personal software development project focused on building a student management system using C++. The project is part of my journey toward becoming a better software engineer, with a focus on programming fundamentals, data structures, code organization, and problem-solving.

Rather than treating this as a one-time exercise, I want to develop it step by step, improving its design, functionality, and reliability as my skills grow.

> **Project status:** Work in progress. Features and architecture may evolve as development continues.

---

## Overview

EduCore-C++ is designed to manage student information through a structured C++ application.

The current development focuses on learning how to represent student data, organize it into reusable structures, manage collections of students, and build a clear separation between data handling and application logic.

The long-term goal is to turn this learning project into a more complete, maintainable, and reliable student management system.

## Goals

- Build a practical application using modern C++.
- Develop a strong understanding of structures, classes, pointers, and references.
- Learn how to manage dynamically allocated memory.
- Organize source code into separate header and implementation files.
- Implement student data management operations.
- Improve input handling and error management.
- Explore data persistence so information can be saved and loaded between program executions.
- Refactor and improve the architecture as the project grows.

## Current Development

The project is being developed incrementally, with attention to the fundamentals behind each feature.

Areas of development include:

- **Student data:** Representing student information using structured data.
- **Student management:** Building functionality to add and manage student records.
- **Linked lists:** Practicing dynamic data structures and node traversal.
- **Input handling:** Reading and validating user input.
- **Code organization:** Separating declarations, implementations, and utility functions.
- **Student identification:** Developing a consistent way to assign and manage student IDs.

The exact implementation and availability of individual features may change during development.

## Planned Features

The following features represent the direction of the project. They are not all implemented yet.

| Feature | Description |
|---|---|
| Add students | Create new student records. |
| Display students | View stored student information. |
| Search students | Find a student using an ID or another field. |
| Update records | Modify existing student information. |
| Delete students | Remove records safely. |
| Input validation | Handle invalid or unexpected user input. |
| Data persistence | Save and load student records from files. |
| Improved interface | Make application navigation clearer and easier to use. |

## Technology Stack

- **Language:** C++
- **Standard:** C++17
- **Compiler:** G++
- **Build process:** Command-line compilation
- **Version control:** Git and GitHub

## Project Structure

The source code is organized into separate files to make the project easier to understand and maintain.

The main components include:

- `student.hpp` — declarations related to student data.
- `tools.hpp` — declarations for reusable utility functions.
- `main.cpp` — application entry point.
- `FillData.cpp` — logic for collecting student information.
- `student.cpp` — student-related implementation.
- `tools.cpp` — utility function implementations.

The structure may evolve as new features and responsibilities are introduced.

## Getting Started

### Prerequisites

You need:

- G++ with C++17 support.
- Git.
- A terminal or code editor.

### Clone the Repository

```bash
git clone https://github.com/mohamedtrichil185-creator/EduCore-C-.git
cd EduCore-C-
```

### Compile the Project

If the repository contains the source files listed above, you can compile them with:

```bash
g++ -Wall -Wextra -Werror -std=c++17 \
    -Iincludes \
    FillData.cpp student.cpp tools.cpp main.cpp \
    -o program
```

**Note:** This command assumes that the source files are in the project root and the header files are inside `includes/`. Adjust the paths if your repository structure changes.

### Run the Application

```bash
./program
```

## Engineering Principles

Throughout development, I aim to follow these principles:

- **Readable code:** Write code that is easy to understand and maintain.
- **Separation of concerns:** Give each component a clear responsibility.
- **Memory safety:** Manage dynamic memory carefully and avoid leaks.
- **Validation:** Handle invalid input and unexpected situations.
- **Incremental development:** Build, test, and improve one feature at a time.
- **Continuous learning:** Understand the reasoning behind each implementation instead of simply copying solutions.

## Development Roadmap

The project will grow through several stages:

1. **Core functionality:** Build and refine student record operations.
2. **Data management:** Improve searching, updating, deletion, and record consistency.
3. **Persistence:** Introduce reliable file-based storage.
4. **Code quality:** Improve modularity, validation, testing, and error handling.
5. **Architecture:** Explore more advanced C++ concepts and suitable data structures.
6. **Long-term development:** Add useful features based on real requirements and lessons learned.

This roadmap is flexible and will evolve with the project.

## Why I Am Building EduCore-C++

I believe that becoming a software engineer requires more than learning syntax. It requires building real projects, understanding the problems behind the code, and improving a solution over time.

EduCore-C++ gives me a practical environment in which to apply what I learn, make mistakes, debug problems, and develop better engineering habits.

My goal is not simply to make the application work. It is to understand how to design, build, and maintain software.

## Author

**Mohamed Traichli**

Student at 1337 Coding School, Morocco.

- GitHub: [@mohamedtrichil185-creator](https://github.com/mohamedtrichil185-creator)
- Repository: [EduCore-C++](https://github.com/mohamedtrichil185-creator/EduCore-C-)

---

*EduCore-C++ is an evolving personal project. Built step by step, with a focus on learning, consistency, and continuous improvement.*
