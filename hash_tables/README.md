# 🔑 Hash Tables - C Programming

## 📖 Description

This project implements a **hash table** data structure in C using **separate chaining** for collision resolution. Hash tables provide O(1) average time complexity for insertion, deletion, and lookup operations.

## 📁 Files

| File | Description |
|------|-------------|
| `hash_tables.h` | Header file with struct definitions and function prototypes |
| `0-hash_table_create.c` | Function that creates a new hash table |
| `0-main.c` | Test file for hash_table_create |

## 🏗️ Data Structures

### hash_node_t - Node Structure

```c
typedef struct hash_node_s
{
    char *key;              // The key (string)
    char *value;            // The value (string)
    struct hash_node_s *next; // Pointer to next node (for chaining)
} hash_node_t;
