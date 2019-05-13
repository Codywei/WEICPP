import glob
import os
print(os.path.abspath('.'))
os.chdir("section5")
file=r'./CMakeLists.txt'
with open(file,'w+') as f:
   for name in glob.glob(r'*.cpp'):
       f.write("add_executable("+name.replace(".cpp","")+" "+name+")\n")

    