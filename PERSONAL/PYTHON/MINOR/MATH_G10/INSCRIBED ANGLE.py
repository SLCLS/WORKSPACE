import math

#INSCRIBED ANGLE
#VALUES
arc = int(input("Arc value: ") or 0)
arc = arc if arc != 0 else None

angle = int(input("Angle value: ") or 0)
angle = angle if angle != 0 else None

#CONDITIONS
if arc is None and angle is None:
    print("ERROR: No data was given.")
elif arc is not None and angle is not None and angle != arc / 2:
    print("ERROR: Arc should be twice the size of the angle.")
elif arc is not None and angle is not None and angle == arc / 2:
    print("Correct value is already given.")
else:
    pass

#CALCULATION
if arc is None and angle is None:
    pass
elif arc is not None and angle is not None and angle != arc / 2:
    pass
elif arc is not None and angle is not None and angle == arc / 2:
    pass
else:
    if angle is None:
        #FIND ANGLE
        f_angle = arc / 2
    else:
        #FIND ARC
        f_arc = angle * 2

#FRAMEWORK
if arc is None and angle is None:
    pass
elif arc is not None and angle is not None and angle != arc / 2:
    pass
elif arc is not None and angle is not None and arc == angle * 2:
    pass
else:
    if arc is None and f_arc > angle:
        print(f_arc)
    else: 
        print(f_angle)
