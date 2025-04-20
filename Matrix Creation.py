
def create_matrix():
    rows = int(input("Enter the number of rows: "))
    cols = int(input("Enter the number of columns: "))
    
    matrix = []
    
    print("Enter the entries row-wise:")
    for i in range(rows):
        
        row = []
        for j in range(cols):
            
            element = int(input(f"Enter element at position ({i+1}, {j+1}): "))
            row.append(element)
        
        matrix.append(row)
    return matrix

user_matrix = create_matrix()
print("The Matrix is:")
for row in user_matrix:
    print(row)
