---
title: "Construct makes an indirect reference to project &#39;&lt;projectname&gt;&#39;, which contains &#39;&lt;typename&gt;&#39;"
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
  - "vbc31533"
  - "bc31533"
helpviewer_keywords: 
  - "BC31533"
ms.assetid: e3f55f9f-92be-4ecb-bc8f-9e57049a0805
caps.latest.revision: 6
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
# Construct makes an indirect reference to project &#39;&lt;projectname&gt;&#39;, which contains &#39;&lt;typename&gt;&#39;
Construct makes an indirect reference to project '\<projectname>', which contains '\<typename>'. Add a project reference to '\<projectname>' to your project.  
  
 An expression or statement accesses a type defined in another project, but your project does not have a direct reference to the defining project.  
  
 The type could be a class, structure, interface, module, or enumeration.  
  
 The project that defines the cited type produces an assembly containing the type. If your project does not directly reference the defining project, then the compiler cannot guarantee that the assembly containing the type is in the solution and available for access.  
  
 **Error ID:** BC31533  
  
### To correct this error  
  
-   Determine which project defines the cited type, and add a project reference to it.  
  
## See Also  
 [NIB: Referencing Namespaces and Components](assetId:///568fa759-796b-44cd-bf5e-1cf8de6e38fd)   
 [Managing references in a project](../Topic/Managing%20references%20in%20a%20project.md)   
 [NIB: Managing References](assetId:///910912ce-0dc9-4569-9274-32c44a20cb2c)   
 [NIB How to: Add or Remove References By Using the Add Reference Dialog Box](assetId:///3bd75d61-f00c-47c0-86a2-dd1f20e231c9)