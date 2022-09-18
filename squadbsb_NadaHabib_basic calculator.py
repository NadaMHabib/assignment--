
num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
print("1 - Addition\n2 - Substraction\n3 - Multiplication\n4 - Division\n")
option = int(input("Please enter one option from the above list:- "))
if option == 1:
   print(f"Addition: {num1 + num2}")
elif option == 2:
   print(f"Substraction: {num1 - num2}")
elif option == 3:
   print(f"Multiplication: {num1 * num2}")
elif option == 4:
   print(f"Division: {num1 / num2}")
