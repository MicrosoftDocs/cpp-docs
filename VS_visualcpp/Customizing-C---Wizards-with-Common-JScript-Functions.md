---
title: "Customizing C++ Wizards with Common JScript Functions"
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
ms.assetid: c602978f-a2c4-462f-85c3-50b5897bec46
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
# Customizing C++ Wizards with Common JScript Functions
When you create a wizard project with the [Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md), your project includes Common.js. If you specify a user interface for your wizard, the project also contains HTML pages that specify the JScript script language and include the file Common.js, as follows:  
  
```  
<SCRIPT ID="INCLUDE_COMMON" LANGUAGE ="JSCRIPT"></SCRIPT>  
```  
  
 The wizard also creates a unique file called Default.js. You can customize your own JScript functions in Default.js. See [The JScript File](../VS_visualcpp/JScript-File.md) for more information.  
  
 Common.js contains functions that you can call from each wizard's HTML pages and from Default.js. If you have the same functions that you would like to use across different wizards, you can place these functions in Common.js.  
  
## See Also  
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)