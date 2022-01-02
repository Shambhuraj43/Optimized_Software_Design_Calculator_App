/*
Shambhuraj Wadghule
File name: Unary_Expr_Node.cpp
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .cpp file for Unary commands in teh calculator.
*/

Unary_Expr_Node::Unary_Expr_Node(void)
	:child_(nullptr)
{
	//Do nothing
}

Unary_Expr_Node::~Unary_Expr_Node(void)
{
	//Do nothing
}

int Unary_Expr_Node::eval(void)
{
	if(this->child_)
		return this->child_->eval();
}

///Additional Operations
void Unary_Expr_Node::print_preorder (std::ostream & out)
{
	this->print();

	if(this->child_ != nullptr)
		this->child_->print();
	else
		std::cout << "Error Node missing.\n";
}

void Unary_Expr_Node::print_inorder (std::ostream & out)
{
	if(this->child_ != nullptr)
		this->child_->print();
	else
		std::cout << "Error Node missing.\n";

	this->print();
}

int Unary_Expr_Node::getPrecedence(void)
{
	return 6;
}

std::string Unary_Expr_Node::print(void)
{
	return "?";
}

void Unary_Expr_Node::accept (Expr_Node_Visitor & v)
{
	//Does nothing
}
