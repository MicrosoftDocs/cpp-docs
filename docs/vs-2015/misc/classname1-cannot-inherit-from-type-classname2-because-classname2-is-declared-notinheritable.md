---
title: "&#39;&lt;classname1&gt;&#39; cannot inherit from &lt;type&gt; &#39;&lt;classname2&gt;&#39; because &#39;&lt;classname2&gt;&#39; is declared &#39;NotInheritable&#39; | Microsoft Docs"
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
  - "vbc30299"
  - "bc30299"
helpviewer_keywords: 
  - "BC30299"
ms.assetid: 627d50f5-9e75-495d-93f7-50096ba2ea08
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;classname1&gt;&#39; cannot inherit from &lt;type&gt; &#39;&lt;classname2&gt;&#39; because &#39;&lt;classname2&gt;&#39; is declared &#39;NotInheritable&#39;
A class attempts to inherit from another class, but the desired base class is specified as `NotInheritable`. `NotInheritable` classes are used primarily to prevent unintended derivation.  
  
 **Error ID:** BC30299  
  
### To correct this error  
  
-   Remove the `NotInheritable` keyword from the definition of the desired base class, or remove the `Inherits` statement.  
  
## See Also  
 [Inheritance Basics](http://msdn.microsoft.com/library/dfc8deba-f5b3-4d1d-a937-7cb826446fc5)   
 [NotInheritable](http://msdn.microsoft.com/library/5c4da7c9-9562-4653-a947-1972e992f9f9)   
 [Inherits Statement](http://msdn.microsoft.com/library/9e6fe042-9af3-4341-8093-fc3537770cf2)