#include "Black_Node.h"

Black_Node::Black_Node(const Node& a)
        : Node(a.data, a.next, a.prev)
        { }

Black_Node::~Black_Node()
{
    //dtor
}
