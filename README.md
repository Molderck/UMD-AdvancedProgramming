# API for Math Functions

## Objetive

This an API written in C which provides math functions such as: Square root

## Folder Structure

    .
    ├── ...
    ├── API                   
    │   ├── MathFunctions     
    │   ... ├── consumer.c       
    │   ... ├── squareRoot.c          
    │   ... ├── mathConsumer.exe
    │   ... └── getSquareRoot.exe
    └── ... 

The main idea is to store all operations inside the MathFunctions folder
to have easy access when calling them.

Note: There are both the binaries and the program because it has not been decided yet
how to provide the methods.

## Prerequisites:

In order to use succesfully this API you must have installed the following programs:

1. The GNU Compiler Collection to compile C software - You can install it from http://www.mingw.org/
2. The open source distributed version control system GIT - You can install it from https://git-scm.com/downloads

## Usage

In order to use this API you must follow this steps:

1. Clone this repository by entering in your terminal/cmd: git clone https://github.com/Molderck/UMD-AdvancedProgramming.git
2. Open your Terminal (Linux) - CMD (Windows) and go to the following directory: UMD-AdvancedProgramming/API/MathFunctions
3. Execute the mathConsumer.exe in your terminald as follows:

Example to calculate the square root of 60:

```bash
mathConsumer.exe "getSquareRoot.exe 60"
```