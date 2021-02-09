# Building - Address Sanitizer 

In this section we discuss the binaries used to be
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

Unlike Clang/LLVM this option enables -fsanitize-address-use-after-scope by default and it can not be turned off at the command line or through the [Runtimes](#Address-Sanitizer-Runtimes) `ASAN_OPTIONS` environment variable. The functionality for use-after-return requires code generation under an additional flag and environment variable.

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

[Notes on the linker](https://microsoft.sharepoint.com/teams/DD_VC/_layouts/15/Doc.aspx?sourcedoc={b72456de-7699-4e28-958c-16cc62b8cf45}&action=edit&wd=target%28BE%20Team%2FSecurity%2FCompiler%20Security%20V-Team.one%7Cf620fd11-0e2d-43af-84c6-a52ace6459ad%2FNotes%20about%20vcasan%20and%20%5C%2Finferasanlibs%7C6d1bd27a-f55a-44bc-bf7c-af6404c4c5c1%2F%29)

## Address Sanitizer Runtimes

This implementation of AddressSanitizer makes use of the Clang ASan runtime libraries. The runtime library version packaged with Visual Studio may contain features that are not yet available in the version packaged with Clang.

An overview of the features in this ported version of the Address Sanitizer runtime  runtime is available here: [AddressSanitizer runtime overview](address-sanitizer-runtime.md)

### Static (x86,AMD64)

These would appear on the raw link lines 

### Dynamic (x86,AMD64)

These would appear on the raw link lines

## Visual Studio

### Project System

[Project System](https://docs.microsoft.com/en-us/cpp/build/working-with-project-properties?view=msvc-160)

### CMake

### MSBuild



