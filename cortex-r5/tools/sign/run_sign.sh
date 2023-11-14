#!/bin/bash

#****************************************************
# don't need modify
# user help for print
helpMe(){
    sed -rn 's/^### ?//;T;p;' "$0"
}

if [ "$1" == "" -o "$1" == "-h" -o "$1" == "-help" ]; then
    helpMe
    exit 1
fi
#****************************************************
###  
### Usage:
### ./tools/sign_tool_e3/run_sign_safe <board> <core> ... <core> 
###  
### Options:
###     <board>  the target board  eg:E3_z1/E3_evb/E3_ref
###     <core>   the target core, sf core is must 
###                   eg:sf/sp/sp0/sp1/sx/sx0/sx1
###



#****************************************************
if [ -L $0 ]
then
    BASE_DIR=`dirname $(readlink $0)`
else
    BASE_DIR=`dirname $0`
fi

root_path=$(readlink -f .)
#echo ${root_path}
IMG_DIR=${root_path}/build/$1
#echo $IMG_DIR

core_list=""

for i in "$@"; do
    if [ $i = "sf" ]; then
        if [[ "${1}" =~ "lite" ]];then
        core_list="--iib core=0 type=0x0 image=${IMG_DIR}/${1}_sf_mcal_testsuite.elf.bin to=0x504000 entry=0x504000 "
        else
        core_list="--iib core=0 type=0x0 image=${IMG_DIR}/${1}_sf_mcal_testsuite.elf.bin to=0x404000 entry=0x404000 "
        fi
    fi
    if [ $i = "sp0" ]; then
        core_list+="--iib core=2 type=0x0 image=${IMG_DIR}/${1}_sp0_mcal_testsuite.elf.bin to=0x700000 entry=0x700000 "
    fi
    if [ $i = "sp1" ]; then
        core_list+="--iib core=3 type=0x0 image=${IMG_DIR}/${1}_sp1_mcal_testsuite.elf.bin to=0x780000 entry=0x780000 "
    fi
    if [ $i = "sx0" ]; then
        core_list+="--iib core=4 type=0x0 image=${IMG_DIR}/${1}_sx0_mcal_testsuite.elf.bin to=0x600000 entry=0x600000 "
    fi
    if [ $i = "sx1" ]; then
        core_list+="--iib core=5 type=0x0 image=${IMG_DIR}/${1}_sx1_mcal_testsuite.elf.bin to=0x680000 entry=0x680000 "
    fi
    if [ $i = "sx" ]; then
        core_list+="--iib core=6 type=0x0 image=${IMG_DIR}/${1}_sx_mcal_testsuite.elf.bin to=0x600000 entry=0x600000 "
    fi
    if [ $i = "sp" ]; then
        core_list+="--iib core=7 type=0x0 image=${IMG_DIR}/${1}_sp_mcal_testsuite.elf.bin to=0x700000 entry=0x700000 "
    fi
done

#echo $core_list

rm ${IMG_DIR}/${1}.elf.bin

$BASE_DIR/atb_signer_e3 sign --v 2 --sec_ver 0x1234 --dgst sha256 ${core_list} --of ${IMG_DIR}/${1}.elf.bin
