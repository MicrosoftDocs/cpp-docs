# Address Sanitizer - user interface

We describe a new compiler based technology that automatically finds errors in your code.

With just a **simple recompile**, you can expose many difficult to find, errors in your C++ or C source code. There are no false positives. This class of errors is not found with [/RTC](https://docs.microsoft.com/en-us/cpp/build/reference/rtc-run-time-error-checks?view=msvc-160) or [/analyze](https://docs.microsoft.com/en-us/cpp/code-quality/code-analysis-for-c-cpp-overview?view=msvc-160). Building with -fsanitize=address and using your existing test assets is a highly recommended, additional step in **properly testing your software**.

## Introduction - Developer Message

 The Address Sanitizer is a compiler based technology [introduced by Google](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany). This compiler and runtime technology has become the "defacto" industry standard for finding memory safety issues. We now offer this technology as a fully supported feature in Visual Studio. This has shipped to accommodate our customers with a simple re-compile strategy. Testing the binaries you have produced, using this simple re-compile, can dramatically increase correctness, portability and security. If your existing code compiles with our current Windows compiler, then it will compile with the extra flag -fsanitize=address under any level of optimization and all other compatible flags (e.g., /RTC is not compatible, yet).

This technology produces zero false positives.

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

> [!NOTE] Current support is limited to x86 and AMD64 on Windows10. There's also no support for -fsanitize=thread, -fsanitize=leak, -fsanitize=memory, -fsanitize=hwaddress or -fsanitize=undefined. **Customer feedback** would help prioritize shipping these additional sanitizers.

## Command line

Adding the flag -fsanitize=address to your command line (with /Zi to emit debug info.) is all you need to compile,link and run instrumented code in a .EXE.

            C:\> cl -fsanitize=address /Zi file.cpp file2.cpp my3dparty.lib /Fe My.exe

The flag -fsanitize=address is compatible with all existing C or C++ optimization flags (e.g., /Od, /O1, /O2, /O2 /GL and PGO)

**-fsanitize=address**

Enable the injection of instrumentation code that inter-ops with the Asan runtime binaries that are automatically linked to the binary you are producing. This is a fast memory safety detector that just requires a recompile. Loads, stores, scopes, alloca, and CRT functions are hooked to detect hidden bugs like out-of-bounds, use-after-free, use-after-scope etc.. See [Error reporting](#error-reporting) for a complete list of errors currently detected at runtime.

Unlike Clang/LLVM this option enables -fsanitize-address-use-after-scope by default and it can not be turned off at the command line or through the [Runtimes](#runtimes) ASAN_OPTIONS environment variable. The functionality for use-after-return requires code generation under an additional flag and environment variable.

By default (legacy reasons) the CL driver infers the linker flag [/MT](https://docs.microsoft.com/en-us/cpp/build/reference/md-mt-ld-use-run-time-library?view=msvc-160) and that will link **static versions** of both the Asan and CRT libraries. If you want to link to the **dynamic version** of the CRT then use the following:

        cl -fsanitize=address /Zi /MD file.cpp file2.cpp my3dparty.lib /De My.exe

See the [Linker](#linker) section for details on more complex build scenarios. 
See the [Runtime](#runtime) section for an inventory of the Asan runtime libraries and functionlities.

**-fsanitize-address-use-after-return**

An extra flag to create a dual stack frame in the heap.  The dual stack frame in the heap will linger after the return from the function that created it. If an address of a local, allocated to a slot in the frame in the heap, then the code generation can later determine a stack-use-after-return error.

         cl -fsanitize=address -fsanitize-address-use-after-return /Zi file.cpp file2.cpp my3dparty.lib /De My.exe

This is an experimental, additional flag to chang code generation. This code is **much slower** than just using -fsanize=address. Stack frames are allocated in the heap and linger after function return. The runtime will garbage collect these after a certain time. By transferring the address of locals to the heap, we can detect stack-use-after-return.

## Visual Studio

### Project System

These are the settings required to use F5 builds and the IDE for the developer inner loop.  

## Errors ##

There are many types of error

There are three ways your code can produce error reports:

- Command line
- IDE
- Snapshot files

The following C++ source code is **safe by coincidence**. It will **not** fail at runtime. The Windows 10, 16.9 version of the C runtime, will pad the 13 bytes requested, facilitating stack alignment for subsequent stack allocations. The specific _alloca based result below, can be different on Android, Linux or MacOS.

Example: memory safety error:

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

Padding and alignment is platform dependent. It's a function of the CRT used on the Windows operating system and whether the target is x86, or amd64. Padding and alignment will also be different on Linux and Mac OS.

## Error Reporting

Executables produced with -fsanitize=address can produce three (3) different types of error reports:

- Command line
- IDE
- Snapshot file

For all the different types of errors, jump to the [catalogue](#Error-types) of error types below.

### Command line - error reporting ###

If you run from the command line then your binary will emit formatted text reports to the screen. Consider the over layed, red boxes which high light four (4) key pieces of information from the error in the _alloca example.

![Command line: alloca](media\CommandLine-alloca.png)

From top to bottom

1.) A store of 4 bytes (32-bits) went beyond the stack allocation the program explicitly requested.

2.) The store was produced from line 47 in the function "main"

3.) The type of error was a dynamic stack buffer overflow. There was a stack overflow for the space dynamically allocated.

4.) The [**shadow bytes**](.\asan-shadowbytes.md) that correspond to the address used in the overflowing store indicate 13 bytes were allocated for the alloca.

### IDE - Error reporting

By simply recompiling with -fsanitze=address and invoking Visual Studio from the command line, the IDE will automatically map a pop up to the line and column where the error was caught.

                devenv /debugexe MyApp.exe arg1 arg2 ... argn

Consider the following error found in spec2k6\povray where the program allocates 24-bytes but only frees 8-bytes. The details for where the allocation and free took place are in the **output pane** of the Visual Studio screen shot

![IDE: povray](media\povray.png)

### Snapshot files - Error reporting

There's a powerful feature for workflows that need to retain detailed error information for processing errors off-line. If you **simply** set an environment variable, then your .EXE or .DLL will create a [snapshot file](https://docs.microsoft.com/en-us/previous-versions/windows/desktop/proc_snap/export-a-process-snapshot-to-a-file)  rather than print any error.  The snapshot file can be read into the Visual Studio IDE and the error will be displayed against the exact source line number.

This section provides details

## Error types

Here's a summary of the runtime errors that are captured when you run your binaries that have been compiled and linked with -fsanitize=address. Each link provides source code and the resulting errors for that specific class of error.  There may be several examples for each of the following categories:

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

## Compiler tool set

This section describes the actions and binaries supporting a simple recompile with -fsanitize=address. 
This covers:
- cl.exe   - the driver as seen with cl -Bv
- c2.dll   - the optimizing code generator
- link.exe - the linker

### Compiler

What does the [compiler](.\asan-compiler.md) emit overview and drill down

### Linker

What does the [linker](.\asan-linker.md) emit and an overview and a drill down

[Notes on linker](https://microsoft.sharepoint.com/teams/DD_VC/_layouts/OneNote.aspx?id=%2Fteams%2FDD_VC%2FShared%20Documents%2FVisual%20C%2B%2B%20Team&wd=target%28BE%20Team%2FSecurity%2FCompiler%20Security%20V-Team.one%7CC2A34F56-6B09-4AB1-869B-DFD77BFD7399%2FNotes%20about%20vcasan%20and%20%5C%2Finferasanlibs%7C6D1BD27A-F55A-44BC-BF7C-AF6404C4C5C1%2F%29)
## Address Sanitizer Runtimes

This section could be terse and point to a "runtime overview" article 
Here we list the binaries, supported flags and hooking allocators.

### Static (x86,AMD64)

We list the set of binaries used for statically or dynamically linking to the CRT.  

List of binaries

### Dynamic (x86,AMD64)

List of binaries

### Runtime Flags

Pick only the set we currently support
https://github.com/google/sanitizers/wiki/AddressSanitizerFlags#run-time-flags 

### Allocators

## Build tools

### CMake

### MSBuild

## Fuzzing

### Azure

### Local Machine

## See Also - technical overview

This will cover a deep dive into the implementation and the runtime as a marketing tool to generate interest for the MSDN web page.
