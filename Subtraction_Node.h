/*
Shambhuraj Wadghule
File name: Subtraction_Node.h
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .h file for subtraction Node in the evaluator tree.
*/

#ifndef _SUBTRACTION_NODE_H_
#define _SUBTRACTION_NODE_H_

#include "Binary_Expr_Node.h"

class Subtraction_Node: public Binary_Expr_Node
{
public:
	///Constructor - calls Binary_Expr_Node constructor
	Subtraction_Node (void);

	///Evaluate - completes subtraction
	int eval(void);

	///Get Precedence - returns precedence level
	int getPrecedence(void);

	///Get Flag - Returns Identification Number
	int getFlag (void);

	///Print this Element
	std::string print (void);

	///Accept Visitor
	virtual void accept (Expr_Node_Visitor & v);

};

#include "Subtraction_Node.cpp"

#endif // !defined _SUBTRACTION_NODE_H_
