sumsq = 0
q = 0
sqsum = 0
solution = 0

for i in range(100):
	n = (i + 1)*(i + 1)
	sumsq  += n

# print(sumsq) 

for x in range(100):
	x = x + 1
	q  += x

sqsum = q*q

# print(sqsum)

solution = sqsum - sumsq

print(solution)
