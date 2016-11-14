---
title: "Template Files | Microsoft Docs"
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
  - "custom wizards, template files"
  - "files [C++], created by Custom Wizard"
  - "templates [C++], for wizards"
ms.assetid: 48fae3d8-3a53-4f62-8010-144c5ffe334e
caps.latest.revision: 8
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
# Template Files
The templates that make up a wizard are a collection of text files that contain some [simple directives](../ide/template-directives.md) and are parsed and rendered according to user input and added to the initial project. The appropriate information for parsing the templates is obtained by directly accessing the wizard control's symbol table.  
  
 The following example is a very simple template file for a wizard that asks the user to select either A or B.  
  
## Example  
  
```  
This file has been created by My Custom wizard.  
You selected:  
[!if TYPE_A]  
Type A  
[!else]  
Type B  
[!endif]  
The name of this project is [!output PROJECT_NAME].root.cpp:  
```  
  
 If the user chooses Type B, the above template would be rendered as follows:  
  
```Output  
This file has been created by My Custom wizard.  
You selected:  
Type B  
The name of this project is MyApp8.  
```  
  
## Output  
  
```  
This file has been created by My Custom wizard.  
You selected:  
Type B  
The name of this project is MyApp8.  
```  
  
 **Note** The syntax above is new to Visual C++ .NET. Syntax from previous versions of Visual C++ is not supported in Visual C++ .NET.  
  
## See Also  
 [Files Created for Your Wizard](../ide/files-created-for-your-wizard.md)   
 [Custom Wizard](../ide/custom-wizard.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [Templates.inf File](../ide/templates-inf-file.md)