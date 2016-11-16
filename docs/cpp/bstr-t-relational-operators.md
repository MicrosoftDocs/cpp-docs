---
title: "_bstr_t Relational Operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_bstr_t::operator>"
  - "_bstr_t::operator=="
  - "_bstr_t::operator>="
  - "_bstr_t::operator!="
  - "_bstr_t::operator<"
  - "_bstr_t::operator<="
  - "_bstr_t::operator!"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ">= operator, comparing specific objects"
  - "operator<=, bstr"
  - "!= operator"
  - "operator ==, bstr"
  - "operator!=, relational operators"
  - "< operator, comparing specific objects"
  - "relational operators, _bstr_t class"
  - "operator==, bstr"
  - "<= operator, with specific objects"
  - "operator <=, bstr"
  - "operator >=, bstr"
  - "operator !=, relational operators"
  - "> operator, comparing specific objects"
  - "operator<, bstr"
  - "== operator, with specific Visual C++ objects"
  - "operator>=, bstr"
  - "operator <, bstr"
  - "operator >, bstr"
ms.assetid: e153da72-37c3-4d8a-b8eb-730d65da64dd
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# _bstr_t Relational Operators
**Microsoft Specific**  
  
 Compares two `_bstr_t` objects.  
  
## Syntax  
  
```  
  
      bool operator!( ) const throw( );   
bool operator==(  
   const _bstr_t& str   
) const throw( );  
bool operator!=(  
   const _bstr_t& str   
) const throw( );  
bool operator<(  
   const _bstr_t& str   
) const throw( );  
bool operator>(  
   const _bstr_t& str   
) const throw( );  
bool operator<=(  
   const _bstr_t& str   
) const throw( );  
bool operator>=(  
   const _bstr_t& str   
) const throw( );  
```  
  
## Remarks  
 These operators compare two `_bstr_t` objects lexicographically. The operators return **true** if the comparisons hold, otherwise return **false**.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_bstr_t Class](../cpp/bstr-t-class.md)