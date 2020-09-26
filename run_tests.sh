mkdir build && cd build && cmake -G "MinGW Makefiles" --target test_hello .. && make && hello/test/test_hello.exe && cd .. && rm -r build

