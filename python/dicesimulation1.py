import random

def roll_dice(sides=6):
    return random.randint(1, sides)

def simulate_dice_rolls(num_rolls, sides=6):
    results = [roll_dice(sides) for _ in range(num_rolls)]
    return results

def calculate_probabilities(results):
    total_rolls = len(results)
    probabilities = {outcome: results.count(outcome) / total_rolls for outcome in set(results)}
    return probabilities

def display_results(results):
    print("Dice Simulation Results:", results)

def display_probabilities(probabilities):
    print("Probabilities:")
    for outcome, probability in probabilities.items():
        print(f"{outcome}: {probability:.2%}")

# Main program
num_rolls = int(input("Enter the number of times you want to roll the dice: "))
sides = int(input("Enter the number of sides on the dice (default is 6): "))

# Simulate dice rolls
results = simulate_dice_rolls(num_rolls, sides)

# Display results
display_results(results)

# Calculate and display probabilities
probabilities = calculate_probabilities(results)
display_probabilities(probabilities)
