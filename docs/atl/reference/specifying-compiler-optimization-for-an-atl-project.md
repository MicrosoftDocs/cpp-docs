---
title: "Specifying Compiler Optimization for an ATL Project | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.appwiz.ATL.optimization"
  - "vc.appwiz.ATL.vtable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL_DISABLE_NO_VTABLE macro"
  - "ATL projects, compiler optimization"
  - "ATL_NO_VTABLE macro"
ms.assetid: 7f379318-66d5-43dd-a53d-530758d3a228
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Specifying Compiler Optimization for an ATL Project
By default, the [ATL Control Wizard](../../atl/reference/atl-control-wizard.md) generates new classes with the ATL_NO_VTABLE macro, as follows:  
  
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
  
 You must use ATL_NO_VTABLE, and consequently `declspec(novtable)`, with only base classes that are not directly creatable. You must not use `declspec(novtable)` with the most-derived class in your project, because this class (usually [CComObject](../../atl/reference/ccomobject-class.md), [CComAggObject](../../atl/reference/ccomaggobject-class.md), or [CComPolyObject](../../atl/reference/ccompolyobject-class.md)) initializes the vtable pointer for your project.  
  
 You must not call virtual functions from the constructor of any object that uses `declspec(novtable)`. You should move those calls to the [FinalConstruct](ccomobjectrootex-class.md#ccomobjectrootex__finalconstruct) method.  

  
 If you are unsure whether you should use the `declspec(novtable)` modifier, you can remove the ATL_NO_VTABLE macro from any class definition, or you can globally disable it by specifying  
  
```  
#define _ATL_DISABLE_NO_VTABLE  
```  
  
 in stdafx.h, before all other ATL header files are included.  
  
## See Also  
 [ATL Project Wizard](../../atl/reference/atl-project-wizard.md)   
 [Visual C++ Project Types](../../ide/visual-cpp-project-types.md)   
 [Creating Desktop Projects By Using Application Wizards](../../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Programming with ATL and C Run-Time Code](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)   
 [novtable](../../cpp/novtable.md)   
 [Default ATL Project Configurations](../../atl/reference/default-atl-project-configurations.md)

