/*
Shambhuraj Wadghule
File name: Stack_Expr_Builder.h
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .h file for building the expression tree.
*/

#ifndef _STACK_EXPR_BUILDER_H_
#define _STACK_EXPR_BUILDER_H_

class Stack_Expr_Builder: public Expr_Builder
{
public:
	Expr_Tree_Builder (Stack<int> stack);
	virtual ~Expr_Tree_Builder (void);

	virtual void start_expression (void);

	virtual void build_number (int n);
	virtual void build_add_operator (void);
	virtual void build_subtract_operator (void);
	/*...*/

	Expr_Tree * get_expression (void);

private:

};

#include "Stack_Expr_Builder.cpp"

#endif // !defined _STACK_EXPR_BUILDER_H_
