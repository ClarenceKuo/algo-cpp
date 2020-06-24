#ifndef LOCALIZER_H
#define LOCALIZER_H

#include <stdio.h>
#include <stdlib.h>
template <typename T>
class Node{
        private:
            T value;
            Node* next;
        public:
            Node();
            Node(T);
            T getValue();
            Node<T>* getNext();
            void setNext(Node<T>);
            void setValue(T);
        };

// template <typename T>
// class Linkedlist
// {
//     public:
//         // constructor functions
//         Linkedlist ();
//         ~Linkedlist ();
//         Linkedlist (Node<T>);

//         // setter 
//         void setHead(Node<T>);

//         // getter
//         Node<T> getHead();

//         // other functions 
//         int length();
//         void insert(T);
//         bool remove_by_value(T);
//         bool reverse();
//     private:
//         Node head;       


// };
#endif /* LOCALIZER_H */