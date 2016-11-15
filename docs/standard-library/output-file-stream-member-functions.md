---
title: "Output File Stream Member Functions | Microsoft Docs"
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
  - "output streams, member functions"
ms.assetid: 38aaf710-8035-4a34-a0c4-123a5327f28a
caps.latest.revision: 8
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
# Output File Stream Member Functions
Output stream member functions have three types: those that are equivalent to manipulators, those that perform unformatted write operations, and those that otherwise modify the stream state and have no equivalent manipulator or insertion operator. For sequential, formatted output, you might use only insertion operators and manipulators. For random-access binary disk output, you use other member functions, with or without insertion operators.  
  
## The open Function for Output Streams  
 To use an output file stream ([ofstream](../standard-library/basic-ofstream-class.md)), you must associate that stream with a specific disk file in the constructor or the **open** function. If you use the **open** function, you can reuse the same stream object with a series of files. In either case, the arguments describing the file are the same.  
  
 When you open the file associated with an output stream, you generally specify an **open_mode** flag. You can combine these flags, which are defined as enumerators in the `ios` class, with the bitwise OR ( &#124; ) operator. See [ios_base::openmode](../standard-library/ios-base-class.md#ios_base__openmode) for a list of the enumerators.  
  
 Three common output stream situations involve mode options:  
  
-   Creating a file. If the file already exists, the old version is deleted.  
  
 ```  
    ostream ofile("FILENAME");
// Default is ios::out  
    ofstream ofile("FILENAME", ios::out);

// Equivalent to above  
```  
  
-   Appending records to an existing file or creating one if it does not exist.  
  
 ```  
    ofstream ofile("FILENAME", ios::app);
```  
  
-   Opening two files, one at a time, on the same stream.  
  
 ```  
    ofstream ofile();
ofile.open("FILE1",
    ios::in);
// Do some output  
    ofile.close();

// FILE1 closed  
    ofile.open("FILE2",
    ios::in);
// Do some more output  
    ofile.close();

// FILE2 closed  // When ofile goes out of scope it is destroyed.  
```  
  
## The put Function  
 The **put** function writes one character to the output stream. The following two statements are the same by default, but the second is affected by the stream's format arguments:  
  
```  
cout.put('A');

// Exactly one character written  
cout <<'A'; // Format arguments 'width' and 'fill' apply   
```  
  
## The write Function  
 The **write** function writes a block of memory to an output file stream. The length argument specifies the number of bytes written. This example creates an output file stream and writes the binary value of the `Date` structure to it:  
  
```  
// write_function.cpp  
// compile with: /EHsc  
#include <fstream>  
using namespace std;  
  
struct Date  
{  
   int mo, da, yr;  
};  
  
int main( )  
{  
   Date dt = { 6, 10, 92 };  
   ofstream tfile( "date.dat" , ios::binary );  
   tfile.write( (char *) &dt, sizeof dt );  
}  
```  
  
 The **write** function does not stop when it reaches a null character, so the complete class structure is written. The function takes two arguments: a `char` pointer and a count of characters to write. Note the required cast to **char\*** before the address of the structure object.  
  
## The seekp and tellp Functions  
 An output file stream keeps an internal pointer that points to the position where data is to be written next. The `seekp` member function sets this pointer and thus provides random-access disk file output. The `tellp` member function returns the file position. For examples that use the input stream equivalents to `seekp` and `tellp`, see [The seekg and tellg Functions](../standard-library/input-stream-member-functions.md).  
  
## The close Function for Output Streams  
 The **close** member function closes the disk file associated with an output file stream. The file must be closed to complete all disk output. If necessary, the `ofstream` destructor closes the file for you, but you can use the **close** function if you need to open another file for the same stream object.  
  
 The output stream destructor automatically closes a stream's file only if the constructor or the **open** member function opened the file. If you pass the constructor a file descriptor for an already-open file or use the **attach** member function, you must close the file explicitly.  
  
##  <a name="vclrferrorprocessingfunctionsanchor10"></a> Error Processing Functions  
 Use these member functions to test for errors while writing to a stream:  
  
|Function|Return value|  
|--------------|------------------|  
|[bad](http://msdn.microsoft.com/Library/4038d331-e9c9-48b0-bf49-c6505744469c)|Returns **true** if there is an unrecoverable error.|  
|[fail](http://msdn.microsoft.com/Library/619f1b36-1e72-4551-8b48-888ae4e370d2)|Returns **true** if there is an unrecoverable error or an "expected" condition, such as a conversion error, or if the file is not found. Processing can often resume after a call to **clear** with a zero argument.|  
|[good](http://msdn.microsoft.com/Library/77f0aa17-2ae1-48ae-8040-592d301e3972)|Returns **true** if there is no error condition (unrecoverable or otherwise) and the end-of-file flag is not set.|  
|[eof](http://msdn.microsoft.com/Library/3087f631-1268-49cd-86cf-ff4108862329)|Returns **true** on the end-of-file condition.|  
|[clear](http://msdn.microsoft.com/Library/dc172694-1267-45f8-8f5c-e822e16fc271)|Sets the internal error state. If called with the default arguments, it clears all error bits.|  
|[rdstate](http://msdn.microsoft.com/Library/e235e4e2-7e95-4777-a160-3938d263dd9c)|Returns the current error state.|  
  
 The **!** operator is overloaded to perform the same function as the **fail** function. Thus the expression:  
  
```  
if(!cout)...  
```  
  
 is equivalent to:  
  
```  
if(cout.fail())...  
```  
  
 The **void\*()** operator is overloaded to be the opposite of the **!** operator; thus the expression:  
  
```  
if(cout)...  
```  
  
 is equal to:  
  
```  
if(!cout.fail())...  
```  
  
 The **void\*()** operator is not equivalent to **good** because it does not test for the end of file.  
  
## See Also  
 [Output Streams](../standard-library/output-streams.md)

