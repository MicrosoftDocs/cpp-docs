---
title: "NumberOfChars must be greater than zero | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbrTextFieldParser_NumberOfCharsMustBePositive"
ms.assetid: 3eea4bbf-cd49-4d19-adfb-0e2adf087065
caps.latest.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
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
# NumberOfChars must be greater than zero
When using the `PeekChars` method of the `TextFieldParser` object, you must supply a `NumberOfChars` value that is greater than `0`.  
  
### To correct this error  
  
-   Change `NumberOfChars` to a value that is greater than `0`.  
  
## See Also  
 [How to: Read From Text Files with Multiple Formats](../Topic/How%20to:%20Read%20From%20Text%20Files%20with%20Multiple%20Formats%20in%20Visual%20Basic.md)   
 [My.Computer.FileSystem.OpenTextFieldParser Method](http://msdn.microsoft.com/en-us/e5869f85-c078-485f-8323-8dc716494546)   
 [TextFieldParser.PeekChars Method](http://msdn.microsoft.com/en-us/4a180d26-d46d-4cc1-9af7-d23abe27c89b)   
 [Parsing Text Files with the TextFieldParser Object](/dotnet/visual-basic/developing-apps/programming/drives-directories-files/parsing-text-files-with-the-textfieldparser-object)   
 [TextFieldParser Object](/dotnet/visual-basic/language-reference/objects/textfieldparser-object)