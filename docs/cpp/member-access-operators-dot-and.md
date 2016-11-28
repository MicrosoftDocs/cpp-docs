---
title: "Member Access Operators: . and -&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "."
  - "->"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "member access, expressions"
  - "operators [C++], member access"
  - "dot operator (.)"
  - "-> operator"
  - "member access, operators"
  - "postfix operators"
  - ". operator"
  - "member access"
ms.assetid: f8fc3df9-d728-40c5-b384-276927f5f1b3
caps.latest.revision: 11
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
# Member Access Operators: . and -&gt;
## Syntax  
  
```  
postfix-expression . name  
postfix-expression –> name  
```  
  
## Remarks  
 The member access operators **.** and **->** are used to refer to members of structures, unions, and classes. Member access expressions have the value and type of the selected member.  
  
 There are two forms of member access expressions:  
  
1.  In the first form, *postfix-expression* represents a value of struct, class, or union type, and *name* names a member of the specified structure, union, or class. The value of the operation is that of *name* and is an l-value if *postfix-expression* is an l-value.  
  
2.  In the second form, *postfix-expression* represents a pointer to a structure, union, or class, and *name* names a member of the specified structure, union, or class. The value is that of *name* and is an l-value. The **–>** operator dereferences the pointer. Therefore, the expressions *e***–>**`member` and **(\****e***)**.`member` (where *e* represents a pointer) yield identical results (except when the operators **–>** or **\*** are overloaded).  
  
## Example  
 The following example demonstrates both forms of the member access operator.  
  
```  
// expre_Selection_Operator.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
struct Date {  
   Date(int i, int j, int k) : day(i), month(j), year(k){}  
   int month;  
   int day;  
   int year;  
};  
  
int main() {  
   Date mydate(1,1,1900);  
   mydate.month = 2;     
   cout  << mydate.month << "/" << mydate.day  
         << "/" << mydate.year << endl;  
  
   Date *mydate2 = new Date(1,1,2000);  
   mydate2->month = 2;  
   cout  << mydate2->month << "/" << mydate2->day  
         << "/" << mydate2->year << endl;  
   delete mydate2;  
}  
```  
  
```Output  
2/1/1900  
2/1/2000  
```  
  
## See Also  
 [Postfix Expressions](../cpp/postfix-expressions.md)   
 [C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Classes and Structs](../cpp/classes-and-structs-cpp.md)   
 [Structure and Union Members](../c-language/structure-and-union-members.md)