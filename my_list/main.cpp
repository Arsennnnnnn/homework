#include <iostream>
#include "LinkedList.h"


int main() {
    LinkedList<int> head;
    head.val = 1;
    LinkedList<int> list(&head);
    LinkedList<int> list2(&list);
    list2.val = 2;
    LinkedList<int> list3(&list2);
    list3.val = 3;
    std::cout << list.val << std::endl;
    std::cout << list2.val << std::endl;
    std::cout << list3.val << std::endl;
    return 0;
}