# Bit Manipulation ⚙️

This document will provide the tricks and questions to solve for the bit manipulation topic. Basically a bit is nothing but a `0` or `1`.

- `1 bit` = `0` or `1`
- `1 byte` = `8 bits`

To know more about bits & bytes, refer below:
-  [Link 1](https://web.stanford.edu/class/cs101/bits-bytes.html)
- [Link 2](https://medium.com/@simplycodesmart/from-bits-to-bytes-understanding-8-16-32-and-64-bit-systems-and-their-capacity-49304b48e742)

### Truth Table

```
        AND                  OR                 XOR
    0 & 0 --> 0         0 | 0 --> 0         0 ^ 0 --> 0
    0 & 1 --> 0         0 | 1 --> 1         0 ^ 1 --> 1
    1 & 0 --> 0         1 | 0 --> 1         1 ^ 0 --> 1
    1 & 1 --> 1         1 | 1 --> 1         1 ^ 1 --> 0
```


### Tricks & Tips

- `n & 1`: Use to check whether the number (n) is `odd or not`.
- `n << 1`: Use to `multiply` number (n) by `2`, if `n << 2` than multiple by `4`, and so on. 
- `n >> 1`: Use to `divide` number (n) by `2`, if `n >> 2` than divide by `4`, and so on.
- `n > 0 && (n & (n - 1)) === 0`: To check whether number (n) is the power of 2 or not.
- `n & (n - 1)`: Removes rightmost (lowest) set (1) bit of number (n).
- `x = x ^ num`: If we xor all the numbers containing duplicates with `even frequency`, we will get a `distinct` number present in list.
- `(num & (1 << n) !== 0)`: Check if the nth bit of number (num) is set or not.
- `num = num | (1 << n)`: To set (1) the nth bit of number (num).
- `num = num & ~(1 << n)`: To unset (0) the nth bit of number (num).
- `num = num ^ (1 << n)`: To toggle nth bit of number (num).
- `(a ^ b) < 0`: To check whether number `a` and number `b` has opposite signs or not.


## Problems

## 🟢 `Easy`

1. Given integer n and position k, check if the kᵗʰ bit is set.
2. Given n and k, set the kᵗʰ bit.
3. Toggle the kᵗʰ bit of number n.
4. Count number of 1s in binary representation of n.
5. Return true if number is power of 2.
6. Without using %, determine if number is even.
7. Array where every number appears twice except one. Find that number.
8. Array contains numbers from 0 to n with one missing. Find missing number using XOR.

## 🟠 `Medium`

1. Array where every element appears twice except two numbers. Find both.
2. Return position of lowest set bit.
3. Return true if number is power of 4.
4. For every number from 0 to n, return count of set bits.
5. Implement division without using *, /, %.
6. Swap Odd and Even Bits.

## 🔴 `Hard`

1. Given array, find maximum XOR of any two numbers.
2. Every number appears 3 times except one. Find that one.
3. Find pair in array with minimum XOR value.
4. Given left and right, find bitwise AND of all numbers in range.
5. Count total number of set bits in binary representation of all numbers from 1 to n.