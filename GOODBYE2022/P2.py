import sys
import math
input = sys.stdin.readline

for lowwww in range(int(input())):
   mig,mapl= map(int, input().split())
   f = []
    for i in range(mig//2):
       f.append(mig-i);
       f.append(i+1)
    if mig % 2 == 0: 
        print(*f)
    else:l.append((n//2)+1); print (*l)