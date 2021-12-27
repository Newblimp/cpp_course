with open("w05/submission/seal_data", "r") as file:
    text = file.read()
    numbers = text.split()
    print(len(numbers))