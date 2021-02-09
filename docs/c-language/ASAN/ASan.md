---
title: "Address Sanitizer"
description: "Technical descrption of the AddressSanitizer feature for Microsoft Visual C++."
ms.date: 01/05/2021
f1_keywords: ["ASan","sanitizers","AddressSanitizer","memory safety","heap buffer overflow", "stack buffer overflow", "double free", "use after free", "type mismatch"]
helpviewer_keywords: ["ASan","sanitizers","AddressSanitizer","clang_rt.asan","Clang runtime","runtime"]
---

# Address Sanitizer

We describe a new compiler flag -fsanitize=address which may result in exposing hidden [errors](#errors) in your code.

Using this flag can reduce your time spent on:

- Basic correctness
- Cross platform portability
- Security
- Stress testing
- Integrating new source code

Building with -fsanitize=address and using your existing test assets is a highly recommended, step in properly testing your software. With just a [simple recompile](#Command-line), you can expose many difficult to find, errors with **no false positives**. This class of errors is not found with [/RTC](https://docs.microsoft.com/en-us/cpp/build/reference/rtc-run-time-error-checks?view=msvc-160) or [/analyze](https://docs.microsoft.com/en-us/cpp/code-quality/code-analysis-for-c-cpp-overview?view=msvc-160). 

## Developer Message

 The Address Sanitizer is a compiler based technology [introduced by Google](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany). This [compiler](#Compiler) and [runtime](#Address-Sanitizer-Runtimes) technology has become the "defacto" industry standard for finding memory safety issues. We now offer this technology as a fully supported feature in Visual Studio for the Windows platform. If your existing code compiles with our current Windows compiler, then it will compile with the extra flag -fsanitize=address under any level of optimization and all other compatible flags (e.g., /RTC is not compatible, yet).

Microsoft recommends using the Address Sanitizer in these **three standard workflows**:

- **Developer inner loop**
    - Visual Studio - Command line
    - Visual Studio - Project system with integrated IDE error reporting support.

    
- **CI/CD** - continuous integration / continuous development
    - CMake
    - MSBuild

- **Fuzzing** - build with the supported libFuzzer
    - [Azure OneFuzz](https://www.microsoft.com/security/blog/2020/09/15/microsoft-onefuzz-framework-open-source-developer-tool-fix-bugs/)
    - Local Machine

You can customize address sanitizer functionality in the binaries compiled for all these workflows, as covered in this section

- **Customizable** - Coverage
    - Enhance Coverage - Hooking your allocators
    - Remove Coverage  - ASan at function of variable granularity

Extensive documentation already exists for these language and platform dependent implementations of the Address Sanitizer technology.

- [Google](https://clang.llvm.org/docs/AddressSanitizer.html)
- [Apple](https://developer.apple.com/documentation/xcode/diagnosing_memory_thread_and_crash_issues_early)
- [GCC](https://gcc.gnu.org/onlinedocs/gcc/Instrumentation-Options.html)

This article will cover all the information needed to enable your implementation for any of the three workflows listed above. The information will be specific to the Microsoft Windows 10 platform and supplement what's already been produced at Google, Apple and GCC web sites. We start with a simple command line use of the compiler and linker.

> [!NOTE] Current support is limited to x86 and AMD64 on Windows10. **Customer feedback** would help us prioritize shipping these sanitizers in the future: -fsanitize=thread, -fsanitize=leak, -fsanitize=memory, -fsanitize=hwaddress or -fsanitize=undefined.

## Simple command line interface

Adding the flag -fsanitize=address to your command line (with /Zi to emit debug info.) is all you need to compile,link and run instrumented code in an .EXE or DLL.The flag -fsanitize=address is compatible with all existing C or C++ optimization flags (e.g., /Od, /O1, /O2, /O2 /GL and PGO).

                     C:\> cl -fsanitize=address /Zi file.cpp file2.cpp my3dparty.lib /Fe My.exe

## Errors ##

There are three ways your code can generate error reports:

- [Command line](#Command-line)
- [IDE](#IDE)
- [Snapshot files](#Snapshot-file)

These types of reports can be generated for many types of [errors found at runtime](#Error-types). 

### Example

The following source code is **safe by coincidence**. It will **not** fail at runtime. The Windows 10, 16.9 version of the C runtime, will pad the 13 bytes requested to facilitate alignment for subsequent calls to alloca. 

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

### IDE 

By simply recompiling with -fsanitze=address and invoking Visual Studio from the command line, the IDE will automatically map a pop up to the line and column causing the error.

            devenv /debugexe MyApp.exe arg1 arg2 ... argn

Consider the following error found in our cached version of spec2k6\povray where the program allocates 24-bytes but only frees 8-bytes. The details for where the allocation and free took place are in the **output pane** of the Visual Studio screen shot.

![IDE: povray](media\povray.png)

### Snapshot files

There's a powerful feature for workflows that need to retain detailed error information for processing errors off-line. If you **simply** set an environment variable, then your .EXE or .DLL will create a snap shot file. This is just a [dump file](https://docs.microsoft.com/en-us/previous-versions/windows/desktop/proc_snap/export-a-process-snapshot-to-a-file) with meta-data for reporting an ASan error. The snapshot file can be displayed offline, in the Visual Studio IDE and the error will be displayed against the exact source line number.

### VCASan library

The flag -fsanitize=address automatically links a new static library to your .EXE or .DLL. This static library will automatically produce:

 - In memory meta-data for directly interfacing with the IDE while debugging.
 - Snap shot file with meta-data that can be displayed in Visual Studio off line

Consider these features in the section for [vcasan.lib](.\address-sanitizer-vcasan.md) 

## Error types

The following list of runtime errors can be exposed when you run your binaries compiled -fsanitize=address. A drill down of each class of error, provides source code and Visual Stud screen shots.  There are over 30 examples, with screen shots, within the following:

- [stack-use-after-scope](.\stack-use-after-scope.md)
- [stack-buffer-overflow](.\stack-buffer-overflow.md)
- [stack-buffer-underflow](.\stack-buffer-underflow.md)
- [stack-use-after-return](.\stack-use-after-return.md)
- [heap-buffer-overflow](.\heap-buffer-overflow.md) 
- [heap-use-after-free](.\heap-use-after-free.md)
- [double-free](.\double-free.md) 
- [dynamic-stack-buffer-overflow](.\dynamic-stack-buffer-overflow.md)
- [global-overflow](.\global-overflow.md)
- [calloc-overflow](.\calloc-overflow.md)
- [new-delete-type-mismatch](.\new-delete-type-mismatch.md)
- [memcpy-param-overlap](.\memcpy-param-overlap.md)
- [strcat-param-overlap](.\strcat-param-overlap.md)
- [allocation-size-too-big](.\allocation-size-too-big.md)
- [invalid-aligned-alloc-alignment](.\invalid-aligned-alloc-alignment.md)
- [use-after-poison](.\use-after-poison.md)
- [alloc-dealloc-mismatch](.\alloc-dealloc-mismatch.md)


## Address Sanitizer Runtimes

This implementation of AddressSanitizer makes use of the Clang ASan runtime libraries. The runtime library version packaged with Visual Studio may contain features that are not yet available in the version packaged with Clang.

An overview of the features in this ported version of the Address Sanitizer runtime  runtime is available here: [AddressSanitizer runtime overview](address-sanitizer-runtime.md)

### Static (x86,AMD64)

These would appear on the raw link lines 

### Dynamic (x86,AMD64)

These would appear on the raw link lines

### Runtime Flags

Pick only the set we currently support
https://github.com/google/sanitizers/wiki/AddressSanitizerFlags#run-time-flags 

## Compiler 

This section describes the actions and binaries supporting a simple recompile with -fsanitize=address.
 
This covers:
- cl.exe   - the driver as seen with cl -Bv
- c1xx.exe - the C++ front end
- c2.dll   - the optimizing code generator
- link.exe - the linker

### Compiler flags

**-fsanitize=address**

Enable the injection of instrumentation code that inter-ops with the Asan runtime binaries that are automatically linked to the binary you are producing. This is a fast memory safety detector that just requires a recompile. Loads, stores, scopes, alloca, and CRT functions are hooked to detect hidden bugs like out-of-bounds, use-after-free, use-after-scope etc.. See [Error reporting](#error-reporting) for a complete list of errors currently detected at runtime.

Unlike Clang/LLVM this option enables -fsanitize-address-use-after-scope by default and it can not be turned off at the command line or through the [Runtimes](#Address-sanitizer-runtimes) `ASAN_OPTIONS` environment variable. The functionality for use-after-return requires code generation under an additional flag and environment variable.

By default (legacy reasons) the CL driver infers the linker flag [/MT](https://docs.microsoft.com/en-us/cpp/build/reference/md-mt-ld-use-run-time-library?view=msvc-160) and that will link **static versions** of both the Asan and CRT libraries. If you want to link to the **dynamic version** of the CRT then use the following:

        cl -fsanitize=address /Zi /MD file.cpp file2.cpp my3dparty.lib /De My.exe

See the [Linker](#linker) section for details on more complex build scenarios. 
See the [Runtime](#Address-Sanitizer-Runtimes) section for an inventory of the Asan runtime libraries and functionlities.

**-fsanitize-address-use-after-return**

An extra flag to create a dual stack frame in the heap.  The dual stack frame in the heap will linger after the return from the function that created it. If an address of a local, allocated to a slot in the frame in the heap, then the code generation can later determine a stack-use-after-return error.

         cl -fsanitize=address -fsanitize-address-use-after-return /Zi file.cpp file2.cpp my3dparty.lib /De My.exe

This is an experimental, additional flag to change code generation. This code is **much slower** than just using -fsanize=address. Stack frames are allocated in the heap and linger after function return. The runtime will garbage collect these after a certain time. By transferring the address of locals to frames that persist in the heap, we can then detect use of any locals after the function returns.

What does the [compiler](.\asan-compiler.md) emit overview and drill down

### Linker

What does the [linker](.\asan-linker.md) emit and an overview and a drill down

[Notes on linker](https://microsoft.sharepoint.com/teams/DD_VC/_layouts/OneNote.aspx?id=%2Fteams%2FDD_VC%2FShared%20Documents%2FVisual%20C%2B%2B%20Team&wd=target%28BE%20Team%2FSecurity%2FCompiler%20Security%20V-Team.one%7CC2A34F56-6B09-4AB1-869B-DFD77BFD7399%2FNotes%20about%20vcasan%20and%20%5C%2Finferasanlibs%7C6D1BD27A-F55A-44BC-BF7C-AF6404C4C5C1%2F%29)

## Visual Studio

### Project System

### CMake

### MSBuild

## Fuzzing

### Azure

### Local Machine


