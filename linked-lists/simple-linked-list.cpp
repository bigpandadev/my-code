#include <iostream>
using namespace std;

// structure used to represent each element of a linked list
struct elem{
    int val;
    elem* next = NULL;
};

// function used to add new element at the end of a linked list
void list_add_at_end(elem* llist, int val) {
    
    // first, find last element of the list
    elem* curr = llist;
    while(curr->next)
        curr = curr->next;
    
    // then, add new element after the last element
    curr = curr->next = new elem;
    curr->val = val;
}

// function used to recursively delete a linked list elements
elem* list_delete(elem* llist) {
    if(llist->next)
        list_delete(llist->next);
    delete llist;
    return NULL;
}

// function used to print a linked list
void list_print(elem* llist) {
    for(elem* curr=llist->next; curr; curr=curr->next)
        cout << curr->val << " ";
    cout << endl;
}

int main() {
    
    // create a new empty linked list
    elem* llist = new elem;
    
    // add elements to the end of a linked list
    int val;
    while(1) {
        cout << "value (0=quit): ";
        cin >> val;
        
        if(val == 0)
            break;
        
        list_add_at_end(llist, val);
    }
    
    // print all elements
    list_print(llist);
    
    // delete linked list (using recursive function)
    llist = list_delete(llist);
    
    return 0;
}
