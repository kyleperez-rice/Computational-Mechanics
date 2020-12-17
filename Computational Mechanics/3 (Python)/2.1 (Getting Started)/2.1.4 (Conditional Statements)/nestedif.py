my_state = "California"
my_county = 'Riverside County'

if my_state == "California":
	if my_county == "Riverside County":
		print("Your county seat is Riverside.")
	elif my_county == "San Bernadino County":
		print("Your county seat is San Bernadino.")
	else:
		print("I'm only programmed for Riverside and San Bernadino Counties!")
	#end if
elif my_state == "New Mexico":
	if my_county == "Los Alamos County":
		print("Your county seat is Los Alamos.")
	else:
		print("I'm only programmed for Los Alamos County!")
	#end if
elif my_state == "Florida":
	if my_county == "Miami-Dade County":
		print("Your county seat is Miami.")
	else:
		print("I'm only programmed for Miami-Dade County!")
	#end if
else:
	print("I'm not programmed to tell you your county seat!")
#end if
