#include <iostream>
#include "NodeVar.h"

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

    tree.push_beginning(4, &red_branch);

    if (test_push_beginning())
        cout << "Sukces metody push_beginning. " << endl;
    else
        cout << "push_beginning: nie udalo sie." << endl;

     if (test_push_end())
        cout << "Sukces metody push_end. " << endl;
    else
        cout << "push_end: nie udalo sie." << endl;

    if (test_n_pop_front())
        cout << "Sukces metody n_pop_front. " << endl;
    else
        cout << "n_pop_front: nie udalo sie." << endl;

    if (test_n_pop_back())
        cout << "Sukces metody n_pop_back. " << endl;
    else
        cout << "n_pop_back: nie udalo sie." << endl;

    if (test_reverseList())
        cout << "Sukces metody reverse_List. " << endl;
    else
        cout << "reverse_List: nie udalo sie." << endl;

     if (test_linear_search())
        cout << "Sukces metody linear_search. " << endl;
    else
        cout << "linear_search: nie udalo sie." << endl;

    if (test_bubble_sort())
        cout << "Sukces metody bubble_sort. " << endl;
    else
        cout << "bubble_sort: nie udalo sie." << endl;

    if (test_find_min())
        cout << "Sukces metody find_min. " << endl;
    else
        cout << "find_min: nie udalo sie." << endl;

    if (test_insert_at())
        cout << "Sukces metody insert_at. " << endl;
    else
        cout << "insert_at: nie udalo sie." << endl;

    if(test_swap_value())
         cout << "Sukces metody swap_value. " << endl;
    else
        cout << "swap_value: nie udalo sie." << endl;

     if(test_size_())
         cout << "Sukces metody swap_. " << endl;
    else
        cout << "swap_: nie udalo sie." << endl;
/*
    if(test_swap_())
         cout << "Sukces metody swap_. " << endl;
    else
        cout << "swap_: nie udalo sie." << endl;
*/

    if(test_remove_from_position())
         cout << "Sukces metody remove_from_position. " << endl;
    else
        cout << "remove_from_position: nie udalo sie." << endl;

    tree.give_me_node(0)->testowa();

    Black_Node black_branch;

    tree.give_me_node(0)->testowa();

    tree.display();

    return 0;
}

int operator +(const Node &lhs, const Node &rhs)
{
    return (lhs.data + rhs.data);
}
bool test_push_beginning()
{
    List obiekttestowy;

    Red_Node red1;
    obiekttestowy.push_beginning(41, &red1);

    Black_Node black1;
    obiekttestowy.push_beginning(42, &black1);

    Black_Node black2;
    obiekttestowy.push_beginning(43, &black2);

    Red_Node red2;
    obiekttestowy.push_beginning(44, &red2);

    if (obiekttestowy[0] == 44)
       return true;

    return false;
}
bool test_push_end()
{
    List obiekttestowy;

    Red_Node red;
    obiekttestowy.push_end(41, &red);

    Black_Node black1;
    obiekttestowy.push_end(42, &black1);

    Black_Node black2;
    obiekttestowy.push_end(43, &black2);

    Red_Node red2;
    obiekttestowy.push_end(44, &red2);

    if (obiekttestowy[3] == 44)
       return true;

    return false;
}

bool test_n_pop_front()
{
    List obiekttestowy;

    Red_Node red;
    obiekttestowy.push_beginning(41, &red);

    Black_Node black1;
    obiekttestowy.push_beginning(42, &black1);

    Black_Node black2;
    obiekttestowy.push_beginning(43, &black2);

    Red_Node red2;
    obiekttestowy.push_beginning(44, &red2);

    obiekttestowy.n_pop_front();

    if (obiekttestowy[0]==43)
        return true;

    return false;
}

bool test_n_pop_back()
{
    List obiekttestowy;

    Red_Node red;
    obiekttestowy.push_beginning(41, &red);

    Black_Node black1;
    obiekttestowy.push_beginning(42, &black1);

    Black_Node black2;
    obiekttestowy.push_beginning(43, &black2);

    Red_Node red2;
    obiekttestowy.push_beginning(44, &red2);

    obiekttestowy.n_pop_back();
    if (obiekttestowy[2]==42)
        return true;
    return false;
}


bool test_reverseList()
{
    List obiekttestowy;

    Red_Node red;
    obiekttestowy.push_beginning(41, &red);

    Black_Node black1;
    obiekttestowy.push_beginning(42, &black1);

    Black_Node black2;
    obiekttestowy.push_beginning(43, &black2);

    Red_Node red2;
    obiekttestowy.push_beginning(44, &red2);

    obiekttestowy.reverseList();

    if (obiekttestowy[0] == 41 && obiekttestowy[1] == 42 && obiekttestowy[2] == 43 && obiekttestowy[3] == 44)
        return true;
    return false;
}

bool test_linear_search()
{
    List obiekttestowy;

    Red_Node red;
    obiekttestowy.push_beginning(41, &red);

    Black_Node black1;
    obiekttestowy.push_beginning(42, &black1);

    Black_Node black2;
    obiekttestowy.push_beginning(43, &black2);

    Red_Node red2;
    obiekttestowy.push_beginning(44, &red2);

   int solution = obiekttestowy.linear_search(42)->data;

    if(solution == 42)
        return true;
    return false;
}


bool test_bubble_sort()
{
    List obiekttestowy;

    Red_Node red;
    obiekttestowy.push_beginning(5, &red);

    Black_Node black1;
    obiekttestowy.push_beginning(1, &black1);

    Black_Node black2;
    obiekttestowy.push_beginning(4, &black2);

    obiekttestowy.bubble_sort();

    if(obiekttestowy[0] == 1 && obiekttestowy[1] == 4 && obiekttestowy[2] == 5)
        return true;
    return false;
}


bool test_find_min()
{
    List obiekttestowy;

    Red_Node red;
    obiekttestowy.push_beginning(5, &red);

    Black_Node black1;
    obiekttestowy.push_beginning(1, &black1);

    Black_Node black2;
    obiekttestowy.push_beginning(4, &black2);

    int min =  9;
    min = obiekttestowy.find_min();

    if((min == 1))
        return true;

    return false;
}


bool test_insert_at()
{
    List obiekttestowy;

    Red_Node red;
    obiekttestowy.push_beginning(5, &red);

    Black_Node black1;
    obiekttestowy.push_beginning(1, &black1);

    Black_Node black2;
    obiekttestowy.push_beginning(4, &black2);

    Black_Node black3;
    black3.data = 3;
    obiekttestowy.insert_at(2, &black3);

    if((obiekttestowy[2]==3))
        return true;
    return false;
}


bool test_swap_value()
{
   List obiekttestowy;

    Red_Node red;
    obiekttestowy.push_beginning(5, &red);

    Black_Node black1;
    obiekttestowy.push_beginning(1, &black1);

    Black_Node black2;
    obiekttestowy.push_beginning(4, &black2); // 4 1 5

   obiekttestowy.swap_value(1, 0);
    if(obiekttestowy[0] ==1 && obiekttestowy[1] == 4)
        return true;
    return false;
}


bool test_swap_()
{
    List obiekttestowy;

    Red_Node red;
    obiekttestowy.push_beginning(5, &red);

    Black_Node black1;
    obiekttestowy.push_beginning(1, &black1);

    Black_Node black2;
    obiekttestowy.push_beginning(4, &black2); // 4 1 5

    obiekttestowy.swap_(1, 0);

    if(obiekttestowy[0] == 1 && obiekttestowy[1] == 4)
        return true;
    return false;
}


bool test_size_()
{
   List obiekttestowy;

    Red_Node red;
    obiekttestowy.push_beginning(5, &red);

    Black_Node black1;
    obiekttestowy.push_beginning(1, &black1);

    Black_Node black2;
    obiekttestowy.push_beginning(4, &black2);

    int size = obiekttestowy.size_();

    if(size ==3)
        return true;
    return false;
}


bool test_remove_from_position()
{
    List obiekttestowy;

    Red_Node red;
    obiekttestowy.push_beginning(5, &red);

    Black_Node black1;
    obiekttestowy.push_beginning(1, &black1);

    Black_Node black2;
    obiekttestowy.push_beginning(4, &black2);

    obiekttestowy.remove_from_position(0);

    //obiekttestowy.display();
    if(obiekttestowy[0] == 1) // 3 1 4 - nic nie zostalo usuniete
        return true;
    return false;
}
