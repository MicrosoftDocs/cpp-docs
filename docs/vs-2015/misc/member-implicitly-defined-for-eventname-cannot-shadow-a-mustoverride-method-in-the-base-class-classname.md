---
title: "&#39;&lt;member&gt;&#39;, implicitly defined for &#39;&lt;eventname&gt;&#39;, cannot shadow a &#39;MustOverride&#39; method in the base &lt;class&gt; &#39;&lt;classname&gt;&#39; | Microsoft Docs"
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
  - "vbc31413"
  - "bc31413"
helpviewer_keywords: 
  - "BC31413"
ms.assetid: 071706ce-a394-48b6-9afa-751cb50b2576
caps.latest.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;member&gt;&#39;, implicitly defined for &#39;&lt;eventname&gt;&#39;, cannot shadow a &#39;MustOverride&#39; method in the base &lt;class&gt; &#39;&lt;classname&gt;&#39;
The specified event implicitly declares a member with the same name as a method declared with the `MustOverride` modifier.  
  
 **Error ID:** BC31413  
  
### To correct this error  
  
-   Remove the `MustOverride` modifier from the method in the base class or give the property or method a unique name.  
  
## See Also  
 [MustOverride](http://msdn.microsoft.com/library/6e9d9ad6-bb64-433f-b32b-3ef84293bf96)   
 [Events](http://msdn.microsoft.com/library/8fb0353a-e41b-4e23-b78f-da65db832f70)