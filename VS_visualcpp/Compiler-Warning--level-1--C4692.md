---
title: "Compiler Warning (level 1) C4692"
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
ms.assetid: f6fb3acc-8228-491a-9c30-ce302d8a9c75
caps.latest.revision: 9
manager: ghogen
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
# Compiler Warning (level 1) C4692
'function': signature of non-private member contains assembly private native type 'native_type'  
  
 A type that is visible outside the assembly contains a member function whose signature contains a native type that is not visible outside the assembly. Therefore, the member function should not be called if its containing type is instantiated outside the assembly.  
  
 For more information, see [Type visibility](../VS_visualcpp/How-to--Define-and-Consume-Classes-and-Structs--C---CLI-.md#BKMK_Type_visibility).  
  
 This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../VS_visualcpp/Compiler-Warnings-That-Are-Off-by-Default.md).  
  
## Example  
 The following sample generates C4692.  
  
```  
// C4692.cpp  
// compile with: /W1 /c /clr  
#pragma warning(default:4692)  
class Private_Native_Class {};  
public class Public_Native_Class {};  
public ref class Public_Ref_Class {  
public:  
   void Test(Private_Native_Class *) {}   // C4692  
   void Test2(Public_Native_Class *) {}   // OK  
};  
```