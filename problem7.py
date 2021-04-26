def factorial(n):
	if n == 1:
		return n
	else:
		return n*factorial(n-1)

def primecheck(x):
	if (factorial(x >> 1) % x):
		return 1
	else: 
		return 0

def nprime(z):
	n_primes  = 1	
	num = 2
	while n_primes < z:
		num += 1
		if primecheck(num):
			n_primes += 1
	return num

print(nprime(10001))

