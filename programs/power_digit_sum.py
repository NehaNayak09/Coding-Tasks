#  A program in python to find power digit sum

def power_digit_sum(n,power):
    number = list(map(int, str(pow(n,power)).strip()))
    return sum(number)

print(power_digit_sum(2,1000))    
