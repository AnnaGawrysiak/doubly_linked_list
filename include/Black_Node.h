#pragma once
#include "Node.h"

class Black_Node : public Node
{
    public:
        Black_Node(const Node & a);
        virtual ~Black_Node();
        void testowa()
        {
            cout << "Jestem black node." << endl;
        }

    private:
};
