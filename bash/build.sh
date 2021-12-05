#!/bin/bash
Cmake()
{
 cd ..
 mkdir -p $1
 cd $1
 cmake ..
 make
 make install
}

Cmake build


