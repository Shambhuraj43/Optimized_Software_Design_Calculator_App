/*
Shambhuraj Wadghule
File name: Unary_Expr_Node.h
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .h file for Unary commands in teh calculator.
*/

#ifndef _UNARY_EXPR_NODE_H_
#define _UNARY_EXPR_NODE_H_

#include "Expr_Node.h"

class Unary_Expr_Node: public Expr_Node
{
public:
	///Default Constructor
	Unary_Expr_Node (void);

	///Destructor
	~Unary_Expr_Node (void);

	///Evaluate
	int eval (void);

	///Additional Operations
	virtual void print_preorder (std::ostream & out);
	virtual void print_inorder (std::ostream & out);

	///Get Precedence
	int getPrecedence (void);

	///Print this element
	std::string print (void);

	virtual void accept (Expr_Node_Visitor & v);

protected:
	//Singular child element
	Expr_Node * child_;

};

#include "Unary_Expr_Node.cpp"

#endif // !defined _UNARY_EXPR_NODE_H_
