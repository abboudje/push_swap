# push_swap

**push_swap** is a project from the 42 curriculum that focuses on implementing sorting algorithms to sort a stack of integers with a minimal number of operations. The project challenges students to use efficient algorithms to solve the sorting problem while adhering to strict constraints on the operations allowed.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Compiling the Project](#compiling-the-project)

## Introduction

The **push_swap** project requires you to sort a stack of integers using only two stacks and a set of predefined operations. The goal is to sort the stack in ascending order while minimizing the number of operations performed. The operations available are:

- `sa`: Swap the first two elements of stack A.
- `sb`: Swap the first two elements of stack B.
- `ss`: `sa` and `sb` executed simultaneously.
- `pa`: Push the top element of stack B onto stack A.
- `pb`: Push the top element of stack A onto stack B.
- `ra`: Rotate stack A (shift all elements up by one position).
- `rb`: Rotate stack B (shift all elements up by one position).
- `rr`: `ra` and `rb` executed simultaneously.
- `rra`: Reverse rotate stack A (shift all elements down by one position).
- `rrb`: Reverse rotate stack B (shift all elements down by one position).
- `rrr`: `rra` and `rrb` executed simultaneously.

## Features

- Efficiently sorts a stack of integers using two stacks.
- Minimizes the number of operations required to sort the stack.
- Implements custom sorting algorithms to handle various edge cases.
- Handles both small and large datasets efficiently.

### Compile the Project

To compile the **push_swap** project, follow these steps:

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/abboudje/push_swap.git
   cd push_swap

2. Run the following make commands:
	Build the program:
	```bash
	make

3. Running the Program:

	```bash
	./push_swap 5 2 7 1 2 3