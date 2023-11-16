#list1 = [1, 2, 3, 4, 5]
#list2 = [6, 7, 8, 9, 10]
list1 = input("Enter the first list: ")
list2 = input("Enter the second list: ")
if len(list1) == len(list2):
  print("The two lists are of the same length.")
else:
  print("The two lists are not of the same length.")

#list1 = [int(x) for x in list1.split(" ")]
#list2 = [int(x) for x in list2.split(" ")]
sum1 = sum(list1)
sum2 = sum(list2)

if sum1 == sum2:
    print("The two lists sum to the same value.")
else:
    print("The two lists do not sum to the same value.")
set1 = set(list1)
set2 = set(list2)
intersection = set1 & set2
if intersection:
	print("the two lists have at least one value in common.")
else:
	print("the two lists have no values in common.")
