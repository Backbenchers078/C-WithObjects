def factorial():
    """Calculate the factorial of a predefined number."""
    global num
    if num < 0:
        return "Factorial does not exist for negative numbers."
    elif num == 0:
        return 1
    else:
        result = 1
        for i in range(1, num + 1):
            result *= i
        return result

# Main flow of the program
num = int(input("Enter a number to calculate its factorial: "))  # Input from user
result = factorial()  # Call the factorial function
print(f"The factorial of {num} is: {result}")  # Output the result
