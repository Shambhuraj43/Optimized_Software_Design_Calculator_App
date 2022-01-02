/*
Shambhuraj Wadghule
File name: Expr_Tree.h
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .h file for building the expression tree.
*/

#ifndef _EXPR_TREE_H_
#define _EXPR_TREE_H_

#include "Expr_Node.h"
#include <iostream>

class Expr_Tree
{
public:
	///Default Constructor
	Expr_Tree (void);

	///Initialization Constructor - includes a head node
	Expr_Tree (Expr_Node * head);

	///Destructor
	~Expr_Tree (void);

	///Get Head Node
	Expr_Node * get_head_node (void);

	///Set Head Node
	void set_head_node (Expr_Node * newHead);

private:
	//Head of the tree
	Expr_Node * head_;
};

#include "Expr_Tree.cpp"

#endif // !defined _EXPR_TREE_H_
