import math

#INTERSECTING SECANTS AT THE INTERIOR
#VALUES
arc_1 = int(input("Arc #1 value: ") or 0)
arc_1 = arc_1 if arc_1 != 0 else None

arc_2 = int(input("Arc #2 value: ") or 0)
arc_2 = arc_2 if arc_2 != 0 else None

angle = int(input("Angle value: ") or 0)
angle = angle if angle != 0 else None

#CONDITION
#NOT ENOUGH DATA
if arc_1 is None and arc_2 is None and angle is None:
    print("ERROR: No data was given.")
elif arc_1 is None and arc_2 is None:
    print("ERROR: Not enough data is given.")
elif arc_1 is None and angle is None:
    print("ERROR: Not enought data is given.")
elif arc_2 is None and angle is None:
    print("ERROR: Not enough data is given.")
#CORRECT VALUE
elif arc_1 is not None and arc_2 is not None and angle is not None and angle == 0.5 * (arc_1 + arc_2) and arc_1 == (angle * 2) - arc_2 and arc_2 == (angle * 2) - arc_1:
    print("Correct value is already given.")
#INCORRECT VALUE
elif arc_1 is not None and arc_2 is not None and angle is not None and angle != 0.5 * (arc_1 + arc_2):
    print("ERROR: Incorrect value.")
elif arc_1 is not None and arc_2 is not None and angle is not None and arc_1 != (angle * 2) - arc_2:
    print("ERROR: Incorrect value.")
elif arc_1 is not None and arc_2 is not None and angle is not None and arc_2 != (angle * 2) - arc_1:
    print("ERROR: Incorrect value.")
else:
    pass

#CALCULATION
if arc_1 is None and arc_2 is None and angle is None:
    pass
elif arc_1 is None and arc_2 is None:
    pass
elif arc_1 is None and angle is None:
    pass
elif arc_2 is None and angle is None:
    pass
elif arc_1 is not None and arc_2 is not None and angle is not None and angle == 0.5 * (arc_1 + arc_2) and arc_1 == (angle * 2) - arc_2 and arc_2 == (angle * 2) - arc_1:
    pass
elif arc_1 is not None and arc_2 is not None and angle is not None and angle != 0.5 * (arc_1 + arc_2):
    pass
elif arc_1 is not None and arc_2 is not None and angle is not None and arc_1 != (angle * 2) - arc_2:
    pass
elif arc_1 is not None and arc_2 is not None and angle is not None and arc_2 != (angle * 2) - arc_1:
    pass
else:
    if angle is None:
        #FIND ANGLE
        f_angle = 0.5 * (arc_1 + arc_2)
    else:
        #FIND ARC
        if arc_1 is None:
            f_arc = (angle * 2) - arc_2
        else:
            f_arc = (angle * 2) - arc_1

#FRAMEWORK
if arc_1 is None and arc_2 is None and angle is None:
    pass
elif arc_1 is None and arc_2 is None:
    pass
elif arc_1 is None and angle is None:
    pass
elif arc_2 is None and angle is None:
    pass
elif arc_1 is not None and arc_2 is not None and angle is not None and angle == 0.5 * (arc_1 + arc_2) and arc_1 == (angle * 2) - arc_2 and arc_2 == (angle * 2) - arc_1:
    pass
elif arc_1 is not None and arc_2 is not None and angle is not None and angle != 0.5 * (arc_1 + arc_2):
    pass
elif arc_1 is not None and arc_2 is not None and angle is not None and arc_1 != (angle * 2) - arc_2:
    pass
elif arc_1 is not None and arc_2 is not None and angle is not None and arc_2 != (angle * 2) - arc_1:
    pass
else:
    if angle is None:
        print(f_angle)
    else:
        print(f_arc)
