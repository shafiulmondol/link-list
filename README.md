# 📚 Linked List in C++

> **An interactive, menu-driven implementation of Singly Linked List in C++**

This repository showcases a fundamental yet powerful implementation of a **Singly Linked List** with full-featured operations and a user-friendly interface. Perfect for students, beginners, and interview preparation.

---

## 🧠 What is a Linked List?

A **Linked List** is a linear data structure where each element (called a **node**) holds:

- 🔹 **Data** – the value to store  
- 🔹 **Pointer** – a reference to the next node in the list

Unlike arrays, linked lists allow dynamic memory allocation and efficient insertions/deletions.

### 🧬 Types of Linked Lists:
- 🔸 **Singly Linked List** – each node links to the next  
- 🔸 **Doubly Linked List** – nodes link to both previous and next  
- 🔸 **Circular Linked List** – last node connects back to the first

---

## ⚙️ Features in This Project

✅ Fully interactive terminal-based UI using the `popup` class  
✅ Clear and structured operations with modular functions  
✅ Handles all standard operations:


---

## 🧩 Project Structure

### 📂 Main Components

| Element         | Description                                                  |
|-----------------|--------------------------------------------------------------|
| `popup` class   | Handles all menu popups and UI rendering                     |
| `struct list`   | Defines each node with `int data` and `list* next`           |
| `head` pointer  | Global pointer to track the beginning of the list            |

### 🔧 Key Functions

- `createList()` – Builds initial linked list from user input  
- `insertAtFirst()` – Adds a node at the beginning  
- `insertAtEnd()` – Appends a node at the end  
- `insertAnyPosition()` – Inserts at a specified position  
- `deleteAtFirst()` – Deletes the first node  
- `deleteAtEnd()` – Deletes the last node  
- `deleteAtPosition()` – Deletes a node from a specific position  
- `searchByValue()` / `searchByPosition()` – Finds a node by content or index  
- `display()` – Outputs the full list  
- `search()` – Menu for selecting search mode

---

## 🧠 How It Works (Behind the Scenes)

### 🔄 Insertion Logic
- **At Beginning**: New node → points to head → becomes head  
- **At End**: Traverse to last node → link it to new node  
- **At Position**: Traverse to (pos - 1) → insert node in between

### ❌ Deletion Logic
- **At Beginning**: Head pointer is moved to next node  
- **At End**: Traverse to second-last → set `next = NULL`  
- **At Position**: Traverse to (pos - 1) → bypass the node to delete

### 🔍 Search Logic
- **By Value**: Traverse through list and compare data  
- **By Position**: Count nodes until position is matched

> ⏱ All operations have linear time complexity: **O(n)**

---

## 🚀 Getting Started

### 🛠 Prerequisites
- Any C++ Compiler (e.g., g++, clang++)
- Code Editor or IDE (e.g., VS Code, Code::Blocks)

### 💻 Compile and Run

### 🖥️ Sample Menu Preview
--------------------------------------------
|       Your Creation Operation Menu       |
--------------------------------------------
|     1. Create a list                     |
|     2. Exit                              |
--------------------------------------------
Enter your choice:
### 🙋‍♂️ Author
Shafiul Islam Mondol
# 📧 mdshafiulmondol02@gmail.com
🔗 GitHub | LinkedIn

### 🌟 Show Some Love
If this project helped you understand Linked Lists or you enjoyed the UI approach, don't forget to ⭐ Star the repository!

### 🔄 Future Enhancements
 Doubly Linked List support

 Circular Linked List mode

 GUI-based version using C++/Qt or Python

 Visual diagrams for insertion/deletion

```bash
g++ main.cpp -o linkedlist
./linkedlist
