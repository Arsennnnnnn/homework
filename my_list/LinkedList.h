#ifndef LINKEDLIST_H
#define LINKEDLIST_H


template <typename T>
class LinkedList {
    public:
    T val;
    LinkedList<T>* next;
    LinkedList();
    LinkedList(LinkedList<T>* _head);
    ~LinkedList();
};

template<typename T>
LinkedList<T>::LinkedList()
    : val(), next(nullptr) {}

template<typename T>
LinkedList<T>::LinkedList(LinkedList<T>* _next)
    : val(_next->val), next(_next){}

template<typename T>
LinkedList<T>::~LinkedList() {
    next = nullptr;
}

#endif //LINKEDLIST_H
