"""ANGLE FORMED BY TANGENTS

Interactive helper to compute the relation between a major arc and the angle formed by two tangents.

Rules used:
- If both values are missing -> error.
- If both provided -> validate that major_arc == formed_angle + 180.
- If only one is provided -> compute the other:
    formed_angle = major_arc - 180  (when major_arc given)
    major_arc = formed_angle + 180  (when formed_angle given)

This version avoids arithmetic on None and provides clearer messages.
"""

def _parse_int_or_none(prompt: str):
    s = input(prompt).strip()
    if s == "":
        return None
    try:
        return int(s)
    except ValueError:
        print(f"Warning: '{s}' is not a valid integer. Treating as missing (None).")
        return None


def compute_missing(major_arc, formed_angle):
    """Compute/validate relationship between major_arc and formed_angle.

    Returns a tuple (major_arc, formed_angle, message).
    If computation succeeds, message is None and the returned values include computed ones.
    If there's an error or validation message, message contains it and values are returned as-is
    (with None where appropriate).
    """
    # both missing
    if major_arc is None and formed_angle is None:
        return (None, None, "ERROR: No data was given.")

    # both provided -> validate
    if major_arc is not None and formed_angle is not None:
        if major_arc != formed_angle + 180:
            return (major_arc, formed_angle, "ERROR: Major Arc should be equal to formed angle plus 180 degrees.")
        return (major_arc, formed_angle, "Correct value is already given.")

    # only major_arc provided -> compute formed_angle
    if major_arc is not None:
        return (major_arc, major_arc - 180, None)

    # only formed_angle provided -> compute major_arc
    return (formed_angle + 180, formed_angle, None)


def main():
    major_input = _parse_int_or_none("Major Arc value: ")
    formed_input = _parse_int_or_none("Formed Angle Value: ")

    major, formed, msg = compute_missing(major_input, formed_input)

    if msg:
        print(msg)
        return

    # Determine which value was computed and print only the computed one
    if major_input is None and formed_input is not None:
        # computed major arc
        print(major)
    elif formed_input is None and major_input is not None:
        # computed formed angle
        print(formed)
    else:
        # both were provided and validated (message would have been printed earlier)
        print("No computation needed.")


if __name__ == "__main__":
    main()
