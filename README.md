This is a basic cpp project for me to get some experience with the language in a non academic setting, and to work on encryption.

The basic use case of this is as follows.

	1. User sees screen with username and password.
	2. User enters there username and password.
	3. Program takes password and hashes it.
	4. Program uses hashed password as key in hash map.
	5. If matching key is found, then check what corresponding value is.
	6. The value should be the username. If it's not, display invalid user credentials message.
	7. If all goes well, display welcome message.
