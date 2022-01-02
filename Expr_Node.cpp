/*
Shambhuraj Wadghule
File name: Expr_Node.cpp
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .cpp file for Expression Node in the evaluator tree.
*/

#include "Expr_Node_Visitor.h"

Expr_Node::Expr_Node(void)
	:flag_(0)
{
	//Does nothing
}

Expr_Node::~Expr_Node(void)
{
	//Does nothing, everything is being allocated on the stack
}

bool Expr_Node::is_leaf(void)
{

}

Expr_Node * Expr_Node::getLeft(void)
{
	//Return nullptr since there is no guarantee this is a binary node
	return nullptr;
}

Expr_Node * Expr_Node::getRight(void)
{
	//Return nullptr since there is no guarantee this is a binary node
	return nullptr;
}

void Expr_Node::setLeft(Expr_Node * left)
{
	//Does nothing since there is no guarantee this is a binary node
}

void Expr_Node::setRight(Expr_Node * right)
{
	//Does nothing since there is no guarantee this is a binary node
}

void Expr_Node::setFlag(int n)
{
	flag_ = n;
}

const Expr_Node & Expr_Node::operator = (const Expr_Node & rhs)
{

}
