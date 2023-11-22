// exercise 1
for (i = 1; i <= 4; i++) {
  document.writeln(parseInt(i));
}

document.write(parseInt(1) + " ");
document.write(parseInt(2) + " ");
document.write(parseInt(3) + " ");
document.write(parseInt(4) + " ");

// exercise 2
// user input two numbers
const num1 = parseInt(prompt("Enter first num"));
const num2 = parseInt(prompt("Enter second num"));

// output sum, product, difference, divide
const sum = num1 + num2;
const product = num1 * num2;
const difference = num1 - num2;
const quotient = num1 / num2;

alert(
  "Sum: " +
    sum +
    "\nProduct: " +
    product +
    "\nDifference: " +
    difference +
    "\nQuotient: " +
    quotient
);

// exercise 3
// accept two integer to be compared
const numToCompare1 = parseInt(prompt("Enter first num to be compared"));
const numToCompare2 = parseInt(prompt("Enter second num to be compared"));

if (numToCompare1 > numToCompare2) {
  alert(numToCompare1 + " is larger");
} else if (numToCompare1 < numToCompare2) {
  alert(numToCompare2 + " is larger");
} else {
  alert(numToCompare1 + " and " + numToCompare2 + "is equal");
}

if (numToCompare1 > numToCompare2) {
  document.getElementById("comparison-result").innerHTML =
    numToCompare1 + " is larger";
} else if (numToCompare1 < numToCompare2) {
  document.getElementById("comparison-result").innerHTML =
    numToCompare2 + " is larger";
} else {
  document.getElementById("comparison-result").innerHTML =
    numToCompare1 + " and " + numToCompare2 + " is equal";
}
