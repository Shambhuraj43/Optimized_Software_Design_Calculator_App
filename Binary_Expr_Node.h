/*
Shambhuraj Wadghule
File name: Binary_Expr_Node.h
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .h file for Binary Expression Node in the evaluator tree.
*/

#ifndef _BINARY_EXPR_NODE_H_
#define _BINARY_EXPR_NODE_H_

#include "Expr_Node.h"

class Binary_Expr_Node: public Expr_Node
{
public:
	///Default Constructor
	Binary_Expr_Node (void);

	///Destructor
	~Binary_Expr_Node (void);

	///Evaluate
	virtual int eval (void) = 0;

	///Additional Operations
	virtual void print_preorder (std::ostream & out);
	virtual void print_inorder (std::ostream & out);

	///Get Functions - get left or right node
	Expr_Node * getLeft (void);
	Expr_Node * getRight (void);

	///Set Functions - set left or right node
	void setLeft (Expr_Node * left);
	void setRight (Expr_Node * right);

	///Print this Element
	virtual std::string print (void) = 0;

	///Accept Visitor
	virtual void accept (Expr_Node_Visitor & v)=0;

protected:
	//Children nodes
	Expr_Node * left_;
	Expr_Node * right_;
};

#include "Binary_Expr_Node.cpp"

#endif // !defined _BINARY_EXPR_NODE_H_
