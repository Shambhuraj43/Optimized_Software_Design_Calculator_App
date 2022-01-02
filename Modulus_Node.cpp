/*
Shambhuraj Wadghule
File name: Modulus_Node.cpp
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .cpp file for Modulus Node in the evaluator tree.
*/

///Constructor
Modulus_Node::Modulus_Node (void)
{
	//Does nothing else
}

///Evaluate
int Modulus_Node::eval(void)
{
	int n1 = getLeft()->eval();
	int n2 = getRight()->eval();

	//If the number is not being divided by zero, complete the division
	//Otherwise, throw the exception
	if(n2 == 0)
	{
		throw divByZero();
	}
	else
	{
		return n1%n2;
	}
}

///Get Precedence
int Modulus_Node::getPrecedence(void)
{
	return 3;
}

///Print this Element
std::string Modulus_Node::print(void)
{
	return "%";
}

///Accept Visitor
void Modulus_Node::accept (Expr_Node_Visitor & v)
{
	v.Visit_Modulus_Node (*this);
}
