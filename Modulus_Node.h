/*
Shambhuraj Wadghule
File name: Modulus_Node.cpp
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .h file for Modulus Node in the evaluator tree.
*/

#ifndef _MODULUS_NODE_H_
#define _MODULUS_NODE_H_

#include "Binary_Expr_Node.h"

class Modulus_Node: public Binary_Expr_Node
{
public:
	///Constructor - calls Binary_Expr_Node constructor
	Modulus_Node (void);

	///Evaluate - completes modulus
	int eval (void);

	///Get Precedence - returns precedence level
	int getPrecedence(void);

	///Print this Element
	virtual std::string print (void);

	///Accept Visitor
	virtual void accept (Expr_Node_Visitor & v);

};

#include "Modulus_Node.cpp"

#endif // !defined _MODULUS_NODE_H_
