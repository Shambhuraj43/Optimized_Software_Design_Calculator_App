/*
Shambhuraj Wadghule
File name: Eval_Expr_Tree.h
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .h file for Expression Tree in the evaluator tree.
*/

#ifndef _EVAL_EXPR_TREE_H_
#define _EVAL_EXPR_TREE_H_

#include "Expr_Node_Visitor.h"
#include <string>
#include <exception>

class Eval_Expr_Tree : public Expr_Node_Visitor
{
public:
	///Default Constructor
	Eval_Expr_Tree (void);

	///Destructor
	virtual ~Eval_Expr_Tree (void);

	//Methods for visiting concrete nodes
	virtual void Visit_Addition_Node (Addition_Node & node);
	virtual void Visit_Subtraction_Node (Subtraction_Node & node);
	virtual void Visit_Multiplication_Node (Multiplication_Node & node);
	virtual void Visit_Division_Node (Division_Node & node);
	virtual void Visit_Modulus_Node (Modulus_Node & node);
	virtual void Visit_Number_Node (Number_Node & node);

	///Result of Evaluation
	int result (void);

private:
	//Result
	int result_;

};

#include "Eval_Expr_Tree.cpp"

#endif // !defined _EVAL_EXPR_TREE_H_
