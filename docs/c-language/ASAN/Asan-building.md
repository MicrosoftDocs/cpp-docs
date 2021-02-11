# Building - for the Address Sanitizer 

This section describes the flags, environment variables, and binaries supporting a simple recompile with -fsanitize=address.This covers functionalities in the tool chain and the run times that tool set can target.

- cl.exe         - the driver 
- c1xx.exe       - the C++ front end
- c2.dll         - the optimizing code generator
- link.exe       - the linker
- vcasan.lib     - MSVC customization upon error
- runtimes       - Address Sanitizer binaries

## Compiler flags

### **-fsanitize=address**

Enable the injection of instrumentation code that inter-ops with the Asan runtime binaries that are automatically linked to the binary you are producing. This is a fast memory safety detector that just requires a recompile. Loads, stores, scopes, alloca, and CRT functions are hooked to detect hidden bugs like out-of-bounds, use-after-free, use-after-scope etc.. See [Error reporting](#error-reporting) for a complete list of errors currently detected at runtime.

By default (Windows legacy) the CL driver infers the linker flag [/MT](https://docs.microsoft.com/en-us/cpp/build/reference/md-mt-ld-use-run-time-library?view=msvc-160) and that will link **static versions** of both the Address Sanitizer and CRT libraries. If you want to link to the **dynamic version** of the CRT then use the following command line with the additional /MD flag:

            cl -fsanitize=address /Zi /MD   main.cpp file2.cpp my3dparty.lib   

NOTE: Unlike Clang, the MSVC compiler will not default to generating code to allocating frames in the heap to catch use-after-return-errors.  This requires opt'ing into the use of a second flag explained below.
  
See the [Linker](#linker) section for details on more complex build scenarios. See the [Runtime](#Address-Sanitizer-Runtimes) section for an inventory of the Address Sanitizer runtime binaries  and functionalities.

### **-fsanitize-address-use-after-return**

This flag will cause the compiler to generate code to use a dual stack frame in the heap when locals are considered "address taken".  The dual stack frame in the heap will linger after the return from the function that created it. If an address of a local, allocated to a slot in the frame in the heap, then the code generation can later determine a stack-use-after-return error.

             cl -fsanitize=address -fsanitize-address-use-after-return /Zi   main.cpp file2.cpp my3dparty.lib 

This is an additional, experimental flag to change code generation. This code is **much slower** than just using -fsanize=address. The code generated will have two paths of execution like Clang and the user must take one extra step to enable the path using the heap for the stack, as follows:

            set ASAN_OPTIONS=detect_stack_use_after_return=1

Stack frames are allocated in the heap and linger after function return. The runtime will garbage collect these frame objects after a certain time interval. By transferring the address of locals to frames that persist in the heap, we can then detect use of any locals after the function returns.

See the [algorithm for stack use after return](https://github.com/google/sanitizers/wiki/AddressSanitizerUseAfterReturn) as documented by Goolge.

## Linker

What does the [linker](.\asan-linker.md) emit and an overview and a drill down

[Notes on linker](https://microsoft.sharepoint.com/teams/DD_VC/_layouts/OneNote.aspx?id=%2Fteams%2FDD_VC%2FShared%20Documents%2FVisual%20C%2B%2B%20Team&wd=target%28BE%20Team%2FSecurity%2FCompiler%20Security%20V-Team.one%7CC2A34F56-6B09-4AB1-869B-DFD77BFD7399%2FNotes%20about%20vcasan%20and%20%5C%2Finferasanlibs%7C6D1BD27A-F55A-44BC-BF7C-AF6404C4C5C1%2F%29)

## Customizing functionality 

You can customize address sanitizer functionality compiled into the binaries used for any workflow. The major changes are:

- Enhancing Coverage - [Hooking your allocators](Address-sanitizer-runtimes.md)
- Removing Coverage  - ASan at function of variable granularity

There are smaller tweaks that can be made by setting the environment variable `ASAN_OPTIONS`

## Address Sanitizer Runtimes

This implementation of AddressSanitizer makes use of the Clang ASan runtime libraries. The runtime library version packaged with Visual Studio may contain features that are not yet available in the version packaged with Clang.

An overview of the features in this ported version of the Address Sanitizer runtime  runtime is available here: [AddressSanitizer runtime overview](address-sanitizer-runtime.md)

### Static (x86,AMD64)

These would appear on the raw link lines 

### Dynamic (x86,AMD64)

These would appear on the raw link lines

## Visual Studio

The Visual Studio project and build systems have been enhanced to accomodate building your applications to target the Address Sanitizer runtimes.

### Project System

[Project System](https://docs.microsoft.com/en-us/cpp/build/working-with-project-properties?view=msvc-160)

### CMake

### MSBuild



