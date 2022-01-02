/*
Shambhuraj Wadghule
File name: Exception.cpp
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .cpp file for Exception in the evaluator tree.
*/

#include <iostream>
#include <exception> //for std exceptions

struct divByZero : public std::exception
{
	const char * what () const throw ()
	{
		return "Dividing by zero is invalid.";
	}
};

struct missingOperands : public std::exception
{
	const char * what () const throw ()
	{
		return "Evaluation has failed.";
	}
};

struct invalidNums : public std::exception
{
	const char * what () const throw ()
	{
		return "Out of range error.";
	}
};

struct invalidArgs : public std::exception
{
	const char * what () const throw ()
	{
		return "Invalid argument was entered.";
	}
};
