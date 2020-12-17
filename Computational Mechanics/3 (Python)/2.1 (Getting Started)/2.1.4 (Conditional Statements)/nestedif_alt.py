my_state = "California"
my_county = "Riverside County"

if (my_state == "California" and my_county == "Riverside County"):
	print("Your county seat is Riverside.")
elif (my_state == "California" and my_county == "San Bernadino County"):
	print("Your county seat is San Bernadino.")
elif (my_state == "New Mexico" and my_county == "Los Alamos County"):
	print("Your county seat is Los Alamos.")
elif (my_state == "Florida" and my_county == "Miami-Dade County"):
	print("Your county seat is Miami.")
else:
	if my_state == "California":
		print("I'm only programmed for Riverside and San Bernadino Counties!")
	elif my_state == "New Mexico":
		print("I'm only programmed for Los Alamos County!")
	elif my_state == "Florida":
		print("I'm only programmed for Miami-Dade County!")
	else:
		print("I'm not programmed to tell you your county seat!")
	#end if
#end if
