#!/usr/bin?python3
if __name__ == "__main__":
    """prints the number of and the list of its arguments"""
    import sys
    count = len(sys.argv) - 1
    if count == 0:
        print("argument 0")
    elif count == 1:
        print("argument 1")
    else:
        print("{} arguments:".format(count))
    for i in range("{}:{}".format(i + 1, sys.argv[1 + 1))
