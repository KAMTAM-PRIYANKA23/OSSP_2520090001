# Linux Process Creation, Execution and Termination System

A Linux-based Systems Programming project that demonstrates how processes are created, executed, synchronized, and terminated using C and Linux system calls.

## About the Project

Processes are a fundamental part of an Operating System. Whenever we run a program, the operating system creates and manages a process behind the scenes.

In this project, we are trying to understand that process more practically rather than only studying it theoretically.

The project demonstrates the basic lifecycle of a process in Linux, starting from process creation and continuing through execution, synchronization, and termination. It also helps us observe the relationship between a parent process and its child process.

The project is being developed using **C on Linux/Ubuntu** and makes use of process-related system calls such as `fork()`, `exec()`, and `waitpid()`.

## What This Project Demonstrates

* Creation of a child process using `fork()`
* Understanding the parent-child process relationship
* Execution of another program using the `exec()` family
* Process synchronization using `waitpid()`
* Process termination and exit status
* Understanding PID and PPID
* Observing different stages of the process lifecycle
* Understanding how a user program interacts with Linux through system calls

## Operating System Concepts

This project mainly focuses on concepts from:

### CO-1: The OS as a Service Layer

* User Space and Kernel Space
* System Calls
* Kernel Services
* Role of the shell
* Command execution in Linux

### CO-2: Processes and Process Control

* Process Abstraction
* Process Creation
* Process Execution
* Parent and Child Processes
* Process Synchronization
* Process Termination
* Process Lifecycle and States

## Technologies Used

* **Linux / Ubuntu**
* **C**
* **GCC**
* **Bash / Linux Terminal**
* **Git**
* **GitHub**

## Main System Calls

| System Call | Purpose                                               |
| ----------- | ----------------------------------------------------- |
| `fork()`    | Creates a new child process                           |
| `exec()`    | Replaces the current process image with a new program |
| `waitpid()` | Allows the parent to wait for a child process         |
| `exit()`    | Terminates a process                                  |
| `getpid()`  | Gets the current process ID                           |
| `getppid()` | Gets the parent process ID                            |

## Expected Outcome

The final system will provide a simple way to observe and understand how Linux handles processes.

By running the project, we expect to see the creation of a child process, its execution, the parent-child relationship, synchronization between processes, and the termination of the child process.

The main goal is to connect the concepts learned in the Operating Systems course with actual Linux system programming.

## Team Members

| Roll Number | Name             |
| ----------- | ---------------- |
| 2520090001  | Kamtam Priyanka  |
| 2520090123  | Jella Geya Reddy |

## Project Status

🚧 **Currently under development**

This repository will be updated as the project implementation progresses.

## Course

**Operating Systems and Systems Programming (25CS2104E)**
**2026–27, Term-I**
