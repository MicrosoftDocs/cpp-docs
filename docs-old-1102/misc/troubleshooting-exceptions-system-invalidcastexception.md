---
title: "Troubleshooting Exceptions: System.InvalidCastException"
ms.custom: ""
ms.date: "10/19/2016"
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
  - "InvalidCastException class"
ms.assetid: a855dfe1-5c06-45a6-9c2f-c9e799ccf8f0
caps.latest.revision: 23
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
# Troubleshooting Exceptions: System.InvalidCastException
An <xref:System.InvalidCastException> exception is thrown when a failure occurs during an explicit reference conversion. Reference conversions are conversions from one reference type to another. While they may change the type of the reference, they never change the type or value of the conversion's target. Casting objects from one type to another is a frequent cause for this exception.  
  
## Associated Tips  
 **Check source types against destination types to make sure the conversion is valid.**  
 For information on conversions supported by the system, see <xref:System.Convert>.  
  
## Remarks  
 For an explicit reference conversion to be successful, the source value must be Null (`Nothing` in Visual Basic), or the object type referenced by the source argument must be convertible to the destination type by an implicit reference conversion.  
  
 When a Visual Basic 6.0 application with a call to a custom event in a user control is upgraded to a newer version of Visual Basic and run, this exception may occur with the additional information, "Specified cast is not valid." To address this error, find the following line of code in `Form1`:  
  
 `Call UserControl11_MyCustomEvent(UserControl11, New UserControl1.MyCustomEventEventArgs(5))`  
  
 And replace it with:  
  
 `Call UserControl11_MyCustomEvent(UserControl11(0), New UserControl1.MyCustomEventEventArgs(5))`  
  
## See Also  
 <xref:System.InvalidCastException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [How to: Convert an Object to Another Type in Visual Basic](../Topic/How%20to:%20Convert%20an%20Object%20to%20Another%20Type%20in%20Visual%20Basic.md)   
 [Converting Strings to .NET Framework Data Types](../Topic/Converting%20Strings%20to%20.NET%20Framework%20Data%20Types.md)   
 [How to: Implement User-Defined Conversions Between Structs](../Topic/How%20to:%20Implement%20User-Defined%20Conversions%20Between%20Structs%20\(C%23%20Programming%20Guide\).md)