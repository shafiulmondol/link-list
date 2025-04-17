# 📚 Linked List in C++

This repository showcases the implementation of a **Singly Linked List** in C++ with a clean, menu-driven terminal interface. It covers all fundamental operations — **insertion**, **deletion**, **search**, and **display** — making it ideal for learners and developers.

---

## 📘 What is a Linked List?

A **Linked List** is a linear data structure where elements are stored in **non-contiguous memory**. Each element (called a **node**) contains:
- **Data** – the actual value.
- **Pointer** – the address of the next node.

Unlike arrays, linked lists allow **dynamic memory allocation**, making insertion and deletion operations more efficient.

### 🔗 Types of Linked Lists
- **Singly Linked List**: Each node points to the next.
- **Doubly Linked List**: Each node points to both next and previous.
- **Circular Linked List**: The last node connects back to the first.

---

## ⚙️ How This Project Works

This project uses a **menu-driven UI** built with a `popup` class to perform all linked list operations interactively through the terminal.

### ✅ Features:
- Create a list
- Insert nodes:
  - At the beginning
  - At the end
  - At a specific position
- Delete nodes:
  - From the beginning
  - From the end
  - From a specific position
- Search:
  - By value
  - By position
- Display the current list

---

## 🧠 How a Singly Linked List Works

### 🔁 Insertion

![Insertion](https://upload.wikimedia.org/wikipedia/commons/6/6d/Singly-linked-list-insertion-in-the-middle.svg)

- **At Beginning**: New node points to head; head becomes new node.
- **At End**: Traverse to last node, make its `next` point to new node.
- **At Position**: Traverse to position-1, link new node in between.

### ❌ Deletion

![Deletion](https://upload.wikimedia.org/wikipedia/commons/b/bf/Circularly-linked-list-delete.svg)

- **At Beginning**: Head is updated to point to the second node.
- **At End**: Traverse to the second last node; its `next` becomes `NULL`.
- **At Position**: Update pointer of the previous node to skip over the deleted one.

### 🔍 Search

- **By Value**: Traverse list and match value.
- **By Position**: Traverse by index and return data at that location.

⏱️ All operations take **O(n)** time in the worst case.

---

## 📁 Project Structure

📦 **link-list/**  
📷 _Visual overview of the project structure:_

![Project Structure Diagram](assets/linked-list-structure-diagram.png)

> _Includes: `main.cpp`, `popup class`, `list struct`, global `head`, and all list operation functions._

---

## 📸 Terminal Preview

```text
   Your creation operation menu       
 1. Create a list
 2. Exit


## 📸 Terminal Preview

   Your creation operation menu       
 1. Create a list
 2. Exit

---

## 🚀 Getting Started

### 🛠 Requirements
- C++ Compiler (e.g., g++)
- Terminal or IDE (Code::Blocks, VS Code, etc.)

### 🔧 Compile & Run
🖼️ Visual Explanation
➕ Insertion Animation:


## 🙋‍♂️ Author
Shafiul Islam Mondol
📧 mdshafiulmondol02@gmail.com
🔗 GitHub | LinkedIn

## ⭐️ Show Some Love
If this project helped you understand linked lists better, consider leaving a ⭐️ on the repo!
Contributions, issues, and feedback are always welcome.


```bash
g++ main.cpp -o linkedlist
./linkedlist
