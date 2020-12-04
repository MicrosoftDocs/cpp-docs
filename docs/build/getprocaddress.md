---
description: "Learn more about: GetProcAddress"
title: "GetProcAddress"
ms.date: "11/04/2016"
f1_keywords: ["GetProcAddress"]
helpviewer_keywords: ["DLLs [C++], GetProcAddress", "ordinal exports [C++]", "GetProcAddress method"]
ms.assetid: 48d14ae0-47ea-4c5d-96b1-2c158f1a26af
---
# GetProcAddress

Processes explicitly linking to a DLL call [GetProcAddress](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress) to obtain the address of an exported function in the DLL. You use the returned function pointer to call the DLL function. **GetProcAddress** takes as parameters the DLL module handle (returned by either **LoadLibrary**, `AfxLoadLibrary`, or **GetModuleHandle**) and takes either the name of the function you want to call or the function's export ordinal.

Because you are calling the DLL function through a pointer and there is no compile-time type checking, make sure that the parameters to the function are correct so that you do not overstep the memory allocated on the stack and cause an access violation. One way to help provide type-safety is to look at the function prototypes of the exported functions and create matching typedefs for the function pointers. For example:

```
typedef UINT (CALLBACK* LPFNDLLFUNC1)(DWORD,UINT);
...

HINSTANCE hDLL;               // Handle to DLL
LPFNDLLFUNC1 lpfnDllFunc1;    // Function pointer
DWORD dwParam1;
UINT  uParam2, uReturnVal;

hDLL = LoadLibrary("MyDLL");
if (hDLL != NULL)
{
   lpfnDllFunc1 = (LPFNDLLFUNC1)GetProcAddress(hDLL,
                                           "DLLFunc1");
   if (!lpfnDllFunc1)
   {
      // handle the error
      FreeLibrary(hDLL);
      return SOME_ERROR_CODE;
   }
   else
   {
      // call the function
      uReturnVal = lpfnDllFunc1(dwParam1, uParam2);
   }
}
```

How you specify the function you want when calling **GetProcAddress** depends on how the DLL was built.

You can only obtain the export ordinal if the DLL you are linking to is built with a module definition (.def) file and if the ordinals are listed with the functions in the **EXPORTS** section of the DLL's .def file. Calling **GetProcAddress** with an export ordinal, as opposed to the function name, is slightly faster if the DLL has many exported functions because the export ordinals serve as indexes into the DLL's export table. With an export ordinal, **GetProcAddress** can locate the function directly as opposed to comparing the specified name to the function names in the DLL's export table. However, you should call **GetProcAddress** with an export ordinal only if you have control over assigning the ordinals to the exported functions in the .def file.

## What do you want to do?

- [Link an executable to a DLL](linking-an-executable-to-a-dll.md#linking-implicitly)

- [Link an executable to a DLL](linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)

## What do you want to know more about?

- [LoadLibrary and AfxLoadLibrary](loadlibrary-and-afxloadlibrary.md)

- [FreeLibrary](/windows/win32/api/libloaderapi/nf-libloaderapi-freelibrary)

- [Exporting from a DLL Using DEF Files](exporting-from-a-dll-using-def-files.md)

## See also

[Create C/C++ DLLs in Visual Studio](dlls-in-visual-cpp.md)
