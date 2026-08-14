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







## 使用说明 Usage

> 📌 普通用户 | For regular users
直接下载可执行程序 exe 使用，**不需要安装 Dev‑C++**。
Download the exe file directly to use. **Dev‑C++ is NOT required.**

> 📌 需要源码的用户 | For source‑code users
如果需要获取源码、修改或重新编译项目，请安装 **Dev‑C++ 5.11**。
If you need source code for modification or rebuilding, please install **Dev‑C++ version 5.11**.

### 编译构建 Build Instructions
#### Dev‑C++ 5.11
1. 获取全部项目源码文件
2. 使用 Dev‑C++ 5.11 打开 `SimpleTimer.dev` 项目文件
3. 项目已内置链接器参数，无需额外配置，直接编译即可
4. 运行程序时，请将 `alert.wav` 和生成的 `SimpleTimer.exe` 放在同一个文件夹，否则没有提示音

1. Get all project source files
2. Open `SimpleTimer.dev` project file with Dev‑C++ 5.11
3. Linker parameters are built‑in, no extra configuration needed, just build
4. Place `alert.wav` in the same folder as `SimpleTimer.exe` when running, or there will be no alert sound

#### 其他 C++ 编译器 Other compilers
使用其他编译器编译，必须手动添加链接器参数：`‑lwinmm`
If you use other compilers, you must add this linker flag manually: `‑lwinmm`

### 文件说明 File notes
- `SimpleTimer.dev`：Dev‑C++ 5.11 项目工程文件 | Dev‑C++ 5.11 project file
- `SimpleTimer.layout`：IDE窗口布局文件，不参与编译，可直接删除 | IDE layout file, safe to delete, won't affect compilation
- `*.cpp`：程序源代码 | Source code
- `alert.wav`：提示音资源文件 | Alert sound resource
