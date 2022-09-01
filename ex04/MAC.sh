#!/bin/bash
ifconfig | grep ether | sed 's/ether//' | sed 's/[[:blank:]]//g'
