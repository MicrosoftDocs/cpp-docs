---
title: "TextFieldParser does not support comment tokens that contain whitespace | Microsoft Docs"
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
  - "vbrTextFieldParser_WhitespaceInToken"
ms.assetid: 55107656-270e-4bbb-841a-478904df8e07
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# TextFieldParser does not support comment tokens that contain whitespace
A comment token that contains white space has been supplied. The `TextFieldParser` does not support comment tokens that contain white space unless the white space occurs at the beginning of the token. White space occurring at the beginning of a token is ignored.  
  
### To correct this error  
  
-   Supply a correct comment token.  
  
## See Also  
 [TextFieldParser.CommentTokens Property](http://msdn.microsoft.com/en-us/2e6b6435-4bee-4c14-a353-e8f2c82e2d61)   
 [Parsing Text Files with the TextFieldParser Object](http://msdn.microsoft.com/library/fc31d6e6-af0c-403f-8a00-d556b2c57567)   
 [TextFieldParser Object](http://msdn.microsoft.com/library/d44bd2b0-7dfc-410b-a48b-534c1e97460b)