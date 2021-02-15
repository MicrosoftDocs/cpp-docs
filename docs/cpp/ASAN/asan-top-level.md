---
title: "Address Sanitizer"
description: "Top level description of the Address Sanitizer feature for Microsoft Visual C++."
ms.date: 02/05/2021
f1_keywords: ["ASan","sanitizers","commandAddressSanitizer","memory safety","heap buffer overflow", "stack buffer overflow", "double free", "use after free", "type mismatch"]
helpviewer_keywords: ["ASan","sanitizers","AddressSanitizer","clang_rt.asan","Clang runtime","runtime"]
---

# Address Sanitizer

## Overview

The C & C++ languages are powerful, but they can suffer from different types of bugs which affect program correctness and program security. Starting with Visual Studio 2019 16.9, the Microsoft Visual C++ compiler and IDE support Address Sanitizer technology to help light up [hard-to-find bugs](#error-types) with zero false positives.

Using this flag can reduce your time spent on:

- Basic correctness
- Cross platform portability
- Security
- Stress testing
- Integrating new source code

The Address Sanitizer is a compiler and runtime runtime [introduced by Google](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany). Starting with Visual Studio 2019 16.9 this technology is offered in the Visual C++ compiler tool chain and Visual Studio IDE. Many projects can enable the Address Sanitizer with a project setting, or a single additional compiler switch. The new flag is compatible with all levels of optimization. There are conflicts in three compilation modes: [edit-and-continue](), [incremental linking](), and [/RTC](https://docs.microsoft.com/en-us/cpp/build/reference/rtc-run-time-error-checks?view=msvc-160) switches), otherwise all configurations of x86 and x64 are supported.

Compiling with `-fsanitize=address` is a powerful alternative to both [/RTC](https://docs.microsoft.com/en-us/cpp/build/reference/rtc-run-time-error-checks?view=msvc-160), and [/analyze](https://docs.microsoft.com/en-us/cpp/code-quality/code-analysis-for-c-cpp-overview?view=msvc-160). It provides run-time bug-finding technologies which leverage your existing build systems and existing test assets.

By setting a new environment variable via **`set ASAN_SAVE_DUMPS=”MyFileName.dmpx”`** your program will create a new type of crash dump file that will contain extra meta-data for post-mortem debugging. These dump files can be displayed off-line, with Visual Studio's new debugger IDE. These dump files can be an enabler for work flows requiring:

- On-premises testing
- Cloud based workflows for testing

These test systems can store the dump files, with **precisely diagnosed bugs**, for later viewing super imposed on your source code in the IDE.

### Installing the Address Sanitizer

Simply  [**install the Address Sanitizer functionality**]().

After installing and building your executables with the `-fsanitize=address`compiler switch on the command line, Vusual Studio project system or cmake integration, you simply run your program normally. THis will light up [many types of bugs](#errors) in the debugger IDE, on the command line or be stored in a new type of dump file.

### Using the Address Sanitizer 

Microsoft recommends using the Address Sanitizer in these **three standard workflows**:

- **Developer inner loop**
    - Visual Studio - debugger IDE
    - Visual Studio - [Command line](#Using-the-Address-Sanitizer-from-a-Developer-Command-Prompt)
    - Visual Studio - [Project system](#Using-the-Address-Sanitizer-from-Visual-Studio)
    - Visual Studio - [CMake]([CMake](#Using-the-Address-Sanitizer-from-Visual-Studio:-CMake))

    
- **CI/CD** - continuous integration / continuous development
    - Error reporting - [New Address Sanitizer dump files]()

- **Fuzzing** - building with the [libFuzzer](https://llvm.org/docs/LibFuzzer.html) wrapper
    - [Azure OneFuzz](https://www.microsoft.com/security/blog/2020/09/15/microsoft-onefuzz-framework-open-source-developer-tool-fix-bugs/)
    - Local Machine

This article will cover the information needed to enable the three workflows listed above. The information will be specific to the **platform dependent** Windows 10 implementation of the Address Sanitizer and supplement existing documentation from [Google, Apple and GCC](#Google,-Apple-and-GCC-documentation).

> [!NOTE] Current support is limited to x86 and AMD64 on Windows 10. **Customer feedback** would help us prioritize shipping these sanitizers in the future: -fsanitize=thread, -fsanitize=leak, -fsanitize=memory, -fsanitize=hwaddress or -fsanitize=undefined.

## Using the Address Sanitizer from a Developer Command Prompt

Compile with `-fsanitize=address` to enable Address Sanitizer. The compiler flag `-fsanitize=address` is compatible with all existing C++ or C optimization levels (e.g., /Od, /O1, /O2, /O2 /GL and PGO), works with static and dynamic CRTs (e.g. /MD, /MDd, /MT, /MTd) and can be used to create a .EXE or .DLL. Debug information is required for the Address Sanitizer runtime to print correct call stacks on errors; In this example we pass `-/Zi`.

The Address Sanitizer libraries (.lib files) will be linked in for you. For more detail, and for guidelines on partitioned build systems, see [building to target the Address Sanitizer runtime.](.\ASan-building.md).

### Example - basic global buffer overflow:

```cpp
    // main.cpp
    #include <stdio.h>

    int x[100];

    int main() {
        printf("Hello! \n");
        x[100] = 5; // Boom!
        return 0;
    }
```

Using a Developer Command Prompt for VS 2019, compile main.cpp as `-fsanitize=address -Zi`

![basic-global-overflow](src_code\asan-top-level\command-basic-global-overflow.png)

Running **main.exe** at the command line, will result in the formatted error report seen below.

Consider the over layed, red boxes which high light seven (7) key pieces of information:

![basic-global-overflow](src_code\asan-top-level\basic-global-overflow.png)

**From top to bottom**

1.) This is a global-buffer-overflow

2.) A write of 4 bytes (32-bits) was outside any user defined variable.

3.) The store took place in function `main()` defined in file `basic-global-overflow.cpp` on line 7.

4.) The variable, named `"x"`, defined in basic-global-overflow.cpp on line 3 starting at column 8

5.) This global variable `"x"` is of size 400 bytes

6.) The exact [shadow byte](.\asan-shadowbytes.md) describing the address targeted by the store had a value of `0xf9`

7.) The shadow byte legend says `0xf9` is an area of padding to the right of `int x[100]`

**Note:**  The function names in the call stack are produced through the [LLVM symbolizer](https://llvm.org/docs/CommandGuide/llvm-symbolizer.html) which is invoked by the runtime upon error.

## Using the Address Sanitizer from Visual Studio

We've integrated the Address Sanitizer with the [Visual Studio IDE](https://docs.microsoft.com/en-us/visualstudio/get-started/visual-studio-ide?view=vs-2019). We simply augment the MSDN section on creating a C++ console application seen in the [quick start guide](https://docs.microsoft.com/en-us/cpp/get-started/tutorial-console-cpp?view=msvc-160&viewFallbackFrom=vs-2019).

You can turn on the Address Sanitizer for an MSBuild project by right-clicking on the project in Solution Explorer, choosing Properties, navigating under C/C++ > General, and changing the Enable Address Sanitizer

![asan-project-system](.\MEDIA\asan-project-system.PNG)

**To build** from the IDE, we ask you to knowingly opt out of [these incompatible flags](.\asan-incompatible-flags.md):

-  turn OFF [edit and continue](https://docs.microsoft.com/en-us/visualstudio/debugger/how-to-enable-and-disable-edit-and-continue?view=vs-2019)
- turn OFF [runtime checks]( )
- turn OFF [incremental linking]( )

To run under the debugger **hit F5**. The following screen will :

![global-overflow-IDE](.\MEDIA\asan-F5-global-buffer-overflow.PNG)

## Using the Address Sanitizer from Visual Studio: CMake

To enable ASan for [a CMake project created to target Windows](https://docs.microsoft.com/en-us/cpp/build/cmake-projects-in-visual-studio?view=msvc-160), do the following:

Open the Configurations dropdown at the top of the IDE and click on Manage Configurations. 

![configurations](.\media\asan-cmake-configuration.PNG)

This will open the CMake Project Settings UI, which is saved in a CMakeSettings.json file.

Click the Edit JSON link in the UI. 

This will switch the view to raw .json.
Add the following property: “addressSanitizerEnabled”: true

Here is an image of CMakeSettings.json **after** the change:

![cmake-jason](.\media\asan-cmake-jason.PNG)

Save the jason file with `ctrl-s` and then `hit F5` to recompile and run. 

The following screen shot captures the error from the CMake build.

![cmake-F5-runt](.\MEDIA\asan-cmake-F5-error.PNG) 

## Offline Address Sanitizer crash dumps

Address Sanitizer exceptions are triggered one of the many [errors](#errors) are detected at runtime. When run from the command line the Address Sanitizer runtime produces text output with error information. When run from the Visual Studio IDE the debugger displays the error information.

To produce a dump file of the error which can be debugged offline, set an environment variable which is consumed by the Address Sanitizer runtime. 

`set ASAN_SAVE_DUMPS="MyFileName.dmpx"`

Upon error, your application will produce MyFileName.dmpx which is a [dump file](https://docs.microsoft.com/en-us/previous-versions/windows/desktop/proc_snap/export-a-process-snapshot-to-a-file) that can be opened and debugged using Visual Studio.

**Note** that like all other dump files, [debugging symbols](https://docs.microsoft.com/en-us/windows/win32/dxtecharts/debugging-with-symbols) must be available and must match the version of the source compiled.

## Error types

The following list of runtime errors can be exposed when you run your binaries compiled Address Sanitizer:

- [stack-use-after-scope](.\examples-stack-use-after-scope.md)
- [stack-buffer-overflow](.\examples-stack-buffer-overflow.md)
- [stack-buffer-underflow](.\examples-stack-buffer-underflow.md)
- [stack-use-after-return](.\examples-stack-use-after-return.md)
- [heap-buffer-overflow](.\examples-heap-buffer-overflow.md)
- [heap-use-after-free](.\examples-heap-use-after-free.md)
- [double-free](.\examples-double-free.md)
- [dynamic-stack-buffer-overflow](.\examples-dynamic-stack-buffer-overflow.md)
- [global-overflow](.\examples-global-overflow.md)
- [calloc-overflow](.\examples-calloc-overflow.md)
- [new-delete-type-mismatch](.\examples-new-delete-type-mismatch.md)
- [memcpy-param-overlap](.\examples-memcpy-param-overlap.md)
- [strcat-param-overlap](.\examples-strcat-param-overlap.md)
- [allocation-size-too-big](.\examples-allocation-size-too-big.md)
- [invalid-aligned-alloc-alignment](.\examples-invalid-aligned-alloc-alignment.md)
- [use-after-poison](.\examples-use-after-poison.md)
- [alloc-dealloc-mismatch](.\examples-alloc-dealloc-mismatch.md)

## Differences with Clang

We differ in two functional areas:

- **stack-use-after-scope** - this is on by default and can't be turned off.
- **stack-use-after-return** - this is not available by just setting ASAN_OPTIONS

See [Building for the Address Sanitizer with MSVC](.\asan-building.md).These decisions were made to reduce the test matrix used to ship this first version.

## Exiting industry documentation

Extensive documentation already exists for these language and platform dependent implementations of the Address Sanitizer technology.

- [Google](https://github.com/google/sanitizers/wiki/AddressSanitizer)
- [Apple](https://developer.apple.com/documentation/xcode/diagnosing_memory_thread_and_crash_issues_early)
- [GCC](https://gcc.gnu.org/onlinedocs/gcc/Instrumentation-Options.html)

This seminal paper on the [Address Sanitizer](https://www.usenix.org/system/files/conference/atc12/atc12-final39.pdf) describes the implementation.

!!! is this where we should mention that we don't implement the entire complete feature set? !!!

## See also

- [Building for the Address Sanitizer with MSVC](.\asan-building.md)

- [Address Sanitizer runtime](.\address-sanitizer-runtime.md)

These structure all further details into the tools and the run times they target.

----

## STUFF TO KEEP -- remove later!!!!!

## Viewing Address Saniziter Errors ##

There are three ways your code can generate error reports:

- [Command line](#Command-line)
- [IDE](#IDE)
- [Snapshot files](#Snapshot-file)

These types of reports can be generated for many types of [errors found at runtime](#Error-types). 

### Example 

!!! Jim, I think we need a simpler example here. !!!
The following source code is **safe by coincidence**. It will **not** fail at runtime. The Windows 10, 16.9 version of the C runtime, will pad the 13 bytes requested, in order to facilitate alignment for subsequent calls to alloca. 

```cpp
    int x = 13;

    void main()
    {
        int *cc; 
        int i;
        int k = 17;

         __try{

            cc = (int*)_alloca(x);  // Cast pointer to 1-byte to pointer to 4-bytes
            if (((int)cc) & 0x3)
                fail = 1;

            cc[0] = 1;
            cc[1] = 1;
            cc[2] = 2;
            cc[3] = 3;  //Boom! Only caught with -fsanitize=address
```

Padding and alignment is platform dependent. It's a function of the CRT used on a particular operating system and whether the target is 32-bits, or 64-bits. The above example, or a slightly modified version, could produce different runtime results on Linux macOS or Android.

### Command line ###

If you run from the command line then your binary will emit formatted text reports to the screen. Consider the over layed, red boxes which high light four (4) key pieces of information from the error in the _alloca example.

![Command line: alloca](media\CommandLine-alloca.png)

From top to bottom

1.) A write of 4 bytes (32-bits) went beyond the stack allocation the program explicitly requested.

2.) That store was produced from line 47 in the function "main"

3.) The type of error was a dynamic stack buffer overflow for the 13 bytes explicitly requested.

4.) The [**shadow bytes**](.\asan-shadowbytes.md) that correspond to the address used in the overflowing store, indicate 13 bytes (8 + 5) were explicitly allocated for the alloca.

**Note:**  The call stack is converted to function names through the [LLVM symbolizer](https://llvm.org/docs/CommandGuide/llvm-symbolizer.html). The Address Sanitizer creates the rest of of the report based on its context, the shadow bytes, and meta-data the compiler produces.

### IDE

By simply recompiling with -fsanitze=address and invoking Visual Studio from the command line, the IDE will automatically map a pop up to the line and column causing the error.

                                     devenv /debugexe MyApp.exe arg1 arg2 ... argn

Consider the following error found in our cached version of spec2k6\povray where the program allocates 24-bytes but only frees 8-bytes. The details for where the allocation and free took place are in the **output pane** of the Visual Studio screen shot immediately below:

![IDE: povray](media\povray.png)


### VCASan library

The flag -fsanitize=address automatically links a new static library to your .EXE or .DLL. This static library will automatically produce:

- In memory meta-data for directly interfacing with the VS IDE, [while debugging](#Error-types).
- An optional [snap shot file](#Snapshot-files) with the same IDE meta-data.
