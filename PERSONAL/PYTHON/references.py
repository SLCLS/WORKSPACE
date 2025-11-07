import sys
# SYS is used for Pthon runtime environment (e.g. version, path, etc.)
import random
# RANDOM is used for random number generation

# Comment Syntax

"""
Multi-line comment
"""

#Types of Variables
string = str("i am a string")
integer = int(69) #NOTE: Adding "" to a number makes it a string.
float = float(69.69)
complex = complex(69j) #Imaginary part is written as "j"
NoneType = None

#Printing a Data Type
print(type(string))

#Multi-Variables Assigning
x, y, z = "dick", "duck", "daks"

#Unpacking from a Collection (to variables)
D_Stuffs = ["dick", "duck", "daks"]
x, y, z = D_Stuffs

#Print Usage
print(x)
print(x, y, z)
print(x + y + z) #Need Spaces if the var is STR
#NOTE: Multiline Varibles can be printed as well.

#Global Variables - Var outside of a function (used for everything but is overwritten by var inside a function)
#Local Variables - Can only be used inside of that function, to make it global, use the global syntax.
def function69():
    global x
    x = "not a dick" #Doing this overwrites the existing global var value.

#Sequence Types
list = list["shan", "yumi", "baby"]
tuple = tuple("shan", "yumi", "baby")
range = range(21)

#Mapping
dictionary = dict({"name": "Shan", "age": "17"})

#Set Types
set = set(["shan", "yumi", "baby"])
frozenset = frozenset({"shan", "yumi", "baby"})

#Binary Types
bytes = b"Jackstone"
bytearray = bytearray(69)
memoryview = memoryview(bytes(69))

#Boolean Type
bool = bool(True)

#Converting Data Types
Integer = 69
Integer_to_float = float(Integer)
Float_to_interger = int(6.9) #Converting Float to Integer disregards the decimal points.

#NOTE: Data specification on variable is not always necessary.

#Using Random Module to make a random number
print(random.randrange(1, 69))
random = random.randrange(1,69)

#Array Printing - this refers to printing a specific character on a string array.
string_sample = "MONEY"
print(a[0, 1, 2, 3]) #The first character is represented as "0".
specific_char = string_sample[3]

#Loop through a string (printing all letters in a string variable one by one)
for x in "MONEY":
    print(x)

#String Length (counting the number of characters in a string)
print(len("MONEY"))

#Check string (this checks if a specific word is in a string, returns True or False)
txt = "I love my Baby"
print("Baby" in txt)
print("Baby" not in txt)

#Usage of Check String in an IF statement
if "Baby" in txt:
    print("My Baby is Ma. Yumi")

#Slice String (this is used to get a specific part of a string)
string_cake = "I love my Yumi"
my_baby = string_cake[10:14] #This will print "Yumi"

#Slice from the start or Slice from the end
sentence = string_cake[:14]
my_baby = string_cake[10:]

#Negative Indexing (this is used to start the slice from the end)
who = string_cake[-12:-8] #This will print "Love"

#Upper Case and Lower Case
sample_word = " ShAn "
print(sample_word.upper())
print(sample_word.lower())

#Remove Whitespace (this is used to remove spaces at the beginning or end of a string)
print(sample_word.strip())

#Replace String (this is used to replace a specific word in a string)
print(sample_word.replace("ShAn", "Yumi"))

#Split String (this is used to split a string into a list)
sample_string = "Baby Yumi"
string_splitted = sample_string.split(",") #This will split the string into two parts: ["Baby", "Yumi"]

#Merging Variables
var1 = "My name is "
var2 = "Shan"
var3 = var1 + var2

#Using Format Method
sentence = f"My name is {var2}" #To add an F-string, put an "f" in the front and add {} for variables.

#Modifier to format values
grade = 69
final = f"My GWA is {grade:.2f}" #This will print "My GWA is 69.00"

#With math operations
transmutation_plus = 30
final_grade = transmutation_plus + grade
my_final_grade = f"My final grade is {transmutation_plus + grade}" #This will print "My final grade is 99"

#Escape Character (this is used to insert characters that are illegal in a string)
with_illegal = "I am a \"dick\"" #Instead of "I am a "dick""

#String Methods
test_string = "This is a complete test String with 69 and $#!"

capitalize = test_string.capitalize() #This converts the first character to upper case.
casefold = test_string.casefold() #This converts the string into lower case.
center = test_string.center() #This returms a centered string.
count = test_string.count() #This returns the number of times a specified value occurs in a string.
encode = test_string.encode() #This returns an encoded version of a string.
endswith = test_string.endswith() #Returns True or False whether a string ends with a specified value.
expandtabs = test_string.expandtabs() #This sets the tab size of a string.
find = test_string.find() #This searches the string for a specified value and returns it's position.
format = "My name is {}".format(var2) #This formats the specified values in a string.
format_map = "{name} is {age}".format_map({"name": var2, "age": 17}) #Same as format but differs in value acception.
index = test_string.index("test") #This searches the string for a specified value and returns it's position.
isalpha = test_string.isalpha() #This returns True if all characters in the string are in the alphabet.
isascii = test_string.isascii() #This returns True if all characters in the string are ASCII characters.
isdecimal = test_string.isdecimal() #This returns True if all characters in the string are decimals.
isdigit = test_string.isdigit() #This returns True if all characters in the string are digits.
isidentifier = test_string.isidentifier() #This returns True if the string is an identifier.
islower = test_string.islower() #This returns True if all characters in the string are lowercase.
isupper = test_string.isupper() #This returns True if all characters in the string are uppercase.
isnumeric = test_string.isnumeric() #This returns True if all characters in the string are numeric.
isprintable = test_string.isprintable() #This returns True if all characters in the string are printable.
isspace = test_string.isspace() #This returns True if all characters in the string are whitespaces.
istitle = test_string.istitle() #This returns True if the string follows the rules of a title.
join = "-".join()  #This will join the elements/words of a string.
ljust = test_string.ljust() #This will return the left justified version of the string.
lower = test_string.lower() #This will convert the string into lower case.
lstrip = test_string.lstrip() #This will remove the whitespaces at the beginning of the string.
maketrans = str.maketrans() #This will return a translation table to be used in translate().
partition = test_string.partition() #This will split the string into a tuple.
replace = test_string.replace("test", "exam") #This will replace the specified value with another value.
rfind = test_string.rfind("test") #This will return the last index of the specified value.
rindex = test_string.rindex() #This will return the last index of the specified value.
rjust = test_string.rjust() #This will add whitespaces at the beginning of the string.
rpartition = test_string.rpartition() #This will split the string into a tuple, but from the right.
rsplit = test_string.rsplit() #This will split the string into a list, but from the right.
rstrip = test_string.rstrip() #This will remove the whitespaces at the end of the string.
split = test_string.split() #This will split the string into a list.
swapcase = test_string.swapcase() #This will convert uppercase to lowercase and vice versa.
title = test_string.title() #This will convert the first character of each word to uppercase.
translate = test_string.translate() #This will replace the characters with the specified characters.
upper = test_string.upper() #This will convert all characters to uppercase.
zfill = test_string.zfill() #This will add zeros at the beginning of the string.
isinstance = isinstance(test_string, str) #This will return True if the specified object is of the specified type.

#NOTE: Index returns an error if value is not found, while find returns -1.
#NOTE: An identifier is a named given to variables and such, it follows a certain rule.

#Booleans
#NOTE: Any value is true except for the following: "", 0, [], {}, None, False
bool = bool(False)

#Operators
num1 = 69
num2 = 21

Addition = num1 + num2
Subtraction = num1 - num2
Multiplication = num1 * num2
Division = num1 / num2
Modulus = num1 % num2 #This returns the remainder of the division.
Exponentiation = num1 ** num2 #This raises the first number to the power of the second number.
Floor_Division = num1 // num2 #This returns the quotient of the division, rounded down to the nearest whole number.

#Assignment Operators
num1 += 3 #This is the same as num1 = num1 + 3
num1 -= 3 #This is the same as num1 = num1 - 3
#NOTE: This can be done with other operators as well.

#Additional Operators
AND = num1 & num2 #This returns 1 if both bits are 1.
OR = num1 | num2 #This returns 1 if one of the bits is 1.
XOR = num1 ^ num2 #This returns 1 if only one of the bits is 1.
NOT = ~num1 #Inverts the bits of the number.
Left_Shift = num1 << 3 #Shifts the bits to the left by the specified number.
Right_Shift = num1 >> 3 #Shifts the bits to the right by the specified number.

#Bitwise Operators & Walrus Operator
num1 &= 3 #This is the same as num1 = num1 & 3
num1 |= 3 #This is the same as num1 = num1 | 3
num1 ^= 3 #This is the same as num1 = num1 ^ 3
num1 >>= 3 #This is the same as num1 = num1 >> 3
num1 <<= 3 #This is the same as num1 = num1 << 3
num1 := 3 #This is the same as num1 = 3

#Comparison Operators
num1 == num2 #This checks if the two values are equal.
num1 != num2 #This checks if the two values are not equal.
num1 > num2 #This checks if the first value is greater than the second value.
num1 < num2 #This checks if the first value is less than the second value.
num1 <= num2 #This checks if the first value is less than or equal to the second value.
num1 >= num2 #This checks if the first value is greater than or equal to the second value.

#Logical Operators
num1 > 3 and num2 < 3 #This returns True if both statements are true.
num1 > 3 or num2 < 3 #This returns True if one of the statements is true.
num1 > 3 not num2 < 3 #This returns True if the statement is not true.

#Identity Operators
num1 is num2 #This returns True if both variables are the same object.
num1 is not num2 #This returns True if both variables are not the same object.
#NOTE: If x = y, then x is y is True. If x has the same value as y, then x is y is False. (Identity/Same Object, not Value)

#Membership Operators
test_string_2 = "Test String"
print("Test" in test_string_2) #This returns True if the specified value is in the string.
print("Test" not in test_string_2) #This returns True if the specified value is not in the string.

#Collections Arrays
list = ["Shan", "Yumi", "Baby"] #Ordered, Changeable, Allow Duplicates
tuple = ("Shan", "Yumi", "Baby") #Ordered, Unchangeable, Allow Duplicates
set = {"Shan", "Yumi", "Baby"} #Unordered, Unindexed, No Duplicates
dictionary = {"name": "Shan", "age": 17} #Unordered, Changeable, No Duplicates

#Python Lists
nickname = ["Baby", "Pookie", "Boogie", "Baby"]
nickname = list(("Baby", "Pookie", "Boogie", "Baby")) #This is a list constructor.
#NOTE: Lists have defined order, changeable, and allow duplicate values.

Number_of_Items = len(nickname) #This returns the number of items in the list.

#List Indexing
Specific_Item = nickname[0] #This returns the specified item in the list.
Specific_Items = nickname[0:2] #This returns the specified items in the list.
#NOTE: This can be done with negative indexing as well.

#Check if Item Exists
if "Baby" in nickname:
    print("Yumi is in the list")