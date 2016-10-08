---
title: "Compiler Warning (level 1) C4005"
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
ms.assetid: 7f2dc79a-9fcb-4d5b-be61-120d9cb487ad
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
# Compiler Warning (level 1) C4005
'identifier' : macro redefinition  
  
 The macro identifier is defined twice. The compiler uses the second macro definition.  
  
### To fix by checking the following possible causes  
  
1.  Defining a macro on the command line and in the code with a `#define` directive.  
  
2.  Macros imported from include files.  
  
### To fix by using the following possible solutions  
  
1.  Remove one of the definitions.  
  
2.  Use an [#undef](../VS_visualcpp/#undef-Directive--C-C---.md) directive before the second definition.  
  
 The following sample generates C4005:  
  
```  
// C4005.cpp  
// compile with: /W1 /EHsc  
#include <iostream>  
using namespace std;  
  
#define TEST "test1"  
#define TEST "test2"   // C4005 delete or rename to resolve the warning  
  
int main() {  
   cout << TEST << endl;  
}  
```