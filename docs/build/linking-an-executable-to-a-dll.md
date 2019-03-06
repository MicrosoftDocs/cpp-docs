---
title: "Link an executable to a DLL"
ms.date: "11/04/2016"
helpviewer_keywords: ["run time [C++], linking", "dynamic load linking [C++]", "linking [C++], DLLs", "DLLs [C++], linking", "implicit linking [C++]", "explicit linking [C++]", "executable files [C++], linking to DLLs", "loading DLLs [C++]"]
ms.assetid: 7592e276-dd6e-4a74-90c8-e1ee35598ea3
---
# Link an executable to a DLL

An executable file links to (or loads) a DLL in one of two ways:

- *Implicit linking*, where the operating system loads the DLL when the executable using it is loaded. The client executable calls the exported functions of the DLL just as if the functions were statically linked and contained within the executable. Implicit linking is sometimes referred to as *static load* or *load-time dynamic linking*.

- *Explicit linking*, where the operating system loads the DLL on demand at runtime. An executable that uses a DLL by explicit linking must make function calls to explicitly load and unload the DLL and to access the functions exported by the DLL. Unlike calls to functions in a statically linked library, the client executable must call the exported functions in a DLL through a function pointer. Explicit linking is sometimes referred to as *dynamic load* or *run-time dynamic linking*.

An executable can use either linking method to link to the same DLL. Furthermore, these methods are not mutually exclusive; one executable can implicitly link to a DLL and another can attach to it explicitly.

<a name="determining-which-linking-method-to-use"></a>

## Link an executable to a DLL

Whether to use implicit linking or explicit linking is an architectural decision you must make for your application. There are advantages and disadvantages to each method.

### Implicit Linking

Implicit linking occurs when an application's code calls an exported DLL function. When the source code for the calling executable is compiled or assembled, the DLL function call generates an external function reference in the object code. To resolve this external reference, the application must link with the import library (.lib file) provided by the maker of the DLL.

The import library only contains code to load the DLL and to implement calls to functions in the DLL. Finding an external function in an import library informs the linker that the code for that function is in a DLL. To resolve external references to DLLs, the linker simply adds information to the executable file that tells the system where to find the DLL code when the process starts up.

When the system starts a program that contains dynamically linked references, it uses the information in the program's executable file to locate the required DLLs. If it cannot locate the DLL, the system terminates the process and displays a dialog box that reports the error. Otherwise, the system maps the DLL modules into the process's address space.

If any of the DLLs has an entry-point function for initialization and termination code such as `DllMain`, the operating system calls the function. One of the parameters passed to the entry-point function specifies a code that indicates the DLL is attaching to the process. If the entry-point function does not return TRUE, the system terminates the process and reports the error.

Finally, the system modifies the executable code of the process to provide starting addresses for the DLL functions.

Like the rest of a program's code, DLL code is mapped into the address space of the process when the process starts up and it is loaded into memory only when needed. As a result, the `PRELOAD` and `LOADONCALL` code attributes used by .def files to control loading in previous versions of Windows no longer have meaning.

### Explicit Linking

Most applications use implicit linking because it is the easiest linking method to use. However, there are times when explicit linking is necessary. Here are some common reasons to use explicit linking:

- The application does not know the name of a DLL that it loads until run time. For example, the application might obtain the name of the DLL and the exported functions from a configuration file at startup.

- A process that uses implicit linking is terminated by the operating system if the DLL is not found at process startup. A process that uses explicit linking is not terminated in this situation and can attempt to recover from the error. For example, the process could notify the user of the error and have the user specify another path to the DLL.

- A process that uses implicit linking is also terminated if any of the DLLs it is linked to have a `DllMain` function that fails. A process that uses explicit linking is not terminated in this situation.

- An application that implicitly links to many DLLs can be slow to start because Windows loads all the DLLs when the application loads. To improve startup performance, an application can link implicitly only to those DLLs required immediately after loading, and wait until other DLLs are required to link to them explicitly.

- Explicit linking eliminates the need to link the application by using an import library. If changes in the DLL cause the export ordinals to change, applications that use explicit linking do not have to relink if they call `GetProcAddress` using the name of a function and not an ordinal value, whereas applications that use implicit linking must relink to the new import library.

Here are two hazards of explicit linking to be aware of:

- If the DLL has a `DllMain` entry point function, the operating system calls the function in the context of the thread that called `LoadLibrary`. The entry-point function is not called if the DLL is already attached to the process because of a previous call to `LoadLibrary` that has had no corresponding call to the `FreeLibrary` function. Explicit linking can cause problems if the DLL uses a `DllMain` function to perform initialization for each thread of a process because threads that already exist when `LoadLibrary` (or `AfxLoadLibrary`) is called are not initialized.

- If a DLL declares static-extent data as `__declspec(thread)`, it can cause a protection fault if explicitly linked. After the DLL is loaded by a call to `LoadLibrary`, it causes a protection fault whenever the code references this data. (Static-extent data includes both global and local static items.) Therefore, when you create a DLL, you should either avoid using thread-local storage or inform DLL users about the potential pitfalls of dynamically loading your DLL. For more information, see [Using thread local storage in a dynamic-link library (Windows SDK)](/windows/desktop/Dlls/using-thread-local-storage-in-a-dynamic-link-library).

<a name="linking-implicitly"></a>

## Link an executable to a DLL

To use a DLL by implicit linking, client executables must obtain these files from the provider of the DLL:

- One or more header files (.h files) that contain the declarations of the exported data, functions and/or C++ classes in the DLL. The classes, functions, and data exported by the DLL must all be marked `__declspec(dllimport)` in the header file. For more information, see [dllexport, dllimport](../cpp/dllexport-dllimport.md).

- An import library to link into your executable. The linker creates the import library when the DLL is built. For more information, see [.LIB files](reference/dot-lib-files-as-linker-input.md).

- The actual DLL file.

To use a DLL by implicit linking, an executable must include the header files that declare the data, functions or C++ classes exported by the DLL in each source file that contains calls to the exported data, functions, and classes. From a coding perspective, calls to the exported functions are just like any other function call.

To build the calling executable file, you must link with the import library. If you use an external makefile or build system, specify the file name of the import library where you list other object (.obj) files or libraries that you link.

The operating system must be able to locate the DLL file when it loads the calling executable. This means that your application must deploy or verify the existence of the DLL when your application is installed.

<a name="linking-explicitly"></a>

## How to link explicitly to a DLL

To use a DLL by explicit linking, applications must make a function call to explicitly load the DLL at run time. To explicitly link to a DLL, an application must:

- Call [LoadLibrary](loadlibrary-and-afxloadlibrary.md), `LoadLibraryEx`, or a similar function to load the DLL and obtain a module handle.

- Call [GetProcAddress](getprocaddress.md) to obtain a function pointer to each exported function that the application calls. Because applications call the DLL functions through a pointer, the compiler does not generate external references, so there is no need to link with an import library. However, you must have a `typedef` or `using` statement that defines the call signature of the exported functions that you call.

- Call [FreeLibrary](freelibrary-and-afxfreelibrary.md) when done with the DLL.

For example, this sample function calls `LoadLibrary` to load a DLL named "MyDLL", calls `GetProcAddress` to obtain a pointer to a function named "DLLFunc1", calls the function and saves the result, and then calls `FreeLibrary` to unload the DLL.

```C
#include "windows.h"

typedef HRESULT (CALLBACK* LPFNDLLFUNC1)(DWORD,UINT*);

HRESULT LoadAndCallSomeFunction(DWORD dwParam1, UINT * puParam2)
{
    HINSTANCE hDLL;               // Handle to DLL
    LPFNDLLFUNC1 lpfnDllFunc1;    // Function pointer
    HRESULT hrReturnVal;

    hDLL = LoadLibrary("MyDLL");
    if (NULL != hDLL)
    {
        lpfnDllFunc1 = (LPFNDLLFUNC1)GetProcAddress(hDLL, "DLLFunc1");
        if (NULL != lpfnDllFunc1)
        {
            // call the function
            hrReturnVal = lpfnDllFunc1(dwParam1, puParam2);
        }
        else
        {
            // report the error
            hrReturnVal = ERROR_DELAY_LOAD_FAILED;
        }
        FreeLibrary(hDLL);
    }
    else
    {
        hrReturnVal = ERROR_DELAY_LOAD_FAILED;
    }
    return hrReturnVal;
}
```

Unlike in this example, in most cases you should call `LoadLibrary` and `FreeLibrary` only once in your application for a given DLL, especially if you are going to call multiple functions in the DLL or call DLL functions repeatedly.

## What do you want to know more about?

- [Working with Import Libraries and Export Files](reference/working-with-import-libraries-and-export-files.md)

- [Dynamic-Link Library Search Order](/windows/desktop/Dlls/dynamic-link-library-search-order)

## See also

[DLLs in Visual C++](dlls-in-visual-cpp.md)
