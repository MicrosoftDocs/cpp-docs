---
title: "Template Files"
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
ms.assetid: 48fae3d8-3a53-4f62-8010-144c5ffe334e
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
# Template Files
The templates that make up a wizard are a collection of text files that contain some [simple directives](../VS_visualcpp/Template-Directives.md) and are parsed and rendered according to user input and added to the initial project. The appropriate information for parsing the templates is obtained by directly accessing the wizard control's symbol table.  
  
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
  
 **This file has been created by My Custom wizard.**  
**You selected:**  
**Type B**  
**The name of this project is MyApp8.**   
## Output  
  
```  
This file has been created by My Custom wizard.  
You selected:  
Type B  
The name of this project is MyApp8.  
```  
  
 **Note** The syntax above is new to Visual C++ .NET. Syntax from previous versions of Visual C++ is not supported in Visual C++ .NET.  
  
## See Also  
 [Files Created for Your Wizard](../VS_visualcpp/Files-Created-for-Your-Wizard.md)   
 [Custom Wizard](../VS_visualcpp/Custom-Wizard.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)   
 [Templates.inf File](../VS_visualcpp/Templates.inf-File.md)