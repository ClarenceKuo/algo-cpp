#include "linkedlist.h"
#include <iostream>
using namespace std;

template <typename T>
Node<T>::Node()
{
    this->value = NULL;
    this->next = nullptr;
}
template <typename T>
Node<T>::Node(T value)
{
    this->value = value;
    this->next = nullptr;
}

template <typename T>
T Node<T>::getValue()
{
    return this->value;
}

template <typename T>
void Node<T>::setValue(T val)
{
    this->value = val;
}

template <typename T>
Node<T>* Node<T>::getNext()
{
    return this->next;
}

template <typename T>
void Node<T>::setNext(Node<T> node)
{
     this->next = node;
}

// template< typename T>
// Linkedlist<T>::Linkedlist(){
//     head = nullptr;
// }

// template< typename T>
// Linkedlist<T>::~Linkedlist(){
//     head = nullptr;
// }

// template< typename T>
// Linkedlist<T>::Linkedlist(Node<T> node){
//     head = node;
// }

// template<typename T>
// void Linkedlist<T>::setHead(Node<T> node){
//     head = node;
// }

// template<typename T>
// Node<T> Linkedlist<T>::getHead(){
//     return head;
// }

// //O(n)
// template<typename T>
// int Linkedlist<T>::length(){
//     Node<T> *node = &head;
//     int cnt = 0;
//     while(node.getNext() != nullptr){
//         cnt++;
//         node = node.getNext();
//     }
//     return cnt;
// }

// //O(n)
// template<typename T>
// void Linkedlist<T>::insert(T value){
//     Node<T> *node = &head;
//     while(node.next != nullptr){
//         node = node.getNext();
//     }
//     Node<T> newNode = Node(value);
//     node.setNext(newNode);
// }

// //O(n)
// template<typename T>
// bool Linkedlist<T>::remove_by_value(T value){
//     Node<T> *node = &head;
//     Node<T> *prev = &head;
//     while(true){
//         if(node.getValue() == value){
//             if(node == head)
//                 head = head.getNext();
//             else
//                 prev.setNext(node.getNext());
//             return true;
//         }
//         else if(node.getNext() == nullptr){
//             return false;
//         }
//         else{
//             prev = node;
//             node = node.getNext();
//         }
//     }
// }

int main(void){
    Node<int> head = Node<int>(10);
    cout<<head.getNext()->getValue()<<endl;
    return 0;
}