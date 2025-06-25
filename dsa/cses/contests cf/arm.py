n = int(input())
sum=0
u=n
while n>0:
    sum=sum*10+n%10
    n=n//10
if sum==u:
    print("yes")
else:
    print("no")
