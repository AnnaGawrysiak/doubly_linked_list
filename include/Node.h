# pragma once

using namespace std;

// A doubly linked list node
class Node // element listy dwukierunkowej
{
    public:
        int data;
        Node* next;
        Node* prev;
        Node();
        Node (const Node& a);
        virtual ~Node();
        Node& operator=(const Node& r);
        virtual void testowa() = 0; // metoda czysto wirtualna

    //private:
};


