# C-project
This is a repository where I store my c++ projects
Temperature Converter

A simple C++ program that converts temperature between Celsius and Fahrenheit.

Description

This program provides a command-line interface to convert temperature between Celsius and Fahrenheit. It uses a simple menu-driven approach to allow users to select the conversion mode.

Features

- Converts temperature from Celsius to Fahrenheit
- Converts temperature from Fahrenheit to Celsius
- Menu-driven interface for easy selection of conversion mode
- Repeats the conversion process until the user chooses to exit

Usage

1. Compile the program using a C++ compiler (e.g., g++ temperature_converter.cpp -o temperature_converter)
2. Run the program using the command ./temperature_converter (on Linux/Mac) or temperature_converter.exe (on Windows)
3. Follow the on-screen instructions to select the conversion mode and enter the temperature value

Code Structure

The program consists of two main functions:

- celtofar(double celsius): converts temperature from Celsius to Fahrenheit
- fartocel(double fahrenheit): converts temperature from Fahrenheit to Celsius
- main(): contains the menu-driven interface and repeats the conversion process until the user chooses to exit
