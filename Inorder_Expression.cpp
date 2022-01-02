/*
Shambhuraj Wadghule
File name: Expr_Tree.cpp
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .cpp file for building the expression tree.
*/

Inorder_Expression::Inorder_Expression(void)
	:result_("")
{
	//Does nothing
}

Inorder_Expression::~Inorder_Expression(void)
{
	//Does nothing
}

//Methods for visiting concrete nodes
///Visit Addition Node - check for children nodes and retrieve correct substrings for each
void Inorder_Expression::Visit_Addition_Node (Addition_Node & node)
{
	//String for when exception is thrown
	std::string missingOperands = "Evaluating the expression using a visitor has failed.";

	//If both left and right children nodes exist
	if(node.getLeft() != nullptr && node.getRight() != nullptr)
	{
		//Visit the left child node and retrieve the result
		node.getLeft()->accept(*this);
		std::string s1 = this->result();

		//Next part of string will be a plus sign
		std::string s2 = "+";

		//Visit the right child node and retrieve the result
		node.getRight()->accept(*this);
		std::string s3 = this->result();

		//Clear the string and then append all three parts
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

///Visit Subtraction Node - check for children nodes and retrieve correct substrings for each
void Inorder_Expression::Visit_Subtraction_Node (Subtraction_Node & node)
{
	//String for when exception is thrown
	std::string missingOperands = "Evaluating the expression using a visitor has failed.";

	//If both left and right children nodes exist
	if(node.getLeft() != nullptr && node.getRight() != nullptr)
	{
		//Visit left, retrieve result
		node.getLeft()->accept(*this);
		std::string s1 = this->result();

		//Next is subtraction sign
		std::string s2 = "-";

		//Visit right, retrieve result
		node.getRight()->accept(*this);
		std::string s3 = this->result();

		//Clear full result, append sub-results
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

///Visit Multiplication Node - check for children nodes and retrieve correct substrings for each
void Inorder_Expression::Visit_Multiplication_Node (Multiplication_Node & node)
{
	//String for when exception is thrown
	std::string missingOperands = "Evaluating the expression using a visitor has failed.";

	//If both left and right children exist
	if(node.getLeft() != nullptr && node.getRight() != nullptr)
	{
		//Visit left, retrieve result
		node.getLeft()->accept(*this);
		std::string s1 = this->result();

		//Next is multiplication sign
		std::string s2 = "*";

		//Visit right, retrieve result
		node.getRight()->accept(*this);
		std::string s3 = this->result();

		//Clear full result, append sub-results
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

///Visit Division Node - check for children nodes and retrieve correct substrings for each
void Inorder_Expression::Visit_Division_Node (Division_Node & node)
{
	//String for when exception is thrown
	std::string missingOperands = "Evaluating the expression using a visitor has failed.";

	//If both left and right children exist
	if(node.getLeft() != nullptr && node.getRight() != nullptr)
	{
		//Visit left, retrieve result
		node.getLeft()->accept(*this);
		std::string s1 = this->result();

		//Next is division sign
		std::string s2 = "/";

		//Visit right, retrieve result
		node.getRight()->accept(*this);
		std::string s3 = this->result();

		//Clear full result, append sub-results
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

///Visit Modulus Node - check for children nodes and retrieve correct substrings for each
void Inorder_Expression::Visit_Modulus_Node (Modulus_Node & node)
{
	//String for when exception is thrown
	std::string missingOperands = "Evaluating the expression using a visitor has failed.";

	//If both left and right children exist
	if(node.getLeft() != nullptr && node.getRight() != nullptr)
	{
		//Visit left, retrieve result
		node.getLeft()->accept(*this);
		std::string s1 = this->result();

		//Next is modulus sign
		std::string s2 = "%";

		//Visit right, retrieve result
		node.getRight()->accept(*this);
		std::string s3 = this->result();

		//Clear full result, append sub-results
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

///Visit Number Node - retrieve correct string from the number node
void Inorder_Expression::Visit_Number_Node (Number_Node & node)
{
	//Retrieve number
	result_ = node.print();
}

///Result - return the result string
std::string Inorder_Expression::result(void)
{
	return result_;
}
