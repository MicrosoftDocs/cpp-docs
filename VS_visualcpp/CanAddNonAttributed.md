---
title: "CanAddNonAttributed"
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
ms.topic: article
ms.assetid: a2b0143e-f84b-40f3-8f51-23a492f651f8
caps.latest.revision: 6
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
# CanAddNonAttributed
Indicates that the ATL project supports nonattributed objects.  
  
## Syntax  
  
```  
  
function CanAddNonAttributed( );  
  
```  
  
## Return Value  
 **true** if the project supports nonattributed and attributed ATL objects; **false** if the project supports only attributed projects.  
  
## Remarks  
 Call this function to indicate whether the project supports both nonattributed and attributed objects.  
  
## Example  
  
```  
// Check if attributed project using CanAddNonAttributed  
window.external.Load(document);  
if (IsAttributedProject(window.external))  
{  
   ATTRIBUTED.checked = true;  
   if (!CanAddNonAttributed())  
      ATTRIBUTED.disabled = true;  
}  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)   
 [Concepts](../VS_visualcpp/Attributed-Programming-Concepts.md)   
 [CanAddClass](../VS_visualcpp/CanAddClass.md)