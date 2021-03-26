# Marathon time calculator

pace = input("Enter Pace in km (mm:ss): ")
mm, ss = map(int, pace.split(":"))    #spliting the input in minute and second
paceInSec = mm * 60 + ss              #converting the pace in sec

distance = float(input("Enter Distance (km): "))

time = int(paceInSec * distance) 

#time in HH:MM formate
hr = time // 3600
mm = (time % 3600) // 60

print("Time = ", end="")
print(hr, mm, sep=":")
