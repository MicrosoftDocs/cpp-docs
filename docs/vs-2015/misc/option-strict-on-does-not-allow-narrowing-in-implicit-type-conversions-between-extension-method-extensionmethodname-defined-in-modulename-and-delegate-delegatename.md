---
title: "Option Strict On does not allow narrowing in implicit type conversions between extension method &#39;&lt;extensionmethodname&gt;&#39; defined in &#39;&lt;modulename&gt;&#39; and delegate &#39;&lt;delegatename&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc36709"
  - "vbc36709"
helpviewer_keywords: 
  - "BC36709"
ms.assetid: 95d8c833-3525-411b-98e8-b7d3f61f75c9
caps.latest.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On does not allow narrowing in implicit type conversions between extension method &#39;&lt;extensionmethodname&gt;&#39; defined in &#39;&lt;modulename&gt;&#39; and delegate &#39;&lt;delegatename&gt;&#39;
With `Option Strict` on, you cannot have a narrowing conversion from the data type of a parameter in a delegate to the corresponding parameter of an extension method assigned to a variable of that delegate type. The data type of the delegate parameter must widen to the data type of the extension method.  
  
 **Error ID:** BC36709  
  
### To correct this error  
  
-   Change the data type of the parameter in the delegate or the extension method so that the required widening relationship exists.  
  
## See Also  
 [Extension Methods](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)   
 [Relaxed Delegate Conversion](../Topic/Relaxed%20Delegate%20Conversion%20\(Visual%20Basic\).md)   
 [Delegates](../Topic/Delegates%20\(Visual%20Basic\).md)   
 [Widening and Narrowing Conversions](../Topic/Widening%20and%20Narrowing%20Conversions%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Delegates and the AddressOf Operator](http://msdn.microsoft.com/en-us/7b2ed932-8598-4355-b2f7-5cedb23ee86f)