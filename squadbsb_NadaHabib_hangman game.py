import random
numberOfRuns = random.randint(1, 20) 
numberOfTries = 0

while numberOfTries < 3: 
    guessNumber = int(input("Please enter your guessed number : "))
    numberOfTries += 1
    if guessNumber < numberOfRuns:
        print('Your guess is too low')
    if guessNumber > numberOfRuns:
        print('Your guess is too high')
    if guessNumber == numberOfRuns:
        break
if guessNumber != numberOfRuns:
    print('You did not guess the right number, The number was ' + str(numberOfRuns))
