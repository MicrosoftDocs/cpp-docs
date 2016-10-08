---
title: "iostreams Conventions"
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
ms.topic: article
ms.assetid: 9fe5ded0-37a1-48d1-9671-c81ffc4760ad
caps.latest.revision: 9
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
# iostreams Conventions
The iostreams headers support conversions between text and encoded forms, and input and output to external files:  
  
|||  
|-|-|  
|[<fstream\>](../VS_visualcpp/-fstream-.md)|[<iomanip\>](../VS_visualcpp/-iomanip-.md)|  
|[<ios\>](../VS_visualcpp/-ios-.md)|[<iosfwd\>](../VS_visualcpp/-iosfwd-.md)|  
|[<iostream\>](../VS_visualcpp/-iostream-.md)|[<istream\>](../VS_visualcpp/-istream-.md)|  
|[<ostream\>](../VS_visualcpp/-ostream-.md)|[<sstream\>](../VS_visualcpp/-sstream-.md)|  
|[<streambuf\>](../VS_visualcpp/-streambuf-.md)|[<strstream\>](../VS_visualcpp/-strstream-.md)|  
  
 The simplest use of iostreams requires only that you include the header [<iostream\>](../VS_visualcpp/-iostream-.md). You can then extract values from [cin](../Topic/cin.md) or [wcin](../Topic/wcin.md) to read the standard input. The rules for doing so are outlined in the description of the class [basic_istream Class](../VS_visualcpp/basic_istream-Class.md). You can also insert values to [cout](../Topic/cout.md) or [wcout](../Topic/wcout.md) to write the standard output. The rules for doing so are outlined in the description of the class [basic_ostream Class](../VS_visualcpp/basic_ostream-Class.md). Format control common to both extractors and insertors is managed by the class [basic_ios Class](../VS_visualcpp/basic_ios-Class.md). Manipulating this format information in the guise of extracting and inserting objects is the province of several manipulators.  
  
 You can perform the same iostreams operations on files that you open by name, using the classes declared in [<fstream\>](../VS_visualcpp/-fstream-.md). To convert between iostreams and objects of class [basic_string Class](../VS_visualcpp/basic_string-Class.md), use the classes declared in [<sstream\>](../VS_visualcpp/-sstream-.md). To do the same with C strings, use the classes declared in [<strstream\>](../VS_visualcpp/-strstream-.md).  
  
 The remaining headers provide support services, typically of direct interest to only the most advanced users of the iostreams classes.  
  
## See Also  
 [STL Overview](../VS_visualcpp/C---Standard-Library-Overview.md)   
 [iostream Programming](../VS_visualcpp/iostream-Programming.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)