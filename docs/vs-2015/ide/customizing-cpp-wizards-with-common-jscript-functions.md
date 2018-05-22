---
title: "Customizing C++ Wizards with Common JScript Functions | Microsoft Docs"
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
  - "wizard JScript methods, creating C++ wizards"
ms.assetid: c602978f-a2c4-462f-85c3-50b5897bec46
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Customizing C++ Wizards with Common JScript Functions
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Customizing C++ Wizards with Common JScript Functions](https://docs.microsoft.com/cpp/ide/customizing-cpp-wizards-with-common-jscript-functions).  
  
  
When you create a wizard project with the [Custom Wizard](../ide/creating-a-custom-wizard.md), your project includes Common.js. If you specify a user interface for your wizard, the project also contains HTML pages that specify the JScript script language and include the file Common.js, as follows:  
  
```  
<SCRIPT ID="INCLUDE_COMMON" LANGUAGE ="JSCRIPT"></SCRIPT>  
```  
  
 The wizard also creates a unique file called Default.js. You can customize your own JScript functions in Default.js. See [The JScript File](../ide/jscript-file.md) for more information.  
  
 Common.js contains functions that you can call from each wizard's HTML pages and from Default.js. If you have the same functions that you would like to use across different wizards, you can place these functions in Common.js.  
  
## See Also  
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)

