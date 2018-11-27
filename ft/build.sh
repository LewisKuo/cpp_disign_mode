#! /bin/bash

function preBuild()
{
    if [[ ! -d "build" ]]; then
        mkdir build
    else
        if [[ ! $@ =~ "fast" ]]; then
            rm -rf build
            mkdir build
        fi
    fi

    cd build
}

function build()
{
    cmake ..
    make -j8
}

function postBuild()
{
    ./ftest
}

preBuild $@
build
postBuild
