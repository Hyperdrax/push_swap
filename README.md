*This project has been created as part of the 42 curriculum by flhensel.*

## Description

Push_swap is a sorting algorithm project that challenges you to sort data on a stack with a limited set of operations, using the lowest possible number of actions. The program receives a list of integers and must sort them in ascending order using two stacks (A and B) and a specific set of operations.

The goal is to implement an efficient sorting algorithm that minimizes the number of operations needed to sort the stack, while respecting strict constraints on allowed operations.

**Allowed Operations:**
- `sa` - swap the first 2 elements at the top of stack A
- `sb` - swap the first 2 elements at the top of stack B
- `ss` - sa and sb at the same time
- `pa` - take the first element at the top of B and put it at the top of A
- `pb` - take the first element at the top of A and put it at the top of B
- `ra` - rotate stack A (shift up all elements by 1)
- `rb` - rotate stack B (shift up all elements by 1)
- `rr` - ra and rb at the same time
- `rra` - reverse rotate stack A (shift down all elements by 1)
- `rrb` - reverse rotate stack B (shift down all elements by 1)
- `rrr` - rra and rrb at the same time

## Instructions

### Compilation

To compile the project, run:
```bash
make
```

To recompile from scratch:
```bash
make re
```

To clean object files:
```bash
make clean
```

To remove all compiled files:
```bash
make fclean
```

### Usage

Run the program with a list of integers as arguments:
```bash
./push_swap 3 2 1 5 4
```

The program will output the list of operations needed to sort the numbers:
```
pb
pb
sa
pa
pa
```

### Input Validation

The program handles:
- Duplicate numbers (returns error)
- Non-numeric arguments (returns error)
- Integer overflow (returns error)
- Empty input (no output)
- Single argument with space-separated numbers: `./push_swap "3 2 1 5 4"`

## Performance Benchmarks

The implementation meets 42 evaluation requirements:

| Input Size | Average Operations | Requirement | Status |
|------------|-------------------|-------------|---------|
| 3 numbers  | ~1                | ≤ 3         | ✓       |
| 5 numbers  | ~7                | ≤ 12        | ✓       |
| 100 numbers| 1,084             | ≤ 1,500     | ✓       |
| 500 numbers| 6,784             | ≤ 11,500    | ✓       |

### Algorithm Strategy

The implementation uses different sorting strategies based on input size:

1. **2-3 elements**: Direct sorting with hardcoded optimal solutions
2. **4-5 elements**: Specialized algorithms that push minimum values to stack B
3. **6-50 elements**: Simple sort algorithm (repeatedly finds and pushes minimum values)
4. **51+ elements**: Radix sort using binary representation of indexed values

## Resources

### Tutorials

- https://youtu.be/XiuSW_mEn7g?si=8j1vFHuy5IhxIvUX
- https://youtu.be/Y95a-8oNqps?si=XZEeCBDDrHl6fA0e


### AI Usage

AI was used in this project for:

1. **Understanding the Topic**:
   - Researching sorting algorithms and push_swap strategies
   - Understanding radix sort implementation

2. **Code Organization**:
   - Restructuring code to comply with 42 Norm requirements
   - Splitting functions across files (sorting.c and sorting_utils.c)

3. **Testing & Validation**:
   - Creating test commands for various input sizes
   - Analyzing performance and operation counts

All code was written and verified for correctness and understanding by me. AI was used as a learning tool and for optimization suggestions, but all algorithmic decisions and implementations were my own work.
