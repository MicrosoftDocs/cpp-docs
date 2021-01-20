---
description: "Learn more about: Delay load calling conventions, parameters, and return type"
title: "Calling conventions, parameters, and return type"
ms.date: "01/19/2021"
helpviewer_keywords: ["calling conventions, helper functions", "helper functions, calling conventions", "helper functions, return types"]
---
# Delay load helper calling conventions, parameters, and return type

The prototype for the delay load helper routine is:

```C
FARPROC WINAPI __delayLoadHelper2(
    PCImgDelayDescr pidd,
    FARPROC * ppfnIATEntry
);
```

## Parameters

*`pidd`*<br/>
A **`const`** pointer to a `ImgDelayDescr` that contains the offsets of various import-related data, a timestamp for binding information, and a set of attributes that provide further information about the descriptor content. Currently there's only one attribute, `dlattrRva`, which indicates that the addresses in the descriptor are relative virtual addresses. For more information, see the declarations in *`delayimp.h`*.

For the definition of the `PCImgDelayDescr` structure, see [Structure and constant definitions](structure-and-constant-definitions.md).

*`ppfnIATEntry`*<br/>
A pointer to a slot in the delay load import address table (IAT). It's the slot that's updated with the address of the imported function. The helper routine needs to store the same value that it returns into this location.

## Expected return values

If the function is successful, it returns the address of the imported function.

If the function fails, it raises a structured exception and returns 0. Three types of exceptions can be raised:

- Invalid parameter, which happens if the attributes in *`pidd`* aren't specified correctly.

- `LoadLibrary` failed on the specified DLL.

- Failure of `GetProcAddress`.

It's your responsibility to handle these exceptions.

## Remarks

The calling convention for the helper function is **`__stdcall`**. The type of the return value isn't relevant, so `FARPROC` is used. This function has C linkage, which means it needs to be wrapped by `extern "C"` when declared in C++ code. The `ExternC` macro takes care of this wrapper for you.

Store the return value of the helper function in the passed-in function pointer location, unless you want to use your helper routine as a notification hook. In that case, your code is responsible for finding the appropriate function pointer to return. The thunk code the linker generates then takes that return value as the real target of the import and jumps directly to it.

## Sample

The following code shows how to implement a basic hook function.

```C
FARPROC WINAPI delayHook(unsigned dliNotify, PDelayLoadInfo pdli)
{
    switch (dliNotify) {
        case dliStartProcessing :

            // If you want to return control to the helper, return 0.
            // Otherwise, return a pointer to a FARPROC helper function
            // that will be used instead, thereby bypassing the rest
            // of the helper.

            break;

        case dliNotePreLoadLibrary :

            // If you want to return control to the helper, return 0.
            // Otherwise, return your own HMODULE to be used by the
            // helper instead of having it call LoadLibrary itself.

            break;

        case dliNotePreGetProcAddress :

            // If you want to return control to the helper, return 0.
            // If you choose you may supply your own FARPROC function
            // address and bypass the helper's call to GetProcAddress.

            break;

        case dliFailLoadLib :

            // LoadLibrary failed.
            // If you don't want to handle this failure yourself, return 0.
            // In this case the helper will raise an exception
            // (ERROR_MOD_NOT_FOUND) and exit.
            // If you want to handle the failure by loading an alternate
            // DLL (for example), then return the HMODULE for
            // the alternate DLL. The helper will continue execution with
            // this alternate DLL and attempt to find the
            // requested entrypoint via GetProcAddress.

            break;

        case dliFailGetProc :

            // GetProcAddress failed.
            // If you don't want to handle this failure yourself, return 0.
            // In this case the helper will raise an exception
            // (ERROR_PROC_NOT_FOUND) and exit.
            // If you choose you may handle the failure by returning
            // an alternate FARPROC function address.

            break;

        case dliNoteEndProcessing :

            // This notification is called after all processing is done.
            // There is no opportunity for modifying the helper's behavior
            // at this point except by longjmp()/throw()/RaiseException.
            // No return value is processed.

            break;

        default :

            return NULL;
    }

    return NULL;
}

/*
and then at global scope somewhere:

ExternC const PfnDliHook __pfnDliNotifyHook2 = delayHook;
ExternC const PfnDliHook __pfnDliFailureHook2 = delayHook;
*/
```

## See also

[Understanding the helper function](understanding-the-helper-function.md)
