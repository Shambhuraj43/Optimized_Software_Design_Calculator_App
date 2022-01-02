/*
Shambhuraj Wadghule
File name: Addition_Node.h
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .h file for Addition Node in the evaluator tree.
*/

#ifndef _ADDITION_NODE_H_
#define _ADDITION_NODE_H_

#include "Binary_Expr_Node.h"
#include <string>

class Addition_Node: public Binary_Expr_Node
{
public:
	///Constructor - calls Binary_Expr_Node constructor
	Addition_Node (void);

	///Evaluate - completes addition
	int eval (void);

	///Get Precedence - returns precedence level
	int getPrecedence(void);

	///Print this Element
	std::string print(void);

	///Accept Visitor
	virtual void accept (Expr_Node_Visitor & v);

};

#include "Addition_Node.cpp"

#endif // !defined _ADDITION_NODE_H_
