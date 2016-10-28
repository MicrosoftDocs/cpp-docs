---
title: "Construct makes an indirect reference to assembly &#39;&lt;assemblyname&gt;&#39;, which contains &#39;&lt;typename&gt;&#39;"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "bc31528"
  - "vbc31528"
helpviewer_keywords: 
  - "BC31528"
ms.assetid: 33459c3f-8615-492e-b6ae-531ed597999e
caps.latest.revision: 10
ms.author: "billchi"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Construct makes an indirect reference to assembly &#39;&lt;assemblyname&gt;&#39;, which contains &#39;&lt;typename&gt;&#39;
Construct makes an indirect reference to assembly '\<assemblyname>', which contains \<typename>. Add a file reference to \<filename> to your project.  
  
 An expression uses a type, such as a class, structure, interface, enumeration, or delegate, but your assembly does not have a project reference to the assembly that defines the type.  
  
 **Error ID:** BC31528  
  
### To correct this error  
  
-   In your project properties, add a reference to the file that contains the assembly that defines the type you are using.  
  
## See Also  
 [NOTINBUILD: Resolving a Reference When Multiple Variables Have the Same Name](assetId:///9601e39f-1911-44e1-ace5-3f6e090408b9)   
 [NIB How to: Modify Project Properties and Configuration Settings](assetId:///e7184bc5-2f2b-4b4f-aa9a-3ecfcbc48b67)   
 [NIB How to: Add or Remove References By Using the Add Reference Dialog Box](assetId:///3bd75d61-f00c-47c0-86a2-dd1f20e231c9)