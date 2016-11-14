---
title: "iostreams Conventions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "iostream header"
  - "Standard C++ Library, iostreams"
ms.assetid: 9fe5ded0-37a1-48d1-9671-c81ffc4760ad
caps.latest.revision: 10
author: "corob-msft"
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
|[\<fstream>](../standard-library/fstream.md)|[\<iomanip>](../standard-library/iomanip.md)|  
|[\<ios>](../standard-library/ios.md)|[\<iosfwd>](../standard-library/iosfwd.md)|  
|[\<iostream>](../standard-library/iostream.md)|[\<istream>](../standard-library/istream.md)|  
|[\<ostream>](../standard-library/ostream.md)|[\<sstream>](../standard-library/sstream.md)|  
|[\<streambuf>](../standard-library/streambuf.md)|[\<strstream>](../standard-library/strstream.md)|  
  
 The simplest use of iostreams requires only that you include the header [\<iostream>](../standard-library/iostream.md). You can then extract values from [cin](../standard-library/iostream.md#cin) or [wcin](../standard-library/iostream.md#wcin) to read the standard input. The rules for doing so are outlined in the description of the class [basic_istream Class](../standard-library/basic-istream-class.md). You can also insert values to [cout](../standard-library/iostream.md#cout) or [wcout](../standard-library/iostream.md#wcout) to write the standard output. The rules for doing so are outlined in the description of the class [basic_ostream Class](../standard-library/basic-ostream-class.md). Format control common to both extractors and insertors is managed by the class [basic_ios Class](../standard-library/basic-ios-class.md). Manipulating this format information in the guise of extracting and inserting objects is the province of several manipulators.  
  
 You can perform the same iostreams operations on files that you open by name, using the classes declared in [\<fstream>](../standard-library/fstream.md). To convert between iostreams and objects of class [basic_string Class](../standard-library/basic-string-class.md), use the classes declared in [\<sstream>](../standard-library/sstream.md). To do the same with C strings, use the classes declared in [\<strstream>](../standard-library/strstream.md).  
  
 The remaining headers provide support services, typically of direct interest to only the most advanced users of the iostreams classes.  
  
## See Also  
 [STL Overview](../standard-library/cpp-standard-library-overview.md)   
 [iostream Programming](../standard-library/iostream-programming.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)

