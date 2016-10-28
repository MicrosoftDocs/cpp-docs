---
title: "Output Streams"
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
  - "output streams"
ms.assetid: b49410e3-5caa-4153-9d0d-c4266408dc83
caps.latest.revision: 11
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
# Output Streams
An output stream object is a destination for bytes. The three most important output stream classes are `ostream`, `ofstream`, and `ostringstream`.  
  
 The `ostream` class, through the derived class `basic_ostream`, supports the predefined stream objects:  
  
-   `cout` standard output  
  
-   `cerr` standard error with limited buffering  
  
-   `clog` similar to `cerr` but with full buffering  
  
 Objects are rarely constructed from `ostream`; predefined objects are generally used. In some cases, you can reassign predefined objects after program startup. The `ostream` class, which can be configured for buffered or unbuffered operation, is best suited to sequential text-mode output. All functionality of the base class, `ios`, is included in `ostream`. If you construct an object of class `ostream`, you must specify a `streambuf` object to the constructor.  
  
 The `ofstream` class supports disk file output. If you need an output-only disk, construct an object of class `ofstream`. You can specify whether `ofstream` objects accept binary or text-mode data when constructing the `ofstream` object or when calling the `open` member function of the object. Many formatting options and member functions apply to `ofstream` objects, and all functionality of the base classes `ios` and `ostream` is included.  
  
 If you specify a filename in the constructor, that file is automatically opened when the object is constructed. Otherwise, you can use the `open` member function after invoking the default constructor.  
  
 Like the run-time function `sprintf_s`, the `ostringstream` class supports output to in-memory strings. To create a string in memory by using I/O stream formatting, construct an object of class `ostringstream`.  
  
## In This Section  
 [Constructing Output Stream Objects](../stdcpplib/constructing-output-stream-objects.md)  
  
 [Using Insertion Operators and Controlling Format](../stdcpplib/using-insertion-operators-and-controlling-format.md)  
  
 [Output File Stream Member Functions](../stdcpplib/output-file-stream-member-functions.md)  
  
 [Effects of Buffering](../stdcpplib/effects-of-buffering.md)  
  
 [Binary Output Files](../stdcpplib/binary-output-files.md)  
  
 [Overloading the << Operator for Your Own Classes](../stdcpplib/overloading-the----operator-for-your-own-classes.md)  
  
 [Writing Your Own Manipulators Without Arguments](../stdcpplib/writing-your-own-manipulators-without-arguments.md)  
  
## See Also  
 [\<ostream> Members](assetId:///a5afd034-0e3c-41ee-bbd7-468d9188da1d)   
 [ofstream](../Topic/ofstream.md)   
 [ostringstream](../Topic/ostringstream.md)   
 [basic_ostream Members](assetId:///82e5cc91-7c0c-4950-a8ce-ac779cfbbd93)   
 [iostream Programming](../stdcpplib/iostream-programming.md)