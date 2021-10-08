
import os

arr = [x for x in os.listdir('.')]

for x in arr:
    # print("loop: " + x)
    # print(os.path.isdir(x))
    # print(os.path.isfile(x))
    if os.path.isdir(x):
        for y in os.listdir(x):
            # print("loop2: " + y)
            # print(os.path.isfile(x + "/" + y))
            if os.path.isfile(x + "/" + y):
                # print(y)
                if not y.endswith('.c') and not y.endswith('.h') and not y.endswith('.0') and not y.endswith('file'):
                    print(x + "/" + y + " will be removed")
                    os.remove(x + "/" + y)
    else:
        # print(x)
        if not x.endswith('.c') and not x.endswith('.h') and not x.endswith('.0') and not x.endswith('file') and not x.endswith('.py'):
           print(x + " will be removed") 
           os.remove(x)