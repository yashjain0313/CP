
def prime_number(number):
    condition = 0
    iteration = 2
    if number ==1 or number ==0:
         print(f"{number} is not a PRIME number")
    else:
        while iteration <= number / 2:
            if number % iteration == 0:
                condition = 1
                break
            iteration = iteration + 1

        if condition == 0:
             print(f"{number} is a PRIME number")
        else:
             print(f"{number} is not a PRIME number")
        
prime_number(3)