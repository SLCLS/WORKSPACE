import math
import mpmath
import sympy
from sympy import symbols, Eq, solve

print("WARNING: Use 'x' as your variable. You can either type 'x' or click 'Enter' to use 'x' as your variable.")
print("WARNING: This program is not designed to handle multiple variables. Please use only one variable.")

#SEGMENTS FORMED BY CHORDS
#VALUES
x = symbols('x')

s1_external_seg = input("[Secant #1] EXTERNAL segment value: ") or 0
s1_external_seg = s1_external_seg if s1_external_seg != 0 else x

s1_internal_seg = input("[Secant #1] Given INTERNAL segment value: ") or 0
s1_internal_seg = s1_internal_seg if s1_internal_seg != 0 else x

s2_external_seg = input("[Secant #2] EXTERNAL segment value: ") or 0
s2_external_seg = s2_external_seg if s2_external_seg != 0 else x

s2_internal_segment = input("[Secant #2] INTERNAL segment value: ") or 0
s2_internal_segment = s2_internal_segment if s2_internal_segment != 0 else x

#CONDITIONS
if s1_external_seg is x and s1_internal_seg is x and s2_external_seg is x and s2_internal_segment is x:
    print("ERROR: No data was given.")
elif s1_external_seg is x and s1_internal_seg is x:
    print("ERROR: Not enough data is given. Please provide at least one segment on secant #1.")
elif s2_external_seg is x and s2_internal_segment is x:
    print("ERROR: Not enough data is given. Please provide at least one segment on secant #2.")


#CONVERSIONS [ RAW INPUTS ] TO [ EXPRESSIONS ]
eq1 = Eq(s1_external_seg * (s1_external_seg + s1_internal_seg))
eq2 = Eq(s2_external_seg * (s2_external_seg + s2_internal_segment))


#CALCULATIONS
sol = solve((eq1, eq2), (x))
sol

value = sol[x]

#FRAMEWORK
print(f"The value of 'x': " + int(value))
