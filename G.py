
def getValue(strokes,hole):
    if strokes=="hole in one":
        return 1
    elif strokes=="condor":
        return hole-4
    elif strokes=="albatross":
        return hole-3
    elif strokes=="eagle":
        return hole-2
    elif strokes=="birdie":
        return hole-1
    elif strokes=="par":
        return hole
    elif strokes=="bogey":
        return hole+1
    elif strokes=="double bogey":
        return hole+2
    elif strokes=="triple bogey":
        return hole+3
    return 0

holes=[]
result=0
holes=input()
holes=holes.split()
for i in range (18):
    Strokeshole=input()
    result+=getValue(Strokeshole,int(holes[i]))
print(result)