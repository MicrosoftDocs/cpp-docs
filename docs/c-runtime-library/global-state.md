---
title: "Global state in the CRT"
description: "Describes how shared global state is handled in the Microsoft Universal C Runtime." 
ms.topic: "conceptual"
ms.date: "10/02/2020"
helpviewer_keywords: ["CRT global state"]
---

# Global state in the CRT

Some functions in the Universal C Runtime (UCRT) use global state. For example, `setlocale()` sets the locale for the entire program, which affects the digit separators, text code page, and so on.

The UCRT's global state isn't shared between applications and the OS. For example, if your application calls `setlocale()`, it won't affect the locale for any OS components that uses the C run-time, or the other way around.

## OS-specific versions of CRT functions

In the UCRT, functions that interact with global state have a "twin" function, prefixed with `_o_`. For example:

- `setlocale()` affects global state specific to the app.
- `_o_setlocale()` affects global state shared by all OS components, but not apps.

The only difference between these "twin" functions is that when they read/write the global CRT state, the OS-specific versions (that is, the versions that start with `_o_`) use the OS copy of global state instead of the app's copy of global state.

The OS-specific versions of these functions are in `ucrt.osmode.lib`. For example, the OS-specific version of `setlocale()` is `_o_setlocale()`

There are two ways to isolate your component's CRT state from an app's CRT state:

- Statically link your component by using compiler options `/MT` (release) or `/MTd` (debug). For details, see [/MD, /MT, /LD](../build/reference/md-mt-ld-use-run-time-library.md). Static linking can greatly increase binary size.
- Starting in Windows versions beginning with Windows 10 version 2004, dynamically link to the CRT but call the OS-mode exports (the functions that begin with _o_). To call the OS-mode exports, statically link as before, but ignore the static UCRT by using linker option `/NODEFAULTLIB:libucrt.lib` (release) or `/NODEFAULTLIB:libucrtd.lib` (debug). And add `ucrt.osmode.lib` to the linker input. See [`/NODEFAULTLIB` (Ignore Libraries)](../build/reference/nodefaultlib-ignore-libraries.md) for details.

> [!NOTE]
> In source code,  write `setlocale()`, not `_o_setlocale()`. When you link against `ucrt.osmode.lib`, the linker will automatically substitute the OS-specific version of the function. That is, `setlocale()` will be substituted with `_o_setlocale()`.

Linking against `ucrt.osmode.lib` disables some UCRT calls that are only available in app mode. Attempting to call these functions will result in a link error.

## Global state affected by app/OS separation

Global state affected by the separation of app and OS state includes:

- [Locale data](locale.md)
- Signal handlers set by [`signal`](reference/signal.md)
- Termination routines set by [`terminate`](reference/set-terminate-crt.md)
- [`errno` and `_doserrno`](errno-doserrno-sys-errlist-and-sys-nerr.md)
- Random number generation state used by [`rand`](reference/rand.md) and [`srand`](reference/srand.md)
- Functions that return a buffer that the user doesn't need to release:
    [`strtok`, `wcstok`, `_mbstok`](reference/strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md)\
    [`Tmpnam`, `_wtmpnam`](reference/tempnam-wtempnam-tmpnam-wtmpnam.md)\
    [`asctime`, `_wasctime`](reference/asctime-wasctime.md)\
    [`gmtime`, `_gmtime32`, `_gmtime64`](reference/gmtime-gmtime32-gmtime64.md)\
    [`_fcvt`](reference/fcvt.md)\
    [`_ecvt`](reference/ecvt.md)\
    [`strerror`, `_strerror`, `_wcserror`, `__wcserror`](reference/strerror-strerror-wcserror-wcserror.md)
- The buffer used by [`_putch`, `_putwch`](reference/putch-putwch.md)
- [`_set_invalid_parameter_handler`, `_set_thread_local_invalid_parameter_handler`](reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md)
- [`_set_new_handler`](reference/set-new-handler.md) and [`_set_new_mode`](reference/set-new-mode.md)
- [`fmode`](text-and-binary-mode-file-i-o.md)
- [Time zone information](time-management.md)

## See also

[C Run-Time library reference](c-run-time-library-reference.md)
