# 🥤 Vending Machine Simulation in C++

This project demonstrates a vending machine simulation in C++ using two different approaches:

- **`VendingMachine.cpp`** – A monolithic “God Method” version where all logic is written inside `main()`.
- **`VendingMachineModularized.cpp`** – A fully modularized version that breaks the program into reusable, testable functions.

---

## 🎯 Project Objectives

- Teach students the difference between procedural vs. modular programming.
- Show how to decompose a problem and structure C++ code using functions.
- Improve understanding of maintainability, readability, and scalability in software design.

---

## 📄 File Overview

| File Name                     | Description |
|------------------------------|-------------|
| `VendingMachine.cpp`         | All logic in `main()` – illustrates the drawbacks of the "God Method." |
| `VendingMachineModularized.cpp` | Modular approach using clean, single-purpose functions. |
| `README.md`                  | Project documentation (this file). |
| `vending`, `vending_m`, `a.out` | Executable files created when compiling the programs (you can delete or .gitignore these). |

---

## 🔍 Comparison: God Method vs. Modular Programming

### 🚫 `VendingMachine.cpp`

- All code lives inside one large `main()` function.
- Harder to read, maintain, debug, or extend.
- Good example of **what not to do** in larger programs.

### ✅ `VendingMachineModularized.cpp`

- Each step is handled by its own function:
  - `displayMenu()`
  - `getUserChoice()`
  - `getPrice()`
  - `getPayment()`
  - `checkPayment()`
  - `dispenseItem()`
  - `giveChange()`
- Promotes clarity, testability, and future scalability.

---

## 🛠️ How to Compile and Run

### To Compile the Modular Version:
```bash
g++ VendingMachineModularized.cpp -o vending_m
./vending_m
