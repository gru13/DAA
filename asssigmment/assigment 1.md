## 22AIE212 ##
## DAA ##
## ASSIGNMENT 1 ##

### Name : Guruprasath M R
### Rollno : CH.EN.U4AIE22015

### 1. Check Odd or Even:

```plaintext
ALGORITHM: CheckOddEven(num):
// Determines if a number is odd or even
// Input: Integer num
// Output: String result

if num mod 2 is 0 then
   result <- "Even"
else
   result <- "Odd"
return result
```

### 2. Sorting Elements (using Bubble Sort):

```plaintext
ALGORITHM: BubbleSort(arr):
// Sorts an array using the Bubble Sort algorithm
// Input: Array arr of n elements
// Output: Sorted array arr

for i from 0 to n-1 do
   for j from 0 to n-i-1 do
       if arr[j] > arr[j+1] then
           swap arr[j] and arr[j+1]
       end if
   end for
end for
return arr
```

### 3. Factorial of n Numbers:

```plaintext
ALGORITHM: Factorial(n):
// Calculates the factorial of a given number
// Input: Integer n
// Output: Integer result

result <- 1
for i from 1 to n do
   result <- result * i
end for
return result
```

### 4. Matrix Multiplication:

```plaintext
ALGORITHM: MatrixMultiplication(A, B):
// Multiplies two matrices A and B
// Input: Matrices A of size m x p and B of size p x n
// Output: Matrix C of size m x n

for i from 1 to m do
   for j from 1 to n do
       C[i][j] <- 0
       for k from 1 to p do
           C[i][j] <- C[i][j] + A[i][k] * B[k][j]
       end for
   end for
end for
return C
```

### 5. Finding Prime Numbers (using Sieve of Eratosthenes):

```plaintext
ALGORITHM: SieveOfEratosthenes(n):
// Finds prime numbers from 2 to n using the Sieve of Eratosthenes algorithm
// Input: Integer n
// Output: Array primeNumbers containing prime numbers

Initialize isPrime[2..n] and set all values to true
for i from 2 to sqrt(n) do
   if isPrime[i] is true then
       for j from i*i to n incrementing by i do
           isPrime[j] <- false
       end for
   end if
end for
primeNumbers <- []
for i from 2 to n do
   if isPrime[i] is true then
       add i to primeNumbers
   end if
end for
return primeNumbers
```

