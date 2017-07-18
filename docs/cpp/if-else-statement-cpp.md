---
title: "if-else Statement (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "07/17/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-language"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "else_cpp"
  - "else"
  - "if_cpp"
  - "if"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "if keyword [C++]"
  - "else keyword [C++]"
  - "if keyword [C++], if-else"
ms.assetid: f8c45cde-6bce-42ae-81db-426b3dbd4caa
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# if-else Statement (C++)
Controls conditional branching. Statements in the *if-block* are executed only if the *if-expression* evaluates to a non-zero value (or `true`). If the value of *expression* is nonzero, *statement1* and any other statements in the block are executed and the else-block, if present, is skipped. If the value of *expression* is zero, then the if-block is skipped and the else-block, if present, is executed. Expressions that evaluate to non-zero are
- `true`
- a non-null pointer,
- any non-zero arithmetic value, or 
- a class type that defines an unambiguous conversion to an arithmetic, boolean or pointer type. (For information about conversions, see [Standard Conversions](../cpp/standard-conversions.md).)   
  
## Syntax  
  
```  
  
if ( expression )  
{
   statement1;
   ...  
}
else  // optional
{
   statement2;
   ...
} 

if ( initialization; expression )  
{
   statement1;
   ...  
}
else  // optional
{
   statement2;
   ...
}  
```  
## Example  
```  
// if_else_statement.cpp  
#include <iostream>

using namespace std;

class C
{
    public:
    void do_somthing(){}
};
void init(C){}
bool is_true() { return true; }
int x = 10;

int main()
{
	if (is_true())
	{
		cout << "b is true!\n";  // executed
	}
	else
	{
		cout << "b is false!\n";
	}

  // no else statement
	if (x == 10)
	{
		x = 0; 
	}
	
  
	C* c;
  init(c);
	if (c)
	{
		c->do_something();
	}
	else
	{
		cout << "c is null!\n";
	}
}
```  
## if statement with an initializer
**Visual Studio 2017 version 15.3 and later:** An **if** statement may also contain an initialization expression, as shown in the following example: 

```cpp
## Example  
#include <iostream>
#include <mutex>
#include <map>
#include <string>
#include <algorithm>


using namespace std;

map<int, string> m;
mutex mx;
bool shared_flag; // guarded by mx
void unsafe_operation() {}

int main()
{

	if (auto it = m.find(10); it != m.end())
	{
		cout << it->second;
		return 0;
	}

	if (char buf[10]; fgets(buf, 10, stdin))
	{
		m[0] += buf;
	}

	if (lock_guard<mutex> lock(mx); shared_flag)
	{
		unsafe_operation();
		shared_flag = false;
	}

	string s{ "if" };
	if (auto keywords = { "if", "for", "while" }; any_of(keywords.begin(), keywords.end(), [&s](const char* kw) { return s == kw; }))
	{
		cout << "Error! Token must not be a keyword\n";
	}

}
```
## Remarks   
 In all forms of the **if** statement, *expression*, which can have any value except a structure, is evaluated, including all side effects. Control passes from the **if** statement to the next statement in the program unless one of the *statement*s contains a [break](../cpp/break-statement-cpp.md), [continue](../cpp/continue-statement-cpp.md), or [goto](../cpp/goto-statement-cpp.md).  
  
 The **else** clause of an `if...else` statement is associated with the closest previous **if** statement in the same scope that does not have a corresponding **else** statement.   
  
 
## See Also  
 [Selection Statements](../cpp/selection-statements-cpp.md)   
 [Keywords](../cpp/keywords-cpp.md)   
 [switch Statement (C++)](../cpp/switch-statement-cpp.md)