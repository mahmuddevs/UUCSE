#arc length
r = float(input("Enter the radius: "))
angle = int(input("Enter the angle in degree: "))
pi = 3.1416

arc_length = (2 * pi * r) * (angle / 360)

print("The arc length is", arc_length)

#volume of circle
r = float(input("Enter the radius: "))
pi = 3.1416

area = pi * (r**2)

volume = (4/3) * pi * (r**3)

print("The area of the circle is", area, "and volume is", volume)


#distance between two points
x1, y1 = eval(input("Enter value of x1 and y1 separated  by comma:"))

x2, y2 = eval(input("Enter value of x2 and y2 separated  by comma:"))

dist = ((x2-x1)**2 + (y2-y1)**2) ** 0.5



print("The distance between point a to point b is" , dist)


#geo difference
p1_long = int(input("Enter place 1 latitude with 4 digit: "))
p1_lat = int(input("Enter place 1 latitude with 4 digit: "))
p2_long = int(input("Enter place 2 longitude with 4 digit: "))
p2_lat = int(input("Enter place 2 latitude with 4 digit: "))

minute_dif_p1 = abs(((p2_long//100) * 60 + (p2_long % 100)) - ((p1_long//100) * 60 + (p1_long % 100)))
minute_dif_p2 = abs(((p2_lat//100) * 60 + (p2_lat % 100)) - ((p1_lat//100) * 60 + (p1_lat % 100)))

d1_p1_d = minute_dif_p1 // 60
d1_p1_m = minute_dif_p1 % 60
print(f"Degree difference of longitude is {d1_p1_d} degree and {d1_p1_m}")

d2_p2_d = minute_dif_p2 // 60
d2_p2_m = minute_dif_p2 % 60
print(f"Degree difference of latitude is {d2_p2_d} degree and {d2_p2_m}")

#area of trapizoid
base1_top = float(input('Enter value of top base: '))
base2_bottom = float(input('Enter value of bottom base: '))
left = float(input('Enter value of left side: '))
right = float(input('Enter value of right: '))

s = (left + right + (base2_bottom - base1_top)) / 2

triangle_area = (s * (s - left) * (s - right) * (s - (base2_bottom - base1_top))) ** 0.5

height = (2 * triangle_area) / (base2_bottom - base1_top)


trapi_area = ((base1_top + base2_bottom) / 2) * height

print(f"The area of the trapezoid is {trapi_area}")

