filename=raw_input("enter a filename:")
if "." in filename:
	name, extension = filename.split(".")
	print("the extension of the file is:"+extension)
else:
	print("invalid filename format. please include the file extension (e.g., filename.txt)")
