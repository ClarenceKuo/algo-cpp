#include "linkedlist.h"
#include <iostream>
using namespace std;

template <typename T>
Node<T>::Node()
{
    value = NULL;
    next = nullptr;
}
template <typename T>
Node<T>::Node(T value)
{
    value = value;
    next = nullptr;
}

template <typename T>
Node<T>::Node(T)
{
    value = T;
    next = NULL;
}
template <typename T>
T Node<T>::getValue()
{
    return value;
}

template <typename T>
Node<T> Node<T>::getNext()
{
    return next;
}

template< typename T>
Linkedlist<T>::Linkedlist(){
    head = nullptr;
}

template< typename T>
Linkedlist<T>::~Linkedlist(){
    head = nullptr;
}

template< typename T>
Linkedlist<T>::Linkedlist(Node<T> node){
    head = node;
}

template<typename T>
void Linkedlist<T>::setHead(Node<T> node){
    head = node;
}

template<typename T>
Node<T> Linkedlist<T>::getHead(){
    return head;
}

//O(n)
template<typename T>
int Linkedlist<T>::length(){
    Node<T> *node = &head;
    int cnt = 0;
    while(node.next != nullptr){
        cnt++;
        node = node.next;
    }
    return cnt;
}

//O(n)
template<typename T>
void Linkedlist<T>::insert(T value){
    Node<T> *node = &head;
    while(node.next != nullptr){
        node = node.next;
    }
    Node<T> newNode = Node(value);
    node.next = newNode;
}