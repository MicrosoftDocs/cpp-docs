---
title: "Template Directives | Microsoft Docs"
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
  - "endloop directive ([!endloop])"
  - "endif directive ([!endif])"
  - "loop directive ([!loop])"
  - "[!endif] template directive"
  - "[!output] template directive"
  - "if directive ([!if])"
  - "template directives"
  - "[!endloop] template directive"
  - "directives, template directives"
  - "output directive ([!output])"
  - "custom wizards, template directives"
  - "else directive ([!else])"
  - "[!loop] template directive"
  - "[!if] template directive"
  - "[!else] template directive"
ms.assetid: b6204153-813a-423c-b044-e39c352cc5af
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
# Template Directives
You can use the following template directives in a wizard [template file](../ide/template-files.md) and the [Templates.inf file](../ide/templates-inf-file.md) to customize the wizard.  
  
|Directive|Description|  
|---------------|-----------------|  
|[! if ]|Begins a control structure to check for a condition.|  
|[! else ]|Part of the [! if ] control structure. Checks for another condition.|  
|[! endif ]|Ends the definition of an [! if ] control structure.|  
|[! output ]|Can be used in the following two ways:<br /><br /> -   [! output "string" ] gives you the string.<br />-   [! output SYMBOL_STRING ] gives you the value of the symbol SYMBOL_STRING.|  
|[! loop ]|Can be used in the following two ways:<br /><br /> -   [! loop = 5 ]<br />-   [! loop = *NUM_OF_PAGES* ] where *NUM_OF_PAGES* is a symbol with a numeric value.|  
|[! endloop ]|Ends a loop structure.|  
  
 The left bracket ([) followed immediately by an exclamation mark (!) indicates the beginning of a template directive. The right bracket indicates the end of a template directive. This is the required syntax:  
  
```  
[!directiveparams]  
```  
  
 A space or a non-identifier character is required only between *directive* and *params*.  
  
## Example  
  
```  
[!if SAMPLE_RADIO_OPTION1]  
You have checked the option 'Sample radio button option 1'  
[!else]  
You have checked the option 'Sample radio button option 2'  
[!endif]  
```  
  
 You can use the following operators with the above directives in a template file.  
  
```  
+  
-     
=  
!=     
==     
||     
&&    
!  
```  
  
## Example  
  
```  
[!if SYMBOL_STRING != 0]  
```  
  
## See Also  
 [Files Created for Your Wizard](../ide/files-created-for-your-wizard.md)   
 [Custom Wizard](../ide/custom-wizard.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)