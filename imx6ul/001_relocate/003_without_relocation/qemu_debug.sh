#!/bin/bash

arm-none-eabi-gdb relocate.elf -tui

target remote localhost:1234