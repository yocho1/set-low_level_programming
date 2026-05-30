# 🔗 Doubly Linked Lists - C Programming

## 📖 Description

This project implements basic operations on **doubly linked lists** in C. Unlike singly linked lists, each node in a doubly linked list has pointers to both the **next** and **previous** nodes, allowing bidirectional traversal.

## 📁 Files

| File | Description |
|------|-------------|
| `lists.h` | Header file with struct definition and function prototypes |
| `0-print_dlistint.c` | Function that prints all elements of a doubly linked list |

## 🏗️ Data Structure

```c
typedef struct dlistint_s
{
    int n;                      // Integer data
    struct dlistint_s *prev;    // Pointer to previous node
    struct dlistint_s *next;    // Pointer to next node
} dlistint_t;
