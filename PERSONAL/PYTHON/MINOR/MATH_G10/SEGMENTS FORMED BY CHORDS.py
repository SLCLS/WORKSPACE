import math

#SEGMENTS FORMED BY CHORDS
#VALUES
seg_a1 = int(input("[A1] Given segment value: ") or 0)
seg_a1 = seg_a1 if seg_a1 != 0 else None

seg_a2 = int(input("[A2] Given segment value: ") or 0)
seg_a2 = seg_a2 if seg_a2 != 0 else None

seg_b1 = int(input("Segment B1 value: ") or 0)
seg_b1 = seg_b1 if seg_b1 != 0 else None

seg_b2 = int(input("Segment B2 value: ") or 0)
seg_b2 = seg_b2 if seg_b2 != 0 else None

#CONDITIONS
if seg_a1 is None and seg_a2 is None and seg_b1 is None and seg_b2 is None:
    print("ERROR: No data was given.")
elif seg_a1 is None and seg_b1 is None:
    print("ERROR: Not enough data was given.")
elif seg_a1 is None and seg_b2 is None:
    print("ERROR: Not enough data was given.")
elif seg_a2 is None and seg_b1 is None:
    print("ERROR: Not enough data was given.")
elif seg_a2 is None and seg_b2 is None:
    print("ERROR: Not enough data was given.")
elif seg_a1 is not None and seg_a2 is not None and seg_b1 is not None and seg_b2 is not None and (seg_a1 * seg_a2) != (seg_b1 * seg_b2):
    print("ERROR: The total length of chords should be equal to each other.")
elif seg_a1 is not None and seg_a2 is not None and seg_b1 is not None and seg_b2 is not None and (seg_a1 * seg_a2) == (seg_b1 * seg_b2):
    print("Correct value is already given.")
else:
    pass

#CALCULATIONS
if seg_a1 is None and seg_a2 is None and seg_b1 is None and seg_b2 is None:
    pass
elif seg_a1 is None and seg_b1 is None:
    pass
elif seg_a1 is None and seg_b2 is None:
    pass
elif seg_a2 is None and seg_b1 is None:
    pass
elif seg_a2 is None and seg_b2 is None:
    pass
elif seg_a1 is not None and seg_a2 is not None and seg_b1 is not None and seg_b2 is not None and (seg_a1 * seg_a2) != (seg_b1 * seg_b2):
    pass
elif seg_a1 is not None and seg_a2 is not None and seg_b1 is not None and seg_b2 is not None and (seg_a1 * seg_a2) == (seg_b1 * seg_b2):
    pass
else:
    if seg_a1 is None:
        f_seg_a1 = (seg_b1 * seg_b2) / seg_a2
    elif seg_a2 is None:
        f_seg_a2 = (seg_b1 * seg_b2) / seg_a1
    elif seg_b1 is None:
        f_seg_b1 = (seg_a1 * seg_a2) / seg_b2
    elif seg_b2 is None:
        f_seg_b2 = (seg_a1 * seg_a2) / seg_b1

#FRAMEWORK
if seg_a1 is None and seg_a2 is None and seg_b1 is None and seg_b2 is None:
    pass
elif seg_a1 is None and seg_b1 is None:
    pass
elif seg_a1 is None and seg_b2 is None:
    pass
elif seg_a2 is None and seg_b1 is None:
    pass
elif seg_a2 is None and seg_b2 is None:
    pass
elif seg_a1 is not None and seg_a2 is not None and seg_b1 is not None and seg_b2 is not None and (seg_a1 * seg_a2) != (seg_b1 * seg_b2):
    pass
elif seg_a1 is not None and seg_a2 is not None and seg_b1 is not None and seg_b2 is not None and (seg_a1 * seg_a2) == (seg_b1 * seg_b2):
    pass
else:
    if seg_a1 is None:
        print(f_seg_a1)
    elif seg_a2 is None:
        print(f_seg_a2)
    elif seg_b1 is None:
        print(f_seg_b1)
    elif seg_b2 is None:
        print(f_seg_b2)
