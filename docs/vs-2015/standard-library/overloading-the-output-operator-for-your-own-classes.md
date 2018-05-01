---
title: "Overloading the &lt;&lt; Operator for Your Own Classes | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator<<, overloading for your own classes"
  - "operator <<, overloading for your own classes"
ms.assetid: ad1d2c49-d84e-48a8-9c09-121f28b10bf0
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Overloading the &lt;&lt; Operator for Your Own Classes
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Overloading the &lt;&lt; Operator for Your Own Classes](https://docs.microsoft.com/cpp/standard-library/overloading-the-output-operator-for-your-own-classes).  
  
Output streams use the insertion (`<<`) operator for standard types. You can also overload the `<<` operator for your own classes.  
  
## Example  
 The `write` function example showed the use of a `Date` structure. A date is an ideal candidate for a C++ class in which the data members (month, day, and year) are hidden from view. An output stream is the logical destination for displaying such a structure. This code displays a date using the `cout` object:  
  
```  
Date dt(1, 2, 92);

cout <<dt;  
```  
  
 To get `cout` to accept a `Date` object after the insertion operator, overload the insertion operator to recognize an `ostream` object on the left and a `Date` on the right. The overloaded `<<` operator function must then be declared as a friend of class `Date` so it can access the private data within a `Date` object.  
  
```  
// overload_date.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
class Date  
{  
    int mo, da, yr;  
public:  
    Date(int m, int d, int y)  
    {  
        mo = m; da = d; yr = y;  
    }  
    friend ostream& operator<<(ostream& os, const Date& dt);  
};  
  
ostream& operator<<(ostream& os, const Date& dt)  
{  
    os << dt.mo << '/' << dt.da << '/' << dt.yr;  
    return os;  
}  
  
int main()  
{  
    Date dt(5, 6, 92);  
    cout << dt;  
}  
```  
  
```Output  
5/6/92  
```  
  
## Remarks  
 The overloaded operator returns a reference to the original `ostream` object, which means you can combine insertions:  
  
```  
cout <<"The date is" <<dt <<flush;  
```  
  
## See Also  
 [Output Streams](../standard-library/output-streams.md)





