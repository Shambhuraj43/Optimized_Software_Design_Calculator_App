/*
Shambhuraj Wadghule
File name: Expr_Tree.cpp
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .cpp file for building the expression tree.
*/

Preorder_Expression::Preorder_Expression(void)
	:result_("")
{
	//Does nothing
}

Preorder_Expression::~Preorder_Expression(void)
{
	//Does nothing
}

//Methods for visiting concrete nodes
///Visit Addition Expression
void Preorder_Expression::Visit_Addition_Node (Addition_Node & node)
{
	//String for if exception is thrown
	std::string missingOperands = "Evaluating the expression using a visitor has failed.";

	//If left and right children exist
	if(node.getLeft() != nullptr && node.getRight() != nullptr)
	{
		//Next is addition sign
		std::string s1 = "+";

		//Visit left, retrieve result
		node.getLeft()->accept(*this);
		std::string s2 = this->result();

		//Visit right, retrieve result
		node.getRight()->accept(*this);
		std::string s3 = this->result();

		//Clear result, append sub-results
		result_ = "";
		result_.append(s1);
		result_.append(" ");
		result_.append(s2);
		result_.append(" ");
		result_.append(s3);
	}
	else
		throw missingOperands;
}

///Visit Subtraction Node
void Preorder_Expression::Visit_Subtraction_Node (Subtraction_Node & node)
{
	//String for if exception is thrown
	std::string missingOperands = "Evaluating the expression using a visitor has failed.";

	//If left and right children exist
	if(node.getLeft() != nullptr && node.getRight() != nullptr)
	{
		//Next is subtraction sign
		std::string s1 = "-";

		//Visit left, retrieve result
		node.getLeft()->accept(*this);
		std::string s2 = this->result();

		//Visit right, retrieve result
		node.getRight()->accept(*this);
		std::string s3 = this->result();

		//Clear result, append sub-results
		result_ = "";
		result_.append(s1);
		result_.append(" ");
		result_.append(s2);
		result_.append(" ");
		result_.append(s3);
	}
	else
		throw missingOperands;
}

///Visit Multiplication Node
void Preorder_Expression::Visit_Multiplication_Node (Multiplication_Node & node)
{
	//String for if exception is thrown
	std::string missingOperands = "Evaluating the expression using a visitor has failed.";

	//If left and right children exist
	if(node.getLeft() != nullptr && node.getRight() != nullptr)
	{
		//Next is multiplication sign
		std::string s1 = "*";

		//Visit left, retrieve result
		node.getLeft()->accept(*this);
		std::string s2 = this->result();

		//Visit right, retrieve result
		node.getRight()->accept(*this);
		std::string s3 = this->result();

		//Clear result, append sub-results
		result_ = "";
		result_.append(s1);
		result_.append(" ");
		result_.append(s2);
		result_.append(" ");
		result_.append(s3);
	}
	else
		throw missingOperands;
}

///Visit Division Node
void Preorder_Expression::Visit_Division_Node (Division_Node & node)
{
	//String for if exception is thrown
	std::string missingOperands = "Evaluating the expression using a visitor has failed.";

	//If left and right children exist
	if(node.getLeft() != nullptr && node.getRight() != nullptr)
	{
		//Next is division sign
		std::string s1 = "/";

		//Visit left, retrieve result
		node.getLeft()->accept(*this);
		std::string s2 = this->result();

		//Visit right, retrieve result
		node.getRight()->accept(*this);
		std::string s3 = this->result();

		//Clear result, append sub-results
		result_ = "";
		result_.append(s1);
		result_.append(" ");
		result_.append(s2);
		result_.append(" ");
		result_.append(s3);
	}
	else
		throw missingOperands;
}

///Visit Modulus Node
void Preorder_Expression::Visit_Modulus_Node (Modulus_Node & node)
{
	//String for if exception is thrown
	std::string missingOperands = "Evaluating the expression using a visitor has failed.";

	//If left and right children exist
	if(node.getLeft() != nullptr && node.getRight() != nullptr)
	{
		//Next is modulus sign
		std::string s1 = "%";

		//Visit left, retrieve result
		node.getLeft()->accept(*this);
		std::string s2 = this->result();

		//Visit right, retrieve result
		node.getRight()->accept(*this);
		std::string s3 = this->result();

		//Clear result, append sub-results
		result_ = "";
		result_.append(s1);
		result_.append(" ");
		result_.append(s2);
		result_.append(" ");
		result_.append(s3);
	}
	else
		throw missingOperands;
}

///Visit Number Node
void Preorder_Expression::Visit_Number_Node (Number_Node & node)
{
	//Retrieve number from number node
	result_ = node.print();
}

//Return result
std::string Preorder_Expression::result (void)
{
	return result_;
}
