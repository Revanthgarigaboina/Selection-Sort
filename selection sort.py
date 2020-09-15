n=int(input("enter the value of n"))
a=[]
print("enter the list elements")
for i in range(0,n):
    k=int(input())
    a.append(k)
for i in range(0,n):
    for j in range(i+1,n):
        if(a[i]>a[j]):
            c=a[i]
            a[i]=a[j]
            a[j]=c
print("elements in sorted order are")
print(a)
    
            
    
    
    
