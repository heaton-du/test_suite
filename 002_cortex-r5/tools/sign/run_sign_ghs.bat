@echo off

set SIGN_CMD=.\tools\sign_tool_e3\atb_signer_win\atb_signer.exe

set lite_flag=false
set core_list=

echo %1|find "lite">null&&set lite_flag=true

if "%2" == "sf" (
        if "%lite_flag%" == "true" (
                set core_list=%core_list% --iib core=0 type=0x0 image=.\ghs\%1_sf\bin\debug\%1_sf.mem to=0x504000 entry=0x504000
        ) else (
                set core_list=%core_list% --iib core=0 type=0x0 image=.\ghs\%1_sf\bin\debug\%1_sf.mem to=0x404000 entry=0x404000)
)
if "%3" == "sx" (
        set core_list=%core_list% --iib core=6 type=0x0 image=.\ghs\%1_sx\bin\debug\%1_sx.mem to=0x600000 entry=0x600000)
if "%4" == "sp" (
        set core_list=%core_list% --iib core=7 type=0x0 image=.\ghs\%1_sp\bin\debug\%1_sp.mem to=0x700000 entry=0x700000)
%SIGN_CMD% sign --v 2 --sec_ver 0x1234 --dgst sha256 %core_list% --of .\ghs\%1.elf.bin

pause