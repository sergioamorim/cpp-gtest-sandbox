mkdir build && cd build && cmake -G "$1" .. && make && hello/test/test_hello && cd ..; rm -r build

