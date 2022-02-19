#!/bin/bash

echo "building and installing cplong library."
make
cp libplong.so ./install/
cp src/cplong.h ./install/
sudo cp libplong.so /usr/lib/
sudo cp src/cplong.h /usr/include/
echo "finished installing.  to use library, add '-lplong' as a flag"
