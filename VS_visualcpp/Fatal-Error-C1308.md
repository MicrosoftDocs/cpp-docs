---
title: "Fatal Error C1308"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: 46177997-069e-433a-8e20-93c846d78ffd
caps.latest.revision: 11
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
# Fatal Error C1308
linking assemblies is not supported  
  
 A .netmodule is allowed as input to the linker, but an assembly is not. This error can be generated when an attempt is made to link an assembly compiled with `/clr:safe`.  
  
 For more information, see [.netmodule Files as Linker Input](../VS_visualcpp/.netmodule-Files-as-Linker-Input.md).  
  
 The following sample generates C1308:  
  
```  
// C1308.cpp  
// compile with: /clr:safe /LD  
public ref class MyClass {  
public:  
   int i;  
};  
```  
  
 and then,  
  
```  
// C1308b.cpp  
// compile with: /clr /link C1308b.obj C1308.dll  
// C1308 expected  
#using "C1308.dll"  
int main() {  
   MyClass ^ my = gcnew MyClass();  
}  
```