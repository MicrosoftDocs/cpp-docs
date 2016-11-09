---
title: "Troubleshooting Exceptions: Microsoft.VisualBasic.FileIO.TextFieldParser.MalformedLineException | Microsoft Docs"
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
  - "Microsoft.VisualStudio.Tools.Applications.Runtime.ControlNotFoundException exception"
ms.assetid: d780b8cc-c3f1-45ed-8f8e-3f8728a4b770
caps.latest.revision: 14
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
# Troubleshooting Exceptions: Microsoft.VisualBasic.FileIO.TextFieldParser.MalformedLineException
A <xref:Microsoft.VisualBasic.FileIO.MalformedLineException> exception is thrown when a <xref:Microsoft.VisualBasic.FileIO.TextFieldParser> cannot parse a row using the specified format.  
  
 The `Error Line` property of the exception object contains the text of the line causing the error.  
  
## Associated Tips  
 **Check to ensure the TextFieldType and Delimiter parameters are defined properly**  
 The `TextFieldType` (delimited or fixed-width) must match the format of the file. If the `TextFieldType` is `FixedWidth`, check that the `FieldWidths` property has been set correctly. If the `TextFieldType` is `Delimited`, check that the `Delimiters` property has been set correctly.  
  
## See Also  
 <xref:Microsoft.VisualBasic.FileIO.MalformedLineException>   
 [Parsing Text Files with the TextFieldParser Object](/dotnet/visual-basic/developing-apps/programming/drives-directories-files/parsing-text-files-with-the-textfieldparser-object)   
 [How to: Read From Comma-Delimited Text Files](../Topic/How%20to:%20Read%20From%20Comma-Delimited%20Text%20Files%20in%20Visual%20Basic.md)   
 [How to: Read From Fixed-width Text Files](../Topic/How%20to:%20Read%20From%20Fixed-width%20Text%20Files%20in%20Visual%20Basic.md)