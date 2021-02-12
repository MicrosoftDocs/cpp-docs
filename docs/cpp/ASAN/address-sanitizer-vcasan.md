---
title: "AddressSanitizer: vcasan.lib"
description: "Technical description of vcasan.lib."
ms.date: 01/05/2021
f1_keywords: ["ASan","sanitizers","AddressSanitizer", "vcasan"]
helpviewer_keywords: ["ASan","sanitizers","AddressSanitizer","vcasan.lib","vcasan","vcasand.lib","libvcasan.lib","libvcasand.lib"]
---

# Visual Studio ASan extended functionality library (VCASan)

The VCAsan libraries exist to enable extended Visual Studio features when debugging with ASan. The library is linked any time AddressSanitizer is enabled with MSVC. The library allows for Visual Studio to display AddressSanitizer-specific message pop-ups, as well as enabling the executable to generate crash dumps when an ASan report is created.

## VCAsan library inventory

| Runtime Flag | VCAsan Version |
|--------------|----------------|
| MT           | libvcasan.lib  |
| MD           | vcasan.lib     |
| MTd          | libvcasand.lib |
| MDd          | vcasand.lib    |

## VCAsan library features

### Rich ASan error report window in Visual Studio IDE

VCAsan registers a callback within the ASan runtime with the [ASan interface function `__asan_set_error_report_callback`.](https://github.com/llvm/llvm-project/blob/1ba5ea67a30170053964a28f2f47aea4bb7f5ff1/compiler-rt/include/sanitizer/asan_interface.h#L256) If an ASan report is generated, this callback is used to throw an exception that will be caught by Visual Studio. The data in the exception is used to generate the Visual Studio message that is displayed to the user within the IDE.
> [!NOTE]
> Since VCAsan registers this callback function, if user code calls this function a second time it is possible for the user registered callback to overwrite the VCAsan callback registration. This would result in the loss of the ASan error message window in the Visual Studio IDE. Since the registration occurs in a race, it is also possible for the user's call to register the callback to be lost. If you encounter either problem please file a feedback ticket with the [Visual Studio developer community](https://developercommunity.visualstudio.com).

### Save crash dumps after ASan error report

When a VCasan library is linked it is possible for the user to generate a crash dump when an ASan error report is generated. To enable this feature, the user must set an environment variable as follows:

`set ASAN_SAVE_DUMPS="MyFileName.dmpx"`

This will save a snapshot file when an error is caught by the AddressSanitizer. The meta-data that is saved in the dump file is parsed by the new Visual Studio IDE. You can set this variable on a per-test basis and store these binary artifacts and then view these in the IDE with proper source indexing.
