---
title: "rename (#import)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 5c5c6153-1087-4b7b-87fb-fc59b90b9975
caps.latest.revision: 4
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# rename (#import)
**C++ Specific**  
  
 Works around name collision problems.  
  
## Syntax  
  
```  
rename("OldName","NewName")  
```  
  
#### Parameters  
 `OldName`  
 Old name in the type library.  
  
 `NewName`  
 Name to be used instead of the old name.  
  
## Remarks  
 If this attribute is specified, the compiler replaces all occurrences of *OldName* in a type library with the user-supplied *NewName* in the resulting header files.  
  
 This attribute can be used when a name in the type library coincides with a macro definition in the system header files. If this situation is not resolved, then various syntax errors will be generated, such as [Compiler Error C2059](../VS_visualcpp/Compiler-Error-C2059.md) and [Compiler Error C2061](../VS_visualcpp/Compiler-Error-C2061.md).  
  
> [!NOTE]
>  The replacement is for a name used in the type library, not for a name used in the resulting header file.  
  
 For example, suppose a property named `MyParent` exists in a type library, and a macro `GetMyParent` is defined in a header file and used before `#import`. Since `GetMyParent` is the default name of a wrapper function for the error-handling **get** property, a name collision will occur. To work around the problem, use the following attribute in the `#import` statement:  
  
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
 [#import Attributes](../VS_visualcpp/#import-Attributes--C---.md)   
 [#import Directive](../VS_visualcpp/#import-Directive--C---.md)