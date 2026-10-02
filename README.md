# Collatz experiment
A small experiment based on the Collatz conjecture also known as the **3n + 1 problem**.

## What is the Collatz conjecture?

The rules are pretty simple:

- If a number is even, divide it by 2.
- If a number is odd, multiply it by 3 and add 1.
- Repeat the process until the number reaches 1.

Example:

6 --> 3 --> 10 --> 5 --> 16 --> 8 --> 4 --> 2 --> 1

The conjecture states that every positive integer will eventually reach 1, although that has never been proven for all positive integers. It remains as one of the most famous unsolved problems in mathematics.

## How does this project work?

The C program calculates how many steps each starting number from **1 to 10,000** needs to reach 1.

The results are exported to a CSV file and visualized via Python and matplotlib.

The goal is to explore how the total stopping time changes for different starting values.

## Findings

Testing starting values from 1 to 10,000 showed that the number of steps does not increase smoothly with the starting value.

Some relatively small numbers require surprisingly many steps, while much larger numbers can reach 1 much faster.

For example:

- 27 requires 111 steps 
- 100 requires 25 steps
- 1000 requires 111 steps 

The generated plots show a very irregular distribution rather than a clear linear pattern.
These results only describe the tested range and do not prove the Collatz conjecture.

## Results





## Project structure

- `collatz.c` --> calculates the Collatz stopping times
- `collatz_results.csv` --> contains the generated results
- `plot.py` --> visualizes the results using matplotlib

## Running the C program:

```bash
clang collatz.c -o collatz
./collatz
```


  



