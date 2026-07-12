# 🍔 Fast Food Restaurant Queue System

A command-line **Fast Food Restaurant Ordering System** developed in **C** using a **Queue (FIFO)** implemented with a **Singly Linked List**.

The application allows customers to place orders individually or load multiple orders from a text file. Orders are processed using the **First In First Out (FIFO)** principle, ensuring that the earliest order is always served first.

---

# 📌 Features

- Queue implementation using a Singly Linked List
- Dynamic memory allocation
- FIFO (First In First Out) ordering policy
- Place individual customer orders
- Load multiple orders from a text file
- Serve orders in FIFO order
- Display all pending orders
- Display the total number of pending orders
- Interactive command-line interface
- Modular project structure using header and source files

---

# 📂 Project Structure

```text
.
├── ll.h
├── ll.c
├── fast_food.h
├── fast_food.c
├── main.c
├── orders1.txt
├── orders2.txt
├── output.txt
└── README.md
```

---

# 🏗️ Data Structures

## Order

Each customer order contains:

- Table Number
- Item Number

---

## Node

Each node stores:

- Order Details
- Pointer to the Next Node

---

## Linked List

The linked list maintains:

- Front Pointer
- Rear Pointer
- Size of the Queue

---

## Queue

The queue internally uses the linked list to maintain FIFO ordering.

---

# ⚙️ Queue Operations

| Function | Description | Time Complexity |
|----------|-------------|-----------------|
| `giveOrder()` | Insert an order at the rear of the queue | **O(1)** |
| `serveOrder()` | Remove the oldest order | **O(1)** |
| `printOrder()` | Display all pending orders | **O(n)** |
| `totalOrder()` | Return the total number of pending orders | **O(1)** |

---

# 💻 Supported Commands

| Command | Description |
|----------|-------------|
| `order <table> <item>` | Place a single customer order |
| `orders <filename>` | Load multiple orders from a text file |
| `serve` | Serve the oldest pending order |
| `printorder` | Display all pending orders |
| `total` | Display the total number of pending orders |
| `man` | Display the command manual |
| `exit` | Exit the application |

---

# 📄 Example Input File

**orders1.txt**

```text
order 1 101
order 8 173
order 8 174
order 3 69
order 2 101
order 2 105
order 2 106
```

Load the file using:

```text
orders orders1.txt
```

---

# 🖥️ Example Session

```text
welcome to fast food restaurant

enter your command ~~> order 3 505
Order placed successfully.

enter your command ~~> order 2 101
Order placed successfully.

enter your command ~~> printorder

Table 3 Item 505
Table 2 Item 101

enter your command ~~> serve

Serving Table 3 Item 505

enter your command ~~> total

Total Pending Orders : 1

enter your command ~~> exit

Thank you.
Visit Again!
```

---

# 📖 FIFO Demonstration

```text
Customer A
Customer B
Customer C

        ↓

      Queue

A  →  B  →  C

        ↓

Serving Order

A
↓

B
↓

C
```

The customer who places an order first is always served first.

---

# 🛠️ Technologies Used

- C Programming
- Structures
- Pointers
- Dynamic Memory Allocation (`malloc`)
- Singly Linked Lists
- Queue Data Structure
- File Handling
- String Handling (`strtok`)
- Modular Programming
- Header Files

---

# 🚀 Build and Run

Compile all source files:

```bash
gcc *.c
```

Run the application:

```bash
./a.out
```

---

# 🎯 Learning Outcomes

Through this project, I practiced:

- Designing modular software architecture
- Implementing a Queue using a Linked List
- Working with dynamic memory allocation
- Reading commands from both the terminal and text files
- Parsing user input using `strtok()`
- Organizing code into reusable modules
- Building an interactive command-line application

---

# 👨‍💻 Developer

**Sage**

Computer Science Student


---

*"Small projects build strong foundations. Every completed program is another step toward becoming a better software engineer."*