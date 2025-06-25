list = ([ -2, -1, 0, 0.12,])
ans=list[0]
if len(list)==1 :
        print(list)
      

for l in list :
    if len(l)<len(ans):
        ans=l
print(ans)
