from array import array


arr=[]
n=int(input("Enter the no. of element : "))

for i in range(0,n):
    a=int(input())
    arr.append(a)
for i in range(1,5):
    key=arr[i]
    j=i-1
    while j>=0 and key<arr[j] :
        arr[j+1]=arr[j]
        j=j-1
    arr[j+1]=key

print(arr)          
