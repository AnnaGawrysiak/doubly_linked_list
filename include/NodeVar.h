#pragma once
#include "Node.h"
#include "Black_Node.h"
#include "Red_Node.h"

#include <iostream>

using namespace std;

class List
{
private:

      Node* head;

      Node* tail;

      unsigned count;

    template<class T>
    void insert_after(T* prev_node, int new_data)
    {
      T* newNode = new T;

       newNode->data = new_data;

       newNode->next = prev_node->next;

       prev_node->next = newNode;

       newNode->prev = prev_node;

       if (newNode->next != nullptr)
       newNode->next->prev = newNode;
       else tail = newNode;

        count++;
    }

    template<class T>
    void insert_before(T* newNode, T* next_node)
    {
      //T* newNode = new T;

       //newNode->data = new_data;

       next_node->prev = newNode;

       newNode->next = next_node;

       if (newNode->prev != nullptr)
       {
           newNode->prev = next_node->prev->prev;
           newNode->prev->next = newNode;
       }
       else head = newNode;

       count++;
    }

     template<class T>
    void n_remove (T* Node_to_remove)
    {
        count--;

        if (Node_to_remove->prev != nullptr)
            Node_to_remove->prev->next = Node_to_remove->next;
        else
            {
            head = Node_to_remove->next;
            delete Node_to_remove;
            return;
            }


        if (Node_to_remove->next != nullptr)
            Node_to_remove->next->prev = Node_to_remove->prev;
        else
            tail = Node_to_remove->prev;

            cout << "Node to remove: " << Node_to_remove->data << endl;

             delete Node_to_remove;

    }

public:

     Node* give_me_node(int index);

    List();

    ~List();

    int operator [](int index);

    template<class T>
    void push_beginning(int new_data, T* newNode)
        {
           newNode->data = new_data;
           newNode->prev = nullptr;
           newNode->next = head;

           if(head != nullptr)
           head->prev = newNode;

           else tail = newNode;

           head = newNode;

           count++;
        }

    template<class T>
    void push_end (int new_data, T* newNode)
        {
           //T* newNode = new T;

           newNode->data = new_data;
           newNode->prev = tail;
           newNode->next = nullptr;

           if(tail != nullptr)
           tail->next = newNode;
           else
           head = newNode;

           tail = newNode;

           count++;
        }

    void remove_from_position(int position);

    void n_pop_front();

    void n_pop_back();

    void reverseList();

    Node* linear_search(int value);

    void bubble_sort();

    int find_min();

    void insert_value_at(int position, int value);

    void swap_value(int index1, int index2);

    void swap_(int index1, int index2);

    int size_();

    void display();

    template<class T>
    void insert_at(int position, T* newNode)
    {
        if (position > size_())
        {
           cout << "Warning: position exceeds size of the list" << endl;

           return;
        }

        //T* newNode = new T;

        //newNode->data = value;

        Node* temp = head;

        for (int i = 0; i < position; i++)
        {
            temp = temp->next;
        }

        if (temp->prev != nullptr)
        {
           newNode->prev = temp->prev;
           newNode->prev->next = newNode;
        }
        else head = newNode;

       temp->prev = newNode;

       newNode->next = temp;

       count++;

    }


};
