---
title: "DeleteFile | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DeleteFile method"
ms.assetid: 0cddaedb-8fad-440e-8f18-677fdff94a63
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# DeleteFile
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [DeleteFile](https://docs.microsoft.com/cpp/ide/deletefile).  
  
  
Deletes the specified file.  
  
## Syntax  
  
```  
  
      function DeleteFile(   
   oFSO,   
   strFile    
)   
```  
  
#### Parameters  
 *oFSO*  
 The file system object.  
  
 `strFile`  
 The name of the file to be deleted.  
  
## Remarks  
 Call this function to delete the specified file.  
  
## Example  
  
```  
// Declare a temporary file.  
var strFile = strTempFolder + "\\" + strTarget;  
var strClassName = strTarget.split(".");  
wizard.AddSymbol("SAFE_CLASS_NAME", strClassName[0]);  
wizard.AddSymbol("SAFE_ITEM_NAME", strClassName[0]);  
  
// Declare the template name.  
var strTemplate = strTemplatePath + "\\" + strTpl;  
  
// Render and insert the template.  
wizard.RenderTemplate(strTemplate, strFile, bCopyOnly);  
  
// Create a new project file and add the file from the template.  
var projfile = projItems.AddFromTemplate(strFile, strTarget);  
  
// Delete the temporary file from the file structure object.  
DeleteFile(fso, strFile);  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)

