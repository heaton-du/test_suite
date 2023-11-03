#!/bin/bash

#在该路径确保qemu-system-arm能够正确执行
#
#调试模式
qemu-system-arm -M mcimx6ul-evk -m 128M -s -S -nographic -kernel ../001_relocate/004_manual_relocate_data/relocate.bin

#直接运行
#qemu-system-arm -M mcimx6ul-evk -m 128M -s -nographic -kernel ../001_relocate/004_manual_relocate_data/relocate.bin