def max_candy(total):
    inclusivo=int(total[0])
    exclusivo=0
    
    for i in range(1,len(total)):
        if exclusivo>inclusivo:
            new_exclusivo=exclusivo
        else:
            new_exclusivo=inclusivo
        
        inclusivo=exclusivo+int(total[i])
        exclusivo= new_exclusivo
    
    if exclusivo>inclusivo:
        return exclusivo
    else:
        return inclusivo



test=int(input())

for i in range (test):
    total=[]
    house=input()
    total=input()
    total=total.split()
    print(max_candy(total))