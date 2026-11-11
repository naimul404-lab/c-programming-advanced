# C Programming Advanced — 50 Programs

This repository pack is a follow-on to the beginner `c-programming-basics` collection.
It contains 50 standalone C examples, numbered in a suggested learning order.

## Topics covered
- Advanced language features: enums, typedef, static variables, command-line arguments, function pointers
- Pointers and dynamic memory
- Strings and recursion
- Sorting and searching algorithms
- Data structures: stacks, queues, linked lists, trees, heaps, hash tables
- Graph algorithms: BFS, DFS, Dijkstra
- File handling and mini projects

## Compile and run

With GCC:

```bash
gcc 01-bitwise-operators.c -o program
./program
```

On Windows:

```bash
gcc 01-bitwise-operators.c -o program.exe
program.exe
```

Compile each `.c` file separately because every file has its own `main()` function.

## File input notes
Some file-handling examples expect input files in the program's current working directory:
- `41-copy-text-file.c` and `42-count-file-lines-words-chars.c`: create `input.txt`
- `45-parse-csv-basic.c`: create `people.csv` with lines such as `Naim,20`

Other programs create output files such as `copy.txt`, `records.dat`, `journal.txt`,
`expenses.txt`, and `students.txt`.

## Learning advice
1. Compile and run each example.
2. Change the sample values and observe the result.
3. Read the comments and make sure you can explain each function.
4. For algorithms and data structures, trace the example manually.
5. These are educational examples, not production-ready applications.

Some examples intentionally use small fixed-size arrays to keep the logic beginner-friendly.
