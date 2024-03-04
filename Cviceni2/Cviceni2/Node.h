#pragma once
#include <string>;

using namespace std;

class Node
{
private:
	string text;
	Node* positive;
	Node* negative;

public:
	Node(string text);

	string GetText();

	// void SetPositive(Node* node);
	Node* CreatePositive(string text);
	Node* CreateNegative(string text);

	Node* GetPositive();
	Node* GetNegative();

	bool IsLeaf();
};

