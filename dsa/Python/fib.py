def is_fibonacci(n):
    a, b = 0, 1
    while b < n:
        a, b = b, a + b
    return b == n

# Example usage
number = 15
if is_fibonacci(number):
    print(number, "is a Fibonacci number.")
else:
    print(number, "is not a Fibonacci number.")
