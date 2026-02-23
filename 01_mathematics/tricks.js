// To find the last digit in a number:
let number = 12345;
let lastDigit = number % 10; // By % 10, we get the last digit of the number
console.log(lastDigit); // Output: 5

// To remove the last digit from a number:
let number2 = 12345;
let withoutLastDigit = Math.floor(number2 / 10); // By dividing by 10 and using Math.floor, we remove the last digit
console.log(withoutLastDigit); // Output: 1234

// To traverse the loop cyclically:
let array = [1, 2, 3, 4, 5];
for (let i = 0; i < 10; i++) {
    let index = i % array.length; // By using % array.length, we can loop through the array cyclically
    console.log(array[index]); // Output: 1, 2, 3, 4, 5, 1, 2, 3, 4, 5
}

// To get the sum of n natural numbers:
let n = 5;
let sum = (n * (n + 1)) / 2; // The formula for the sum of the first n natural numbers is n(n + 1) / 2
console.log(sum); // Output: 15

// To get the sum of n squares of the first n natural numbers:
let n2 = 5;
let sumOfSquares = (n2 * (n2 + 1) * (2 * n2 + 1)) / 6; // The formula for the sum of squares of the first n natural numbers is n(n + 1)(2n + 1) / 6
console.log(sumOfSquares); // Output: 55