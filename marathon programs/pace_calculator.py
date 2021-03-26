# Pace Calculator

time = input("Enter time in HH:MM: ")
h,m = map(int,time.split(":"))   #spliting time in hour and minute
time = 3600 * h + 60 * m         #converting time in sec

distance = float(input("Enter Distance (km): "))

pace = int(time/distance)
hh, mm = divmod(pace,60)         # storing hour and minute values

print()
print("Pace = ", end="")
print(hh, mm, sep=":", end = "/km")
