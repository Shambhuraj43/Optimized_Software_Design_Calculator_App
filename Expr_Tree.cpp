/*
Shambhuraj Wadghule
File name: Expr_Tree.cpp
Project: Tree based calculator using software design principles.
Instructor: Dr. James Hill
Purpose: Provide the .cpp file for building the expression tree.
*/

///Default Constructor
Expr_Tree::Expr_Tree (void)
	:head_(nullptr)
{
	//Does nothing else
}

Expr_Tree::~Expr_Tree (void)
{
	if(head_ != nullptr)
		delete head_;
}

///Initialization Constructor - includes a head node
Expr_Tree::Expr_Tree (Expr_Node * head)
	:head_(head)
{
	//Does nothing else
}

///Get Head Node
Expr_Node * Expr_Tree::get_head_node (void)
{
	return head_;
}

///Set Head Node
void Expr_Tree::set_head_node(Expr_Node * newHead)
{
	head_ = newHead;
}
