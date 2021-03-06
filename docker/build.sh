#!/bin/sh

# Build Docker Image
if [ "$1" = "kinetic" ] || [ "$1" = "indigo" ]
then
    echo "Use $1"
    nvidia-docker build -t mav-$1 -f Dockerfile.$1 .
else
    echo "Select distribution, kinetic|indigo"
fi
