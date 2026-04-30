# Stock Market Data Analyzer

# 📊 Stock Market Data Analyzer (C++)

A console-based application that analyzes stock price data using multiple data structures.

## 📌 Project Type

Console-based (TUI) application

## Team Members

| Name | Registration Number |
|---|---|
| Mohammed Salman Tanveer | AP24110012087 |
| M Bhargav | AP24110011912 |
| B. Lokesh Manikanta | AP24110011917 |
| B. Stevin Babu | AP24110011959 |

## Overview

The **Stock Market Data Analyzer** is a C++ console-based project designed to analyze stock price data using multiple data structures. The program accepts a list of stock prices as input and performs different operations such as displaying price history, sorting prices, tracking price transitions, finding next greater prices, calculating sliding window maximums, identifying top prices, counting frequency, and displaying unique sorted values.

This project demonstrates how different data structures can be applied to solve real-world data analysis problems in an efficient and structured way.

## Objective

The main objective of this project is to analyze stock market price data using fundamental and advanced data structures in C++. It helps students understand how data structures can be used for searching, sorting, storing, traversing, and analyzing financial data.

## 🧩 Problem Statement

Stock market data involves continuous price changes. Analyzing trends, maximum values, and patterns efficiently requires the use of appropriate data structures. This project aims to simulate such analysis using core data structures in C++.

## Features

- Stores stock price history using a linked list.
- Sorts stock prices using a Binary Search Tree.
- Represents price transitions using a graph.
- Finds the next greater price for each stock price using a stack.
- Calculates maximum prices in a sliding window using a deque.
- Displays the top K highest stock prices using a heap.
- Counts the frequency of each stock price using a hashmap.
- Displays unique stock prices in sorted order using a set.
- Provides a menu-free, simple console-based input and output flow.

## Data Structures Used

| Data Structure | Purpose in Project |
|---|---|
| Linked List | Stores price history by inserting each new price at the beginning. |
| Binary Search Tree (BST) | Stores prices in a way that allows sorted inorder traversal. |
| Graph | Represents transitions from one stock price to the next stock price. |
| Stack | Finds the next greater element for each stock price. |
| Queue/Deque | Maintains indexes for sliding window maximum calculation. |
| Heap | Finds the top K highest prices using a priority queue. |
| HashMap | Counts the frequency of each stock price. |
| Set | Stores and displays unique prices in sorted order. |

## How to Run

### 1. Save the Program

Save the C++ source code in a file named:

```bash
main.cpp
```

### 2. Compile the Program

Make sure `g++` compiler is installed.

Use the following `g++` command:

```bash
g++ main.cpp -o stock_analyzer
```

### 3. Run the Program

On Windows:

```bash
stock_analyzer.exe
```

On Linux or macOS:

```bash
./stock_analyzer
```

## Input and Output Example

### Sample Input

```text
Enter number of prices: 6
Enter prices:
100 120 90 150 130 160
Enter window size (k): 3
Enter top K: 3
```

### Sample Output

```text
Prices: 100 120 90 150 130 160
History: 160 130 150 90 120 100
BST (sorted): 90 100 120 130 150 160
Graph (price transitions):
130 -> 160
150 -> 130
90 -> 150
120 -> 90
100 -> 120
Next Greater Elements: 120 150 150 160 160 -1
Sliding Window Max: 120 150 150 160
Top 3 prices: 160 150 130
Frequency:
160 -> 1
130 -> 1
150 -> 1
90 -> 1
120 -> 1
100 -> 1
Unique Sorted: 90 100 120 130 150 160
```

Note: The order of graph and frequency output may vary because `unordered_map` does not guarantee a fixed display order.

## Concepts Covered

- Object-Oriented Programming in C++
- Classes and encapsulation
- Linked list insertion and traversal
- Binary Search Tree insertion and inorder traversal
- Graph representation using adjacency lists
- Stack-based next greater element algorithm
- Sliding window maximum using deque
- Heap operations using priority queue
- Hashing using unordered map
- Unique sorted storage using set
- Use of STL containers in C++
- Time and space complexity awareness

## ⏱️ Time Complexity (Overview)

- Next Greater Element: O(n)
- Sliding Window Maximum: O(n)
- Top K Elements: O(n log n)
- BST Insertion: O(log n) average case
- Frequency Count: O(n)

## Technologies Used

- Programming Language: C++
- Compiler: g++
- Standard Library: C++ STL
- IDE/Editor: Visual Studio Code or any C++ supported editor
- Platform: Windows, Linux, or macOS

## Conclusion

The **Stock Market Data Analyzer** successfully demonstrates the use of several important data structures in a single C++ application. By applying linked lists, trees, graphs, stacks, queues, heaps, hashmaps, and sets, the project shows how stock price data can be stored, processed, and analyzed efficiently.

This project is useful for understanding the practical application of data structures in financial data analysis and strengthens core programming concepts in C++. It not only demonstrates theoretical concepts but also shows how multiple data structures can work together to solve practical data analysis problems.

## Future Improvements

- Add real stock market data import from CSV files.
- Include date and time information with each stock price.
- Add menu-driven options for better user interaction.
- Display price trends using graphs or charts.
- Calculate profit, loss, average price, and percentage change.
- Add file handling to save analysis reports.
- Improve memory management by adding destructors for dynamically allocated nodes.
- Validate user input for invalid values and edge cases.

## 🔗 Repository

This project is maintained on GitHub for version control and collaboration.
