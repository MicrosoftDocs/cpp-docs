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
 [Extension Methods](http://msdn.microsoft.com/library/b8020aae-374d-46a9-bcb7-8cc2390b93b6)   
 [Relaxed Delegate Conversion](http://msdn.microsoft.com/library/64f371d0-5416-4f65-b23b-adcbf556e81c)   
 [Delegates](http://msdn.microsoft.com/library/410b60dc-5e60-4ec0-bfae-426755a2ee28)   
 [Widening and Narrowing Conversions](http://msdn.microsoft.com/library/058c3152-6c28-4268-af44-2209e774f0bd)   
 [NOT IN BUILD: Delegates and the AddressOf Operator](http://msdn.microsoft.com/en-us/7b2ed932-8598-4355-b2f7-5cedb23ee86f)