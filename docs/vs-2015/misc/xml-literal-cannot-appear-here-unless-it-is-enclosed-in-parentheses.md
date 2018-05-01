---
title: "XML literal cannot appear here unless it is enclosed in parentheses | Microsoft Docs"
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
  - "bc31198"
  - "vbc31198"
helpviewer_keywords: 
  - "BC31198"
ms.assetid: 97b16076-39ff-430a-9c65-073d01bcb08e
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# XML literal cannot appear here unless it is enclosed in parentheses
An XML literal declaration is used in an expression in a location that is ambiguous to the [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] compiler. That is, the [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] compiler cannot determine whether the less-than character (<) is intended as a comparative operator or the start of an XML literal. The following code provides an example:  
  
 [Visual Basic]  
  
```  
' Generates an error.  
Dim queryResult = From element In elements _  
                  Where <sample>Value</sample> = "Value" _  
                  Select element  
```  
  
 **Error ID:** BC31198  
  
### To correct this error  
  
-   Enclose the XML literal declaration in parentheses, as shown in the following example:  
  
    ```vb  
    Dim queryResult = From element In elements _  
                      Where (<sample> Value</sample>) = "Value" _  
                      Select element  
    ```  
  
-   Modify your code to refer to an existing XML literal, as shown in the following example:  
  
    ```vb  
    Dim queryResult = From element In elements _  
                      Where e.<sample>.Value = "Value" _  
                      Select element  
    ```  
  
## See Also  
 [XML Literals](http://msdn.microsoft.com/library/16b28c40-8768-423f-bd9c-22ff10de2b54)   
 [XML Axis Properties](http://msdn.microsoft.com/library/7e400e20-5d1e-4d22-a65c-9df79d5c1621)   
 [XML](http://msdn.microsoft.com/library/954b6e40-1246-4185-a018-4061724fcae9)