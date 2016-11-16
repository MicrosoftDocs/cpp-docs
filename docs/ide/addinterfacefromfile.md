---
title: "AddInterfaceFromFile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "AddInterfaceFromFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddInterfaceFromFile method"
ms.assetid: fa848690-ad98-4fb4-bbcf-dffcaad05df2
caps.latest.revision: 7
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
# AddInterfaceFromFile
Renders and inserts a template file that contains an interface.  
  
## Syntax  
  
```  
  
      function AddInterfaceFromFile(   
   oCM,   
   strInterfaceFile    
);  
```  
  
#### Parameters  
 `oCM`  
 The [Visual C++ Code Model](http://msdn.microsoft.com/en-us/dd6452c2-1054-44a1-b0eb-639a94a1216b) object.  
  
 *strInterfaceFile*  
 The template file name only, excluding the path.  
  
## Remarks  
 Call this function to render and insert into the project's .idl file a template file that contains an interface.  
  
 If the interface is not added successfully, this function displays an error message.  
  
## Example  
  
```  
// Render myint.idl and insert into strProject.idl  
AddInterfaceFromFile(oCM, "myint.idl");  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)