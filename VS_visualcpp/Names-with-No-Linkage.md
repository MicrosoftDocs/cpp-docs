---
title: "Names with No Linkage"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 7174c500-12d2-4572-8c16-63c27c758fb1
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Names with No Linkage
The only names that have no linkage are:  
  
-   Function parameters.  
  
-   Block-scoped names not declared as `extern` or **static**.  
  
-   Enumerators.  
  
-   Names declared in a `typedef` statement. An exception is when the `typedef` statement is used to provide a name for an unnamed class type. The name may then have external linkage if the class has external linkage. The following example shows a situation in which a `typedef` name has external linkage:  
  
    ```  
    // names_with_no_linkage.cpp  
    typedef struct  
    {  
       short x;  
       short y;  
    } POINT;  
  
    extern int MoveTo( POINT pt );  
  
    int main()  
    {  
    }  
    ```  
  
     The `typedef` name, `POINT`, becomes the class name for the unnamed structure. It is then used to declare a function with external linkage.  
  
 Because `typedef` names have no linkage, their definitions can differ between translation units. Because the compilations take place discretely, there is no way for the compiler to detect these differences. As a result, errors of this kind are not detected until link time. Consider the following case:  
  
```  
// Translation unit 1  
typedef int INT  
  
INT myInt;  
...  
  
// Translation unit 2  
typedef short INT  
  
extern INT myInt;  
...  
```  
  
 The preceding code generates an "unresolved external" error at link time.  
  
## Example  
 C++ functions can be defined only in file or class scope. The following example illustrates how to define functions and shows an erroneous function definition:  
  
```  
// function_definitions.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
void ShowChar( char ch );    // Declare function ShowChar.  
  
void ShowChar( char ch )     // Define function ShowChar.  
{                            // Function has file scope.  
   cout << ch;  
}  
  
struct Char                  // Define class Char.  
{  
    char Show();             // Declare Show function.  
    char Get();              // Declare Get function.  
    char ch;  
};  
  
char Char::Show()            // Define Show function  
{                            //  with class scope.  
    cout << ch;  
    return ch;  
}  
  
void GoodFuncDef( char ch )  // Define GoodFuncDef  
{                            //  with file scope.  
    int BadFuncDef( int i )  // C2601, Erroneous attempt to  
    {                        //  nest functions.  
        return i * 7;  
    }  
    for( int i = 0; i < BadFuncDef( 2 ); ++i )  
        cout << ch;  
    cout << "\n";  
}  
```  
  
## See Also  
 [Program and Linkage](../VS_visualcpp/Program-and-Linkage---C---.md)