---
title: "Project property &#39;property&#39; is set to an invalid value and will be defaulted to FALSE. &lt;reason&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.projfile_bogus_data"
ms.assetid: 5de42f8d-8536-43ae-9991-f1b10053fcd1
caps.latest.revision: 8
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
# Project property &#39;property&#39; is set to an invalid value and will be defaulted to FALSE. &lt;reason&gt;
A persisted value for a `Boolean` property is not one of the following:  
  
-   1 or 0  
  
-   On or Off  
  
-   true or false  
  
 This error is most likely caused by editing the project file by hand.  
  
 **To correct this error**  
  
-   Edit the project file again and restore it to a satisfactory condition.  
  
     The affected property's value will be set to false.  
  
## See Also  
 [NIB: Project Properties (Visual Studio)](http://msdn.microsoft.com/en-us/eb4c97ed-f667-4850-98d0-6e2a4d21bbca)