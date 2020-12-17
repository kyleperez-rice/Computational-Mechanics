my_int = 1

# The following statements are equivalent

# 1. Elif statement
if my_int%3 == 0:
	print(my_int, 'is divisible by 3')
elif my_int%3 == 1:
	print(my_int, '/3 has a remainder of 1')
else:
	print(my_int, '/3 has a remainder of 2')
#end if


# 2. Nested if statement
if my_int%3 == 0:
	print(my_int, 'is divisible by 3')
else:
	if my_int%3 == 1:
		print(my_int, '/3 has a remainder of 1')
	else:
		print(my_int, '/3 has a remainder of 2')
	#end if
#end if
