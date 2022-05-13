## GCC/G++ 컴파일러 정상작동이 안되는 경우
뭔 짓을 해도 컴파일이 안되는 경우가 있다.

그러한 경우 아래의 컴파일 **json 파일**들을 똑같이 만들어준뒤, <br>
.vscode - [c_cpp_properties.json , launch.json, settings.json]<br>
이렇게 구성되어있다. 일단 잘 모르니 다 넣어둔다.
> **c_cpp_properties.json**
```json
{
  "configurations": [
    {
      "name": "gcc",
      "includePath": [
        "${workspaceFolder}/**"
      ],
      "compilerPath": "C:\\MinGW\\bin\\gcc.exe",
      "cStandard": "${default}",
      "cppStandard": "${default}",
      "intelliSenseMode": "windows-gcc-x64",
      "compilerArgs": []
    }
  ],
  "version": 4
}
```
> **launch.json**
```json
{
    "version": "2.7.9",
    "configurations": [
      {
        "type": "java",
        "name": "Launch Computer",
        "request": "launch",
        "mainClass": "Computer",
        "projectName": "Code_Dictionary_32da74b4"
      },
      {
        "name": "Python: Current File",
        "type": "python",
        "request": "launch",
        "program": "${file}",
        "console": "integratedTerminal"
      },
      {
        "name": "C/C++ Runner: Debug Session",
        "type": "cppdbg",
        "request": "launch",
        "args": [
          ""
        ],
        "stopAtEntry": false,
        "cwd": "c:/GitHub/Code_Dictionary/C/C++_Snippet",
        "environment": [],
        "program": "c:/GitHub/Code_Dictionary/C/C++_Snippet/build/Debug/outDebug",
        "internalConsoleOptions": "openOnSessionStart",
        "MIMode": "gdb",
        "miDebuggerPath": "C:/ProgramData/chocolatey/lib/mingw/tools/install/mingw64/bin/gdb.exe",
        "externalConsole": false,
        "setupCommands": [
          {
            "description": "Enable pretty-printing for gdb",
            "text": "-enable-pretty-printing",
            "ignoreFailures": true
          }
        ]
      }
    ]
  }
```

> settings.json
```json
{
  "python.pythonPath": "C:\\Users\\dlrgh\\AppData\\Local\\Programs\\Python\\Python39\\python.exe",
  "java.javaPath": "C:\\Program Files\\Java\\jdk1.8.0_221\\bin\\java.exe",
  "java.project.sourcePaths": [
    "Android_Snippet/daggerSample"
  ],
  "jupyter.jupyterServerType": "local",
  "C_Cpp.errorSquiggles": "Disabled",
  "C_Cpp_Runner.cCompilerPath": "C:/MinGW/bin/gcc.exe",
  "C_Cpp_Runner.cppCompilerPath": "C:/ProgramData/chocolatey/lib/mingw/tools/install/mingw64/bin/g++.exe",
  "C_Cpp_Runner.debuggerPath": "C:/ProgramData/chocolatey/lib/mingw/tools/install/mingw64/bin/gdb.exe",
  "C_Cpp_Runner.cStandard": "",
  "C_Cpp_Runner.cppStandard": "",
  "C_Cpp_Runner.msvcBatchPath": "",
  "C_Cpp_Runner.warnings": [
    "-Wall",
    "-Wextra",
    "-Wpedantic"
  ],
  "C_Cpp_Runner.enableWarnings": true,
  "C_Cpp_Runner.warningsAsError": false,
  "C_Cpp_Runner.compilerArgs": [],
  "C_Cpp_Runner.linkerArgs": [],
  "C_Cpp_Runner.includePaths": [],
  "C_Cpp_Runner.includeSearch": [
    "*",
    "**/*"
  ],
  "C_Cpp_Runner.excludeSearch": [
    "**/build",
    "**/build/**",
    "**/.*",
    "**/.*/**",
    "**/.vscode",
    "**/.vscode/**"
  ],
  "files.associations": {
    "array": "cpp",
    "atomic": "cpp",
    "bit": "cpp",
    "*.tcc": "cpp",
    "cctype": "cpp",
    "clocale": "cpp",
    "cmath": "cpp",
    "compare": "cpp",
    "concepts": "cpp",
    "cstdarg": "cpp",
    "cstddef": "cpp",
    "cstdint": "cpp",
    "cstdio": "cpp",
    "cstdlib": "cpp",
    "cwchar": "cpp",
    "cwctype": "cpp",
    "deque": "cpp",
    "string": "cpp",
    "unordered_map": "cpp",
    "vector": "cpp",
    "exception": "cpp",
    "algorithm": "cpp",
    "functional": "cpp",
    "iterator": "cpp",
    "memory": "cpp",
    "memory_resource": "cpp",
    "numeric": "cpp",
    "random": "cpp",
    "string_view": "cpp",
    "system_error": "cpp",
    "tuple": "cpp",
    "type_traits": "cpp",
    "utility": "cpp",
    "initializer_list": "cpp",
    "iosfwd": "cpp",
    "iostream": "cpp",
    "istream": "cpp",
    "limits": "cpp",
    "new": "cpp",
    "numbers": "cpp",
    "ostream": "cpp",
    "stdexcept": "cpp",
    "streambuf": "cpp",
    "typeinfo": "cpp"
  }
}
```




MinGW를 새로 다운받아서 설치해준다. 

[설치 및 환경변수 설정 가이드 블로그](https://deepcode.kr/30)

그리고 c_cpp_properties.json 에서 해당 MinGW의 경로를 넣어준다. 

Cmd 창을 열고 gcc --version 을 쳐본다. 

버전명이 뜨면 정상 가동 

이제 다시 컴파일 명령문을 입력해준다. 

정상 가동 될 것이다. 
