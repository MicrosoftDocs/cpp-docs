---
title: "LIBRARY | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["LIBRARY"]
dev_langs: ["C++"]
helpviewer_keywords: ["LIBRARY .def file statement"]
ms.assetid: 1d7ccc92-e088-4ef7-9ef0-25c3862cc051
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# LIBRARY
Tells LINK to create a DLL. At the same time, LINK creates an import library, unless an .exp file is used in the build.  
  
```  
LIBRARY [library][BASE=address]  
```  
  
## Remarks  
 The *library* argument specifies the name of the DLL. You can also use the [/OUT](../../build/reference/out-output-file-name.md) linker option to specify the DLL's output name.  
  
 The BASE=*address* argument sets the base address that the operating system uses to load the DLL. This argument overrides the default DLL location of 0x10000000. See the description of the [/BASE](../../build/reference/base-base-address.md) option for details about base addresses.  
  
 Remember to use the [/DLL](../../build/reference/dll-build-a-dll.md) linker option when you build a DLL.  
  
## See Also  
 [Rules for Module-Definition Statements](../../build/reference/rules-for-module-definition-statements.md)