---
title: "&lt;type&gt; parameters cannot be declared &#39;ParamArray&#39; | Microsoft Docs"
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
  - "bc33009"
  - "vbc33009"
helpviewer_keywords: 
  - "BC33009"
ms.assetid: faba9aef-ca4e-4c4d-934c-a3e3d3fa3c3e
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &lt;type&gt; parameters cannot be declared &#39;ParamArray&#39;
A definition of a delegate, event, or operator declares a [ParamArray](http://msdn.microsoft.com/library/a5f18789-92bd-488f-9c7e-cf3719963635) parameter.  
  
 `ParamArray` parameters are allowed only on `Declare`, `Function`, `Property`, and `Sub` parameters.  
  
 **Error ID:** BC33009  
  
### To correct this error  
  
-   Remove the `ParamArray` keyword from the parameter list.  
  
-   If you are defining an operator, you might be able to achieve the `ParamArray` functionality with a series of overloads.  
  
-   If you are defining a delegate or event, you must rework the overall logic of this part of your application. You cannot use [Optional](http://msdn.microsoft.com/library/4571ce88-a539-4115-b230-54eb277c6aa7) or `ParamArray` parameters, or overloaded versions, on delegate or event parameters.  
  
## See Also  
 [Overloads](http://msdn.microsoft.com/library/0c6820b8-25b2-4664-bc59-5ca93c99c042)   
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)