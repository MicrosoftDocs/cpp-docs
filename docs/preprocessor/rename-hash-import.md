---
title: "rename (#import) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["Rename"]
dev_langs: ["C++"]
helpviewer_keywords: ["rename attribute"]
ms.assetid: 5c5c6153-1087-4b7b-87fb-fc59b90b9975
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# rename (#import)
**C++ Specific**  
  
Works around name collision problems.  
  
## Syntax  
  
```  
rename("OldName","NewName")  
```  
  
### Parameters  
*OldName*  
Old name in the type library.  
  
*NewName*  
Name to be used instead of the old name.  
  
## Remarks  
 
If this attribute is specified, the compiler replaces all occurrences of *OldName* in a type library with the user-supplied *NewName* in the resulting header files.  
  
This attribute can be used when a name in the type library coincides with a macro definition in the system header files. If this situation is not resolved, then various syntax errors will be generated, such as [Compiler Error C2059](../error-messages/compiler-errors-1/compiler-error-c2059.md) and [Compiler Error C2061](../error-messages/compiler-errors-1/compiler-error-c2061.md).  
  
> [!NOTE]
> The replacement is for a name used in the type library, not for a name used in the resulting header file.  
  
For example, suppose a property named `MyParent` exists in a type library, and a macro `GetMyParent` is defined in a header file and used before `#import`. Since `GetMyParent` is the default name of a wrapper function for the error-handling `get` property, a name collision will occur. To work around the problem, use the following attribute in the `#import` statement:  
  
```  
rename("MyParent","MyParentX")  
```  
  
which renames the name `MyParent` in the type library. An attempt to rename the `GetMyParent` wrapper name will fail:  
  
```  
rename("GetMyParent","GetMyParentX")  
```  
  
This is because the name `GetMyParent` only occurs in the resulting type library header file.  
  
**END C++ Specific**  
  
## See Also  
 
[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
[#import Directive](../preprocessor/hash-import-directive-cpp.md)