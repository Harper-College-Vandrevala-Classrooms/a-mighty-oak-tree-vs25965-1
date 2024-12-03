#pragma once
#include "Squirrel.h"
class NodeTree
{
public: 
	NodeTree(Squirrel* squirrel);
	void setleft(NodeTree* nodeTree);
	void setright(NodeTree* nodeTree);
	NodeTree* getleft();
	NodeTree* getright();
	string getName();

private:
 string name;
 NodeTree* left;  // Reference to the left child
 NodeTree* right;

};

