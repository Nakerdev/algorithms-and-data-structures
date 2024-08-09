# Algorithms and Data Structures

## How to compile a project
* Go to project directory (the directory that contains the *CMakeLists.txt* file)
* Run: ```cmake . -B build```
* I use Visual Studio Generator so *cmake* generates Visual Studio projects, if you are using the same generator go to *build* folder and run: ```MsBuild ALL_BUILD.vcxproj```. This command creates the project binary into *build\Debug* folder. 
