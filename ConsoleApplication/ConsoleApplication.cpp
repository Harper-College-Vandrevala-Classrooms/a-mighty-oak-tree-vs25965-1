
#include <iostream>
#include "NodeTree.h"

int main()
{
    cout << "\n\tOak Tree!!!" << endl;
    Squirrel squirrel1 ("Filly");
    NodeTree node1 = NodeTree(&squirrel1);
    Squirrel squirrel2("Billy");
    NodeTree node2 = NodeTree(&squirrel2);
    Squirrel squirrel3("Jimmy");
    NodeTree node3 = NodeTree(&squirrel3);

    node1.setleft(&node2);
    node1.setright(&node3);

    cout << "\nRoot squirrel: " << node1.getName();
    NodeTree *retrievedLeft = node1.getleft();
    cout << "\nLeft squirrel: " << retrievedLeft->getName();
    NodeTree *retrievedRight = node1.getright();
    cout << "\nRight squirrel: " << retrievedRight->getName() << endl;

    return 0;
    
}

