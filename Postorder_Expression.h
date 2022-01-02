/*
Shambhuraj Wadghule
File name: Expr_Tree.cpp
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .cpp file for building the expression tree.
*/

#ifndef _POST_EXPR_H_
#define _POST_EXPR_H_

#include "Expr_Node_Visitor.h"
#include <string>
#include <exception>

class Postorder_Expression : public Expr_Node_Visitor
{
public:
	///Default Constructor
	Postorder_Expression (void);

	///Destructor
	virtual ~Postorder_Expression (void);

	//Methods for visiting concrete nodes
	virtual void Visit_Addition_Node (Addition_Node & node);
	virtual void Visit_Subtraction_Node (Subtraction_Node & node);
	virtual void Visit_Multiplication_Node (Multiplication_Node & node);
	virtual void Visit_Division_Node (Division_Node & node);
	virtual void Visit_Modulus_Node (Modulus_Node & node);
	virtual void Visit_Number_Node (Number_Node & node);

	std::string result(void);

private:
	std::string result_;
};

#include "Postorder_Expression.cpp"

#endif // !defined _POST_EXPR_H_
