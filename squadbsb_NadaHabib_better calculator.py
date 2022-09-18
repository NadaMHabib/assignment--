num1 = int(input("Please enter first number: "))
num2 = int(input("Please enter second number: "))
print("1 - +\n2 - -\n3 - *\n4 - /\n")
option = input("Please enter one operation :- ")
if option == "+":
   print(f"Addition: {num1 + num2}")
elif option == "-":
   print(f"Substraction: {num1 - num2}")
elif option == "*":
   print(f"Multiplication: {num1 * num2}")
elif option == "/":
   print(f"Division: {num1 / num2}")
elif option == "%":
   print(f"Modulo: {num1 % num2}")
else:
    print("Invalid Input")
