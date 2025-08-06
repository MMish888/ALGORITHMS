# Algorithms Collection

This repository contains a collection of commonly used algorithms implemented in [your language of choice]. The goal is to provide clean, efficient, and well-documented implementations for educational purposes and practical use.

## Table of Contents

1. [Graph Algorithms](#graph-algorithms)
2. [Search Algorithms](#search-algorithms)
3. [Sorting Algorithms](#sorting-algorithms)
4. [Data Structures](#data-structures)
5. [Mathematical Algorithms](#mathematical-algorithms)
6. [Contributing](#contributing)
7. [License](#license)

## Graph Algorithms

### Depth-First Search (DFS)
- Implementation for both adjacency list and matrix representations
- Recursive and iterative versions
- Applications: cycle detection, topological sorting, connected components

### Breadth-First Search (BFS)
- Implementation for both adjacency list and matrix representations
- Applications: shortest path in unweighted graphs, level-order traversal

### Dijkstra's Algorithm
- Shortest path in weighted graphs (non-negative weights)
- Priority queue implementation

### Bellman-Ford Algorithm
- Shortest path with negative weights
- Negative cycle detection

### Floyd-Warshall Algorithm
- All-pairs shortest paths
- Dynamic programming approach

### Kruskal's Algorithm
- Minimum spanning tree
- Union-Find data structure implementation

### Prim's Algorithm
- Minimum spanning tree
- Priority queue implementation

## Search Algorithms

### Binary Search
- Standard implementation
- Variations: lower_bound, upper_bound
- Applications: searching in sorted arrays

### Ternary Search
- Unimodal function optimization
- Discrete and continuous versions

### Quickselect
- K-th smallest element selection
- Hoare's selection algorithm

## Sorting Algorithms

### Quick Sort
- In-place implementation
- Randomized pivot selection
- Various partition schemes

### Merge Sort
- Top-down and bottom-up implementations
- In-place variants

### Heap Sort
- Binary heap implementation
- In-place sorting

### Counting Sort
- Linear time sorting for integer ranges
- Stable version

### Radix Sort
- LSD and MSD implementations
- Support for integers and strings

## Data Structures

### Binary Search Tree (BST)
- Insertion, deletion, search
- In-order, pre-order, post-order traversals

### AVL Tree
- Self-balancing BST
- Rotations implementation

### Segment Tree
- Range queries and updates
- Lazy propagation

### Fenwick Tree (Binary Indexed Tree)
- Efficient prefix sums
- Point updates

### Union-Find (Disjoint Set Union)
- Path compression
- Union by rank/size

## Mathematical Algorithms

### Euclidean Algorithm
- GCD calculation
- Extended version

### Sieve of Eratosthenes
- Prime number generation
- Optimized versions

### Fast Exponentiation
- Iterative and recursive implementations
- Modular exponentiation

### Matrix Exponentiation
- Efficient computation of linear recurrences

## Contributing

Contributions are welcome! Please follow these guidelines:
1. Ensure your code is well-documented
2. Include test cases for your implementation
3. Follow the existing code style
4. Add your algorithm to the appropriate section in this README

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
