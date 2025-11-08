import math

#INTERSECTING SECANTS AT THE EXTERIOR
#VALUES
major_arc = int(input("[BIGGER] Major arc value: ") or 0)
major_arc = major_arc if major_arc != 0 else None

minor_arc = int(input("[SMALLER] Minor arc value: ") or 0)
minor_arc = minor_arc if minor_arc != 0 else None

angle = int(input("Angle value: ") or 0)
angle = angle if angle != 0 else None

#CONDITIONS
if major_arc is None and minor_arc is None and angle is None:
    print("ERROR: No data was given.")
elif major_arc is None and minor_arc is None:
    print("ERROR: Not enough data is given.")
elif major_arc is None and angle is None:
    print("ERROR: Not enough data is given.")
elif minor_arc is None and angle is None:
    print("ERROR: Not enough data is given.")
elif major_arc is not None and minor_arc is not None and angle is not None and angle == 0.5 * (major_arc - minor_arc):
    print("Correct value is already given.")
else:
    pass

#CALCULATION
if major_arc is None and minor_arc is None and angle is None:
    pass
elif major_arc is None and minor_arc is None:
    pass
elif major_arc is None and angle is None:
    pass
elif minor_arc is None and angle is None:
    pass
elif major_arc is not None and minor_arc is not None and angle is not None and angle == 0.5 * (major_arc - minor_arc):
    pass
else:
    if angle is None:
        #FIND ANGLE
        f_angle = 0.5 * (major_arc - minor_arc)
    else:
        if major_arc is None:
            #FIND MAJOR ARC
            f_major_arc = (angle * 2) + minor_arc
        else:
            #FIND MINOR ARC
            f_minor_arc = major_arc - (angle * 2)

#FRAMEWORK
if major_arc is None and minor_arc is None and angle is None:
    pass
elif major_arc is None and minor_arc is None:
    pass
elif major_arc is None and angle is None:
    pass
elif minor_arc is None and angle is None:
    pass
elif major_arc is not None and minor_arc is not None and angle is not None and angle == 0.5 * (major_arc - minor_arc):
    pass
else:
    if angle is None:
        print(f_angle)
    else:
        if major_arc is None:
            print(f_major_arc)
        else:
            print(f_minor_arc)
