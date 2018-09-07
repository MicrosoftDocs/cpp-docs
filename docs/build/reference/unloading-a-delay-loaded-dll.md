---
title: "Unloading a Delay-Loaded DLL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["__FUnloadDelayLoadedDLL2", "delayed loading of DLLs, unloading"]
ms.assetid: 6463bc71-020e-4aff-a4ca-90360411c54e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Unloading a Delay-Loaded DLL
The default-supplied delay-load helper checks to see if the delay-load descriptors have a pointer and a copy of the original import address table (IAT) in the pUnloadIAT field. If so, it will save a pointer in a list to the import delay descriptor. This enables the helper function to find the DLL by name to support unloading that DLL explicitly.  
  
 Here are the associated structures and functions for explicitly unloading a delay-loaded DLL:  
  
```  
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
  
 The UnloadInfo structure is implemented using a C++ class that uses **LocalAlloc** and **LocalFree** implementations as its operator **new** and operator **delete** respectively. These options are kept in a standard linked list using __puiHead as the head of the list.  
  
 Calling __FUnloadDelayLoadedDLL will attempt to find the name you provide in the list of loaded DLLs (an exact match is required). If found, the copy of the IAT in pUnloadIAT is copied over the top of the running IAT to restore the thunk pointers, the library is freed with **FreeLibrary**, the matching **UnloadInfo** record is unlinked from the list and deleted, and TRUE is returned.  
  
 The argument to the function __FUnloadDelayLoadedDLL2 is case sensitive. For example, you would specify:  
  
```  
__FUnloadDelayLoadedDLL2("user32.DLL");  
```  
  
 and not:  
  
```  
__FUnloadDelayLoadedDLL2("User32.DLL");.  
```  
  
## See Also  
 [Understanding the Helper Function](understanding-the-helper-function.md)