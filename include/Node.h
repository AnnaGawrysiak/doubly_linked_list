# pragma once

using namespace std;

class Node
{
    public:
        int data;
        Node* next;
        Node* prev;
        Node();
        Node (const Node& a);
        virtual ~Node();
        Node& operator=(const Node& r);
        virtual void testowa() = 0;

};


