---
title: "Troubleshooting Exceptions: Microsoft.Office.Tools.InvalidRangeException | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "Microsoft.Office.Tools.InvalidRangeException exception"
ms.assetid: 0deea25b-1152-40b6-89e2-e2e9c85f7dc0
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: Microsoft.Office.Tools.InvalidRangeException
An <xref:Microsoft.Office.Tools.InvalidRangeException> exception is thrown when you programmatically create a view control with a range that spans multiple areas.  
  
## Associated Tips  
 Ensure that the area covered by the range does not overlap another range.  
 Ranges cannot overlap.  
  
 Ensure when you programmatically create a view control that you include only a single area  
 -   Ensure when you programmatically create a view control that you include only a single area; that is, all the cells are together.  
  
## See Also  
 <xref:Microsoft.Office.Tools.InvalidRangeException>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)