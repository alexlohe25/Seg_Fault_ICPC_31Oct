test=int(input())

for i in range (test):
    total=[]
    house=input()
    total=input()
    total=total.split()
    nonSum = 0
    parSum = 0

    for k in range(0,len(total),2):
        parSum += int(total[k])
    
    for k in range(1,len(total),2):
        nonSum += int(total[k])
    
    if(parSum > nonSum):
        print(parSum)
    elif(nonSum > parSum):
        print(nonSum)
    else:
        print(parSum)