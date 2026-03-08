import os

for i in range(11,31):
    directory = f"./day{i}-"
    os.mkdir(directory)
    open(f"{directory}/main_cpp.cpp", "w").close()
    open(f"{directory}/main_py.py", "w").close()
