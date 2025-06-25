def inverted_triangle(rows):
    for i in range(rows, 0, -1):
        for j in range(rows - i):
            print(" ", end="")
        for j in range(2 * i - 1):
            print("*", end="")
        print()

# Example usage
rows = 5
inverted_triangle(rows)
