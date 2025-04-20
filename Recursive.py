# # def print_pattern(rows):
# #      current_number = 1 

# #      for i in range(1, rows + 1):  
# #          print(*range(current_number, current_number + i))
# # current_number += i 



n = int(input("enter :"))
def factorial(n):
    if n == 0:
         return 1
    else:
         return n * factorial(n-1)

print(factorial(n))