# 3. Opening and Closing Files

try:
    file = open("my_file.txt", "w")  # Open in write mode ("w")
    file.write("This is some text.\n")
    file.close()  # Always close the file
    print("File written to successfully.")
except Exception as e:
    print(f"An error occurred: {e}")


