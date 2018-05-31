#!/bin/sh

#  Simulator.command
#  SimulatorManager
#
#  Created by ramesh on 10/12/14.
#  Copyright (c) 2014 ramesh. All rights reserved.

XCODE_PATH=`xcode-select -p`

echo $XCODE_PATH

#cd "$XCODE_PATH/usr/bin"

$XCODE_PATH/usr/bin/simctl erase "${1}"
