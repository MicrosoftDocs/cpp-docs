---
description: "Learn more about: Importing Using DEF Files"
title: "Importing Using DEF Files"
ms.date: "11/04/2016"
helpviewer_keywords: ["importing DLLs [C++], DEF files", "def files [C++], importing with", ".def files [C++], importing with", "dllimport attribute [C++], DEF files", "DLLs [C++], DEF files"]
ms.assetid: aefdbf50-f603-488a-b0d7-ed737bae311d
---
# Importing Using DEF Files

If you choose to use **`__declspec(dllimport)`** along with a .def file, you should change the .def file to use DATA in place of CONSTANT to reduce the likelihood that incorrect coding will cause a problem:

```
// project.def
LIBRARY project
EXPORTS
   ulDataInDll   DATA
```

The following table shows why.

|Keyword|Emits in the import library|Exports|
|-------------|---------------------------------|-------------|
|`CONSTANT`|`_imp_ulDataInDll`, `_ulDataInDll`|`_ulDataInDll`|
|`DATA`|`_imp_ulDataInDll`|`_ulDataInDll`|

Using **`__declspec(dllimport)`** and CONSTANT lists both the `imp` version and the undecorated name in the .lib DLL import library that is created to allow explicit linking. Using **`__declspec(dllimport)`** and DATA lists just the `imp` version of the name.

If you use CONSTANT, either of the following code constructs can be used to access `ulDataInDll`:

```
__declspec(dllimport) ULONG ulDataInDll; /*prototype*/
if (ulDataInDll == 0L)   /*sample code fragment*/
```

\-or-

```
ULONG *ulDataInDll;      /*prototype*/
if (*ulDataInDll == 0L)  /*sample code fragment*/
```

However, if you use DATA in your .def file, only code compiled with the following definition can access the variable `ulDataInDll`:

```
__declspec(dllimport) ULONG ulDataInDll;

if (ulDataInDll == 0L)   /*sample code fragment*/
```

Using CONSTANT is more risky because if you forget to use the extra level of indirection, you could potentially access the import address table's pointer to the variable — not the variable itself. This type of problem can often manifest as an access violation because the import address table is currently made read-only by the compiler and linker.

The current MSVC linker issues a warning if it sees CONSTANT in the .def file to account for this case. The only real reason to use CONSTANT is if you cannot recompile some object file where the header file did not list **`__declspec(dllimport)`** on the prototype.

## See also

[Importing into an Application](importing-into-an-application.md)
