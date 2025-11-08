import math

#CENTRAL ANGLE (ADDITIONAL MODULE FOR API ONLY)
#VALUES
angle = int(input("Angle value: ") or 0)
angle = angle if angle != 0 else None

arc = int(input("Arc value: ") or 0)
arc = arc if arc != 0 else None

#CONDITIONS
if angle is None and arc is None:
    print("ERROR: No data was given.")
elif angle is not None and arc is not None and angle != arc:
    print("ERROR: Central angle should have the same value as the Arc. Vice versa.")
elif angle is not None and arc is not None and angle == arc:
    print("Correct value is already given.")
else:
    pass

#CALCULATION
if angle is not None and arc is not None and angle != arc:
    pass
elif arc is not None and angle is not None and angle != arc:
    pass
else:
    if angle is None:
        f_angle = arc
    else:
        f_arc = angle

#FRAMEWORK
if angle is not None and arc is not None and angle != arc:
    pass
elif angle is None and arc is None:
    pass
else:
    if angle is None:
        print(f_angle)
    else:
        print(f_arc)
