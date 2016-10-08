---
title: "Specifying Compiler Optimization for an ATL Project"
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
ms.topic: reference
ms.assetid: 7f379318-66d5-43dd-a53d-530758d3a228
caps.latest.revision: 8
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
# Specifying Compiler Optimization for an ATL Project
By default, the [ATL Control Wizard](../VS_visualcpp/ATL-Control-Wizard.md) generates new classes with the ATL_NO_VTABLE macro, as follows:  
  
```  
class ATL_NO_VTABLE CProjName  
{  
   ...  
};  
```  
  
 ATL then defines _ATL_NO_VTABLE as follows:  
  
```  
#ifdef _ATL_DISABLE_NO_VTABLE  
   #define ATL_NO_VTABLE  
#else  
   #define ATL_NO_VTABLE __declspec(novtable)  
#endif  
```  
  
 If you do not define _ATL_DISABLE_NO_VTABLE, the ATL_NO_VTABLE macro expands to `declspec(novtable)`. Using `declspec(novtable)`in a class declaration prevents the vtable pointer from being initialized in the class constructor and destructor. When you build your project, the linker eliminates the vtable and all functions to which the vtable points.  
  
 You must use ATL_NO_VTABLE, and consequently `declspec(novtable)`, with only base classes that are not directly creatable. You must not use `declspec(novtable)` with the most-derived class in your project, because this class (usually [CComObject](../VS_visualcpp/CComObject-Class.md), [CComAggObject](../VS_visualcpp/CComAggObject-Class.md), or [CComPolyObject](../VS_visualcpp/CComPolyObject-Class.md)) initializes the vtable pointer for your project.  
  
 You must not call virtual functions from the constructor of any object that uses `declspec(novtable)`. You should move those calls to the [FinalConstruct](../Topic/CComObjectRootEx::FinalConstruct.md) method.  
  
 If you are unsure whether you should use the `declspec(novtable)` modifier, you can remove the ATL_NO_VTABLE macro from any class definition, or you can globally disable it by specifying  
  
```  
#define _ATL_DISABLE_NO_VTABLE  
```  
  
 in stdafx.h, before all other ATL header files are included.  
  
## See Also  
 [ATL Project Wizard](../VS_visualcpp/ATL-Project-Wizard.md)   
 [Visual C++ Project Types](../VS_visualcpp/Visual-C---Project-Types.md)   
 [Creating Desktop Projects By Using Application Wizards](../VS_visualcpp/Creating-Desktop-Projects-By-Using-Application-Wizards.md)   
 [Programming with ATL and C Run-Time Code](../VS_visualcpp/Programming-with-ATL-and-C-Run-Time-Code.md)   
 [Fundamentals of ATL COM Objects](../VS_visualcpp/Fundamentals-of-ATL-COM-Objects.md)   
 [novtable](../VS_visualcpp/novtable.md)   
 [Default ATL Project Configurations](../VS_visualcpp/Default-ATL-Project-Configurations.md)