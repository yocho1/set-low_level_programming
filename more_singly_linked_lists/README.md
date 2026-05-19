# 🔗 More Singly Linked Lists - C Programming

## 📖 Description

This project implements basic operations on **singly linked lists** containing integers (`listint_t`). Unlike the previous project that used strings, this one focuses on integer data.

## 📁 Files

| File | Description |
|------|-------------|
| `lists.h` | Header file with struct definition and function prototypes |
| `0-print_listint.c` | Function that prints all elements of a linked list |

## 🏗️ Data Structure

```c
typedef struct listint_s
{
    int n;                  // Integer data
    struct listint_s *next; // Pointer to next node
} listint_t;
