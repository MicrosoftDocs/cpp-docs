---
title: "Compiler Warning (level 4) C4682"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 858ea157-1244-4a61-85df-97b3de43d418
caps.latest.revision: 7
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Warning (level 4) C4682
'parameter' : no directional parameter attribute specified, defaulting to [in]  
  
 A method on a parameter in an attributed interface does not have one of the directional attributes: [in](../VS_visualcpp/in--C---.md) or [out](../VS_visualcpp/out--C---.md). The parameter defaults to in.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../VS_visualcpp/Compiler-Warnings-That-Are-Off-by-Default.md) for more information.  
  
 The following sample generates C4682:  
  
```  
// C4682.cpp  
// compile with: /W4  
#pragma warning(default : 4682)  
#include <windows.h>  
[module(name="MyModule")];  
  
[ library_block, object, uuid("c54ad59d-d516-41dd-9acd-afda17565c2b") ]  
__interface IMyIface : IUnknown  
{  
   HRESULT f1(int i, int *pi); // C4682  
   // try the following line  
   // HRESULT f1([in] int i, [in] int *pi);  
};  
  
int main()  
{  
}  
```