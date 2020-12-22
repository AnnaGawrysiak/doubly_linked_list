#include "NodeVar.h"
#include "Node.h"
#include "Black_Node.h"
#include "Red_Node.h"

#include <typeinfo>


List::List()
{
    head = nullptr;
    tail = nullptr;
    count = 0;
}

List::~List()
{

}

Node* List::give_me_node(int index)
{
    if (index == 0)
        return head;

    Node* temp = head;

    for (int i = 0; i < index; i++)
    {
        temp = temp->next;
    }

    return temp;
}


void List::insert_after(Node* prev_node, int new_data) // przyjdzie node bez rozroznienia
{
    //Node* newNode = new Node;
    //decltype(prev_node) newNode;

    decltype(prev_node) newNode={nullptr};

    cout << " typ argumentu przekazwanego do metody insert_after: " << typeid(newNode).name() << endl;

    //auto* newNode = new auto(prev_node);


    // (give_me_type(prev_node))* newNode = new (give_me_type(prev_node)); // tego nie moze

   //if(typeid(prev_node)==typeid(Black_Node))
    //   Node* newNode = new Black_Node;

   // else
     //  Red_Node* newNode = new Red_Node;

   newNode->data = new_data;

   newNode->next = prev_node->next;

   prev_node->next = newNode;

   newNode->prev = prev_node;

   if (newNode->next != nullptr)
   newNode->next->prev = newNode;
   else tail = newNode;

    count++;
}

void List::insert_before(Node* next_node, int new_data)
{
    //decltype(next_node) newNode;

     decltype(next_node) newNode={nullptr};

   //Node* newNode = new Node;

   newNode->data = new_data;

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

void List::n_remove (Node* Node_to_remove)
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


int List::operator [](int index)
{
    Node* temp = head;

    for (int i = 0; i < index; i++)
    {
        temp = temp->next;
    }

    return temp->data;
}

void List::push_beginning(int new_data, Node* newNode_)
{
   //Node* newNode = new Node; // klasa abstrakcyjna, wiec nie mozemy utworzyc. za to moze do niego przyjsc czarny lub czerwony

    //decltype(newNode_) newNode;

     decltype(newNode_) newNode={nullptr};

   newNode->data = new_data;
   newNode->prev = nullptr;
   newNode->next = head;

   if(head != nullptr) //
   head->prev = newNode;

   else tail = newNode;

   head = newNode;

   count++;

}

void List::push_end(int new_data, Node* newNode_)
{

    decltype(newNode_) newNode={nullptr};

  // decltype(newNode_) newNode;
   //Node* newNode = new Node;

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

void List::remove_from_position (int position)
{
    n_remove(give_me_node(position));
}

void List::n_pop_front()
{
   if (head == nullptr)
        return;

    else if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        tail = nullptr;

        count--;

        return;
    }

    else
    {
        Node* temp = head->next;
        temp->prev = nullptr;
        delete head;
        head = temp;

        count--;

        return;
    }
}

void List::n_pop_back()

{
    if (head == nullptr)
        return;

    else if (head->next == nullptr)
    {
        Node* delNode = tail; // Save address of node to delete in a pointer
        tail = tail->prev;
        head = nullptr;
        delete delNode;
        count--;

        return;
    }

    else
    {
        Node* delNode = tail; // Save address of node to delete in a pointer
        tail = tail->prev;
        tail->next = nullptr;
        delete delNode;

        count--;

        return;
    }
}

void List::reverseList()
{
       Node *current = head;
       Node *prev = nullptr;

       tail = head;

        while (current != nullptr)
        {
            current->prev = current->next;
            current->next = prev;
            prev = current;
            current = current->prev;

        }

        head = prev;
    }

Node* List::linear_search(int value)
{
    if (head == nullptr)
        return nullptr;

    Node *temp = head;

    while(temp != tail && temp->data != value )
        {
            temp = temp->next;
        }

  if (temp->data == value)
    return temp;
  else
    return nullptr;

}


void List::bubble_sort()
{
    if (head == nullptr)
        return;

    Node *temp = head;

    do
    {
           if (temp->data > temp->next->data)
            {
                int tempNum = temp->data;
                temp->data = temp->next->data;
                temp->next->data = tempNum;
            }

        temp = temp->next;

    } while (temp->next!=nullptr);
}


int List::find_min()
{
    Node* ptr = head;

    int found_min = ptr->data;

    do
    {
      if (ptr->data > ptr->next->data)
      {
          found_min = ptr->next->data;
      }

       ptr = ptr->next;

       if(ptr->next == tail)
           return found_min;

    } while (ptr!=tail);

    return found_min;

}

void List::insert_at(int position, int value)
{
    if (position > size_())
    {
       cout << "Warning: position exceeds size of the list" << endl;

       return;
    };

    //void List::insert_before(Node* next_node, int new_data)

     insert_before(give_me_node(position+1), value);


   /* Node* newNode = new Node;

    newNode->data = value;

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
*/
}

void List::swap_value(int index1, int index2)
{
    int temp = 0;

    temp = give_me_node(index1)->data;
   give_me_node(index1)->data = give_me_node(index2)->data;
   give_me_node(index2)->data = temp;
}


void List::swap_(int index1, int index2)
{
    if (count == 0 || count ==1)
        return;

    if (index1 == index2)
        return;


    Node* A = give_me_node(index1);
    Node* B = give_me_node(index2);

    Node* temp1_prev = A->prev;
    Node* temp1_next = A->next;
    Node* temp2_prev = B->prev;
    Node* temp2_next = B->next;

    if (A->next == B)
    {
        A->next = temp2_next;
        A->prev = B;
        A->next->prev = A;

        B->prev = temp1_prev;
        B->next = A;
        B->prev->next = B;
    }

    else if (B->next == A)
    {
        B->next = temp1_next;
        B->prev = A;
        B->next->prev = B;

        A->prev = temp2_prev;
        A->next = B;
        A->prev->next = A;
    }

    else
    {
        A->prev = temp2_prev;
        A->next = temp2_next;

        B->prev = temp1_prev;
        B->next = temp1_next;

        if (A->prev != nullptr)
            A->prev->next = A;

        if (A->next != nullptr)
            A->next->prev = A;

        if (B->prev != nullptr)
            B->prev->next = B;

        if (B->next != nullptr)
            B->next->prev = B;
    }

    if(A->prev == nullptr)
    {
        head = A;
    }

    if(B->prev == nullptr)
    {
        head = B;
    }

    if(A->next == nullptr)
    {
        tail = A;
    }

    if(B->next == nullptr)
    {
        tail = B;
    }

}

int List::size_()
{
    int size_ = 0;

    if(head==nullptr)
    {
        return size_;
    }

    Node* temp = head;

    while (temp->next != nullptr)
    {
        temp = temp ->next;
        size_++;
    }

return (size_+1);
}


void List::display()
{
    if (head == nullptr)
    {
        cout << "List empty, nothing to display" << endl;
        return;
    }

   Node* ptr = head;

   cout << "Elements of the list: ";

   while (ptr != nullptr)
    {
      cout<< ptr->data <<" ";
      if (ptr->next != nullptr)
      {
          ptr = ptr->next;
      }
      else
          return;
    };

}


void List::add_node(Node* newNode, int value)
{

   newNode->data = value;
   newNode->prev = nullptr;
   newNode->next = head;

   if(head != nullptr) //
   head->prev = newNode;

   else tail = newNode;

   head = newNode;

   count++;
}

