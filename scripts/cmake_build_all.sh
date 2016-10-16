rm -r build
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Debug ..
make all
cmake -DCMAKE_BUILD_TYPE=Release ..
make LearnCMake
cd ..