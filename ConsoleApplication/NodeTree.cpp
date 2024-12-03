#include "NodeTree.h"

NodeTree::NodeTree(Squirrel* squirrel)
{
    name = squirrel->get_name();
    left = nullptr;
    right = nullptr;
}
NodeTree* NodeTree::getleft()
{
    return this->left;
}
void NodeTree::setleft(NodeTree* nodeTree)
{
    this->left = nodeTree;
}

void NodeTree::setright(NodeTree* nodeTree)
{
    this->right = nodeTree;
}
NodeTree* NodeTree::getright()
{
    return this->right;
}
string NodeTree::getName() {
    return this->name;
}