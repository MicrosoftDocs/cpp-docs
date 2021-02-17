# Address Sanitizer - Cloud or distributed testing

## Overview - debugging off-line

We've made it possible to store a precisely diagnosed error, reported by the Address Sanitizer runtime, for post-mortem debugging in Visual Studio. You can capture a precisely diagnosed error and view it on another machine. 

**You can view precisely diagnosed Address Sanitizer bugs in the debugger IDE without having to copy huge data-sets, discovering lost data or finding machines that went off line.**

When compiling `cl -fsanitize=address` the compiler driver (cl.exe) will automatically link a new static library with your application: vcasan.lib. This library has the optional functionality to create a new type of crash dump file upon encountering an exception from the Address Sanitizer. This functionality is enabled with an environment variable by simply typing the following on the command line: 

**`set ASAN_SAVE_DUMPS=MyFileName.dmp`**

Your testing automation could do this on remote machines before running your tests against code compiled with -fsanitize=address.

If you would like to see further Cloud based customization please [provide feedback](https://aka.ms/feedback/suggest?space=62) that might help you take advantage of [Azure OneFuzz](https://www.microsoft.com/security/blog/2020/09/15/microsoft-onefuzz-framework-open-source-developer-tool-fix-bugs/).

### Errors - stored to a new dump file

Once you set a file name in the environment variable **ASAN_SAVE_DUMPS** then upon error, your application will produce "MyFileName.dmpx" which is a [dump file](https://docs.microsoft.com/en-us/previous-versions/windows/desktop/proc_snap/export-a-process-snapshot-to-a-file) that can be displayed by using Visual Studio at a later date on another machine.

**The .exe, .pdb and source code used to produce those, must match** for Visual Studio to display the precise Address Sanitizer error within the debugger IDE. As with normal debugging, displaying information, within the context of the original source code, Visual Studio requires [debugging symbols](https://docs.microsoft.com/en-us/windows/win32/dxtecharts/debugging-with-symbols) and [indexing source code](https://docs.microsoft.com/en-us/windows-hardware/drivers/debugger/source-indexing). 

We provide a simple step-by-step example below.

## Example - build, test, and analyze

Assume you have machines A, B and C. You build on machine B, you run on machine C and then you analyze failures on machine A. The errors are reported against source line and column numbers in your source code. The call stack is displayed with a set of symbols produced from that [same source code](#Source-and-symbols).

The following steps take you through a workflow that involves three (3) different machines.

## Command line to build

## Command line copy to a test machine

## Command line to copy results for viewing on another machine

## View the remote error in Visual Studio

![snapshot](.\MEDIA\asan-DMP-file-open.PNG)

## Source and symbols

Source server enables a client to retrieve the **exact version** of the source files that were used to build an application. Because the source code for a module can change between versions and over a course of years, it is important to look at the source code as it existed when the version of the module in question was built.

Source server retrieves the appropriate files from source control. To use source server, the application must have been [source indexed](https://docs.microsoft.com/en-us/windows/win32/debug/source-server-and-source-indexing) 

- See [the steps indexing sources and publishing symbols](https://docs.microsoft.com/en-us/azure/devops/pipelines/tasks/build/index-sources-publish-symbols?view=azure-devops)

 - See [how to specify symbols and source code for the debugger IDE will to open  your crash dump from the Address Sanitizer](https://docs.microsoft.com/en-us/visualstudio/debugger/specify-symbol-dot-pdb-and-source-files-in-the-visual-studio-debugger?view=vs-2019)


## Error reporting to a file - under the covers

When your .EXE encounters a runtime error, the Address Sanitizer runtime throws different exceptions. When run from the command line the Address Sanitizer runtime will with throw an exception and produce textual error information on the console.

When run under the Visual Studio debugger, the new debugger IDE displays that error diagnostic, super imposed on your source code. That's due to new meta-data written to the heap. The exceptions the runtime throw, are implemented with an exception record data structure. That record points to the meta-data in the heap and the new IDE can parse it. That same information can also be preserved in a simple memory dump to a binary file for later ingestion by the new debugger IDE.


