while 1:
  try:
		a=int(input())
		b=int(input())
		print(round(b**(1.0/a)))
	except EOFError:
		break

