# Description of linked-lists directory

## Intro to Linked lists

### What is a linked list?

A linked list is a data structure used to represent array of values like standard array with one big difference: it has no fixed length.
You can add a new element to the linked list no matter how many elements in linked list already exists.

### Representation of linked list

An default structure of linked list element is show here:

```cpp
  struct elem {
    int val;
    elem* next;
  };
```

Attribute val represents element value. 
Attribute next is a pointer to the next element in the linked list (or NULL if it is a last element in the linked list).


Not-yet allocated linked list is represented by folowing code:

```cpp
  elem* llist = NULL;
```

An empty linked list:

```cpp
  elem* llist = new elem;
  llist->next = NULL;
```

As seen on above code examples, linked list has one (first) element which is not used to store an value. It is a
head of the linked list and it should be counted in when writing a code.

____

## Examples

###simple-linked-list.cpp

Uses simple example of using a linked list with few functionality explained:
- how to add new element at the end of a linked list,
- how to print a linked list elements,
- how to delete all linked list elements (by simple recursive function)
