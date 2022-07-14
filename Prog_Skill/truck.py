arr = []
n = int(input("Enter the number of elements in the list: "))
w = int(input("Enter the weight of the truck: "))
while 1 <= n and w <= 10000:
    while n != 0 and w != 0:
        for i in range(n):
            arr.append(int(input()))
        temp = 0
        truckCount = 0
        for i in range(n):
            if temp < arr[i]:
                temp = w
                truckCount += 1
            temp -= arr[i]

        print(truckCount)
        n = int(input("Enter the number of elements in the list: "))
        w = int(input("Enter the weight of the truck: "))
