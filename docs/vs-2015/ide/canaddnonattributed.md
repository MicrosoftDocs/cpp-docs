---
title: "CanAddNonAttributed | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CanAddNonAttributed"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CanAddNonAttributed method"
ms.assetid: a2b0143e-f84b-40f3-8f51-23a492f651f8
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CanAddNonAttributed
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [CanAddNonAttributed](https://docs.microsoft.com/cpp/ide/canaddnonattributed).  
  
  
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
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [Concepts](../windows/attributed-programming-concepts.md)   
 [CanAddClass](../ide/canaddclass.md)

