a=[1,2,3,4,5,6]
srch=25
for i in range(len(a)):
    if(a[i]==srch):
        print("element in index",i+1)
        break
else:
    print("not found element")