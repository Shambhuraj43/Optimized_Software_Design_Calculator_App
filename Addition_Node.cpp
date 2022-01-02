/*
Shambhuraj Wadghule
File name: Addition_Node.cpp
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .cpp file for Addition Node in the evaluator tree.
*/

///Constructor
Addition_Node::Addition_Node (void)
	:Binary_Expr_Node()
{
	//Do Nothing
}

///Evaluate
int Addition_Node::eval(void)
{
	//Get left and right elements
	int n1 = getLeft()->eval();
	int n2 = getRight()->eval();

	return n1 + n2;
}

///Get Precedence
int Addition_Node::getPrecedence(void)
{
	return 2;
}

///Print this Element
std::string Addition_Node::print(void)
{
	return "+";
}

///Accept Visitor
void Addition_Node::accept (Expr_Node_Visitor & v)
{
	v.Visit_Addition_Node (*this);
}
