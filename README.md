# test_suite
## 代码提交
1. git add
2. git commit -s
3. git push -u origin master


# qemu 调试模式
1.确保进入调试模式
    qemu-system-arm -M mcimx6ul-evk -m 128M -s -S -nographic -kernel relocate.elf
2.开启另外一个termal窗口, 依次输入以下命令
    arm-none-eabi-gdb -tui relocate.elf
    target remote localhost: 1234

3.同时显示汇编和C代码
    layout split 