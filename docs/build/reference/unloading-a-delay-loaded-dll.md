---
description: "Learn more about unloading a delay-loaded DLL"
title: "Unload a delay-loaded DLL"
ms.date: "01/19/2021"
helpviewer_keywords: ["__FUnloadDelayLoadedDLL2", "delayed loading of DLLs, unloading"]
---
# Unload a delay-loaded DLL

The default delay-load helper checks to see if the delay-load descriptors have a pointer and a copy of the original import address table (IAT) in the `pUnloadIAT` field. If so, the helper saves a pointer in a list to the import delay descriptor. This entry lets the helper function find the DLL by name, to support unloading that DLL explicitly.

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
__FUnloadDelayLoadedDLL2("User32.DLL");.
```

## See also

[Understanding the helper function](understanding-the-helper-function.md)
