/*
Shambhuraj Wadghule
File name: Number_Node.cpp
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .cpp file for Number Node in the evaluator tree.
*/

///Initializing Constructor
Number_Node::Number_Node (int n)
	:value_(n)
{
	//Does nothing else
}

///Execute
bool Number_Node::execute(void)
{
	this->eval();
	return true;
}

///Evaluate
int Number_Node::eval(void)
{
	return value_;
}

///Additional Operations
void Number_Node::print_preorder (std::ostream & out)
{
	this->print();
}

void Number_Node::print_inorder (std::ostream & out)
{
	this->print();
}

///Get Precedence
int Number_Node::getPrecedence(void)
{
	return 1;
}

///Set Value
void Number_Node::setValue(int val)
{
	value_ = val;
}

///Get Value
int Number_Node::getValue(void)
{
	return value_;
}

///Print this Element
std::string Number_Node::print(void)
{
	return std::to_string(value_);
}

///Accept Visitor
void Number_Node::accept (Expr_Node_Visitor & v)
{
	v.Visit_Number_Node (*this);
}
