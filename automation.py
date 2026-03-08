import os

for i in range(30,11,-1):
    ignore_pattern = f"day{i}-/*"
    directory = f"./day{i}-"
    print(ignore_pattern)
    os.mkdir(directory)
    open(f"{directory}/main_cpp.cpp", "w").close()
    open(f"{directory}/main_py.py", "w").close()
