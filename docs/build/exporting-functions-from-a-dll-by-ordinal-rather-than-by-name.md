---
title: "Exporting Functions from a DLL by Ordinal Rather Than by Name | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
f1_keywords: ["NONAME"]
dev_langs: ["C++"]
helpviewer_keywords: ["exporting functions [C++], ordinal values", "ordinal exports [C++]", "exporting DLLs [C++], ordinal values", "NONAME attribute"]
ms.assetid: 679719fd-d965-4df3-9f7a-7d86ad831702
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Exporting Functions from a DLL by Ordinal Rather Than by Name
The simplest way to export functions from your DLL is to export them by name. This is what happens when you use **__declspec(dllexport)**, for example. But you can instead export functions by ordinal. With this technique, you must use a .def file instead of **__declspec(dllexport)**. To specify a function's ordinal value, append its ordinal to the function name in the .def file. For information about specifying ordinals, see [Exporting from a DLL Using .def Files](../build/exporting-from-a-dll-using-def-files.md).  
  
> [!TIP]
>  If you want to optimize your DLL's file size, use the **NONAME** attribute on each exported function. With the **NONAME** attribute, the ordinals are stored in the DLL's export table rather than the function names. This can be a considerable savings if you are exporting many functions.  
  
## What do you want to do?  
  
-   [Use a .def file so I can export by ordinal](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Use __declspec(dllexport)](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
## See Also  
 [Exporting from a DLL](../build/exporting-from-a-dll.md)