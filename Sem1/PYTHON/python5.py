import math
def area_of_the_circle(Radius):
	area=Radius**2*math.pi
	return area
Radius=float(input("please enter the radius of the given circle:"))
print("The area of the given circle is:",area_of_the_circle(Radius))
