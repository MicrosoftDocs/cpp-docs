---
title: "Iterating Over STL Collection By Using for each | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DTL collections, iterating over"
ms.assetid: 9358ca29-b982-4a19-bbfd-bef50fe66c9a
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Iterating Over STL Collection By Using for each
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Iterating Over C++ Standard Library Collection By Using for each](https://docs.microsoft.com/cpp/dotnet/iterating-over-stl-collection-by-using-for-each).  
  
  
The `for each` keyword can be used to iterate over a Standard C++ Library (STL) collection.  
  
## All Platforms  
 **Remarks**  
  
 An STL collection is also known as a *container*. For more information, see [STL Containers](../standard-library/stl-containers.md).  
  
## Examples  
 **Example**  
  
 The following code example uses `for each` to iterate over a [\<map>](../standard-library/map.md).  
  
```  
// for_each_stl.cpp  
// compile with: /EHsc  
#include <map>  
#include <iostream>  
#include <string>  
using namespace std;  
  
int main() {  
   int retval  = 0;  
   map<string, int> months;  
  
   months["january"] = 31;  
   months["february"] = 28;  
   months["march"] = 31;  
   months["april"] = 30;  
   months["may"] = 31;  
   months["june"] = 30;  
   months["july"] = 31;  
   months["august"] = 31;  
   months["september"] = 30;  
   months["october"] = 31;  
   months["november"] = 30;  
   months["december"] = 31;  
  
   map<string, int> months_30;  
  
   for each( pair<string, int> c in months )  
      if ( c.second == 30 )  
         months_30[c.first] = c.second;  
  
   for each( pair<string, int> c in months_30 )  
      retval++;  
  
   cout << "Months with 30 days = " << retval << endl;  
}  
```  
  
 **Output**  
  
```Output  
Months with 30 days = 4  
```  
  
 **Example**  
  
 The following code example uses a const reference (`const&`) for an iteration variable with STL containers. You can use a reference (`&`) as an iteration variable on any collection of a type that can be declared as a *T*`&`.  
  
```  
// for_each_stl_2.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
using namespace std;  
  
int main() {  
   int retval = 0;  
  
   vector<int> col(3);  
   col[0] = 10;  
   col[1] = 20;  
   col[2] = 30;  
  
   for each( const int& c in col )  
      retval += c;  
  
   cout << "retval: " << retval << endl;  
}  
```  
  
 **Output**  
  
```Output  
retval: 60  
```  
  
## [!INCLUDE[wrt](../includes/wrt-md.md)]  
 **Remarks**  
  
 There are no platform-specific remarks about this feature.  
  
### Requirements  
 Compiler option: **/ZW**  
  
## [!INCLUDE[clr_for_headings](../includes/clr-for-headings-md.md)]  
 **Remarks**  
  
 There are no platform-specific remarks about this feature.  
  
### Requirements  
 Compiler option: **/clr**  
  
## See Also  
 [for each, in](../dotnet/for-each-in.md)   
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)

