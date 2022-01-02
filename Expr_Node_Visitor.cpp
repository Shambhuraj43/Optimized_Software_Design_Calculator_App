/*
Shambhuraj Wadghule
File name: Expr_Node_Visitor.cpp
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .cpp file for Expression Visitor in the evaluator tree.
*/

#include "Expr_Node.h"
#include "Binary_Expr_Node.h"
#include "Unary_Expr_Node.h"
#include "Addition_Node.h"
#include "Subtraction_Node.h"
#include "Multiplication_Node.h"
#include "Division_Node.h"
#include "Modulus_Node.h"
#include "Number_Node.h"

Expr_Node_Visitor::Expr_Node_Visitor(void)
{
	//Does nothing else
}

Expr_Node_Visitor::~Expr_Node_Visitor(void)
{

}
