---
title: "Could not instantiate the licenses processor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.no_licx_generator"
ms.assetid: 9e95d590-f41f-4cfa-bc73-fadeacfdb879
caps.latest.revision: 7
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
# Could not instantiate the licenses processor
The tool used to transform .licx files into binary resources could not be instantiated.  
  
 As part of compilation, the project system will transform a text .licx file into a binary resource that provides support for .NET control licensing. The binary resource will then be embedded in the project output.  
  
 The build process will fail if this error occurs.  
  
 The .licx file is automatically generated or updated by the Windows Forms Designer whenever a licensed control is added to the form. There is one .licx file per project; it is always in the root folder and is always named Licenses.licx.  
  
 **To correct this error**  
  
-   Reinstall [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
## See Also  
 [How to: License Components and Controls](http://msdn.microsoft.com/Library/8e66c1ed-a445-4b26-8185-990b6e2bbd57)