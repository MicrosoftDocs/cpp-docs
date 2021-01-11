---
description: "Learn more about: Support for Using wmain"
title: "Support for Using wmain"
ms.date: "11/04/2016"
f1_keywords: ["wWinMain"]
helpviewer_keywords: ["wide characters [C++], wmain function", "wWinMain function", "wmain function"]
ms.assetid: 41213c41-668c-40a4-8a1e-77d9eded720d
---
# Support for Using wmain

Visual C++ supports defining a **wmain** function and passing wide-character arguments to your Unicode application. You declare formal parameters to **wmain**, using a format similar to `main`. You can then pass wide-character arguments and, optionally, a wide-character environment pointer to the program. The `argv` and `envp` parameters to **wmain** are of type `wchar_t*`. For example:

```cpp
wmain( int argc, wchar_t *argv[ ], wchar_t *envp[ ] )
```

> [!NOTE]
> MFC Unicode applications use `wWinMain` as the entry point. In this case, `CWinApp::m_lpCmdLine` is a Unicode string. Be sure to set `wWinMainCRTStartup` with the [/ENTRY](../build/reference/entry-entry-point-symbol.md) linker option.

If your program uses a **main** function, the multibyte-character environment is created by the run-time library at program startup. A wide-character copy of the environment is created only when needed (for example, by a call to the `_wgetenv` or `_wputenv` functions). On the first call to `_wputenv`, or on the first call to `_wgetenv` if an MBCS environment already exists, a corresponding wide-character string environment is created. The environment is then pointed to by the `_wenviron` global variable, which is a wide-character version of the `_environ` global variable. At this point, two copies of the environment (MBCS and Unicode) exist simultaneously and are maintained by the run-time system throughout the life of the program.

Similarly, if your program uses a **wmain** function, a wide-character environment is created at program startup and is pointed to by the `_wenviron` global variable. An MBCS (ASCII) environment is created on the first call to `_putenv` or `getenv` and is pointed to by the `_environ` global variable.

## See also

[Support for Unicode](../text/support-for-unicode.md)<br/>
[Unicode Programming Summary](../text/unicode-programming-summary.md)<br/>
[WinMain Function](/windows/win32/api/winbase/nf-winbase-winmain)
