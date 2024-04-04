
#1] ARITHMATIC OPERATORS#

print("7+8 is: ",7+8) 
print("7/8 is: ",7/8) 
print("7-8 is: ",7-8)
print("7*8 is: ",7*8)
print("7//8 is: ",7//8) # it does not give value after point if ans is 0.8976 it gives only 0
print("7**8 is: ",7**8) # it means 7^8 ,8th power of 7 
print("7%7 is: ",7%7) # i gives remainder


# 2] ASSIGNMENT OPERATORS #

x=12
print("x is",x)

x+=4  # it += adds new integer to the previous integer that is 4 is added to 12
# x-=4  x/=4  x*=4 x%=4



print("now x is: ",x)


# 3] COMPARISON OPERATORS


'''
1] ==

2] !=

3] >=

4]<=

5] >

6] <


'''

i=9
print(i<=0) #returs false, if condition is true returns truq otherwise returns false

j=0
print(j!=0)#returs false


# 4]  LOGICAL OPERATORS 

'''
AND

T T = T
T F = F
F T = F
F F = F

OR

T T = T
T F = T
F T = T
F F = F

'''

r=True
g=False

print(r or g)

# 5] IDENTITY OPERATORS  == IS OR ISNOT

t=8
y=2

print(t is  y) # returns false

# print(t is not y) returns true 

print(1 is not 6)

# 6] MEMBERSHIP OPERATORS 
# CHACKS IF ELEMENT IS IN LIST OR NOT IF IT IS = T ,NOT =F

list=[1,2,3,4,5,6,7]
print(2 in list) #T
print(10  in list)#F

