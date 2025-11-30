# Sorting Algorithms in C

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![License](https://img.shields.io/badge/license-MIT-blue?style=for-the-badge)

A clean, well-commented, single-file implementation of classic sorting algorithms in C with an interactive menu.

## Implemented Algorithms

| # | Algorithm        | Average Time   | Worst Time     | Stable | In-place |
|---|------------------|----------------|----------------|--------|----------|
| 1 | Bubble Sort      | O(n²)          | O(n²)          | Yes    | Yes      |
| 2 | Selection Sort   | O(n²)          | O(n²)          | No     | Yes      |
| 3 | Insertion Sort   | O(n²)          | O(n²)          | Yes    | Yes      |
| 4 | Quick Sort       | O(n log n)     | O(n²)          | No     | Yes      |
| 5 | Merge Sort       | O(n log n)     | O(n log n)     | Yes    | No       |

## How to Run

```bash
git clone https://github.com/noxe-git/A-basic-sorts-algorithms-on-C.git
cd sorting-algorithms-c
gcc -std=c11 -Wall -Wextra -pedantic -O2 sort_algorithms.c -o sort
./sort

```
## Example Output
```Choice a type of sort:
1. Bubble sort
2. Selection sort
3. Insertion sort
4. Quick sort
5. Merge sort

before:
1 5 3 2 4 
after Quick sort:
1 2 3 4 5
```

## Features

Single source file – easy to study
Array copied before sorting (original data untouched)
Clean output with showArr()
All algorithms are fully commented

## Perfect for

Students learning algorithms & data structures
Technical interview preparation
Quick comparison of sorting methods

## Contributions Welcome
PRs are very welcome! Especially:

Time measurement
Heap Sort / Radix Sort / Counting Sort
Unit tests
Split into .h + multiple .c files

## License
MIT License

© 2025 Horyhovskyi Ivan / noxe-git
