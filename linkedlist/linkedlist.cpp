#include "linkedlist.h"
#include <iostream>
#include <assert.h>
using namespace std;

template <typename T>
Node<T>::Node()
{
    this->value = 0;
    this->next = NULL;
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
     this->next = &node;
}

template< typename T>
Linkedlist<T>::Linkedlist(){
    this->head = Node<T>();
}

template< typename T>
Linkedlist<T>::Linkedlist(T value){
    this->head = Node<T>(value);
}

template<typename T>
Linkedlist<T>::Linkedlist(Node<T> node){
    this->head = node;
}

template<typename T>
void Linkedlist<T>::setHead(Node<T> node){
    this->head = node;
}

template<typename T>
Node<T> Linkedlist<T>::getHead(){
    return this->head;
}

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
    //Node init test
    Node<int> head = Node<int>();
    Node<int> tail = Node<int>();

    //Node getter, setter test
    head.setValue(10);
    head.setNext(tail);
    assert(head.getNext()->getValue() == 0);

    //LinkedList init test
    Linkedlist<int> lt1 = Linkedlist<int>();
    Linkedlist<int> lt2 = Linkedlist<int>(10);
    Linkedlist<int> lt3 = Linkedlist<int>(head);

    //LinkedList getter, setter test
    lt1.setHead(tail);
    assert(lt1.getHead().getValue() == 0);


    return 0;
}