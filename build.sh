rm qt.conf ; rm -rf build ; mkdir build && cd build && conan install .. && cmake .. -G "Unix Makefiles" && cmake -build . && make && cp bin/babel_client ../ && cp qt.conf ../
