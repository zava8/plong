#!/bin/bash

echo "installing cplong library."
echo "copying libplong.so in /usr/lib/ directory. may need your sudo permission"
sudo cp libplong.so /usr/lib/
echo "copying cplong.h in /usr/include/ directory. may need your sudo permission"
sudo cp cplong.h /usr/include/
echo "finished installing.  to use library, add '-lplong' as a flag"
