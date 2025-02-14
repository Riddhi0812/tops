#inheritance


class A:#SINGLE LEVEL 
    def fun1(self):
        print("Function1!!")
class B(A):
    def fun2(self):
        print("Function2!!")

obj=B()
obj.fun1()
obj.fun2()





class A:#MULTILEVEL 
    def fun1(self):
        print("Function1!!")
class B(A):
    def fun2(self):
        print("Function2!!")
class C(B):
    def fun3(self):
        print("Function3!!")



obj=C()
obj.fun1()
obj.fun2()
obj.fun3()



#multiple
class A:
    def fun1(self):
        print("this is function1 !!")
            
class B:
    def fun2(self):
        print("this is function2 !!")
            
class C(A,B):
    def fun3(self):
        print("this is function3 !!")

obj=C()
obj.fun1()
obj.fun2()
obj.fun3()             


#HIERARCHICAL

class A:
    def fun1(self):
        print("this is function1 !!")
            
class B(A):
    def fun2(self):
        print("this is function2 !!")
            
class C(A):
    def fun3(self):
        print("this is function3 !!")

obj=B()
obj.fun1()
obj.fun2()
obj=C()
obj.fun1()
obj.fun3()      




#Hybrid

class A:
    def fun1(self):
        print("hello !!")
            
class B(A):
    def fun2(self):
        print("welcome !!")
            
class C():
    def fun3(self):
        print("happy !!")

class D(B,C):
    def fun4(self):
        print("smile :) !!")

obj=D()
obj.fun1()
obj.fun2()
obj.fun3() 
obj.fun4()

#Use of super() in inheritance
class A:#SINGLE LEVEL 
    def __init__(self):
        print("Function1!!")
class B(A):
    def __init__(self):
        print("Function2!!")

obj=B()
