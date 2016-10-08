---
title: "C String Literals"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 4b05523e-49a2-4900-b21a-754350af3328
caps.latest.revision: 11
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# C String Literals
A "string literal" is a sequence of characters from the source character set enclosed in double quotation marks (**" "**). String literals are used to represent a sequence of characters which, taken together, form a null-terminated string. You must always prefix wide-string literals with the letter **L**.  
  
## Syntax  
 *string-literal*:  
 **"** *s-char-sequence* opt**"**  
  
 **L"** *s-char-sequence* opt**"**  
  
 *s-char-sequence*:  
 *s-char*  
  
 *s-char-sequence s-char*  
  
 *s-char*:  
 any member of the source character set except the double quotation mark ("), backslash (\\), or newline character  
  
 *escape-sequence*  
  
 The example below is a simple string literal:  
  
```  
char *amessage = "This is a string literal.";  
```  
  
 All escape codes listed in the [Escape Sequences](../VS_visualcpp/Escape-Sequences.md) table are valid in string literals. To represent a double quotation mark in a string literal, use the escape sequence **\\"**. The single quotation mark (**'**) can be represented without an escape sequence. The backslash (**\\**) must be followed with a second backslash (**\\\\**) when it appears within a string. When a backslash appears at the end of a line, it is always interpreted as a line-continuation character.  
  
## See Also  
 [Elements of C](../VS_visualcpp/Elements-of-C.md)