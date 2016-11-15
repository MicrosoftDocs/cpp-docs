---
title: "Troubleshooting Exceptions: System.FormatException | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  
 For example, <xref:System.Int32.ToString%28System.String%29?displayProperty=fullName> takes a string parameter that identifies a standard or custom *format string* and returns the string representation of the number. The method throws a <xref:System.FormatException> If the format string is invalid or not supported, a  is thrown.  
  
### Composite Formatting  
 *Composite formatting* takes a list of objects and a composite format string as input. A composite format string consists of fixed text intermixed with indexed placeholders, called format items, that correspond to the objects in the list. The formatting operation yields a result string that consists of the original fixed text intermixed with the string representation of the objects in the list.  
  
 <xref:System.String.Format%2A?displayProperty=fullName> and <xref:System.Console.WriteLine%2A?displayProperty=fullName> are examples of methods that do composite formatting. Methods that use composite formatting throw a <xref:System.FormatException> if the format string is invalid or the index of a format item is less than zero, or greater than or equal to the number of arguments.  
  
### Parsing  
 *Parsing* is the process of converting a string that represents a .NET Framework base type into that base type. For example, a parsing operation is used to convert a string to a floating-point number or to a date and time value.  
  
 For example, <xref:System.Int32.Parse%28System.String%29?displayProperty=fullName><xref:System.DateTime.Parse%2A> converts the string representation of a date and time to its <xref:System.DateTime> equivalent by using culture-specific format information specified in the <xref:System.IformatProvider> parameter. If the string is not in the correct format, <xref:System.FormatException> is thrown.  
  
## Avoiding FormatExceptions  
 The <xref:System.FormatException> class reference article includes the common causes and solutions of <xref:System.FormatException> errors.  
  
 The MSDN Library sections [Formatting Types](http://msdn.microsoft.com/Library/0d1364da-5b30-4d42-8e6b-03378343343f) and [Parsing Strings](http://msdn.microsoft.com/Library/5e758b41-db93-456b-8999-99b7304b090d) contain information about correctly formatting and parsing types.  
  
 **Composite formatting**  
  
 [Composite Formatting](http://msdn.microsoft.com/Library/87b7d528-73f6-43c6-b71a-f23043039a49)  
  
 **Numeric types**  
  
|||  
|-|-|  
|[Standard Numeric Format Strings](http://msdn.microsoft.com/Library/580e57eb-ac47-4ffd-bccd-3a1637c2f467)|[Custom Numeric Format Strings](http://msdn.microsoft.com/Library/6f74fd32-6c6b-48ed-8241-3c2b86dea5f4)|  
|[Parsing Numeric Strings](http://msdn.microsoft.com/Library/e39324ee-72e5-42d4-a80d-bf3ee7fc6c59)||  
  
 **Date and Time and Timespan types**  
  
|||  
|-|-|  
|[Standard Date and Time Format Strings](http://msdn.microsoft.com/Library/bb79761a-ca08-44ee-b142-b06b3e2fc22b)|[Custom Date and Time Format Strings](http://msdn.microsoft.com/Library/98b374e3-0cc2-4c78-ab44-efb671d71984)|  
|[Standard TimeSpan Format Strings](http://msdn.microsoft.com/Library/9f6c95eb-63ae-4dcc-9c32-f81985c75794)|[Custom TimeSpan Format Strings](http://msdn.microsoft.com/Library/a63ebf55-7269-416b-b4f5-286f6c03bf0e)|  
|[Parsing Date and Time Strings](http://msdn.microsoft.com/Library/43bae51e-9b1d-41a6-a187-772c0d096d90)||  
  
 **Other types**  
  
|||  
|-|-|  
|[Enumeration Format Strings](http://msdn.microsoft.com/Library/dd1ff672-1052-42cf-8666-4924fb6cd1a1)|[Parsing Other Strings](http://msdn.microsoft.com/Library/d139bc00-3c4e-4d78-ac9a-5c951b258d28)|