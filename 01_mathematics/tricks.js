// =========================================================>
// 1. TO FIND THE LAST DIGIT OF A NUMBER:
// =========================================================>
let number = 12345;
let lastDigit = number % 10; // By % 10, we get the last digit of the number
console.log(lastDigit); // Output: 5

// =========================================================>
// 2. TO REMOVE THE LAST DIGIT OF A NUMBER:
// =========================================================>
let number2 = 12345;
let withoutLastDigit = Math.floor(number2 / 10); // By dividing by 10 and using Math.floor, we remove the last digit
console.log(withoutLastDigit); // Output: 1234

// =========================================================>
// 3. TO FIND THE SUM OF FIRST N NATURAL NUMBERS:
// =========================================================>
let n = 5;
let sum = (n * (n + 1)) / 2; // The formula for the sum of the first n natural numbers is n(n + 1) / 2
console.log(sum); // Output: 15

// =========================================================>
// 4. TO FIND THE SUM OF SQUARES OF FIRST N NATURAL NUMBERS:
// =========================================================>
let n2 = 5;
let sumOfSquares = (n2 * (n2 + 1) * (2 * n2 + 1)) / 6; // The formula for the sum of squares of the first n natural numbers is n(n + 1)(2n + 1) / 6
console.log(sumOfSquares); // Output: 55