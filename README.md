# A-basic-sorts-algorithms-on-C
Clean and educational implementation of classic sorting algorithms in C (Bubble, Selection, Insertion, Quick, Merge) with an interactive menu and clear comments. Perfect for learning and interview prep.
A clean, well-commented, single-file implementation of classic sorting algorithms in C with an interactive menu.

## Implemented Algorithms

| # | Algorithm         | Average Time   | Worst Time     | Stable | In-place |
|---|-------------------|----------------|----------------|--------|----------|
| 1 | Bubble Sort       | O(n²)          | O(n²)          | Yes    | Yes      |
| 2 | Selection Sort    | O(n²)          | O(n²)          | No     | Yes      |
| 3 | Insertion Sort    | O(n²)          | O(n²)          | Yes    | Yes      |
| 4 | Quick Sort        | O(n log n)     | O(n²)          | No     | Yes      |
| 5 | Merge Sort        | O(n log n)     | O(n log n)     | Yes    | No       |

## How to Run

```bash
git clone https://github.com/ТВІЙ_НІК/sorting-algorithms-c.git
cd sorting-algorithms-c
gcc -std=c11 -Wall -Wextra -pedantic -O2 sort_algorithms.c -o sort
./sort
#Then choose an algorithm by entering a number from 1 to 5.
## Example Output
Choice a type of sort:
1. Bubble sort
2. Selection sort
3. Insertion sort
4. Quick sort
5. Merge sort
4
before:
1 5 3 2 4 
after Quick sort:
1 2 3 4 5
Compilation (recommended)
gcc -std=c11 -Wall -Wextra -pedantic -O2 sort_algorithms.c -o sort
→ Compiles with zero warnings on GCC and Clang.
Features

Single source file — easy to read and study
Array is copied before sorting (original data preserved)
Clean showArr() function for pretty printing
Every algorithm is commented and easy to understand

Perfect For

University students learning algorithms and data structures
Technical interview preparation
Anyone who wants to quickly compare different sorting methods

Contributions Welcome!
Feel free to open a Pull Request. Especially appreciated:

Execution time measurement
Heap Sort, Counting Sort, Radix Sort implementations
Unit tests
Refactoring into header + separate .c files
GitHub Actions CI
