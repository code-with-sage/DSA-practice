# 🚀 Stack ADT using Linked List (Interactive CLI)

> *"I didn't just implement a stack. I learned how to build an interactive application in C."*

---

# 📌 Project Overview

This project started as a simple implementation of the **Stack ADT** using a **Linked List**.

Instead of stopping after implementing `push()`, `pop()`, and `top()`, I decided to build a small **command-line application** where users can create and manage multiple stacks dynamically.

The project became a practical exercise in:

- Data Structures
- Dynamic Memory Allocation
- String Parsing
- Modular Programming
- Debugging
- Designing Interactive Applications

---

# 🧠 Learning Journey

## 🌱 Phase 1 — Understanding C

Started with learning:

- Variables
- Functions
- Pointers
- Structures
- Dynamic Memory (`malloc`)
- Header files
- Multiple source files

---

## 🌿 Phase 2 — Linked List

Implemented:

- Create List
- Create Node
- Insert First
- Insert Last
- Delete First
- Delete Last
- Search
- Print List

Learned how pointers actually work.

---

## 🌳 Phase 3 — Stack ADT

Built Stack operations:

- Push
- Pop
- Top
- Is Empty

Instead of arrays, the stack is built on top of a linked list.

```
Stack
│
├── Push
├── Pop
├── Top
└── Linked List
```

---

## 🌲 Phase 4 — Building an Interactive CLI

Instead of calling functions manually:

```c
push(s1,10);
push(s1,20);
```

I created an interactive shell.

```
@sage ~~>
```

Supported commands:

```
new s1
push s1 10
pop s1
top s1
man
exit
```

---

# ⚙️ Internal Architecture

```
                User
                  │
                  ▼
          fgets() Input
                  │
                  ▼
        strtok() Command Parser
                  │
                  ▼
          findStack(name)
                  │
                  ▼
         Stack Manager
                  │
                  ▼
            Stack ADT
                  │
                  ▼
         Linked List ADT
```

---

# 🏗 Project Structure

```
stack-ll/
│
├── main.c
│
├── stack_list.c
├── stack_List.h
│
├── ll.c
├── ll.h
│
└── README.md
```

---

# 💡 Features

✅ Multiple stacks

```
new s1
new s2
new s3
```

---

✅ Push

```
push s1 34
```

---

✅ Pop

```
pop s1
```

---

✅ Top

```
top s2
```

---

✅ Manual

```
man
```

---

# 📚 New C Concepts Learned

### String Functions

```
fgets()
strtok()
strcmp()
strcpy()
atoi()
```

---

### Memory

```
malloc()
sizeof()
NULL
```

---

### Modular Programming

```
Header Files

↓

Function Prototypes

↓

Separate .c Files

↓

Compilation
```

---

### Data Structures

```
Linked List
        ↓
Stack ADT
        ↓
Interactive CLI
```

---

# 🐛 Biggest Bugs I Solved

### 1️⃣ sizeof(pointer) vs sizeof(struct)

Wrong

```c
malloc(sizeof(STACK));
```

Correct

```c
malloc(sizeof(struct stack));
```

---

### 2️⃣ Passing wrong datatype

Wrong

```c
push(s,val);
```

Correct

```c
push(s,atoi(val));
```

---

### 3️⃣ Wrong printf format

Wrong

```c
printf("%d", val);
```

Correct

```c
printf("%s", val);
```

or

```c
printf("%d", atoi(val));
```

---

### 4️⃣ Function Pointer Mistake

Wrong

```c
createNewList
```

Correct

```c
createNewList()
```

---

### 5️⃣ Forgetting to use return value

Wrong

```c
top(s);
```

Correct

```c
printf("%d", top(s));
```

---

# 💭 Biggest Lesson

I learned that writing an entire C program first and debugging later is extremely difficult.

A much better workflow is:

```
Write
   ↓
Compile
   ↓
Test
   ↓
Repeat
```

Building software one small piece at a time makes debugging much easier.

---

# 🚀 Future Improvements

- [ ] Delete Stack
- [ ] List All Stacks
- [ ] Print Entire Stack
- [ ] Stack Size
- [ ] Better Error Messages
- [ ] Dynamic Stack Registry
- [ ] Free All Memory on Exit

---

# 📈 Progress

```
Before
──────────────────────────────────

Linked List
↓

Stack

↓

main()




After
──────────────────────────────────

           User
             │
             ▼
      Command Parser
             │
             ▼
      Stack Registry
             │
             ▼
        Stack ADT
             │
             ▼
     Linked List ADT
```

---

# 🎯 Outcome

This project taught me much more than implementing a stack.

It helped me understand how to design modular programs, parse user input, manage multiple objects through pointers, debug memory-related issues, and build an interactive command-line application in C.

More importantly, it changed how I approach programming:

> **Build small. Test often. Debug one layer at a time.**

---

### 🛠 Built with

- C
- GCC
- VS Code
- Windows Terminal

---

**Author:** SA  
**Project:** Interactive Stack ADT using Linked List  
**Status:** ✅ Completed