---
title: "Troubleshooting Exceptions: System.FormatException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
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
  - "FormatException class"
ms.assetid: b2a4f55e-da87-4915-a053-59eb1595993d
caps.latest.revision: 21
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
# Troubleshooting Exceptions: System.FormatException
A <xref:System.FormatException> exception is thrown by a method that parses or formats a type when the format of an argument does not meet the parameter specifications of the method.  
  
## In this article  
  
## Causing Format Exceptions  
  
### Formatting  
 *Formatting* is the process of converting an instance of a class, structure, or enumeration value to its string representation, often so that the resulting string can be displayed to users or be used to save the state of the object.  
  
 For example, <xref:System.Int32.ToString(System.String)?displayProperty=fullName> takes a string parameter that identifies a standard or custom *format string* and returns the string representation of the number. The method throws a <xref:System.FormatException> If the format string is invalid or not supported, a  is thrown.  
  
### Composite Formatting  
 *Composite formatting* takes a list of objects and a composite format string as input. A composite format string consists of fixed text intermixed with indexed placeholders, called format items, that correspond to the objects in the list. The formatting operation yields a result string that consists of the original fixed text intermixed with the string representation of the objects in the list.  
  
 <xref:System.String.Format*?displayProperty=fullName> and <xref:System.Console.WriteLine*?displayProperty=fullName> are examples of methods that do composite formatting. Methods that use composite formatting throw a <xref:System.FormatException> if the format string is invalid or the index of a format item is less than zero, or greater than or equal to the number of arguments.  
  
### Parsing  
 *Parsing* is the process of converting a string that represents a .NET Framework base type into that base type. For example, a parsing operation is used to convert a string to a floating-point number or to a date and time value.  
  
 For example, <xref:System.Int32.Parse(System.String)?displayProperty=fullName><xref:System.DateTime.Parse*> converts the string representation of a date and time to its <xref:System.DateTime> equivalent by using culture-specific format information specified in the <xref:System.IformatProvider> parameter. If the string is not in the correct format, <xref:System.FormatException> is thrown.  
  
## Avoiding FormatExceptions  
 The <xref:System.FormatException> class reference article includes the common causes and solutions of <xref:System.FormatException> errors.  
  
 The MSDN Library sections [Formatting Types](../Topic/Formatting%20Types%20in%20the%20.NET%20Framework.md) and [Parsing Strings](../Topic/Parsing%20Strings%20in%20the%20.NET%20Framework.md) contain information about correctly formatting and parsing types.  
  
 **Composite formatting**  
  
 [Composite Formatting](../Topic/Composite%20Formatting.md)  
  
 **Numeric types**  
  
|||  
|-|-|  
|[Standard Numeric Format Strings](../Topic/Standard%20Numeric%20Format%20Strings.md)|[Custom Numeric Format Strings](../Topic/Custom%20Numeric%20Format%20Strings.md)|  
|[Parsing Numeric Strings](../Topic/Parsing%20Numeric%20Strings%20in%20the%20.NET%20Framework.md)||  
  
 **Date and Time and Timespan types**  
  
|||  
|-|-|  
|[Standard Date and Time Format Strings](../Topic/Standard%20Date%20and%20Time%20Format%20Strings.md)|[Custom Date and Time Format Strings](../Topic/Custom%20Date%20and%20Time%20Format%20Strings.md)|  
|[Standard TimeSpan Format Strings](../Topic/Standard%20TimeSpan%20Format%20Strings.md)|[Custom TimeSpan Format Strings](../Topic/Custom%20TimeSpan%20Format%20Strings.md)|  
|[Parsing Date and Time Strings](../Topic/Parsing%20Date%20and%20Time%20Strings%20in%20the%20.NET%20Framework.md)||  
  
 **Other types**  
  
|||  
|-|-|  
|[Enumeration Format Strings](../Topic/Enumeration%20Format%20Strings.md)|[Parsing Other Strings](../Topic/Parsing%20Other%20Strings%20in%20the%20.NET%20Framework.md)|