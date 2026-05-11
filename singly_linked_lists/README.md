# 🔗 Singly Linked Lists - C Programming

## 📖 Description

This project implements basic operations on **singly linked lists** in C. Singly linked lists are linear data structures where each node points to the next node, allowing dynamic memory allocation and efficient insertions/deletions.

## 📁 Files

| File | Description |
|------|-------------|
| `lists.h` | Header file with struct definition and function prototypes |
| `0-print_list.c` | Function that prints all elements of a linked list |
| `0-main.c` | Test file for print_list function |

## 🏗️ Data Structure

```c
typedef struct list_s
{
    char *str;              // String data
    unsigned int len;       // Length of the string
    struct list_s *next;    // Pointer to next node
} list_t;
