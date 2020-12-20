#pragma once
#include "Node.h"

class Red_Node : public Node
{
    public:
        Red_Node();
        virtual ~Red_Node();
        void testowa()
        {
            cout << "Jestem red node." << endl;
        }


    private:
};
