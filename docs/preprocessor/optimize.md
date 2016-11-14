---
title: "optimize | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.optimize"
  - "optimize_CPP"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "pragmas, optimize"
  - "optimize pragma"
ms.assetid: cb13c1cc-186a-45bc-bee7-95a8de7381cc
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# optimize
Specifies optimizations to be performed on a function-by-function basis.  
  
## Syntax  
  
```  
  
#pragma optimize( "[optimization-list]", {on | off} )  
```  
  
## Remarks  
 The **optimize** pragma must appear outside a function and takes effect at the first function defined after the pragma is seen. The **on** and **off** arguments turn options specified in the *optimization-list* on or off.  
  
 The *optimization-list* can be zero or more of the parameters shown in the following table.  
  
### Parameters of the optimize Pragma  
  
|Parameter(s)|Type of optimization|  
|--------------------|--------------------------|  
|**g**|Enable global optimizations.|  
|**s** or **t**|Specify short or fast sequences of machine code.|  
|**y**|Generate frame pointers on the program stack.|  
  
 These are the same letters used with the [/O](../build/reference/o-options-optimize-code.md) compiler options. For example, the following pragma is equivalent to the **/Os** compiler option:  
  
```  
#pragma optimize( "ts", on )  
```  
  
 Using the **optimize** pragma with the empty string (**""**) is a special form of the directive:  
  
 When you use the **off** parameter, it turns the optimizations, listed in the table earlier in this topic, off.  
  
 When you use the **on** parameter, it resets the optimizations to those that you specified with the [/O](../build/reference/o-options-optimize-code.md) compiler option.  
  
```  
#pragma optimize( "", off )  
.  
.  
.  
#pragma optimize( "", on )   
```  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)