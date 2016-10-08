---
title: "AddCoclassFromFile"
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
ms.assetid: a8a211fd-2df3-4361-8137-9c0d999b7f88
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
# AddCoclassFromFile
Renders and inserts into the project's .idl file a template file containing a coclass.  
  
## Syntax  
  
```  
  
      function AddCoclassFromFile(   
   oCM,   
   strCoclassFile    
);  
```  
  
#### Parameters  
 `oCM`  
 The [Visual C++ Code Model](assetId:///dd6452c2-1054-44a1-b0eb-639a94a1216b) object.  
  
 *strCoclassFile*  
 The name of the template file, excluding the path.  
  
## Remarks  
 Call this function to render and insert into the project's .idl file a template file containing a coclass.  
  
## Example  
  
```  
// Render myproj.idl and insert into the project's .idl.  
AddCoclassFromFile(oCM, "myproj.idl");  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)