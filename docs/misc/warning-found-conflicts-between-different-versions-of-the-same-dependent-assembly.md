---
title: "Warning: Found conflicts between different versions of the same dependent assembly | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ResolveAssemblyReference.SuggestedRedirects"
ms.assetid: fd14a789-bbdf-46c7-bcd3-9d3165adf96d
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
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
# Warning: Found conflicts between different versions of the same dependent assembly
This warning displays if the dependency graph of your project contains references to different versions of the same assembly.  
  
 If you have an app.config file, then [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] lets you add a binding redirect to it. A binding redirect forces all assembly references to redirect to the highest numbered version of the assembly. [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] saves the redirect information in app.config. If you use a binding redirect, this warning no longer appears.  
  
 If you decide not to add a binding redirect, your project continues to reference the same version of the assembly as it did before. However, this warning continues to appear.  
  
### To correct this error  
  
-   Double-click the warning and then select "Yes" when you get the prompt, "Do you want to fix these conflicts by adding binding redirect records in the app.config file?"