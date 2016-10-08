---
title: "Compiler Error C3110"
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
ms.assetid: 821dc71f-896e-4b2d-af0e-aa9932934b7b
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
# Compiler Error C3110
'function_name' : you cannot overload a COM interface method  
  
 An interface that is prefaced by an interface attribute, such as:  
  
-   [custom](../VS_visualcpp/custom--C---.md)  
  
-   [dispinterface](../VS_visualcpp/dispinterface.md)  
  
-   [dual](../VS_visualcpp/dual.md)  
  
-   [object](../VS_visualcpp/object--C---.md)  
  
 cannot be overloaded. For example:  
  
```  
// C3110.cpp  
#include <unknwn.h>  
[ object, uuid= "4F98A180-EF37-11D1-978D-0000F805D73B" ]  
__interface ITestInterface  
{  
   HRESULT mf1(void);  
   HRESULT mf1(BSTR); // C3110  
};  
  
int main()  
{  
}  
```