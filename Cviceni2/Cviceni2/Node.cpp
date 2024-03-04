#include "Node.h"

Node::Node(string text)
{
	this->text = text;
	this->negative = nullptr;
	this->positive = nullptr;
}

string Node::GetText()
{
	return this->text;
}

Node* Node::CreatePositive(string text)
{
	this->positive = new Node(text);
	return this->positive;
}

Node* Node::CreateNegative(string text)
{
	this->negative = new Node(text);
	return this->negative;
}

Node* Node::GetPositive()
{
	return this->positive;
}

Node* Node::GetNegative()
{
	return this->negative;
}

bool Node::IsLeaf()
{
	return this->negative == nullptr && this->positive == nullptr;
}
