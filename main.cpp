#include <iostream>
#include "NodeVar.h"
#include "Red_Node.h"
#include "Black_Node.h"

using namespace std;

int operator +(const Node &lhs, const Node &rhs);

bool test_push_beginning();

bool test_push_end();

bool test_n_pop_front();

bool test_n_pop_back();

bool test_reverseList();

bool test_linear_search();

bool test_bubble_sort();

bool test_find_min();

bool test_insert_at();

bool test_swap_value();

bool test_swap_();

bool test_size_();

bool test_remove_from_position();

int main()
{
    List tree;

    Red_Node red_branch;

    tree.add_node(&red_branch, 4);

    tree.give_me_node(0)->testowa();

    Black_Node black_branch;

    tree.add_node(&black_branch, 5);

    tree.give_me_node(0)->testowa();

    tree.add_node(&red_branch, 7);

    tree.display();

    //Black_Node red_branch;

    //tree.push_beginning(red_branch);

    return 0;
}
/*
int operator +(const Node &lhs, const Node &rhs)
{
    return (lhs.data + rhs.data);
}
bool test_push_beginning()
{
    List obiekttestowy;
    obiekttestowy.push_beginning(41);
    obiekttestowy.push_beginning(42);
    obiekttestowy.push_beginning(35);
    obiekttestowy.push_beginning(9);
    obiekttestowy.push_beginning(4);
    obiekttestowy.push_beginning(3);
    if (obiekttestowy[0]==3)
       return true;
    return false;
}
bool test_push_end()
{
    List obiekttestowy;
    obiekttestowy.push_end(4);
    obiekttestowy.push_end(5);
    if(obiekttestowy[1]==5)
        return true;
    return false;
}
bool test_n_pop_front()
{
    List obiekttestowy;
    obiekttestowy.push_beginning(4);
    obiekttestowy.push_beginning(3);
    obiekttestowy.push_beginning(2);
    obiekttestowy.n_pop_front();
    if (obiekttestowy[0]==3)
        return true;
    return false;
}
bool test_n_pop_back()
{
    List obiekttestowy;
    obiekttestowy.push_beginning(4);
    obiekttestowy.push_beginning(3);
    obiekttestowy.push_beginning(2);
    obiekttestowy.n_pop_back();
    if (obiekttestowy[1]==3)
        return true;
    return false;
}
bool test_reverseList()
{
     List obiekttestowy;
    obiekttestowy.push_beginning(1);
    obiekttestowy.push_beginning(2);
    obiekttestowy.push_beginning(3);
    obiekttestowy.reverseList();
    if (obiekttestowy[0] == 1 && obiekttestowy[1] == 2 && obiekttestowy[2] == 3)
        return true;
    return false;
}
bool test_linear_search()
{
     List obiekttestowy;
    obiekttestowy.push_beginning(1);
    obiekttestowy.push_beginning(2);
    obiekttestowy.push_beginning(3);
   int solution = obiekttestowy.linear_search(2)->data;
    if(solution == 2)
        return true;
    return false;
}
bool test_bubble_sort()
{
     List obiekttestowy;
    obiekttestowy.push_beginning(4);
    obiekttestowy.push_beginning(1);
    obiekttestowy.push_beginning(5);
    obiekttestowy.bubble_sort();
    if(obiekttestowy[0] == 1 && obiekttestowy[1] == 4 && obiekttestowy[2] == 5)
        return true;
    return false;
}
bool test_find_min()
{
    List obiekttestowy;
    obiekttestowy.push_beginning(4);
    obiekttestowy.push_beginning(1);
    obiekttestowy.push_beginning(5);
    int min = obiekttestowy.find_min();
    if((min == 1))
        return true;
    return false;
}
bool test_insert_at()
{
    List obiekttestowy;
    obiekttestowy.push_beginning(4);
    obiekttestowy.push_beginning(1);
    obiekttestowy.push_beginning(5);
    obiekttestowy.insert_at(2, 3);
    if((obiekttestowy[2]==3))
        return true;
    return false;
}
bool test_swap_value()
{
    List obiekttestowy;
    obiekttestowy.push_beginning(4);
    obiekttestowy.push_beginning(1);
    obiekttestowy.push_beginning(4); // 4 1 4
   obiekttestowy.swap_value(1, 0);
    if(obiekttestowy[0] ==1 && obiekttestowy[1] == 4)
        return true;
    return false;
}
bool test_swap_()
{
    List obiekttestowy;
    obiekttestowy.push_beginning(4);
    obiekttestowy.push_beginning(1);
    obiekttestowy.push_beginning(4);
   obiekttestowy.swap_value(1, 0);
    if(obiekttestowy[0] ==1 && obiekttestowy[1] == 4)
        return true;
    return false;
}
bool test_size_()
{
    List obiekttestowy;
    obiekttestowy.push_beginning(4);
    obiekttestowy.push_beginning(1);
    obiekttestowy.push_beginning(4);
    int size = obiekttestowy.size_();
    if(size ==3)
        return true;
    return false;
}
bool test_remove_from_position()
{
    List obiekttestowy;
    obiekttestowy.push_beginning(4);
    obiekttestowy.push_beginning(1);
    obiekttestowy.push_beginning(3); // 3 1 4
    obiekttestowy.remove_from_position(0);
    obiekttestowy.display();
    if(obiekttestowy[0] == 1) // 3 1 4 - nic nie zostalo usuniete
        return true;
    return false;
}
*/
