/*
Shambhuraj Wadghule
File name: Division_Node.cpp
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .cpp file for Division Node in the evaluator tree.
*/

#ifndef _DIVISION_NODE_H_
#define _DIVISION_NODE_H_

#include "Binary_Expr_Node.h"

class Division_Node: public Binary_Expr_Node
{
public:
	///Constructor - calls Binary_Expr_Node constructor
	Division_Node (void);

	///Evaluate - completes division
	int eval (void);

	///Get Precedence - returns precedence level
	int getPrecedence(void);

	std::string print (void);

	virtual void accept (Expr_Node_Visitor & v);

};

#include "Division_Node.cpp"

#endif // !defined _DIVISION_NODE_H_
