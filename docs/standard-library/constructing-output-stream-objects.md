---
title: "Constructing Output Stream Objects | Microsoft Docs"
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
  - "output stream objects"
ms.assetid: 93c8eab6-610c-4f48-b76d-1d960cac7641
caps.latest.revision: 9
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
# Constructing Output Stream Objects
If you use only the predefined `cout`, `cerr`, or `clog` objects, you do not need to construct an output stream. You must use constructors for:  
  
- [Output File Stream Constructors](#vclrfoutputfilestreamconstructorsanchor1)  
  
- [Output String Stream Constructors](#vclrfoutputstringstreamconstructorsanchor2)  
  
##  <a name="vclrfoutputfilestreamconstructorsanchor1"></a> Output File Stream Constructors  
 You can construct an output file stream in one of two ways:  
  
-   Use the default constructor, and then call the `open` member function.  
  
 ```  
    ofstream myFile; // Static or on the stack  
    myFile.open("filename");

 
    ofstream* pmyFile = new ofstream; // On the heap  
    pmyFile->open("filename");
```  
  
-   Specify a filename and mode flags in the constructor call.  
  
 ```  
    ofstream myFile("filename", ios_base::out);
```  
  
##  <a name="vclrfoutputstringstreamconstructorsanchor2"></a> Output String Stream Constructors  
 To construct an output string stream, you can use `ostringstream` in the following way:  
  
```  
    using namespace std;  
string sp;  
ostringstream myString;  
myString <<"this is a test" <<ends;  
sp = myString.str();
// Obtain string  
cout <<sp <endl;   
```  
  
 The `ends` "manipulator" adds the necessary terminating null character to the string.  
  
## See Also  
 [Output Streams](../standard-library/output-streams.md)

