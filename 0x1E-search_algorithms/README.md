### Project: Search Algorithms

This repository contains implementations of various search algorithms in C.

#### Files in this repository:

1. **0-linear.c**: Implements the Linear Search algorithm.
2. **1-binary.c**: Implements the Binary Search algorithm.
3. **2-O**: Contains the time complexity (worst case) of a linear search in an array of size n.
4. **3-O**: Contains the space complexity (worst case) of an iterative linear search algorithm in an array of size n.
5. **4-O**: Contains the time complexity (worst case) of a binary search in an array of size n.
6. **5-O**: Contains the space complexity (worst case) of a binary search in an array of size n.
7. **6-O**: Contains the space complexity of the `allocate_map` function.
8. **100-jump.c**: Implements the Jump Search algorithm.
9. **101-O**: Contains the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n).
10. **102-interpolation.c**: Implements the Interpolation Search algorithm.
11. **103-exponential.c**: Implements the Exponential Search algorithm.
12. **104-advanced_binary.c**: Implements an advanced version of the Binary Search algorithm.
13. **105-jump_list.c**: Implements the Jump Search algorithm in a singly linked list.
14. **106-linear_skip.c**: Implements the Linear Search algorithm in a skip list.

### How to Use

1. Clone this repository:

   ```bash
   git clone https://github.com/<username>/alx-low_level_programming.git
   ```

2. Compile the desired file:

   ```bash
   gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <file.c> -o <output>
   ```

3. Run the compiled file:

   ```bash
   ./<output>
   ```

### Example Usage

For example, to run the Linear Search algorithm:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
./0-linear
```

This will execute the Linear Search algorithm with the provided test cases.

### Contributors

- Ian - [@Nainah23](https://github.com/Nainah23)

Feel free to contribute by opening issues or pull requests to this repository. Your contributions are welcome!
