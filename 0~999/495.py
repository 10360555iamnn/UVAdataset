tab=[0,1]
try:
	while True:
		a=int(input())
		if a>=len(tab):
			for i in range(len(tab),a+2):
				tab.append(tab[i-1]+tab[i-2])
		print(f"The Fibonacci number for {a} is {tab[a]}")
except:pass
