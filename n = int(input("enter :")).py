# n = int(input("enter :"))
# def factorial(n):
#     if n == 0:
#          return 1
#     else:
#          return n * factorial(n-1)

# print(factorial(n))


def char_to_ascii(char):
    
    if len(char) != 1:
        raise ValueError("Input must be a single character.")
    return ord(char)


character = 'A'
ascii_value = char_to_ascii(character)
print(f"The ASCII value of '{character}' is {ascii_value}.")
