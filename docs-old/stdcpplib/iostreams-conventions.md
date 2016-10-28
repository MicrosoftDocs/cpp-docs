---
title: "iostreams Conventions"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "iostream header"
  - "Standard C++ Library, iostreams"
ms.assetid: 9fe5ded0-37a1-48d1-9671-c81ffc4760ad
caps.latest.revision: 9
ms.author: "corob"
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
# iostreams Conventions
The iostreams headers support conversions between text and encoded forms, and input and output to external files:  
  
|||  
|-|-|  
|[\<fstream>](../stdcpplib/-fstream-.md)|[\<iomanip>](../stdcpplib/-iomanip-.md)|  
|[\<ios>](../stdcpplib/-ios-.md)|[\<iosfwd>](../stdcpplib/-iosfwd-.md)|  
|[\<iostream>](../stdcpplib/-iostream-.md)|[\<istream>](../stdcpplib/-istream-.md)|  
|[\<ostream>](../stdcpplib/-ostream-.md)|[\<sstream>](../stdcpplib/-sstream-.md)|  
|[\<streambuf>](../stdcpplib/-streambuf-.md)|[\<strstream>](../stdcpplib/-strstream-.md)|  
  
 The simplest use of iostreams requires only that you include the header [\<iostream>](../stdcpplib/-iostream-.md). You can then extract values from [cin](../Topic/cin.md) or [wcin](../Topic/wcin.md) to read the standard input. The rules for doing so are outlined in the description of the class [basic_istream Class](../stdcpplib/basic_istream-class.md). You can also insert values to [cout](../Topic/cout.md) or [wcout](../Topic/wcout.md) to write the standard output. The rules for doing so are outlined in the description of the class [basic_ostream Class](../stdcpplib/basic_ostream-class.md). Format control common to both extractors and insertors is managed by the class [basic_ios Class](../stdcpplib/basic_ios-class.md). Manipulating this format information in the guise of extracting and inserting objects is the province of several manipulators.  
  
 You can perform the same iostreams operations on files that you open by name, using the classes declared in [\<fstream>](../stdcpplib/-fstream-.md). To convert between iostreams and objects of class [basic_string Class](../stdcpplib/basic_string-class.md), use the classes declared in [\<sstream>](../stdcpplib/-sstream-.md). To do the same with C strings, use the classes declared in [\<strstream>](../stdcpplib/-strstream-.md).  
  
 The remaining headers provide support services, typically of direct interest to only the most advanced users of the iostreams classes.  
  
## See Also  
 [STL Overview](../stdcpplib/c---standard-library-overview.md)   
 [iostream Programming](../stdcpplib/iostream-programming.md)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)