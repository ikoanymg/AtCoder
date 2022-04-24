s = input()
t = set(s)

flag = True

if len(s) != len (t):
    flag = False
if s.islower():
    flag = False
if s.isupper():
    flag = False

print("Yes") if flag else print("No")