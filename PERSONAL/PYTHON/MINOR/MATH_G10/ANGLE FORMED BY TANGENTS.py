import math

#ANGLE FORMED BY TANGENTS
#VALUES
major_arc = int(input("Major Arc value: ") or 0)
major_arc = major_arc if major_arc != 0 else None

formed_angle = int(input("Formed Angle Value: ") or 0)
formed_angle = formed_angle if formed_angle != 0 else None

#CONDITIONS
if major_arc is None and formed_angle is None:
    print("ERROR: No data was given.")
elif major_arc is not None and formed_angle is not None and major_arc != formed_angle + 180:
    print("ERROR: Major Arc should be equal to formed angle plus 180 degrees.")
elif major_arc is not None and formed_angle is not None and major_arc == formed_angle + 180:
    print("Correct value is already given.")
else:
    pass

#CALCULATION
if major_arc is None and formed_angle is None:
    pass
elif major_arc is not None and formed_angle is not None and major_arc != formed_angle + 180:
    pass
elif major_arc is not None and formed_angle is not None and major_arc == formed_angle + 180:
    pass
else:
    if formed_angle is None:
        #FIND MAJOR ARC
        f_angle = major_arc - 180
    else:
        #FIND MINOR ARC
        f_arc = formed_angle + 180

#FRAMEWORK
if major_arc is None and formed_angle is None:
    pass
elif major_arc is not None and formed_angle is not None and major_arc != formed_angle + 180:
    pass
elif major_arc is not None and formed_angle is not None and major_arc == formed_angle + 180:
    pass
else:
    if formed_angle is None:
        print(f_angle)
    else:
        print(f_arc)
