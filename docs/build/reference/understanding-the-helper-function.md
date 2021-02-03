---
description: "Learn more about the delay load helper function"
title: "Understand the delay load helper function"
ms.date: "01/19/2021"
helpviewer_keywords: ["delayed loading of DLLs, helper function", "__delayLoadHelper2 function", "delayimp.lib", "__delayLoadHelper function", "delayhlp.cpp", "delayimp.h", "helper functions"]
---
# Understand the delay load helper function

The helper function for linker-supported delayed loading is what actually loads the DLL at runtime. You can modify the helper function to customize its behavior. Instead of using the supplied helper function in *`delayimp.lib`*, write your own function and link it to your program. One helper function serves all delay loaded DLLs.

You can provide your own version of the helper function if you want to do specific processing based on the names of the DLL or imports.

The helper function takes these actions:

- Checks the stored handle to the library to see if it has already been loaded

- Calls `LoadLibrary` to attempt to load the DLL

- Calls `GetProcAddress` to attempt getting the address of the procedure

- Returns to the delay import load thunk to call the now-loaded entry point

The helper function can call back to a notification hook in your program after each of the following actions:

- When the helper function starts up

- Just before `LoadLibrary` is called in the helper function

- Just before `GetProcAddress` is called in the helper function

- If the call to `LoadLibrary` in the helper function fails

- If the call to `GetProcAddress` in the helper function fails

- After the helper function is done processing

Each of these hook points can return a value that alters normal processing of the helper routine in some manner, except the return to the delay import load thunk.

The default helper code can be found in *`delayhlp.cpp`* and *`delayimp.h`* in the MSVC *`include`* directory. It's compiled into *`delayimp.lib`* in the MSVC *`lib`* directory for your target architecture. You'll need to include this library in your compilations unless you write your own helper function.

## <a name="calling-conventions-parameters-and-return-type"></a> Delay load helper calling conventions, parameters, and return type

The prototype for the delay load helper routine is:

```C
FARPROC WINAPI __delayLoadHelper2(
    PCImgDelayDescr pidd,
    FARPROC * ppfnIATEntry
);
```

### Parameters

*`pidd`*\
A **`const`** pointer to a `ImgDelayDescr` that contains the offsets of various import-related data, a timestamp for binding information, and a set of attributes that provide further information about the descriptor content. Currently there's only one attribute, `dlattrRva`, which indicates that the addresses in the descriptor are relative virtual addresses. For more information, see the declarations in *`delayimp.h`*.

The pointers in the delay descriptor (`ImgDelayDescr` in *`delayimp.h`*) use relative virtual addresses (RVAs) to work as expected in both 32-bit and 64-bit programs. To use them, convert these RVAs back to pointers by using the function `PFromRva`, found in *`delayhlp.cpp`*. You can use this function on each of the fields in the descriptor to convert them back to either 32-bit or 64-bit pointers. The default delay load helper function is a good template to use as an example.

For the definition of the `PCImgDelayDescr` structure, see [Structure and constant definitions](#structure-and-constant-definitions).

*`ppfnIATEntry`*\
A pointer to a slot in the delay load import address table (IAT). It's the slot that's updated with the address of the imported function. The helper routine needs to store the same value that it returns into this location.

### Expected return values

If the helper function is successful, it returns the address of the imported function.

If the function fails, it raises a structured exception and returns 0. Three types of exceptions can be raised:

- Invalid parameter, which happens if the attributes in *`pidd`* aren't specified correctly. Treat this as an unrecoverable error.

- `LoadLibrary` failed on the specified DLL.

- Failure of `GetProcAddress`.

It's your responsibility to handle these exceptions. For more information, see [Error handling and notification](error-handling-and-notification.md).

### Remarks

The calling convention for the helper function is **`__stdcall`**. The type of the return value isn't relevant, so `FARPROC` is used. This function has C linkage, which means it needs to be wrapped by `extern "C"` when declared in C++ code. The `ExternC` macro takes care of this wrapper for you.

To use your helper routine as a notification hook, your code must specify the appropriate function pointer to return. The thunk code the linker generates then takes that return value as the real target of the import and jumps directly to it. If you don't want to use your helper routine as a notification hook, store the return value of the helper function in `ppfnIATEntry`, the passed-in function pointer location.

## Sample hook function

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
            // If you choose, you may handle the failure by returning
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

## <a name="structure-and-constant-definitions"></a> Delay load structure and constant definitions

The default delay load helper routine uses several structures to communicate with the hook functions and during any exceptions. These structures are defined in *`delayimp.h`*. Here are the macros, typedefs, notification and failure values, information structures, and the pointer-to-hook-function type passed to the hooks:

```C
#define _DELAY_IMP_VER  2

#if defined(__cplusplus)
#define ExternC extern "C"
#else
#define ExternC extern
#endif

typedef IMAGE_THUNK_DATA *          PImgThunkData;
typedef const IMAGE_THUNK_DATA *    PCImgThunkData;
typedef DWORD                       RVA;

typedef struct ImgDelayDescr {
    DWORD           grAttrs;        // attributes
    RVA             rvaDLLName;     // RVA to dll name
    RVA             rvaHmod;        // RVA of module handle
    RVA             rvaIAT;         // RVA of the IAT
    RVA             rvaINT;         // RVA of the INT
    RVA             rvaBoundIAT;    // RVA of the optional bound IAT
    RVA             rvaUnloadIAT;   // RVA of optional copy of original IAT
    DWORD           dwTimeStamp;    // 0 if not bound,
                                    // O.W. date/time stamp of DLL bound to (Old BIND)
    } ImgDelayDescr, * PImgDelayDescr;

typedef const ImgDelayDescr *   PCImgDelayDescr;

enum DLAttr {                   // Delay Load Attributes
    dlattrRva = 0x1,                // RVAs are used instead of pointers
                                    // Having this set indicates a VC7.0
                                    // and above delay load descriptor.
    };

//
// Delay load import hook notifications
//
enum {
    dliStartProcessing,             // used to bypass or note helper only
    dliNoteStartProcessing = dliStartProcessing,

    dliNotePreLoadLibrary,          // called just before LoadLibrary, can
                                    //  override w/ new HMODULE return val
    dliNotePreGetProcAddress,       // called just before GetProcAddress, can
                                    //  override w/ new FARPROC return value
    dliFailLoadLib,                 // failed to load library, fix it by
                                    //  returning a valid HMODULE
    dliFailGetProc,                 // failed to get proc address, fix it by
                                    //  returning a valid FARPROC
    dliNoteEndProcessing,           // called after all processing is done, no
                                    //  bypass possible at this point except
                                    //  by longjmp()/throw()/RaiseException.
    };

typedef struct DelayLoadProc {
    BOOL                fImportByName;
    union {
        LPCSTR          szProcName;
        DWORD           dwOrdinal;
        };
    } DelayLoadProc;

typedef struct DelayLoadInfo {
    DWORD               cb;         // size of structure
    PCImgDelayDescr     pidd;       // raw form of data (everything is there)
    FARPROC *           ppfn;       // points to address of function to load
    LPCSTR              szDll;      // name of dll
    DelayLoadProc       dlp;        // name or ordinal of procedure
    HMODULE             hmodCur;    // the hInstance of the library we have loaded
    FARPROC             pfnCur;     // the actual function that will be called
    DWORD               dwLastError;// error received (if an error notification)
    } DelayLoadInfo, * PDelayLoadInfo;

typedef FARPROC (WINAPI *PfnDliHook)(
    unsigned        dliNotify,
    PDelayLoadInfo  pdli
    );
```

## <a name="calculate-necessary-values"></a> Calculate necessary values for delay loading

The delay load helper routine needs to calculate two critical pieces of information. To help, there are two inline functions in *`delayhlp.cpp`* to calculate this information.

- The first, `IndexFromPImgThunkData`, calculates the index of the current import into the three different tables (import address table (IAT), bound import address table (BIAT), and unbound import address table (UIAT)).

- The second, `CountOfImports`, counts the number of imports in a valid IAT.

```C
// utility function for calculating the index of the current import
// for all the tables (INT, BIAT, UIAT, and IAT).
__inline unsigned
IndexFromPImgThunkData(PCImgThunkData pitdCur, PCImgThunkData pitdBase) {
    return pitdCur - pitdBase;
    }

// utility function for calculating the count of imports given the base
// of the IAT. NB: this only works on a valid IAT!
__inline unsigned
CountOfImports(PCImgThunkData pitdBase) {
    unsigned        cRet = 0;
    PCImgThunkData  pitd = pitdBase;
    while (pitd->u1.Function) {
        pitd++;
        cRet++;
        }
    return cRet;
    }
```

## <a name="unload-a-delay-loaded-dll"></a> Support unload of a delay-loaded DLL

When a delay-loaded DLL gets loaded, the default delay-load helper checks to see if the delay-load descriptors have a pointer and a copy of the original import address table (IAT) in the `pUnloadIAT` field. If so, the helper saves a pointer in a list to the import delay descriptor. This entry lets the helper function find the DLL by name, to support unloading that DLL explicitly.

Here are the associated structures and functions for explicitly unloading a delay-loaded DLL:

```cpp
//
// Unload support from delayimp.h
//

// routine definition; takes a pointer to a name to unload

ExternC
BOOL WINAPI
__FUnloadDelayLoadedDLL2(LPCSTR szDll);

// structure definitions for the list of unload records
typedef struct UnloadInfo * PUnloadInfo;
typedef struct UnloadInfo {
    PUnloadInfo     puiNext;
    PCImgDelayDescr pidd;
    } UnloadInfo;

// from delayhlp.cpp
// the default delay load helper places the unloadinfo records in the
// list headed by the following pointer.
ExternC
PUnloadInfo __puiHead;
```

The `UnloadInfo` structure is implemented using a C++ class that uses `LocalAlloc` and `LocalFree` implementations as its `operator new` and `operator delete`, respectively. These options are kept in a standard linked list that uses `__puiHead` as the head of the list.

When you call `__FUnloadDelayLoadedDLL`, it attempts to find the name you provide in the list of loaded DLLs. (An exact match is required.) If found, the copy of the IAT in `pUnloadIAT` is copied over the top of the running IAT to restore the thunk pointers. Then, the library is freed by using `FreeLibrary`, the matching `UnloadInfo` record is unlinked from the list and deleted, and `TRUE` is returned.

The argument to the function `__FUnloadDelayLoadedDLL2` is case-sensitive. For example, you would specify:

```cpp
__FUnloadDelayLoadedDLL2("user32.dll");
```

and not:

```cpp
__FUnloadDelayLoadedDLL2("User32.DLL");
```

For an example of unloading a delay-loaded DLL, see [Explicitly unload a delay-loaded DLL](linker-support-for-delay-loaded-dlls.md).

## <a name="develop-your-own-helper-function"></a> Develop your own delay load helper function

You may want to provide your own version of the delay load helper routine. In your own routine, you can do specific processing based on the names of the DLL or imports. There are two ways to insert your own code: Code your own helper function, possibly based on the supplied code. Or, hook the supplied helper to call your own function by using the [notification hooks](error-handling-and-notification.md#notification-hooks).

### Code your own helper

Creating your own helper routine is straightforward. You can use the existing code as a guide for your new function. Your function must use the same calling conventions as the existing helper. And, if it returns to the linker-generated thunks, it must return a proper function pointer. Once you've created your code, you may either satisfy the call or get out of the call, however you like.

### Use the start processing notification hook

It's probably easiest to provide a new pointer to a user-supplied notification hook function that takes the same values as the default helper for the `dliStartProcessing` notification. At that point, the hook function can essentially become the new helper function, because a successful return to the default helper bypasses all further processing in the default helper.

## See also

[Linker support for delay-loaded DLLs](linker-support-for-delay-loaded-dlls.md#explicitly-unload-a-delay-loaded-dll)
