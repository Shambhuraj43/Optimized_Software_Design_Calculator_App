/*
Shambhuraj Wadghule
File name: Multiplication_Node.cpp
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .cpp file for Multiplication Node in the evaluator tree.
*/

#ifndef _MULTIPLICATION_NODE_H_
#define _MULTIPLICATION_NODE_H_

#include "Binary_Expr_Node.h"

class Multiplication_Node: public Binary_Expr_Node
{
public:
	///Constructor - calls Binary_Expr_Node constructor
	Multiplication_Node (void);

	///Evaluate - completes multiplication
	int eval(void);

	///Get Precedence - returns precedence level
	int getPrecedence(void);

	///Print this Element
	std::string print (void);

	virtual void accept (Expr_Node_Visitor & v);
};

#include "Multiplication_Node.cpp"

#endif // !defined _MULTIPLICATION_NODE_H_
