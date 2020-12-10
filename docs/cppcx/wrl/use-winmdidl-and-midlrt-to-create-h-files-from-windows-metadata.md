---
description: "Learn more about: How to: Use winmdidl.exe and midlrt.exe to create .h files from windows metadata"
title: "How to: Use winmdidl.exe and midlrt.exe to create .h files from windows metadata"
ms.date: "11/04/2016"
ms.topic: "reference"
ms.assetid: 4be8ba11-c223-44ad-9256-7e1edae9a7bc
---
# How to: Use winmdidl.exe and midlrt.exe to create .h files from windows metadata

Winmdidl.exe and midlrt.exe enable COM-level interaction between native C++ code and Windows Runtime components. Winmdidl.exe takes as input a .winmd file that contains metadata for a Windows Runtime component and outputs an IDL file. Midlrt.exe converts that IDL file into header files that the C++ code can consume. Both tools run on the command line.

You use these tools in two main scenarios:

- Creating custom IDL and header files so that a  C++ app written by using the Windows Runtime Template Library (WRL) can consume a custom Windows Runtime component.

- Generating proxy and stub files for user-defined event types in a Windows Runtime Component. For more information, see [Custom events and event accessors in Windows Runtime Components](/windows/uwp/winrt-components/custom-events-and-event-accessors-in-windows-runtime-components).

These tools are required only for parsing custom .winmd files. The .idl and .h files for Windows operating system components are already generated for you. By default in Windows 8.1, they are located in \Program Files (x86)\Windows Kits\8.1\Include\winrt\\.

## Location of the tools

By default in [Windows 8.1, winmdidl.exe and midlrt.exe are located in  C:\Program Files (x86)\Windows Kits\8.1\\. Versions of the tools are also available in the \bin\x86\ and \bin\x64\ folders.

## Winmdidl command-line arguments

```
Winmdidl.exe [/nologo] [/suppressversioncheck] [/time] [/outdir:dir] [/banner:file] [/utf8] Winmdfile
```

**/nologo**<br/>
Prevents console display of the winmdidl copyright message and version number.

**/suppressversioncheck**<br/>
Not used.

**/time**<br/>
Displays the total execution time in the console output.

**/outdir:**<em>dir</em><br/>
Specifies an output directory. If the path contains spaces, use quotation marks. The default output directory is *\<drive>*:\Users\\*\<username>*\AppData\Local\VirtualStore\Program Files (x86)\Microsoft Visual Studio 12.0\\.

**/banner:**<em>file</em><br/>
Specifies a file that contains custom text to prepend to the default copyright message and winmdidl version number at the top of the generated .idl file. If the path contains spaces, use quotation marks.

**/utf8**<br/>
Causes the file to be formatted as UTF-8.

*Winmdfile*<br/>
The name of the .winmd file to parse. If the path contains spaces, use quotation marks.

## Midlrt command-line arguments

See [MIDLRT and Windows Runtime components](/windows/win32/Midl/midlrt-and-windows-runtime-components).

## Examples

The following example shows a winmdidl command at a Visual Studio x86 command prompt. It specifies an output directory, and a file that contains special banner text to add to the generated .idl file.

`C:\Program Files (x86)\Microsoft Visual Studio 12.0>winmdidl /nologo /outdir:c:\users\giraffe\documents\ /banner:c:\users\giraffe\documents\banner.txt "C:\Users\giraffe\Documents\Visual Studio 2013\Projects\Test_for_winmdidl\Debug\Test_for_winmdidl\test_for_winmdidl.winmd"`

The next example shows the console display from winmdidl that indicates that the operation succeeded.

**Generating c:\users\giraffe\documents\\\Test_for_winmdidl.idl**

Next, midlrt is run on the generated IDL file. Notice that the **metadata_dir** argument is specified after the name of the .idl file. The path of \WinMetadata\ is required—it's the location for windows.winmd.

`C:\Program Files (x86)\Microsoft Visual Studio 12.0> midlrt "c:\users\username\documents\test_for_winmdidl.idl" /metadata_dir "C:\Windows\System32\WinMetadata"`

## Remarks

The output file from a winmdidl operation has the same name as the input file but has the .idl file name extension.

If you are developing a Windows Runtime component that will be accessed from the WRL, you can specify winmdidl.exe and midlrt.exe to run as post-build steps so that the .idl and .h files are generated on each build. For an example, see [Raising Events in Windows Runtime Components](/windows/uwp/winrt-components/raising-events-in-windows-runtime-components).
