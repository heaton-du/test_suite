@echo off

set SIGN_CMD=.\tools\sign_tool_e3\atb_signer_win\atb_signer.exe

setlocal enabledelayedexpansion

set core_list=

for %%I in (%*) do (
    if "%%I" == "sf" (
        set core_list=!core_list! --iib core=0 type=0x0 image=.\build\%1\%1_sf_mcal_testsuite.elf.bin to=0x404000 entry=0x404000)
    if "%%I" == "sx" (
        set core_list=!core_list! --iib core=6 type=0x0 image=.\build\%1\%1_sx_mcal_testsuite.elf.bin to=0x600000 entry=0x600000)
    if "%%I" == "sx0" (
        set core_list=!core_list! --iib core=4 type=0x0 image=.\build\%1\%1_sx0_mcal_testsuite.elf.bin to=0x600000 entry=0x600000)
    if "%%I" == "sx1" (
        set core_list=!core_list! --iib core=5 type=0x0 image=.\build\%1\%1_sx1_mcal_testsuite.elf.bin to=0x680000 entry=0x680000)
    if "%%I" == "sp" (
        set core_list=!core_list! --iib core=7 type=0x0 image=.\build\%1\%1_sp_mcal_testsuite.elf.bin to=0x700000 entry=0x700000)
    if "%%I" == "sp0" (
        set core_list=!core_list! --iib core=2 type=0x0 image=.\build\%1\%1_sp0_mcal_testsuite.elf.bin to=0x700000 entry=0x700000)
    if "%%I" == "sp1" (
        set core_list=!core_list! --iib core=3 type=0x0 image=.\build\%1\%1_sp1_mcal_testsuite.elf.bin to=0x780000 entry=0x780000)
)

::echo %core_list%

%SIGN_CMD% sign --v 2 --sec_ver 0x1234 --dgst sha256 %core_list% --of .\build\%1\%1.elf.bin.pac 

::pause
