---
title: "Preprocessor Directives"
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
ms.assetid: e0fc4564-b6cf-4a36-bf51-6ccd7abd0a94
caps.latest.revision: 7
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
# Preprocessor Directives
Preprocessor directives, such as `#define` and **#ifdef**, are typically used to make source programs easy to change and easy to compile in different execution environments. Directives in the source file tell the preprocessor to perform specific actions. For example, the preprocessor can replace tokens in the text, insert the contents of other files into the source file, or suppress compilation of part of the file by removing sections of text. Preprocessor lines are recognized and carried out before macro expansion. Therefore, if a macro expands into something that looks like a preprocessor command, that command is not recognized by the preprocessor.  
  
 Preprocessor statements use the same character set as source file statements, with the exception that escape sequences are not supported. The character set used in preprocessor statements is the same as the [execution character set](assetId:///a7901c61-524d-47c6-beb6-d9dacc2e72ed). The preprocessor also recognizes negative character values.  
  
 The preprocessor recognizes the following directives:  
  
|||||  
|-|-|-|-|  
|[#define](../VS_visualcpp/#define-Directive--C-C---.md)|[#error](../VS_visualcpp/#error-Directive--C-C---.md)|[#import](../VS_visualcpp/#import-Directive--C---.md)|[#undef](../VS_visualcpp/#undef-Directive--C-C---.md)|  
|[#elif](../VS_visualcpp/#if--#elif--#else--and-#endif-Directives--C-C---.md)|[#if](../VS_visualcpp/#if--#elif--#else--and-#endif-Directives--C-C---.md)|[#include](../VS_visualcpp/#include-Directive--C-C---.md)|[#using](../VS_visualcpp/#using-Directive--C---.md)|  
|[#else](../VS_visualcpp/#if--#elif--#else--and-#endif-Directives--C-C---.md)|[#ifdef](../VS_visualcpp/#ifdef-and-#ifndef-Directives--C-C---.md)|[#line](../VS_visualcpp/#line-Directive--C-C---.md)|[#endif](../VS_visualcpp/#if--#elif--#else--and-#endif-Directives--C-C---.md)|  
|[#ifndef](../VS_visualcpp/#ifdef-and-#ifndef-Directives--C-C---.md)|[#pragma](../VS_visualcpp/Pragma-Directives-and-the-__Pragma-Keyword.md)|||  
  
 The number sign (**#**) must be the first nonwhite-space character on the line containing the directive; white-space characters can appear between the number sign and the first letter of the directive. Some directives include arguments or values. Any text that follows a directive (except an argument or value that is part of the directive) must be preceded by the single-line comment delimiter (**//**) or enclosed in comment delimiters (**/\* \*/**). Lines containing preprocessor directives can be continued by immediately preceding the end-of-line marker with a backslash (**\\**).  
  
 Preprocessor directives can appear anywhere in a source file, but they apply only to the remainder of the source file.  
  
## See Also  
 [Preprocessor Operators](../VS_visualcpp/Preprocessor-Operators.md)   
 [Predefined Macros](../VS_visualcpp/Predefined-Macros.md)   
 [C/C++ Preprocessor Reference](../VS_visualcpp/C-C---Preprocessor-Reference.md)