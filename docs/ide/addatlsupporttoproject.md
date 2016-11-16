---
title: "AddATLSupportToProject | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddATLSupportToProject method"
ms.assetid: 26708f22-1e9b-4432-83b2-ed94c765b753
caps.latest.revision: 6
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
# AddATLSupportToProject
Adds ATL support to an MFC project.  
  
## Syntax  
  
```  
  
      function AddATLSupportToProject(   
   oProj   
);  
```  
  
#### Parameters  
 `oProj`  
 The selected project.  
  
## Return Value  
 **true** if ATL support was successfully added to the MFC project.  
  
## Remarks  
 Use this function to add ATL support to an MFC project created by the wizard.  
  
 The wizard displays a message box to confirm adding ATL support to the MFC project. Upon confirmation, the wizard checks for existing support and adds all the necessary GUIDs, templates, headers, and additional functionality so that the MFC project created by the wizard supports ATL.  
  
## Example  
  
```  
var oCM = selProj.CodeModel;  
var L_TRANSACTION_Text = "Add ATL Support To Project";  
oCM.StartTransaction(L_TRANSACTION_Text);  
var bRet = AddATLSupportToProject(selProj);  
if (bRet)  
   oCM.CommitTransaction();  
else  
   oCM.AbortTransaction();  
return bRet;  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [CanAddATLClass](../ide/canaddatlclass.md)   
 [IsMFCProject](../ide/ismfcproject.md)   
 [Introduction to ATL](../atl/introduction-to-atl.md)