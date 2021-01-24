---
description: "Learn more about: UWP Apps, the Windows Runtime, and the C Run-Time"
title: "UWP Apps, the Windows Runtime, and the C Run-Time"
ms.date: "02/02/2019"
ms.assetid: 356d6d8d-76ee-4181-9ad0-6f24b2fede38
---
# UWP Apps, the Windows Runtime, and the C Run-Time

Universal Windows Platform (UWP) apps are programs that run in the Windows Runtime that executes on Windows 8. The Windows Runtime is a trustworthy environment that controls the functions, variables, and resources that are available to a UWP app. However, by design, Windows Runtime restrictions prevent the use of most C Run-Time Library (CRT) features in UWP apps.

The Windows Runtime does not support the following CRT features:

- Most CRT functions that are related to unsupported functionality.

   For example, a UWP app cannot create a process by using the **exec** and **spawn** families of routines.

   When a CRT function is not supported in a UWP app, that fact is noted in its reference article.

- Most multibyte character and string functions.

   However, both Unicode and ANSI text are supported.

- Environment variables.

- The concept of a current working directory.

- UWP apps and DLLs that are statically linked to the CRT and built by using the [/MT](../build/reference/md-mt-ld-use-run-time-library.md) or `/MTd` compiler options.

   That is, an app that uses a multithread, static version of the CRT.

- An app that's built by using the [/MDd](../build/reference/md-mt-ld-use-run-time-library.md) compiler option.

   That is, a debug, multithread, and DLL-specific version of the CRT. Such an app is not supported on the Windows Runtime.

For a complete list of CRT functions that are not available in a UWP app and suggestions for alternative functions, see [CRT functions not supported in Universal Windows Platform apps](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## See also

[Compatibility](../c-runtime-library/compatibility.md)<br/>
[Windows Runtime Unsupported CRT Functions](../c-runtime-library/windows-runtime-unsupported-crt-functions.md)<br/>
[Universal C runtime routines by category](../c-runtime-library/run-time-routines-by-category.md)<br/>
[Create a Universal Windows Platform console app](/windows/uwp/launch-resume/console-uwp)
