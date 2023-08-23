# 0x1C. C - Makefiles Project

This project focuses on understanding and using Makefiles in the context of C programming. A Makefile is a script that automates the build process of a program by specifying dependencies and compilation rules. This project includes tasks that gradually introduce the concept of Makefiles and their practical application.

## Learning Objectives

By completing this project:

- Gain familiarity with the make utility and Makefiles.
- Understand the purpose of Makefiles and when to use them.
- Learn about rules, dependencies, and compilation.
- Explore variables and their use in Makefiles.
- Practice creating Makefiles for different scenarios.

## Project Tasks

### Task 0: Creating Your First Makefile

- **File:** 0-Makefile
- **Executable:** school
- **Rule:** all
- **Description:** Build the `school` executable.
- **Variables:** None

### Task 1: Makefile with Compiler and Source Variables

- **File:** 1-Makefile
- **Executable:** school
- **Rule:** all
- **Description:** Build the `school` executable.
- **Variables:** CC (compiler), SRC (source files)

### Task 2: More Advanced Makefile

- **File:** 2-Makefile
- **Executable:** school
- **Rule:** all
- **Description:** Build the `school` executable.
- **Variables:** CC (compiler), SRC (source files), OBJ (object files), NAME (executable name)

### Task 3: Makefile with Clean and Recompilation Rules

- **File:** 3-Makefile
- **Executable:** school
- **Rules:** all, clean, re
- **Description:** Build, clean, and recompile the `school` executable.
- **Variables:** CC (compiler), SRC (source files), OBJ (object files), NAME (executable name)

### Task 4: Complete Makefile with Compiler Flags

- **File:** 4-Makefile
- **Executable:** school
- **Rules:** all, clean, re
- **Description:** Build, clean, and recompile the `school` executable with compiler flags.
- **Variables:** CC (compiler), SRC (source files), OBJ (object files), NAME (executable name), CFLAGS (compiler flags)

### Task 5: Island Perimeter Function in Python

- **File:** 5-island_perimeter.py
- **Function:** `def island_perimeter(grid):`
- **Description:** Calculate the perimeter of a land island in a grid.
- **Requirements:** Provided in the task description.

## Usage

1. Each task has a corresponding file containing the solution to that task. For example, Task 0's solution can be found in the file named `0-Makefile`.

2. You can compile and execute the C code solutions using the Makefiles provided. For example, to compile Task 1, run the following command:

   ```
   make -f 1-Makefile
   ```

3. For the Python task, you'll find the solution in the `5-island_perimeter.py` file. Use the provided test script `5-main.py` to test the function.

## Conclusion
Completing the tasks in this project, gives valuable experience with Makefiles and their role in automating the compilation and build process of C programs. Additionally, implementing a Python function that calculates the perimeter of a land island in a grid. These skills enhance the understanding of programming and build automation.
