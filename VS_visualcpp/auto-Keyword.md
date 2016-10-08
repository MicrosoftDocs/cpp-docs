---
title: "auto Keyword"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 744a41c0-2510-4140-a1be-96257e722908
caps.latest.revision: 14
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
# auto Keyword
The `auto` keyword is a declaration specifier. However, the C++ standard defines an original and a revised meaning for this keyword. Before Visual C++ 2010, the `auto` keyword declares a variable in the *automatic* storage class; that is, a variable that has a local lifetime. Starting with Visual C++ 2010, the`auto` keyword declares a variable whose type is deduced from the initialization expression in its declaration. The [/Zc:auto&#91;-&#93;](../VS_visualcpp/-Zc-auto--Deduce-Variable-Type-.md) compiler option controls the meaning of the `auto` keyword.  
  
## Syntax  
  
```cpp  
auto declarator ;  
auto declarator initializer;  
```  
  
## Remarks  
 The definition of the `auto` keyword changes in the C++ programming language, but not in the C programming language.  
  
 The following topics describe the `auto` keyword and the corresponding compiler option:  
  
-   [auto](../VS_visualcpp/auto--C---.md) describes the new definition of the `auto` keyword.  
  
-   [(NOTINBUILD)auto Keyword (Storage-Class Specifier)](assetId:///c7d0cecf-393d-4058-a6e6-b39e31d9edb0) describes the original definition of the `auto` keyword.  
  
-   [/Zc:auto (Deduce Variable Type)](../VS_visualcpp/-Zc-auto--Deduce-Variable-Type-.md) describes the compiler option that tells the compiler which definition of the `auto` keyword to use.  
  
## See Also  
 [(NOTINBUILD)Storage-Class Specifiers](assetId:///10b3d22d-cb40-450b-994b-08cf9a211b6c)   
 [Keywords](../VS_visualcpp/Keywords--C---.md)