---
description: "Learn more about: Linker support for delay-loaded DLLs"
title: "Linker support for delay-loaded DLLs"
ms.date: "01/19/2021"
helpviewer_keywords: ["delayed loading of DLLs, linker support"]
---
# Linker support for delay-loaded DLLs

The MSVC linker supports the delayed loading of DLLs. This feature relieves you of the need to use the Windows SDK functions [`LoadLibrary`](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryw) and [`GetProcAddress`](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress) to implement DLL delayed loading.

Without delayed load, the only way to load a DLL at run time is by using `LoadLibrary` and `GetProcAddress`; the operating system loads the DLL when the executable or DLL using it gets loaded.

With delayed load, when you implicitly link a DLL, the linker provides options to delay the DLL load until the program calls a function in that DLL.

An application can delay load a DLL using the [`/DELAYLOAD` (Delay load import)](delayload-delay-load-import.md) linker option with a helper function. (A default helper function implementation is provided by Microsoft.) The helper function loads the DLL on demand at runtime by calling `LoadLibrary` and `GetProcAddress` for you.

Consider delay loading a DLL if:

- Your program might not call a function in the DLL.

- A function in the DLL might not get called until late in your program's execution.

The delayed loading of a DLL can be specified during the build of either an EXE or DLL project. A DLL project that delays the loading of one or more DLLs itself shouldn't call a delay-loaded entry point in `DllMain`.

## <a name="specify-dlls-to-delay-load"></a> Specify DLLs to delay load

You can specify which DLLs to delay load by using the [`/delayload:`*`dllname`*](delayload-delay-load-import.md) linker option. If you don't plan to use your own version of a helper function, you must also link your program with *`delayimp.lib`* (for desktop applications) or *`dloadhelper.lib`* (for UWP apps).

Here's a simple example of delay loading a DLL:

```cpp
// cl t.cpp user32.lib delayimp.lib  /link /DELAYLOAD:user32.dll
#include <windows.h>
// uncomment these lines to remove .libs from command line
// #pragma comment(lib, "delayimp")
// #pragma comment(lib, "user32")

int main() {
   // user32.dll will load at this point
   MessageBox(NULL, "Hello", "Hello", MB_OK);
}
```

Build the DEBUG version of the project. Step through the code using the debugger and you'll notice that *`user32.dll`* is loaded only when you make the call to `MessageBox`.

## <a name="explicitly-unload-a-delay-loaded-dll"></a> Explicitly unload a delay-loaded DLL

The [`/delay:unload`](delay-delay-load-import-settings.md) linker option allows your code to explicitly unload a DLL that was delay loaded. By default, the delay-loaded imports remain in the import address table (IAT). However, if you use **`/delay:unload`** on the linker command line, the helper function supports the explicit unloading of the DLL by a `__FUnloadDelayLoadedDLL2` call, and resets the IAT to its original form. The now-invalid pointers get overwritten. The IAT is a field in the [`ImgDelayDescr`](understanding-the-helper-function.md#calling-conventions-parameters-and-return-type) structure that contains the address of a copy of the original IAT, if one exists.

### Example of unloading a delay-loaded DLL

This example shows how to explicitly unload a DLL, *`MyDll.dll`*, which contains a function `fnMyDll`:

```C
// link with /link /DELAYLOAD:MyDLL.dll /DELAY:UNLOAD
#include <windows.h>
#include <delayimp.h>
#include "MyDll.h"
#include <stdio.h>

#pragma comment(lib, "delayimp")
#pragma comment(lib, "MyDll")
int main()
{
    BOOL TestReturn;
    // MyDLL.DLL will load at this point
    fnMyDll();

    //MyDLL.dll will unload at this point
    TestReturn = __FUnloadDelayLoadedDLL2("MyDll.dll");

    if (TestReturn)
        printf_s("\nDLL was unloaded");
    else
        printf_s("\nDLL was not unloaded");
}
```

Important notes on unloading a delay-loaded DLL:

- You can find the implementation of the `__FUnloadDelayLoadedDLL2` function in the file *`delayhlp.cpp`*, in the MSVC *`include`* directory. For more information, see [Understand the delay load helper function](understanding-the-helper-function.md).

- The *`name`* parameter of the `__FUnloadDelayLoadedDLL2` function must exactly match (including case) what the import library contains. (That string is also in the import table in the image.) You can view the contents of the import library by using [`DUMPBIN /DEPENDENTS`](dependents.md). If you prefer a case-insensitive string match, you can update `__FUnloadDelayLoadedDLL2` to use one of the case-insensitive CRT string functions, or a Windows API call.

## <a name="bind-delay-loaded-imports"></a> Bind delay-loaded imports

The default linker behavior is to create a bindable import address table (IAT) for the delay-loaded DLL. If the DLL is bound, the helper function attempts to use the bound information instead of calling `GetProcAddress` on each of the referenced imports. If either the timestamp or the preferred address doesn't match the one in the loaded DLL, the helper function assumes the bound import address table is out of date. It proceeds as if the IAT doesn't exist.

If you never intend to bind the delay-loaded imports of a DLL, specify [`/delay:nobind`](delay-delay-load-import-settings.md) on the linker command line. The linker won't generate the bound import address table, which saves space in the image file.

## <a name="load-all-imports-for-a-delay-loaded-dll"></a> Load all imports for a delay-loaded DLL

The `__HrLoadAllImportsForDll` function, which is defined in *`delayhlp.cpp`*, tells the linker to load all imports from a DLL that was specified with the [`/delayload`](delayload-delay-load-import.md) linker option.

When you load all imports at once, you can centralize error handling in one place. You can avoid structured exception handling around all the actual calls to the imports. It also avoids a situation where your application fails part way through a process: For example, if the helper code fails to load an import, after successfully loading others.

Calling `__HrLoadAllImportsForDll` doesn't change the behavior of hooks and error handling. For more information, see [Error handling and notification](error-handling-and-notification.md).

`__HrLoadAllImportsForDll` makes a case-sensitive comparison to the name stored inside the DLL itself.

Here's an example that uses `__HrLoadAllImportsForDll` in a function called `TryDelayLoadAllImports` to attempt to load a named DLL. It uses a function, `CheckDelayException`, to determine exception behavior.

```C
int CheckDelayException(int exception_value)
{
    if (exception_value == VcppException(ERROR_SEVERITY_ERROR, ERROR_MOD_NOT_FOUND) ||
        exception_value == VcppException(ERROR_SEVERITY_ERROR, ERROR_PROC_NOT_FOUND))
    {
        // This example just executes the handler.
        return EXCEPTION_EXECUTE_HANDLER;
    }
    // Don't attempt to handle other errors
    return EXCEPTION_CONTINUE_SEARCH;
}

bool TryDelayLoadAllImports(LPCSTR szDll)
{
    __try
    {
        HRESULT hr = __HrLoadAllImportsForDll(szDll);
        if (FAILED(hr))
        {
            // printf_s("Failed to delay load functions from %s\n", szDll);
            return false;
        }
    }
    __except (CheckDelayException(GetExceptionCode()))
    {
        // printf_s("Delay load exception for %s\n", szDll);
        return false;
    }
    // printf_s("Delay load completed for %s\n", szDll);
    return true;
}
```

You can use the result of `TryDelayLoadAllImports` to control whether you call the import functions or not.

## Error handling and notification

If your program uses delay-loaded DLLs, it must handle errors robustly. Failures that occur while the program is running will result in unhandled exceptions. For more information on DLL delay load error handling and notification, see [Error handling and notification](error-handling-and-notification.md).

## <a name="dump-delay-loaded-imports"></a> Dump delay-loaded imports

Delay-loaded imports can be dumped by using [`DUMPBIN /IMPORTS`](imports-dumpbin.md). These imports show up with slightly different information than standard imports. They're segregated into their own section of the `/imports` list, and are explicitly labeled as delay-loaded imports. If there's unload information present in the image, that is noted. If there's bind information present, the time and date stamp of the target DLL is noted along with the bound addresses of the imports.

## <a name="constraints-on-delay-load-dlls"></a> Constraints on delay-load DLLs

There are several constraints on the delay loading of DLL imports.

- Imports of data can't be supported. A workaround is to explicitly handle the data import yourself by using `LoadLibrary` (or by using [`GetModuleHandle`](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulehandlew) after you know the delay-load helper has loaded the DLL) and `GetProcAddress`.

- Delay loading *`Kernel32.dll`* isn't supported. This DLL must be loaded for the delay-load helper routines to work.

- [Binding](#bind-delay-loaded-imports) of forwarded entry points isn't supported.

- A process may have different behavior if a DLL is delay-loaded, instead of loaded on start-up. It can be seen if there are per-process initializations that occur in the entry point of the delay-loaded DLL. Other cases include static TLS (thread local storage), declared using [`__declspec(thread)`](../../cpp/thread.md), which isn't handled when the DLL is loaded via `LoadLibrary`. Dynamic TLS, using [`TlsAlloc`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsalloc), [`TlsFree`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsfree), [`TlsGetValue`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsgetvalue), and [`TlsSetValue`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlssetvalue), is still available for use in either static or delay-loaded DLLs.

- Reinitialize static global function pointers to imported functions after the first call of each function. That's required because the first use of a function pointer points to the thunk, not the loaded function.

- There's currently no way to delay the loading of only specific procedures from a DLL while using the normal import mechanism.

- Custom calling conventions (such as using condition codes on x86 architectures) aren't supported. Also, the floating-point registers aren't saved on any platform. Take care if your custom helper routine or hook routines use floating-point types: The routines must save and restore the complete floating-point state on machines that use register calling conventions with floating-point parameters. Be careful about delay-loading the CRT DLL, particularly if you call CRT functions that take floating-point parameters on a numeric data processor (NDP) stack in the help function.

## Understand the delay load helper function

The helper function for linker-supported delayed loading is what actually loads the DLL at runtime. You can modify the helper function to customize its behavior. Instead of using the supplied helper function in *`delayimp.lib`*, write your own function and link it to your program. One helper function serves all delay loaded DLLs. For more information, see [Understand the delay load helper function](understanding-the-helper-function.md) and [Develop your own helper function](understanding-the-helper-function.md#develop-your-own-helper-function).

## See also

[Create C/C++ DLLs in Visual Studio](../dlls-in-visual-cpp.md)<br/>
[MSVC linker reference](linking.md)
