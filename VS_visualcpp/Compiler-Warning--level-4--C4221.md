---
title: "Compiler Warning (level 4) C4221"
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
ms.assetid: 8532bd68-54dc-4526-8597-f61dcb0a0129
caps.latest.revision: 7
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
# Compiler Warning (level 4) C4221
nonstandard extension used : 'identifier' : cannot be initialized using address of automatic variable  
  
 With the default Microsoft extensions (/Ze), you can initialize an aggregate type (**array**, `struct`, or **union**) with the address of a local (automatic) variable.  
  
## Example  
  
```  
// C4221.c  
// compile with: /W4  
struct S  
{  
   int *i;  
};  
  
void func()  
{  
   int j;  
   struct S s1 = { &j };   // C4221  
}  
  
int main()  
{  
}  
```  
  
 Such initializations are invalid under ANSI compatibility ([/Za](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md)).