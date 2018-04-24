---
title: "Troubleshooting Exceptions: Microsoft.VisualBasic.FileIO.TextFieldParser.MalformedLineException | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
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
  - "Microsoft.VisualStudio.Tools.Applications.Runtime.ControlNotFoundException exception"
ms.assetid: d780b8cc-c3f1-45ed-8f8e-3f8728a4b770
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: Microsoft.VisualBasic.FileIO.TextFieldParser.MalformedLineException
A <xref:Microsoft.VisualBasic.FileIO.MalformedLineException> exception is thrown when a <xref:Microsoft.VisualBasic.FileIO.TextFieldParser> cannot parse a row using the specified format.  
  
 The `Error Line` property of the exception object contains the text of the line causing the error.  
  
## Associated Tips  
 **Check to ensure the TextFieldType and Delimiter parameters are defined properly**  
 The `TextFieldType` (delimited or fixed-width) must match the format of the file. If the `TextFieldType` is `FixedWidth`, check that the `FieldWidths` property has been set correctly. If the `TextFieldType` is `Delimited`, check that the `Delimiters` property has been set correctly.  
  
## See Also  
 <xref:Microsoft.VisualBasic.FileIO.MalformedLineException>   
 [Parsing Text Files with the TextFieldParser Object](http://msdn.microsoft.com/library/fc31d6e6-af0c-403f-8a00-d556b2c57567)   
 [How to: Read From Comma-Delimited Text Files](http://msdn.microsoft.com/library/a8413fe4-0dba-49c8-8692-44fb67a9ec4f)   
 [How to: Read From Fixed-width Text Files](http://msdn.microsoft.com/library/99be5692-967a-4e85-993e-cd18139a5a69)