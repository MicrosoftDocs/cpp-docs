---
description: "Learn more about: Structure and Constant Definitions"
title: "Structure and Constant Definitions"
ms.date: "11/04/2016"
ms.assetid: 1df7cf46-b853-4788-a257-100d5c37997f
---
# Structure and Constant Definitions

The default helper routine uses several structures to communicate with the hook functions and during any exceptions. Here are the notification and failure values, information structures, and the pointer-to-hook-function type passed to the hooks:

```
//
// Delay load import hook notifications
//
enum {
    dliStartProcessing,        // used to bypass or note helper only
    dliNotePreLoadLibrary,     // called just before LoadLibrary, can
                               //  override w/ new HMODULE return val
    dliNotePreGetProcAddress,  // called just before GetProcAddress, can
                               //  override w/ new FARPROC return value
    dliFailLoadLib,            // failed to load library, fix it by
                               //  returning a valid HMODULE
    dliFailGetProc,            // failed to get proc address, fix it by
                               //  returning a valid FARPROC
    dliNoteEndProcessing,      // called after all processing is done, no
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
    DWORD           cb;         // size of structure
    PCImgDelayDescr pidd;       // raw form of data (everything is there)
    FARPROC *       ppfn;       // points to address of function to load
    LPCSTR          szDll;      // name of dll
    DelayLoadProc   dlp;        // name or ordinal of procedure
    HMODULE         hmodCur;    // the hInstance of the library we have loaded
    FARPROC         pfnCur;     // the actual function that will be called
    DWORD           dwLastError;// error received (if an error notification)
    } DelayLoadInfo, * PDelayLoadInfo;

typedef FARPROC (WINAPI *PfnDliHook)(
    unsigned        dliNotify,
    PDelayLoadInfo  pdli
    );

typedef struct ImgDelayDescr {
    DWORD        grAttrs;        // attributes
    RVA          rvaDLLName;     // RVA to dll name
    RVA          rvaHmod;        // RVA of module handle
    RVA          rvaIAT;         // RVA of the IAT
    RVA          rvaINT;         // RVA of the INT
    RVA          rvaBoundIAT;    // RVA of the optional bound IAT
    RVA          rvaUnloadIAT;   // RVA of optional copy of original IAT
    DWORD        dwTimeStamp;    // 0 if not bound,
                                 // O.W. date/time stamp of DLL bound to (Old BIND)
    } ImgDelayDescr, * PImgDelayDescr;
```

## See also

[Understanding the Helper Function](understanding-the-helper-function.md)
