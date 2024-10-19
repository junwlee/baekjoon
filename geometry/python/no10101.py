a = int(input())
b = int(input())
c = int(input())

if (a == 60 and b == 60 and c == 60 and a == b == c):
    print("Equilateral")
elif((a+b+c==180 and a == b) or (a+b+c==180 and a == c) or (a+b+c==180 and c == b)):
    print("Isosceles")
elif(a+b+c==180 and a != b != c):
    print("Scalene")
elif(a+b+c != 180):
    print("Error")