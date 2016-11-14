---
title: "Reference-Type Function Arguments | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "arguments [C++], function"
  - "functions [C++], paramters"
  - "function parameters, reference-type"
  - "function arguments, reference-type"
  - "passing parameters, reference-type arguments"
ms.assetid: 0a70e831-9e76-46c0-821d-aeba13d73cc0
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
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
# Reference-Type Function Arguments
It is often more efficient to pass references, rather than large objects, to functions. This allows the compiler to pass the address of the object while maintaining the syntax that would have been used to access the object. Consider the following example that uses the `Date` structure:  
  
```  
// reference_type_function_arguments.cpp  
struct Date  
{  
short DayOfWeek;  
short Month;  
short Day;  
short Year;  
};  
  
// Create a Julian date of the form DDDYYYY  
// from a Gregorian date.  
long JulianFromGregorian( Date& GDate )  
{  
static int cDaysInMonth[] = {  
31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31  
   };  
long JDate = 0;  
// Add in days for months already elapsed.  
for ( int i = 0; i < GDate.Month - 1; ++i )  
JDate += cDaysInMonth[i];  
// Add in days for this month.  
JDate += GDate.Day;  
  
// Check for leap year.  
if ( GDate.Year % 100 != 0 && GDate.Year % 4 == 0 )  
JDate++;  
// Add in year.  
JDate *= 10000;  
JDate += GDate.Year;  
  
return JDate;  
}  
  
int main()  
{  
}  
```  
  
 The preceding code shows that members of a structure passed by reference are accessed using the member-selection operator (**.**) instead of the pointer member-selection operator (**–>**).  
  
 Although arguments passed as reference types observe the syntax of non-pointer types, they retain one important characteristic of pointer types: they are modifiable unless declared as **const**. Because the intent of the preceding code is not to modify the object `GDate`, a more appropriate function prototype is:  
  
```  
long JulianFromGregorian( const Date& GDate );  
```  
  
 This prototype guarantees that the function `JulianFromGregorian` will not change its argument.  
  
 Any function prototyped as taking a reference type can accept an object of the same type in its place because there is a standard conversion from *typename* to *typename***&**.  
  
## See Also  
 [References](../cpp/references-cpp.md)