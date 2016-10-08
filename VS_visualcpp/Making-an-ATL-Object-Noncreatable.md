---
title: "Making an ATL Object Noncreatable"
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
ms.assetid: 80d0bca2-dea0-4801-9a85-6243124437f6
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
# Making an ATL Object Noncreatable
You can change the attributes of an ATL-based COM object so that a client cannot directly create the object. In this case, the object would be returned through a method call on another object rather than created directly.  
  
### To make an object noncreatable  
  
1.  Remove the [OBJECT_ENTRY_AUTO](../Topic/OBJECT_ENTRY_AUTO.md) for the object. If you want the object to be noncreatable but the control to be registered, replace OBJECT_ENTRY_AUTO with [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../Topic/OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO.md).  
  
2.  Add the [noncreatable](../VS_visualcpp/noncreatable.md) attribute to the coclass in the .idl file. For example:  
  
    ```  
    [  
       uuid(A1992E3D-3CF0-11D0-826F-00A0C90F2851),  
       helpstring("MyObject"),  
      noncreatable  
    ]  
    coclass MyObject  
    {  
       [default] interface IMyInterface;  
    }  
    ```  
  
## See Also  
 [ATL Project Wizard](../VS_visualcpp/ATL-Project-Wizard.md)   
 [Visual C++ Project Types](../VS_visualcpp/Visual-C---Project-Types.md)   
 [Creating Desktop Projects By Using Application Wizards](../VS_visualcpp/Creating-Desktop-Projects-By-Using-Application-Wizards.md)   
 [Programming with ATL and C Run-Time Code](../VS_visualcpp/Programming-with-ATL-and-C-Run-Time-Code.md)   
 [Fundamentals of ATL COM Objects](../VS_visualcpp/Fundamentals-of-ATL-COM-Objects.md)   
 [Default ATL Project Configurations](../VS_visualcpp/Default-ATL-Project-Configurations.md)