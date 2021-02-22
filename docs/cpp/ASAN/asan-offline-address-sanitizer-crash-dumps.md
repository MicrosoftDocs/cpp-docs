---
title: "Address Sanitizer - Cloud or distributed testing"
description: "Address Sanitizer feature extended for Visual Studio and Azure"
ms.date: 02/05/2021
f1_keywords: ["ASan","sanitizers","commandAddressSanitizer","memory safety","heap buffer overflow", "stack buffer overflow", "double free", "use after free", "type mismatch"]
help viewer_keywords: ["ASan","sanitizers","AddressSanitizer","clang_rt","Clang runtime","runtime"]
---

# Address Sanitizer - Cloud or distributed testing

## Overview - new way to report a bug.

We've made it possible to store a precisely diagnosed, Address Sanitizer error. The errors reported by the Address Sanitizer runtime carry a large amount of context and may take a long time to reproduce once you find the required input data. Capturing the error for immediate post-mortem analysis, in Visual Studio, on another machine, is a critical time saver.

**You can view precisely diagnosed Address Sanitizer bugs in the Visual Studio debugger IDE. You can view these bugs without having to rerun testing, copy huge data-sets, discover lost data, or find machines that went off line.**

When compiling with the compiler flag `-fsanitize=address`, the compiler driver (cl.exe) will automatically link a new static library with your application: vcasan.lib. This library has the optional functionality to create a new type of crash dump file upon encountering an exception from the Address Sanitizer. This functionality is enabled with an environment variable by setting an environment variable on the command line:

**`set ASAN_SAVE_DUMPS=MyFileName.dmp`**
  
File name must have a suffix ".dmp" for Visual Studio naming conventions.

Your local or remote testing automation could execute this step, before running tests using your code compiled with -fsanitize=address.

### Errors - stored to a new dump file

Once you set a file name in the environment variable **ASAN_SAVE_DUMPS** then upon error, your application will produce "MyFileName.dmp", which is a [dump file](https://docs.microsoft.com/en-us/previous-versions/windows/desktop/proc_snap/export-a-process-snapshot-to-a-file) that can be displayed by using Visual Studio at a later date on another machine.

The .exe, .pdb and source code used to produce those binaries, must match for Visual Studio to display the Address Sanitizer error. In order to display the error's information, within the context of the original source code, Visual Studio requires [debugging symbols](https://docs.microsoft.com/en-us/windows/win32/dxtecharts/debugging-with-symbols) and [indexing source code](https://docs.microsoft.com/en-us/windows-hardware/drivers/debugger/source-indexing).

See the [source and symbols](#Source-and-symbols) section below.

## Example - build, test, and analyze

Assume you have machines A, B, and C. You build on machine B, you run on machine C and then you analyze failures on machine A. The errors are reported against source line and column numbers in your source code. The call stack is displayed with a set of symbols in the PDB file produced from that [exact version of source code](#Source-and-symbols).

The following steps are for local or distributed scenarios that lead to creating a .dmp file and viewing that [Address Sanitizer dump file](#View-AddressSanitizer-.dmp-files), off-line.

### Steps - locally produced .dmp

- Build.
- Test the (.exe, .pdb).
- Copy .dmp file to the build directory.
- Open a .dmp file with the paired .pdb, in the same directory.

### Steps - distributed system producing a .dmp

- Build and [post process the PDB](#Source-and-symbols) for [source indexing data blocks](https://docs.microsoft.com/en-us/windows/win32/debug/source-server-and-source-indexing).
- Copy the atomic pair of (.exe, .pdb) to the test machine and run tests.
- Write the atomic pairs of (.pdb, .dmp) to the bug-reporting database.
- Visual Studio opens a .dmp file with the paired .pdb, in the same directory.

Note: The VS2019 machine must have access to GitHub or the internal "\\\Machine\share" where your source "was indexed to".

## View Address Sanitizer .dmp files

Insure the debugger IDE will be able to get to your `.PDB and source.

Open Visual Studio and select **Continue without code**.

Then click **File->Open->File** and make sure the file name suffix is **.dmp**

It really is that straightforward! Consider the red high lights:

![asan-open-crash-dump](.\MEDIA\asan-open-crash-dump.png)

The following screen needs one more step to enable the IDE access to symbols and source.

Inside the red high light, click on the green arrow labeled **Native debug**.

![open snapshot](.\MEDIA\asan-DMP-file-open.PNG)

After clicking **Native Debug**, the debugger IDE will display the dump file with the new Address Sanitizer meta-data.

![symbolized snapshot](.\MEDIA\asan-view-crash-meta-data.PNG)

**NOTE:**

- The Address Sanitizer diagnostic is superimposed on the source used to build the tested EXE.
- The normal command-line output is presented in the Output pane.

## Source and symbols

[Source server](https://docs.microsoft.com/en-us/windows/win32/debug/source-server-and-source-indexing) (see Data Block section) enables a client to retrieve the **exact version** of the source files that were used to build an application. Because the source code for an executable or DLL can change between versions and over a course of years, it is important to look at the source code as it existed when the version of the code was built. That version has the memory safety bug the Address Sanitizer caught.

While debugging an .EXE with the PDB, the debugger can use the embedded source server data block. It retrieves the appropriate files from source control that map to the fully qualified names that are automatically put in the PDB when compiling with /Zi.

To use source server, the application must have been "source indexed".  That common phrase means **using pdbstr.exe to write a srcsrv data block into your PDB**. See the Data Block section in [source indexed](https://docs.microsoft.com/en-us/windows/win32/debug/source-server-and-source-indexing).

- See [the steps indexing sources and publishing symbols](https://docs.microsoft.com/en-us/azure/devops/pipelines/tasks/build/index-sources-publish-symbols?view=azure-devops)

- See [how to specify symbols and source code for the debugger IDE will to open  your crash dump from the Address Sanitizer](https://docs.microsoft.com/en-us/visualstudio/debugger/specify-symbol-dot-pdb-and-source-files-in-the-visual-studio-debugger?view=vs-2019)

For external documentation, see:

- [**Source indexing with Git**](https://gist.github.com/baldurk/c6feb31b0305125c6d1a)

- [A guide to easier debugging](https://www.codeproject.com/articles/115125/source-indexing-and-symbol-servers-a-guide-to-easi)

- [Source Indexing is Underused Awesomeness](https://randomascii.wordpress.com/2011/11/11/source-indexing-is-underused-awesomeness/)

## Error reporting to a file - under the covers

When your .EXE encounters a runtime error, the Address Sanitizer runtime throws different exceptions. When run from the command-line, the Address Sanitizer runtime will throw an exception and produce textual error information on the console.

When run under the Visual Studio debugger, the new debugger IDE displays that error diagnostic, super imposed on your source code. That's due to new meta-data written to the heap. The exceptions the runtime throw, are implemented with an exception record data structure. That record points to the meta-data in the heap and the new IDE can parse it. That same information can also be preserved in a memory dump file for later viewing in the new Visual Studio debugger IDE.

## See Also

[The VCAsan library](/address-sanitizer-vcasan.md)
