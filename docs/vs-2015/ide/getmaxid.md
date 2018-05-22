---
title: "GetMaxID | Microsoft Docs"
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
  - "GetMaxID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetMaxID method"
ms.assetid: a155ec2e-6132-4e40-9b85-d710538778a1
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# GetMaxID
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [GetMaxID](https://docs.microsoft.com/cpp/ide/getmaxid).  
  
  
Gets the highest dispid from members of this interface and all of its bases.  
  
## Syntax  
  
```  
  
      function GetMaxID(   
   ointerface    
);  
```  
  
#### Parameters  
 *ointerface*  
 A <xref:Microsoft.VisualStudio.VCCodeModel.VCCodeInterface> object.  
  
## Return Value  
 The highest dispid from the members of *oInterface* and all its bases.  
  
## Remarks  
 Call this function to get the highest dispid from the members of the specified interface and all its bases.  
  
## Example  
  
```  
if (strInterfaceType == "custom")  
      window.external.AddSymbol("DISPID_DISABLED", true);  
   else  
   {  
      var nDispID = window.external.FindSymbol("DISPID");  
      if (!nDispID.length)  
      {  
         nDispID = GetMaxID(oInterface) + 1;  
         window.external.AddSymbol("DISPID", nDispID);  
      }  
   }  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)

