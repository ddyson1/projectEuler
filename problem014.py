"""
def collatz(n):
  list=[]
  list.append(n)
  while(n != 1):
      if(n % 2 == 0):
          n = n/2
          list.append(n)
      else:
          n= n*3 + 1
          list.append(n)
  print(list)
collatz(13)
"""

def collatz(n):
	count = 1
	while(n > 1):
		if(n % 2 == 0):
			n = n/2
			count += 1
		else:
			n = n*3 + 1
			count += 1
		if n == 1:
			return count

big = 0 
seqcount = 0

for i in range(1000000,1,-1):
	n = collatz(i)
	if n > seqcount:
		big = i
		seqcount = n

print(big)
