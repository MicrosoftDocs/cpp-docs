---
title: "Visual Studio AddressSanitizer extended functionality library (VCASan)"
description: "Technical description of vcasan.lib."
ms.date: 03/02/2021
f1_keywords: ["vcasan"]
helpviewer_keywords: ["vcasan.lib", "vcasan", "vcasand.lib", "libvcasan.lib", "libvcasand.lib"]
---

# Visual Studio AddressSanitizer extended functionality library (VCAsan)

The *`VCAsan*.lib`* libraries implement extended debugger IDE features in Visual Studio. These features allow the IDE to show AddressSanitizer errors in live debug sessions, or offline by saving a crash dump file with metadata. The library is linked any time AddressSanitizer is enabled by the MSVC compiler.

## VCAsan library inventory

| Runtime option | VCAsan link library  |
|---------------|----------------------|
| **`/MT`**           | *`libvcasan.lib`*        |
| **`/MD`**           | *`vcasan.lib`*           |
| **`/MTd`**          | *`libvcasand.lib`*       |
| **`/MDd`**          | *`vcasand.lib`*          |

## VCAsan library features

### Rich AddressSanitizer error report window in Visual Studio IDE

The VCAsan library registers a callback within the AddressSanitizer runtime by using the interface function [`__asan_set_error_report_callback`](https://github.com/llvm/llvm-project/blob/1ba5ea67a30170053964a28f2f47aea4bb7f5ff1/compiler-rt/include/sanitizer/asan_interface.h#L256). If an AddressSanitizer report is generated, this callback gets used to throw an exception that's caught by Visual Studio. Visual Studio uses the exception data to generate the message that's displayed to the user in the IDE.

> [!NOTE]
> The VCAsan library registers a callback function in the AddressSanitizer runtime. If your code calls this registration function a second time, it overwrites the VCAsan library callback registration. This results in the loss of all Visual Studio IDE integration. You'll revert back to the default IDE user experience. It's also possible for a user's call that registers their callback to be lost. If you encounter either problem, file a [bug](https://aka.ms/feedback/report?space=62).

### Save AddressSanitizer errors in a new type of crash dump file

When you link the VCAsan library to your executable, users can enable it to generate a crash dump at runtime. Then the AddressSanitizer runtime produces a dump file when a diagnosed error occurs. To enable this feature, the user sets the `ASAN_SAVE_DUMPS` environment variable by using a command such as this one:

`set ASAN_SAVE_DUMPS=MyFileName.dmp`

The file must have a `.dmp` extension to follow the Visual Studio IDE conventions. (Prior to 17.7)

Here's what happens when a dump file is specified for `ASAN_SAVE_DUMPS`: If an error gets caught by the AddressSanitizer runtime, it saves a crash dump file that has the metadata associated with the error. The debugger in Visual Studio version 16.9 and later can parse the metadata that's saved in the dump file. You can set `ASAN_SAVE_DUMPS` on a per-test basis, store these binary artifacts, and then view them in the IDE with proper source indexing.

Visual Studio version 17.7 and later supports the following:

* Quoted strings are now handled correctly. In previous versions, for environments inside of Visual Studio or when using PowerShell, setting the environment variable to contain quotes or spaces would fail to create the expected dump file.

* When the `.dmp` extension is explicitly specified (for example, `set ASAN_SAVE_DUMPS=MyDmp.dmp`), VCAsan uses it explicitly, and will not add an associated process ID to the dump file name. 

* If a `.dmp` file already exists with the same name specified from the environment variable, VCAsan modifies the file name as follows:
  * Appends a number to the filename in parentheses. For example, `Myfile (1).dmp`.
  * If after several attempts appending a number in parentheses fails to generate a unique name, the file is saved to an `%APPLOCAL%` temporary path that VCAsan will print. For example, `C:\Users\~\AppData\Local\Temp\Dump.dmp`.
  * If saving to a temporary path fails, a diagnostic error is displayed.

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer error examples](./asan-error-examples.md)

