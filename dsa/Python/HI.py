n=int(input("enter the row"))
for i in range(n+1):
    for j in range(2*n-i,0,-1):
        print(" ",end="")
    for j in range (i-1):
        print("* ",end="")
    print()    

	