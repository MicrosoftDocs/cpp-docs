---
title: "Address Sanitizer"
description: "Top level description of the Address Sanitizer feature for Microsoft Visual C++."
ms.date: 02/05/2021
f1_keywords: ["ASan","sanitizers","commandAddressSanitizer","memory safety","heap buffer overflow", "stack buffer overflow", "double free", "use after free", "type mismatch"]
helpviewer_keywords: ["ASan","sanitizers","AddressSanitizer","clang_rt.asan","Clang runtime","runtime"]
---

# Address Sanitizer

We describe a new compiler flag `-fsanitize=address` which may result in exposing hidden [errors](#errors) in your code, not exposed by current testing.

Using this flag can reduce your time spent on:

- Basic correctness
- Cross platform portability
- Security
- Stress testing
- Integrating new source code

Building with `-fsanitize=address` and using your existing test assets, is a highly recommended step in properly testing your software. With just a [simple recompile](#Simple-command-line-interface), you can expose difficult to find, errors with **no false positives**. This class of errors is not found with [/RTC](https://docs.microsoft.com/en-us/cpp/build/reference/rtc-run-time-error-checks?view=msvc-160) or [/analyze](https://docs.microsoft.com/en-us/cpp/code-quality/code-analysis-for-c-cpp-overview?view=msvc-160).


## Developer Message

 The Address Sanitizer is a compiler based technology targeting a runtime [introduced by Google](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany). This [compiler](#Compiler) and [runtime](#address-sanitizer-runtimes) technology has become the "defacto" industry standard for finding memory safety issues. We now offer this technology as a fully supported feature in Visual Studio for the Windows platform. If your existing code compiles with our current Windows compiler, then it will compile with the extra flag -fsanitize=address under any level of optimization and all other compatible flags (e.g., /RTC is not compatible, yet).

Microsoft recommends using the Address Sanitizer in these **three standard workflows**:

- **Developer inner loop**
    - Visual Studio - Command line
    - Visual Studio - Project system with integrated IDE error reporting support.

    
- **CI/CD** - continuous integration / continuous development
    - CMake
    - MSBuild

- **Fuzzing** - build with the [libFuzzer](https://llvm.org/docs/LibFuzzer.html) wrapper
    - [Azure OneFuzz](https://www.microsoft.com/security/blog/2020/09/15/microsoft-onefuzz-framework-open-source-developer-tool-fix-bugs/)
    - Local Machine

This MSDN article will cover all the information needed to enable your builds for any of the three workflows listed above. The information will be specific to the Microsoft Windows 10 platform and supplement existing documentation from [Google, Apple and GCC](#Google,-Apple-and-GCC-documentation). We start with a simple command line use of the compiler and linker.

> [!NOTE] Current support is limited to x86 and AMD64 on Windows10. **Customer feedback** would help us prioritize shipping these sanitizers in the future: -fsanitize=thread, -fsanitize=leak, -fsanitize=memory, -fsanitize=hwaddress or -fsanitize=undefined.

## Simple command line interface

Adding the flag -fsanitize=address to your command line (with /Zi to emit debug info.) is all you need to compile and automatically link all required libraries. This can be used to create an .EXE or DLL. The compiler flag `-fsanitize=address` is compatible with all existing C++ or C optimization levels (e.g., /Od, /O1, /O2, /O2 /GL and PGO).

**Creating a main.exe in one step.**

                     C:\> cl -fsanitize=address /Zi main.cpp file2.cpp 3dparty.lib

The compiler will default to automatically linking main.exe with the static versions of the Address Sanitizer runtime binaries and the static [CRT](https://docs.microsoft.com/en-us/cpp/c-runtime-library/crt-library-features?view=msvc-160). Throwing [/MD](https://docs.microsoft.com/en-us/cpp/build/reference/md-mt-ld-use-run-time-library?view=msvc-160) flag will change the default link behavior and cause the dynamic versions of the libraries to be used instead. 

For more partitioned build systems, the following command lines show examples of the required compile and link lines to produce an "instrumented" main.exe.

**Creating a main.exe with an explicit link line.**

                     C:\> cl -c -fsanitize=address -O2 -Zi    main.cpp file2.cpp file3.cpp

                     C:\> link -debug -incremental:no    main.obj file2.obj file3.obj

The compiler requires opting into -Zi for debug information and the linker requires -debug to emit that debug information. One caveat is that `-debug` defaults to producing code for future incremental linking for rapid iterative development. which is not compatible with the stack walker used by the Address Sanitizer runtime. The Address Sanitizer requires `link -debug -incremental:no` and it will warn appropriately.

See the section on [building to target the Address Sanitizer runtime.](.\ASan-building.md) for more detail.

## Errors ##

There are three ways your code can generate error reports:

- [Command line](#Command-line)
- [IDE](#IDE)
- [Snapshot files](#Snapshot-file)

These types of reports can be generated for many types of [errors found at runtime](#Error-types). 

### Example 

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

**Note:**  The call stack is converted to function names through the [LLVM symbolizer](https://llvm.org/docs/CommandGuide/llvm-symbolizer.html). The Address Sanitizer creates the resto of the report based on its context, the shadow bytes, and meta-data the compiler produces.

### IDE

By simply recompiling with -fsanitze=address and invoking Visual Studio from the command line, the IDE will automatically map a pop up to the line and column causing the error.

                                     devenv /debugexe MyApp.exe arg1 arg2 ... argn

Consider the following error found in our cached version of spec2k6\povray where the program allocates 24-bytes but only frees 8-bytes. The details for where the allocation and free took place are in the **output pane** of the Visual Studio screen shot immediately below:

![IDE: povray](media\povray.png)

### Snapshot files

There's a powerful feature for workflows that need to retain detailed error information for processing errors off-line. If you **simply** set an environment variable, then your .EXE or .DLL will create a snap shot file. 

`set ASAN_SAVE_DUMPS="MyFileName.dmpx"`

Upon error, your application will produce MyFileName.dmpx which is a [dump file](https://docs.microsoft.com/en-us/previous-versions/windows/desktop/proc_snap/export-a-process-snapshot-to-a-file) containing extra meta-data. This meta-data is used to formatting an Address Santiizer error in the IDE on top you your source code. This snapshot file can be displayed later (possibly on another machine), in a newer version of the Visual Studio IDE. The IDE will use the meta-data to display the exact error on the exact source line as it would be seen in a live debug session.

**Note** that this will require [symbols](https://docs.microsoft.com/en-us/windows/win32/dxtecharts/debugging-with-symbols) from a PDB. This PDB must be produced from the version of the source you compiled to produce the executable that contained the Address Sanitizer error. That insures the position of the error, and the call stack will be correct.

### VCASan library

The flag -fsanitize=address automatically links a new static library to your .EXE or .DLL. This static library will automatically produce:

- In memory meta-data for directly interfacing with the VS IDE, [while debugging](#Error-types).
- An optional [snap shot file](#Snapshot-files) with the same IDE meta-data.

These library features are detailed further in the section for [vcasan.lib](.\address-sanitizer-vcasan.md) 

## Error types

The following list of runtime errors can be exposed when you run your binaries compiled -fsanitize=address. A drill down of each class of error, provides source code and Visual Stud screen shots.  There are over 30 examples, with screen shots, within the following:

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

## See also

- [Building for the Address Sanitizer with MSVC](.\asan-building.md)

- [Address Sanitizer runtime](.\address-sanitizer-runtime.md)

These structure all  further details into the tools and the run times they target.

