---
title: "_bstr_t Relational Operators | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _bstr_t Relational Operators
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_bstr_t Relational Operators](https://docs.microsoft.com/cpp/cpp/bstr-t-relational-operators).  
  
Microsoft Specific**  
  
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





