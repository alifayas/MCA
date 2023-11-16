print("print leap year between two given years")
print("enter the start year")
startyear=int(input())
print("enter the last year")
lastyear=int(input())
print("list of leap years:")
for year in range(startyear, lastyear):
	if(0==year%4)and(0!=year%100)or(0==year%400):
		print(year)
