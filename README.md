# DSA LC

A curated collection of LeetCode problems solved in C++ with categorized topics, optimized approaches, and complexity analysis.

---

# Topics

- [Strings](#strings)
- [Arrays](#arrays)
- [Bit Manipulation](#bit-manipulation)
- [Greedy](#greedy)
- [Intervals](#intervals)
- [Math](#math)
- [Prefix Sum](#prefix-sum)

---

## Strings

| # | LC No | Problem | Difficulty | Approach | Time | Space | Solution | Date |
|---|------|----------|------------|----------|------|-------|----------|------|
| 1 | 345 | Reverse Vowels of a String | Easy | Two Pointers | O(n) | O(1) | [Code](./Strings/345_Reverse_Vowels.cpp) | 2026-04-29 |
| 2 | 151 | Reverse Words in a String | Medium | Two Pointers + In-place | O(n) | O(1) | [Code](./Strings/151_Reverse_Words.cpp) | 2026-04-29 |
| 3 | 1750 | Minimum Length of String After Deleting Similar Ends | Medium | Two Pointers | O(n) | O(1) | [Code](./Strings/1750_Minimum_Length_of_String_After_Deleting_Similar_Ends.cpp) | 2026-05-01 |
| 4 | 838 | Push Dominoes | Medium | Force Simulation | O(n) | O(n) | [Code](./Strings/838_Push_Dominoes.cpp) | 2026-05-02 |
| 5 | 58 | Length of Last Word | Easy | Reverse Traversal | O(n) | O(1) | [Code](./Strings/58_Length_of_Last_Word.cpp) | 2026-05-11 |

---

## Arrays

| # | LC No | Problem | Difficulty | Approach | Time | Space | Solution | Date |
|---|------|----------|------------|----------|------|-------|----------|------|
| 1 | 26 | Remove Duplicates from Sorted Array | Easy | Two Pointers | O(n) | O(1) | [Code](./Arrays/26_Remove_Duplicates.cpp) | 2026-04-29 |
| 2 | 1498 | Number of Subsequences That Satisfy the Given Sum Condition | Medium | Two Pointers + Precompute | O(n log n) | O(n) | [Code](./Arrays/1498_Num_Subsequences.cpp) | 2026-04-29 |
| 3 | 962 | Maximum Width Ramp | Medium | Suffix Maximum + Two Pointers | O(n) | O(n) | [Code](./Arrays/962_Maximum_Width_Ramp.cpp) | 2026-05-01 |
| 4 | 27 | Remove Element | Easy | Two Pointers + Swapping | O(n) | O(1) | [Code](./Arrays/27_Remove_Element.cpp) | 2026-05-02 |
| 5 | 189 | Rotate Array | Medium | Extra Array Simulation | O(n) | O(n) | [Code](./Arrays/189_Rotate_Array.cpp) | 2026-05-08 |

---

## Bit Manipulation

| # | LC No | Problem | Difficulty | Approach | Time | Space | Solution | Date |
|---|------|----------|------------|----------|------|-------|----------|------|
| 1 | 231 | Power of Two | Easy | Bit Manipulation | O(1) | O(1) | [Code](./Bit_Manipulation/231_Power_of_Two.cpp) | 2026-04-30 |
| 2 | 342 | Power of Four | Easy | Bit Manipulation | O(1) | O(1) | [Code](./Bit_Manipulation/342_Power_of_Four.cpp) | 2026-04-30 |

---

## Greedy

| # | LC No | Problem | Difficulty | Approach | Time | Space | Solution | Date |
|---|------|----------|------------|----------|------|-------|----------|------|
| 1 | 881 | Boats to Save People | Medium | Greedy + Two Pointers | O(n log n) | O(1) | [Code](./Greedy/881_Boats_to_Save_People.cpp) | 2026-04-30 |
| 2 | 1877 | Minimize Maximum Pair Sum in Array | Medium | Sorting + Two Pointers | O(n log n) | O(1) | [Code](./Greedy/1877_Minimize_Maximum_Pair_Sum.cpp) | 2026-04-30 |
| 3 | 763 | Partition Labels | Medium | Greedy + Last Occurrence Tracking | O(n) | O(1) | [Code](./Greedy/763_Partition_Labels.cpp) | 2026-05-02 |

---

## Intervals

| # | LC No | Problem | Difficulty | Approach | Time | Space | Solution | Date |
|---|------|----------|------------|----------|------|-------|----------|------|
| 1 | 2963 | Count the Number of Good Partitions | Hard | Last Occurrence Tracking + Greedy | O(n) | O(n) | [Code](./Intervals/2963_Count_the_Number_of_Good_Partitions.cpp) | 2026-05-01 |

---

## Math

| # | LC No | Problem | Difficulty | Approach | Time | Space | Solution | Date |
|---|------|----------|------------|----------|------|-------|----------|------|
| 1 | 3917 | Count Indices With Opposite Parity | Easy | Brute Force | O(n²) | O(1) | [Code](./Math/3917_Count_Indices_With_Opposite_Parity.cpp) | 2026-05-03 |
| 2 | 3918 | Sum of Primes Between Number and Its Reverse | Medium | Prime Checking + Digit Reversal | O((r-n)√r) | O(1) | [Code](./Math/3918_Sum_of_Primes_Between_Number_and_Its_Reverse.cpp) | 2026-05-03 |

---

## Prefix Sum

| # | LC No | Problem | Difficulty | Approach | Time | Space | Solution | Date |
|---|------|----------|------------|----------|------|-------|----------|------|
| 1 | 3919 | Minimum Cost to Move Between Indices | Medium | Closest Index + Prefix Sum | O(n + q) | O(n) | [Code](./Prefix_Sum/3919_Minimum_Cost_to_Move_Between_Indices.cpp) | 2026-05-03 |

---

## Repository Structure

```text
DSA_LC/
│
├── Arrays/
├── Bit_Manipulation/
├── Greedy/
├── Intervals/
├── Math/
├── Prefix_Sum/
├── Strings/
│
└── README.md
```
