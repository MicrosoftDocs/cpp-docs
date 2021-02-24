---
title: "Visual Studio Address Sanitizer extended functionality library (VCASan)"
description: "Technical description of vcasan.lib."
ms.date: 02/15/2021
f1_keywords: ["ASan","sanitizers","AddressSanitizer", "Address-Sanitizer", "vcasan", "Asan-integration"]
helpviewer_keywords: ["ASan","sanitizers","AddressSanitizer","Address-Sanitizer","vcasan.lib","vcasan","vcasand.lib","libvcasan.lib","libvcasand.lib"]
---

# Visual Studio Address Sanitizer extended functionality library (VCASan)

The **VCAsan\*.lib** libraries implement extended debugger IDE features in Visual Studio. These features allow the IDE to light up Address Sanitizer errors in live debug sessions, or offline by saving a crash dump file with metadata. The library is linked any time AddressSanitizer is enabled with the Visual C++ compiler.

## VCAsan library inventory

| Runtime Flag  | VCAsan link library  |
|---------------|----------------------|
| /MT           | libvcasan.lib        |
| /MD           | vcasan.lib           |
| /MTd          | libvcasand.lib       |
| /MDd          | vcasand.lib          |

## VCAsan library features

### Rich Address Sanitizer error report window in Visual Studio IDE

The VCAsan library will register a callback within the Address runtime with the [ASan interface function `__asan_set_error_report_callback`.](https://github.com/llvm/llvm-project/blob/1ba5ea67a30170053964a28f2f47aea4bb7f5ff1/compiler-rt/include/sanitizer/asan_interface.h#L256) If an Address Sanitizer report is generated, this callback is used to throw an exception that will be caught by Visual Studio. The data in the exception is used to generate the Visual Studio message that is displayed to the user within the IDE.
> [!NOTE]
> The VCASan library registers a callback function in the Address Sanitizer runtime. If your code calls this registration function a second time, it will overwrite the VCAsan library callback registration. This would result in the loss of all Visual Studio IDE integration. You would revert back to the default IDE user experience. It's also possible for a user's call to register their callback, to be lost. If you encounter either problem, please file a feedback ticket with the [Visual Studio developer community](https://developercommunity.visualstudio.com) we need to see these scenarios "in the wid".

### Save Address Sanitizer errors in a new type of crash dump file

When the VCasan library is linked, it is possible for the user to generate a crash dump when the Address Sanitizer runtime produces a (specifically diagnosed) error. To enable this feature, the user must set an environment variable as follows:

`set ASAN_SAVE_DUMPS=MyFileName.dmp`

Note: It must use a .dmp suffix for Visual Studio IDE conventions.

This will save a crash dump file with new meta-data associated with an error caught by the Address Sanitizer runtime. The meta-data that is saved in the dump file is parsed by the new Visual Studio debugger IDE. You can set `ASAN_SAVE_DUMPS` on a per-test basis and store these binary artifacts and then view these in the IDE with proper source indexing.

## See also

- [Address Sanitizer Overview](./asan.md)
- [Address Sanitizer Known Issues](./asan-known-issues.md)
- [Address Sanitizer Build and Language Reference](./asan-building.md)
- [Address Sanitizer Runtime Reference](./asan-runtime.md)
- [Address Sanitizer Shadow Bytes](./asan-shadowbytes.md)
- [Address Sanitizer Cloud or Distributed Testing](./asan-offline-crash-dumps.md)
- [Address Sanitizer Debugger Integration](./asan-debugger-integration.md)