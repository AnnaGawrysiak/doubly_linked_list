#pragma once
#include "Node.h"
#include "Black_Node.h"
#include "Red_Node.h"

using namespace std;

class List
{
public:

      Node* head;

      Node* tail;

      unsigned count;


    void insert_after(Node* prev_node, int new_data);

    void insert_before(Node* next_node, int new_data);

    void n_remove (Node* Node_to_remove);

public:

     Node* give_me_node(int index);

    List();

    ~List();

    int operator [](int index);

    void push_beginning(int new_data, Node* newNode_);

    void push_end (int new_data, Node* newNode_);

    void remove_from_position(int position);

    void n_pop_front();

    void n_pop_back();

    void reverseList();

    Node* linear_search(int value);

    void bubble_sort();

    int find_min();

    void insert_at(int position, int value);

    void swap_value(int index1, int index2);

    void swap_(int index1, int index2);

    int size_();

    void display();

    void add_node(Node* newNode, int value);
};

enum List_heritage
{
    Black_Node,
    Red_Node
};
