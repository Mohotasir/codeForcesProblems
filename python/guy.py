
n = int(input())
lx =[]
ly = []

lx = list(map(int, input().split()))
ly = list(map(int, input().split()))

lx = list(set(lx))
ly = list(set(ly))
ll = list(set(lx + ly))
ll = [x for x in ll if x != 0]


if len(ll) == n :
    print("I become the guy. \n")
else:
    print("Oh, my keyboard! \n")

