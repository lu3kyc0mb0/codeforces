n=int(input())
x=list(map(int,input().split()))[1:]
y=list(map(int,input().split()))[1:]
ap=set(x+y)
if len(ap)==n:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")