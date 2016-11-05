---
title: "FxCopCmd Errors | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "FxCopCmd errors"
ms.assetid: bb614ed0-1b7c-4b56-99ae-da50ef6cfef9
caps.latest.revision: 12
ms.author: "susanno"
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
# FxCopCmd Errors
FxCopCmd does not consider all errors to be fatal. If FxCopCmd has sufficient information to perform a partial analysis, it performs the analysis and reports errors that occurred. The error code, which is a 32-bit integer, contains a bitwise combination of numeric values that correspond to errors.  
  
 The following table describes the error codes returned by FxCopCmd:  
  
|Error|Numeric value|  
|-----------|-------------------|  
|No errors|0x0|  
|Analysis error|0x1|  
|Rule exceptions|0x2|  
|Project load error|0x4|  
|Assembly load error|0x8|  
|Rule library load error|0x10|  
|Import report load error|0x20|  
|Output error|0x40|  
|Command line switch error|0x80|  
|Initialization error|0x100|  
|Assembly references error|0x200|  
|BuildBreakingMessage|0x400|  
|Unknown error|0x1000000|  
  
 The Analysis error is returned for fatal errors. It indicates that the analysis could not be completed. When applicable, the error code also contains the underlying cause of the fatal error. The following conditions generate fatal errors:  
  
-   The analysis could not be performed caused by insufficient input.  
  
-   The analysis threw an exception that is not handled by FxCopCmd.  
  
-   The specified project file could not be found or is corrupted.  
  
-   The output option was not specified or the file could not be written.  
  
    > [!NOTE]
    >  The FxCopCmd return code "Assembly references error" 0x200 by itself is a warning rather than an error. This return code indicates that missing indirect references were found but that FxCopCmd was able to handle them. It is a warning that there is a possibility that some analysis results might have been compromised. Consider "Assembly references error" return code as an error when it is combined with any other return code.  
  
## See Also  
 [Code Analysis Application Errors](/visual-studio/code-quality/code-analysis-application-errors)