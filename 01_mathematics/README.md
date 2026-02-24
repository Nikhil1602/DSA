# Mathematics ➗

This document will provide the mathematics required for programming.

## Important to refer

- Check all the mathematical tricks & tips in [tricks.js](/01_mathematics//tricks.js)
- To solve any pattern problem watch [this](https://www.youtube.com/watch?v=beYCK8g4zgs)

## Problems

### 🟢 `Easy`

1. Print the sum of N natural numbers.
2. Return the sum of the digits in a number.
3. Print the digits in reverse order.
4. Return the sum of squares of N natural numbers.
5. Swap the two numbers with and without extra variable.
6. Check if the number is Even or Odd.
7. Check if the number is [prime](https://byjus.com/maths/prime-numbers/) or not.
8. Check if the year is [leap year](https://www.youtube.com/shorts/m9Mv_Cyb6V8) or not.
9. Check if the number is [palindrome](https://www.youtube.com/shorts/ytuKsgNyKOM) or not.
10. Check if the number is [armstrong](https://www.youtube.com/shorts/2T3ekrjehq0) or not.
11. Print the nth term of [fibonacci series](https://www.youtube.com/watch?v=2VNO-UJB2PE).
12. Return the [LCM](https://www.youtube.com/shorts/n_6EM0MV_gM) of two numbers.
13. Return the [GCD (HCF)](https://www.youtube.com/shorts/HTf4mQZc3GQ) of two numbers.
14. Find the maximum & minimum among 3 numbers.
15. Print all the perfect squares between 1 to N.
16. Print all the prime number from 1 to N.
17. Program to convert hours into minutes.
18. Program to convert hours into seconds.
19. Program to calculate the [area of circle](https://www.cuemath.com/geometry/area-of-a-circle/), [triangle](https://byjus.com/maths/area-of-a-triangle/#:~:text=Basically%2C%20it%20is%20equal%20to,2%20%C3%97%20b%20%C3%97%20h.), [square](https://www.cuemath.com/measurement/area-of-square/) & [rectangle](https://byjus.com/maths/area-of-rectangle/).
20. Program to find the nth term of [AP](https://www.youtube.com/shorts/S8Y9EAWlRIw).

### 🟠 `Medium`

```
Amit wants to buy exactly N burgers.

There are 2 types of burgers available at stall.
- Normal burgers of price X.
- Premium burgers of price Y.

He has total budget of rupees R.
He wants to buy exactly N burgers within his budget. He must buy the maximum possible premium burgers. 
If not possible return -1.

Input:
2 10 4 12 -> (X Y N R)
4 8 10 50
99 100 5 10

Output:
4 0 -> (No. of normal burgers & No. of premium burgers)
8 2
-1
```

```
A shop has only 200ml and 500ml bottles.
You must buy exactly N liters of cold drink.

Find how many 200ml and 500ml bottles you should buy.
If not possible, return -1.

Input:
3 -> (N)

Output:
5 4 -> (For 200ml, For 500ml)
```

```
A concert sells:

Silver ticket → ₹400
Gold ticket → ₹700

Total tickets sold = 20
Total revenue = ₹11,000

Additionally, at least 5 tickets must be Gold.

Output:
10 10 -> (Silver, Gold)
```

```
Worker A completes job in 8 days.
Worker B completes in 12 days.

They work together for 2 days.
Remaining work is finished by A alone.

Total time taken = 5 days.

Find how many days A worked alone.

Output:
3 -> (Alone worked in days)
```

```
A truck carries:

50kg cement bags
80kg steel bags

Total weight must be exactly W kg
Total number of bags must be N

Find number of each type.

Input:
390 6 -> (W N)

Output:
3 3 -> (For 50kg, For 80kg)
```

```
Print the following pattern for N:

Input:
4

Output:
1
12
123
1234
```

```
Print the following pattern for N:

Input:
4

Output:
   A
  AB
 ABC
ABCD
```

```
Print the following pattern for N:

Input:
5

Output:
    *
   * *
  * * *
 * * * *
* * * * *
```

```
Print the following pattern:

Output:
    1
   222
  33333
 4444444
555555555
 4444444
  33333
   222
    1
```

```
Print the following pattern:

Output:
1           1
0 1       1 0
1 0 1   1 0 1
0 1 0 1 0 1 0
```

### 🔴 `Hard`

```
A shop sells:

Standard item → ₹120
Premium item → ₹200

Exactly 50 items must be sold.
Revenue must be at least ₹8000 but not exceed ₹9000.

Find maximum possible premium items.

Output:
15          -> (Maximum premium)
35          -> (Standard)
8900        -> (Revenue)
```

```
You have ₹5 coin and ₹11 coin.
You must form ₹500 using at most 60 coins.

Find number of each coin.
If multiple answers exist, return the one with minimum ₹5 coins.

Output:
10      -> (Rs. 5 coins)
40      -> (Rs. 11 coins)
```

```
A tank contains 40L milk.

10L is removed and replaced with water.
Then 10L of mixture is removed again and replaced with water.

How much milk remains?

Output:
22.5    -> (Milk Remaining)
```

```
Father is 3 times son’s age.

In 10 years:
Father’s age will be twice son’s age.

Output:
10 30       -> (Son's age, Father's age)
```