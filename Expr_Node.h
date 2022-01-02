/*
Shambhuraj Wadghule
File name: Expr_Node.h
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .h file for Expression Node in the evaluator tree.
*/

#ifndef _EXPR_NODE_H_
#define _EXPR_NODE_H_

class Expr_Node_Visitor;

#include <iostream>
#include <string>
#include <exception>
#include "Exception.cpp"

class Expr_Node
{
public:
	///Default Constructor
	Expr_Node (void);

	///Destructor
	virtual ~Expr_Node (void);

	//Used to traverse the tree
	virtual int eval (void) = 0;
	virtual void print_preorder (std::ostream & out) = 0;
	virtual void print_inorder (std::ostream & out) = 0;

	//Returns true if this node is a leaf
	bool is_leaf (void);

	virtual Expr_Node * getLeft(void);
	virtual Expr_Node * getRight(void);
	virtual void setLeft(Expr_Node * left);
	virtual void setRight(Expr_Node * right);

	const Expr_Node & operator = (const Expr_Node & rhs);

	virtual int getPrecedence (void) = 0;

	virtual std::string print (void) = 0;

	void setFlag (int n);

	///Accept Visitor
	virtual void accept (Expr_Node_Visitor & v)=0;

private:
	//Flag to mark where to add node to tree
	int flag_;
};

#include "Expr_Node.cpp"

#endif // !defined _EXPR_NODE_H_
