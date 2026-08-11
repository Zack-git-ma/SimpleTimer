# SimpleTimer Simple Countdown Timer

## Runtime Environment
⚠️ **Windows‑only**. Linux / macOS versions are under development.

It relies on Windows API and can only be compiled and run properly on Windows.

## File Description
- `SimpleTimer_Chinese.cpp`: Source code
- `SimpleTimer.exe`: Compiled executable program
- `alert.wav`: Alert sound file played upon countdown completion
- `SimpleTimer.dev`: Dev‑C++ project file

## Usage
1. Place **`SimpleTimer.exe` and `alert.wav` in the same folder**.
2. Double‑click `SimpleTimer.exe` to launch the program.
3. Enter the countdown duration following console prompts. Wait for timer completion, then the alert sound will play.

> ⚠️ Important: If `alert.wav` is not in the same directory as the executable, no sound will play when the countdown finishes.

## Compilation Instructions (Dev‑C++ TDM‑GCC)
1. Open the `SimpleTimer.dev` project in Dev‑C++.
2. Go to Compiler Options ‑ Linker parameters, add: `-static-libgcc -lwinmm`
3. Select **Rebuild All** to generate the executable.

Command‑line compilation reference:
```bash
g++ SimpleTimer_Chinese.cpp -o SimpleTimer.exe -static-libgcc -lwinmm













\# SimpleTimer 简易倒计时计时器



\## 运行环境

⚠️ \*\*仅支持 Windows 系统\*\*，Linux / macOS版正在研发中。

依赖 Windows API，需要 Windows 系统才能正常编译和运行。



\## 文件说明

\- `SimpleTimer\_Chinese.cpp`：源代码

\- `SimpleTimer.exe`：编译后的可执行程序

\- `alert.wav`：倒计时结束提示音效文件

\- `SimpleTimer.dev`：Dev‑C++ 项目工程文件



\## 使用方法

1\. 将 `SimpleTimer.exe` 与 `alert.wav` \*\*放在同一个文件夹内\*\*。

2\. 双击 `SimpleTimer.exe` 直接运行程序。

3\. 根据控制台提示输入倒计时时间，等待计时完成，播放提示音效。



> ⚠️ 重要：如果 `alert.wav` 和 exe 不在同一目录，倒计时结束不会播放声音。



\## 编译说明（Dev‑C++ TDM‑GCC）

1\. 使用 Dev‑C++ 打开 `SimpleTimer.dev` 项目。

2\. 编译器选项-链接器参数添加：-static-libgcc -lwinmm

3\. 执行「全部重新编译」生成 exe。

命令行编译参考：
```bash
g++ SimpleTimer_Chinese.cpp -o SimpleTimer.exe -static-libgcc -lwinmm
