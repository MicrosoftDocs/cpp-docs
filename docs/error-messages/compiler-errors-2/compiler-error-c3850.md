---
title: "Compiler Error C3850 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3850"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3850"
ms.assetid: 028f3a37-f3ad-4ebc-9168-3cdea47524d4
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
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
# Compiler Error C3850
'char': a universal-character-name specifies an invalid character  
  
 Characters represented as universal character names must represent valid Unicode code points in the range 0-10FFFF. A universal character name cannot contain a value in the Unicode surrogate range, D800-DFFF, or an encoded surrogate pair. The compiler generates the surrogate pair from a valid code point automatically.  
  
 In code compiled as C, a universal character name may not represent a character in the range 0000-009F, inclusive, with the exceptions of 0024 ('$'), 0040 ('@') and 0060 ('`').  
  
 In code compiled as C++, a universal character name may use any valid Unicode code point in a string or character literal. Outside of a literal, a universal character name may not represent a control character in the ranges 0000-001F or 007F-009F, both inclusive, or a member of the basic source character set.  For more information, see [Character Sets](../../cpp/character-sets2.md).  
  
## Example  
 The following sample generates C3850, and shows how to fix it:  
  
```cpp  
// C3850.cpp  
int main() {  
   int \u0019 = 0;   // C3850, not in allowed range for an identifier  
   const wchar_t * wstr_bad  = L"\UD840DC8A"; // C3850, UCN is surrogate pair  
   const wchar_t * wstr_good = L"\U0002008A"; // Okay, UCN is valid code point  
}  
```