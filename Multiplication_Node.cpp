/*
Shambhuraj Wadghule
File name: Multiplication_Node.cpp
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .cpp file for Multiplication Node in the evaluator tree.
*/

///Constructor
Multiplication_Node::Multiplication_Node (void)
{
	//Does nothing else
}

///Evaluate
int Multiplication_Node::eval(void)
{
	int n1 = getLeft()->eval();
	int n2 = getRight()->eval();
	return n1 * n2;
}

///Get Precedence
int Multiplication_Node::getPrecedence(void)
{
	return 3;
}

///Print this Element
std::string Multiplication_Node::print(void)
{
	return "*";
}

///Accept Visitor
void Multiplication_Node::accept (Expr_Node_Visitor & v)
{
	v.Visit_Multiplication_Node (*this);
}
