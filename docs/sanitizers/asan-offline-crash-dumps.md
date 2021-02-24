---
title: "Address Sanitizer - Cloud or distributed testing"
description: "Address Sanitizer feature extended for Visual Studio and Azure"
ms.date: 02/05/2021
f1_keywords: ["ASan","sanitizers","commandAddressSanitizer","memory safety","heap buffer overflow", "stack buffer overflow", "double free", "use after free", "type mismatch"]
help viewer_keywords: ["ASan","sanitizers","AddressSanitizer","clang_rt","Clang runtime","runtime"]
---

# Address Sanitizer - Cloud or distributed testing

When an Address Sanitizer error is found a crash dump can be created to store all the Address Saniziter-specific context. That crash dump can then be sent to another PC for debugging. This can be a critical time saver when running Address Saniziter in the cloud or in distributed testing: create the dump on failure on that infrastructure and debug it on your developer PC.

The Visual Studio debugger provides precisely diagnosed Address Sanitizer errors, and **you can view these bugs without having to rerun testing, copy huge datasets, discover lost data, or find test machines that went offline: just load up the crash dump.**

Crash dumps are created upon Address Sanitizer failures by setting the following environment variable:

`set ASAN_SAVE_DUMPS=MyFileName.dmp`

> [!NOTE]
> File name must have a suffix ".dmp" for Visual Studio naming conventions.

This [dump file](https://docs.microsoft.com/en-us/previous-versions/windows/desktop/proc_snap/export-a-process-snapshot-to-a-file) can be displayed by using Visual Studio at a later date on another machine.

In order to display the error's information, within the context of the original source code, Visual Studio requires [debugging symbols](https://docs.microsoft.com/en-us/windows/win32/dxtecharts/debugging-with-symbols) and [indexing source code](https://docs.microsoft.com/en-us/windows-hardware/drivers/debugger/source-indexing). For the best debugging experience the .exe, .pdb and source code used to produce those binaries must match. 

See the [source and symbols](#Source-and-symbols) section below.
For implementation details and fine grained control, see the [debugger integration](asan-debugger-integration.md).

## Example - build, test, and analyze

Consider three machines: A, B, and C. Build are done on machine B, tests are run on machine C and then you analyze failures on machine A. The errors are reported against source line and column numbers in your source code. The call stack is displayed with a set of symbols in the PDB file produced from that [exact version of source code](#Source-and-symbols).

The following steps are for local or distributed scenarios that lead to creating a .dmp file and viewing that [Address Sanitizer dump file](#View-AddressSanitizer-.dmp-files), off-line.

### Steps - locally produced .dmp

- Build
- Test the (.exe, .pdb)
- Copy .dmp file to the build directory
- Open a .dmp file with the paired .pdb, in the same directory

### Steps - distributed system producing a .dmp

- Build and [post process the PDB](#Source-and-symbols) for [source indexing data blocks](https://docs.microsoft.com/en-us/windows/win32/debug/source-server-and-source-indexing)
- Copy the atomic pair of (.exe, .pdb) to the test machine and run tests
- Write the atomic pairs of (.pdb, .dmp) to the bug-reporting database
- Visual Studio opens a .dmp file with the paired .pdb, in the same directory

Note: The VS2019 machine must have access to GitHub or the internal "\\\Machine\share" where your source "was indexed to".

## View Address Sanitizer .dmp files

Ensure the debugger IDE will be able to get to your .PDB and source.

Open Visual Studio and select **Continue without code**.

Then click **File** -> **Open** -> **File** and make sure the file name suffix is **.dmp**

![asan-open-crash-dump](./MEDIA/asan-open-crash-dump.PNG)

The following screen needs one more step to enable the IDE access to symbols and source.

Set the symbol paths, and choose **Debug with Native Only**.

![open snapshot](./MEDIA/asan-DMP-file-open.PNG)

The following screenshot shows the final loaded dump file, with sources and Address Sanitizer metadata loaded.

![symbolized snapshot](./MEDIA/asan-view-crash-meta-data.PNG)

## Source and symbols

[Source server](https://docs.microsoft.com/en-us/windows/win32/debug/source-server-and-source-indexing) (see Data Block section) enables a client to retrieve the **exact version** of the source files that were used to build an application. Because the source code for an executable or DLL can change between versions and over a course of years, it is important to look at the source code as it existed when the version of the code was built.

While debugging an .EXE with the PDB, the debugger can use the embedded source server data block. It retrieves the appropriate files from source control that map to the fully qualified names that are automatically put in the PDB when compiling with /Zi.

To use source server, the application must have been "source indexed": **using pdbstr.exe to write a srcsrv data block into your PDB**. See the Data Block section in [source server documentation](https://docs.microsoft.com/en-us/windows/win32/debug/source-server-and-source-indexing).

- See [the steps indexing sources and publishing symbols](https://docs.microsoft.com/en-us/azure/devops/pipelines/tasks/build/index-sources-publish-symbols?view=azure-devops)

- See [how to specify symbols and source code for the debugger IDE will to open  your crash dump from the Address Sanitizer](https://docs.microsoft.com/en-us/visualstudio/debugger/specify-symbol-dot-pdb-and-source-files-in-the-visual-studio-debugger?view=vs-2019)

For external documentation, see:

- [Source indexing with Git](https://gist.github.com/baldurk/c6feb31b0305125c6d1a)

- [A guide to easier debugging](https://www.codeproject.com/articles/115125/source-indexing-and-symbol-servers-a-guide-to-easi)

- [Source Indexing is Underused Awesomeness](https://randomascii.wordpress.com/2011/11/11/source-indexing-is-underused-awesomeness/)

## See also

- [Address Sanitizer Overview](./asan.md)
- [Address Sanitizer Known Issues](./asan-known-issues.md)
- [Address Sanitizer Build and Language Reference](./asan-building.md)
- [Address Sanitizer Runtime Reference](./asan-runtime.md)
- [Address Sanitizer Shadow Bytes](./asan-shadowbytes.md)
- [Address Sanitizer Cloud or Distributed Testing](./asan-offline-crash-dumps.md)
- [Address Sanitizer Debugger Integration](./asan-debugger-integration.md)

> [!NOTE] Send us [feedback](https://aka.ms/feedback/suggest?space=62) on what you would like to see in future releases, and please [report bugs](https://aka.ms/feedback/report?space=62) if you run into issues.