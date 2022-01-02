/*
Shambhuraj Wadghule
File name: Expr_Node_Visitor.h
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .h file for Expression Visitor in the evaluator tree.
*/

#ifndef _EXPR_NODE_VISITOR_H_
#define _EXPR_NODE_VISITOR_H_

class Expr_Node;
class Binary_Expr_Node;
class Unary_Expr_Node;
class Addition_Node;
class Subtraction_Node;
class Multiplication_Node;
class Division_Node;
class Modulus_Node;
class Number_Node;

#include <iostream>

class Expr_Node_Visitor
{
public:
	///Constructor
	Expr_Node_Visitor(void);

	///Virtual Destructor
	virtual ~Expr_Node_Visitor (void);

	///Visit - methods for visitiing concrete nodes
	virtual void Visit_Addition_Node (Addition_Node & node) = 0;
	virtual void Visit_Subtraction_Node (Subtraction_Node & node) = 0;
	virtual void Visit_Multiplication_Node (Multiplication_Node & node) = 0;
	virtual void Visit_Division_Node (Division_Node & node) = 0;
	virtual void Visit_Modulus_Node (Modulus_Node & node) = 0;
	virtual void Visit_Number_Node (Number_Node & node) = 0;
};

#include "Expr_Node_Visitor.cpp"

#endif // !defined _EXPR_NODE_VISITOR_H_
