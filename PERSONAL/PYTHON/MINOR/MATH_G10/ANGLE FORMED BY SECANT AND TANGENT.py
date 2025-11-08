import math

#ANGLE FORMED BY SECANT AND TANGENT
#VALUES
arc = int(input("Arc value: ") or 0)
arc = arc if arc != 0 else None

angle = int(input("Angle value: ") or 0)
angle = angle if angle != 0 else None

#CONDITIONS
if arc is None and angle is None:
    print("ERROR: No data is given.")
elif arc is not None and angle is not None and arc != angle * 2:
    print("ERROR: Arc should be twice the angle size.")
elif arc is not None and angle is not None and arc == angle * 2:
    print("Correct value is already given.")
else:
    pass

#CALCULATION
if arc is None and angle is None:
    pass
elif arc is not None and angle is not None and arc != angle * 2:
    pass
elif arc is not None and angle is not None and arc == angle * 2:
    pass
else:
    if angle is None:
        #FIND ANGLE (POINT OF TANGENCY)
        f_angle = arc / 2
    else:
        #FIND MAJOR ARC (INTERCEPTED)
        f_arc = angle * 2

#FRAMEWORK
if arc is None and angle is None:
    pass
elif arc is not None and angle is not None and arc != angle * 2:
    pass
elif arc is not None and angle is not None and arc == angle * 2:
    pass
else:
    if angle is None:
        print(f_angle)
    else:
        print(f_arc)
