---
title: "Function Overloading | Microsoft Docs"
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
  - "function overloading, about function overloading"
  - "function overloading"
  - "declaring functions, overloading"
ms.assetid: 3c9884cb-1d5e-42e8-9a49-6f46141f929e
caps.latest.revision: 10
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
# Function Overloading
C++ allows specification of more than one function of the same name in the same scope. These are called overloaded functions and are described in detail in Overloading. Overloaded functions enable programmers to supply different semantics for a function, depending on the types and number of arguments.  
  
 For example, a **print** function that takes a string (or **char \***) argument performs very different tasks than one that takes an argument of type **double**. Overloading permits uniform naming and prevents programmers from having to invent names such as `print_sz` or `print_d`. The following table shows what parts of a function declaration C++ uses to differentiate between groups of functions with the same name in the same scope.  
  
### Overloading Considerations  
  
|Function Declaration Element|Used for Overloading?|  
|----------------------------------|---------------------------|  
|Function return type|No|  
|Number of arguments|Yes|  
|Type of arguments|Yes|  
|Presence or absence of ellipsis|Yes|  
|Use of `typedef` names|No|  
|Unspecified array bounds|No|  
|**const** or `volatile` (see below)|Yes|  
  
 Although functions can be distinguished on the basis of return type, they cannot be overloaded on this basis.  `Const` or `volatile` are only used as a basis for overloading if they are used in a class to apply to the **this** pointer for the class, not the function's return type.  In other words, overloading applies only if the **const** or `volatile` keyword follows the function's argument list in the declaration.  
  
## Example  
 The following example illustrates how overloading can be used.  
  
```  
// function_overloading.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <math.h>  
  
// Prototype three print functions.  
int print( char *s );                  // Print a string.  
int print( double dvalue );            // Print a double.  
int print( double dvalue, int prec );  // Print a double with a  
//  given precision.  
using namespace std;  
int main( int argc, char *argv[] )  
{  
const double d = 893094.2987;  
if( argc < 2 )  
    {  
// These calls to print invoke print( char *s ).  
print( "This program requires one argument." );  
print( "The argument specifies the number of" );  
print( "digits precision for the second number" );  
print( "printed." );  
exit(0);  
    }  
  
// Invoke print( double dvalue ).  
print( d );  
  
// Invoke print( double dvalue, int prec ).  
print( d, atoi( argv[1] ) );  
}  
  
// Print a string.  
int print( char *s )  
{  
cout << s << endl;  
return cout.good();  
}  
  
// Print a double in default precision.  
int print( double dvalue )  
{  
cout << dvalue << endl;  
return cout.good();  
}  
  
// Print a double in specified precision.  
//  Positive numbers for precision indicate how many digits  
//  precision after the decimal point to show. Negative  
//  numbers for precision indicate where to round the number  
//  to the left of the decimal point.  
int print( double dvalue, int prec )  
{  
// Use table-lookup for rounding/truncation.  
static const double rgPow10[] = {   
10E-7, 10E-6, 10E-5, 10E-4, 10E-3, 10E-2, 10E-1, 10E0,  
10E1,  10E2,  10E3,  10E4, 10E5,  10E6  
    };  
const int iPowZero = 6;  
// If precision out of range, just print the number.  
if( prec < -6 || prec > 7 )  
return print( dvalue );  
// Scale, truncate, then rescale.  
dvalue = floor( dvalue / rgPow10[iPowZero - prec] ) *  
rgPow10[iPowZero - prec];  
cout << dvalue << endl;  
return cout.good();  
}  
```  
  
 The preceding code shows overloading of the `print` function in file scope.  
  
 The default argument is not considered part of the function type. Therefore, it is not used in selecting overloaded functions. Two functions that differ only in their default arguments are considered multiple definitions rather than overloaded functions.  
  
 Default arguments cannot be supplied for overloaded operators.  
  
  
## Argument Matching  
 Overloaded functions are selected for the best match of function declarations in the current scope to the arguments supplied in the function call. If a suitable function is found, that function is called. "Suitable" in this context means one of the following:  
  
-   An exact match was found.  
  
-   A trivial conversion was performed.  
  
-   An integral promotion was performed.  
  
-   A standard conversion to the desired argument type exists.  
  
-   A user-defined conversion (either conversion operator or constructor) to the desired argument type exists.  
  
-   Arguments represented by an ellipsis were found.  
  
 The compiler creates a set of candidate functions for each argument. Candidate functions are functions in which the actual argument in that position can be converted to the type of the formal argument.  
  
 A set of "best matching functions" is built for each argument, and the selected function is the intersection of all the sets. If the intersection contains more than one function, the overloading is ambiguous and generates an error. The function that is eventually selected is always a better match than every other function in the group for at least one argument. If this is not the case (if there is no clear winner), the function call generates an error.  
  
 Consider the following declarations (the functions are marked `Variant 1`, `Variant 2`, and `Variant 3`, for identification in the following discussion):  
  
```  
Fraction &Add( Fraction &f, long l );       // Variant 1  
Fraction &Add( long l, Fraction &f );       // Variant 2  
Fraction &Add( Fraction &f, Fraction &f );  // Variant 3  
  
Fraction F1, F2;  
```  
  
 Consider the following statement:  
  
```  
F1 = Add( F2, 23 );  
```  
  
 The preceding statement builds two sets:  
  
|Set 1: Candidate Functions That Have First Argument of Type Fraction|Set 2: Candidate Functions Whose Second Argument Can Be Converted to Type int|  
|--------------------------------------------------------------------------|-----------------------------------------------------------------------------------|  
|Variant 1|Variant 1 (`int` can be converted to `long` using a standard conversion)|  
|Variant 3||  
  
 Functions in Set 2 are functions for which there are implicit conversions from actual parameter type to formal parameter type, and among such functions there is a function for which the "cost" of converting the actual parameter type to its formal parameter type is the smallest.  
  
 The intersection of these two sets is Variant 1. An example of an ambiguous function call is:  
  
```  
F1 = Add( 3, 6 );  
```  
  
 The preceding function call builds the following sets:  
  
|Set 1: Candidate Functions That Have First Argument of Type int|Set 2: Candidate Functions That Have Second Argument of Type int|  
|---------------------------------------------------------------------|----------------------------------------------------------------------|  
|Variant 2 (`int` can be converted to `long` using a standard conversion)|Variant 1 (`int` can be converted to `long` using a standard conversion)|  
  
 Note that the intersection between these two sets is empty. Therefore, the compiler generates an error message.  
  
 For argument matching, a function with *n* default arguments is treated as *n*+1 separate functions, each with a different number of arguments.  
  
 The ellipsis (...) acts as a wildcard; it matches any actual argument. This can lead to many ambiguous sets, if you do not design your overloaded function sets with extreme care.  
  
> [!NOTE]
>  Ambiguity of overloaded functions cannot be determined until a function call is encountered. At that point, the sets are built for each argument in the function call, and you can determine whether an unambiguous overload exists. This means that ambiguities can remain in your code until they are evoked by a particular function call.  
  
## Argument Type Differences  
 Overloaded functions differentiate between argument types that take different initializers. Therefore, an argument of a given type and a reference to that type are considered the same for the purposes of overloading. They are considered the same because they take the same initializers. For example, `max( double, double )` is considered the same as `max( double &, double & )`. Declaring two such functions causes an error.  
  
 For the same reason, function arguments of a type modified by **const** or `volatile` are not treated differently than the base type for the purposes of overloading.  
  
 However, the function overloading mechanism can distinguish between references that are qualified by **const** and `volatile` and references to the base type. This makes code such as the following possible:  
  
```  
// argument_type_differences.cpp  
// compile with: /EHsc /W3  
// C4521 expected  
#include <iostream>  
  
using namespace std;  
class Over {  
public:  
   Over() { cout << "Over default constructor\n"; }  
   Over( Over &o ) { cout << "Over&\n"; }  
   Over( const Over &co ) { cout << "const Over&\n"; }  
   Over( volatile Over &vo ) { cout << "volatile Over&\n"; }  
};  
  
int main() {  
   Over o1;            // Calls default constructor.  
   Over o2( o1 );      // Calls Over( Over& ).  
   const Over o3;      // Calls default constructor.  
   Over o4( o3 );      // Calls Over( const Over& ).  
   volatile Over o5;   // Calls default constructor.  
   Over o6( o5 );      // Calls Over( volatile Over& ).  
}  
```  
  
### Output  
  
```  
Over default constructor  
Over&  
Over default constructor  
const Over&  
Over default constructor  
volatile Over&  
```  
  
 Pointers to **const** and `volatile` objects are also considered different from pointers to the base type for the purposes of overloading.  
  
## Argument matching and conversions  
 When the compiler tries to match actual arguments against the arguments in function declarations, it can supply standard or user-defined conversions to obtain the correct type if no exact match can be found. The application of conversions is subject to these rules:  
  
-   Sequences of conversions that contain more than one user-defined conversion are not considered.  
  
-   Sequences of conversions that can be shortened by removing intermediate conversions are not considered.  
  
 The resultant sequence of conversions, if any, is called the best matching sequence. There are several ways to convert an object of type `int` to type `unsigned long`using standard conversions (described in [Standard Conversions](../cpp/standard-conversions.md)):  
  
-   Convert from `int` to `long` and then from `long` to `unsigned long`.  
  
-   Convert from `int` to `unsigned long`.  
  
 The first sequence, although it achieves the desired goal, is not the best matching sequence — a shorter sequence exists.  
  
 The following table shows a group of conversions, called trivial conversions, that have a limited effect on determining which sequence is the best matching. The instances in which trivial conversions affect choice of sequence are discussed in the list following the table.  
  
### Trivial Conversions  
  
|Convert from Type|Convert to Type|  
|-----------------------|---------------------|  
|*type-name*|*type-name* **&**|  
|*type-name* **&**|*type-name*|  
|*type-name* **[ ]**|*type-name\**|  
|*type-name* **(** *argument-list* **)**|**(** *\*type-name* **) (** *argument-list* **)**|  
|*type-name*|**const** *type-name*|  
|*type-name*|`volatile` *type-name*|  
|*type-name\**|**const** *type-name\**|  
|*type-name\**|`volatile` *type-name\**|  
  
 The sequence in which conversions are attempted is as follows:  
  
1.  Exact match. An exact match between the types with which the function is called and the types declared in the function prototype is always the best match. Sequences of trivial conversions are classified as exact matches. However, sequences that do not make any of these conversions are considered better than sequences that convert:  
  
    -   From pointer, to pointer to **const** (`type` **\*** to **const** `type` **\***).  
  
    -   From pointer, to pointer to `volatile` (`type` **\*** to `volatile` `type` **\***).  
  
    -   From reference, to reference to **const** (`type` **&** to **const** `type` **&**).  
  
    -   From reference, to reference to `volatile` (`type` **&** to `volatile` `type` **&**).  
  
2.  Match using promotions. Any sequence not classified as an exact match that contains only integral promotions, conversions from **float** to **double**, and trivial conversions is classified as a match using promotions. Although not as good a match as any exact match, a match using promotions is better than a match using standard conversions.  
  
3.  Match using standard conversions. Any sequence not classified as an exact match or a match using promotions that contains only standard conversions and trivial conversions is classified as a match using standard conversions. Within this category, the following rules are applied:  
  
    -   Conversion from a pointer to a derived class, to a pointer to a direct or indirect base class is preferable to converting to **void \*** or **const void \***.  
  
    -   Conversion from a pointer to a derived class, to a pointer to a base class produces a better match the closer the base class is to a direct base class. Suppose the class hierarchy is as shown in the following figure.  
  
 ![Preferred conversions](../cpp/media/vc391t1.gif "vc391T1")  
Graph Illustrating Preferred Conversions  
  
 Conversion from type `D*` to type `C*` is preferable to conversion from type `D*` to type `B*`. Similarly, conversion from type `D*` to type `B*` is preferable to conversion from type `D*` to type `A*`.  
  
 This same rule applies to reference conversions. Conversion from type `D&` to type `C&` is preferable to conversion from type `D&` to type `B&`, and so on.  
  
 This same rule applies to pointer-to-member conversions. Conversion from type `T D::*` to type `T C::*` is preferable to conversion from type `T D::*` to type `T B::*`, and so on (where `T` is the type of the member).  
  
 The preceding rule applies only along a given path of derivation. Consider the graph shown in the following figure.  
  
 ![Multi&#45;inheritance that shows preferred conversions](../cpp/media/vc391t2.gif "vc391T2")  
Multiple-Inheritance Graph Illustrating Preferred Conversions  
  
 Conversion from type `C*` to type `B*` is preferable to conversion from type `C*` to type `A*`. The reason is that they are on the same path, and `B*` is closer. However, conversion from type `C*` to type `D*` is not preferable to conversion to type `A*`; there is no preference because the conversions follow different paths.  
  
1.  Match with user-defined conversions. This sequence cannot be classified as an exact match, a match using promotions, or a match using standard conversions. The sequence must contain only user-defined conversions, standard conversions, or trivial conversions to be classified as a match with user-defined conversions. A match with user-defined conversions is considered a better match than a match with an ellipsis but not as good a match as a match with standard conversions.  
  
2.  Match with an ellipsis. Any sequence that matches an ellipsis in the declaration is classified as a match with an ellipsis. This is considered the weakest match.  
  
 User-defined conversions are applied if no built-in promotion or conversion exists. These conversions are selected on the basis of the type of the argument being matched. Consider the following code:  
  
```  
// argument_matching1.cpp  
class UDC  
{  
public:  
   operator int()  
   {  
      return 0;  
   }  
   operator long();  
};  
  
void Print( int i )  
{  
};  
  
UDC udc;  
  
int main()  
{  
   Print( udc );  
}  
```  
  
 The available user-defined conversions for class `UDC` are from type `int` and type **long**. Therefore, the compiler considers conversions for the type of the object being matched: `UDC`. A conversion to `int` exists, and it is selected.  
  
 During the process of matching arguments, standard conversions can be applied to both the argument and the result of a user-defined conversion. Therefore, the following code works:  
  
```  
void LogToFile( long l );  
...  
UDC udc;  
LogToFile( udc );  
```  
  
 In the preceding example, the user-defined conversion, **operator long**, is invoked to convert `udc` to type **long**. If no user-defined conversion to type **long** had been defined, the conversion would have proceeded as follows: Type `UDC` would have been converted to type `int` using the user-defined conversion. Then the standard conversion from type `int` to type **long** would have been applied to match the argument in the declaration.  
  
 If any user-defined conversions are required to match an argument, the standard conversions are not used when evaluating the best match. This is true even if more than one candidate function requires a user-defined conversion; in such a case, the functions are considered equal. For example:  
  
```  
// argument_matching2.cpp  
// C2668 expected  
class UDC1  
{  
public:  
   UDC1( int );  // User-defined conversion from int.  
};  
  
class UDC2  
{  
public:  
   UDC2( long ); // User-defined conversion from long.  
};  
  
void Func( UDC1 );  
void Func( UDC2 );  
  
int main()  
{  
   Func( 1 );  
}  
```  
  
 Both versions of `Func` require a user-defined conversion to convert type `int` to the class type argument. The possible conversions are:  
  
-   Convert from type `int` to type `UDC1` (a user-defined conversion).  
  
-   Convert from type `int` to type **long**; then convert to type `UDC2` (a two-step conversion).  
  
 Even though the second of these requires a standard conversion, as well as the user-defined conversion, the two conversions are still considered equal.  
  
> [!NOTE]
>  User-defined conversions are considered conversion by construction or conversion by initialization (conversion function). Both methods are considered equal when considering the best match.  
  
## Argument matching and the this pointer  
 Class member functions are treated differently, depending on whether they are declared as `static`. Because nonstatic functions have an implicit argument that supplies the `this` pointer, nonstatic functions are considered to have one more argument than static functions; otherwise, they are declared identically.  
  
 These nonstatic member functions require that the implied `this` pointer match the object type through which the function is being called, or, for overloaded operators, they require that the first argument match the object on which the operator is being applied. (For more information about overloaded operators, see [Overloaded Operators](../cpp/operator-overloading.md).)  
  
 Unlike other arguments in overloaded functions, no temporary objects are introduced and no conversions are attempted when trying to match the `this` pointer argument.  
  
 When the `– >` member-selection operator is used to access a member function, the `this` pointer argument has a type of `class-name` `* const`. If the members are declared as `const` or `volatile`, the types are `const` `class-name``* const` and `volatile` `class-name` `* const`, respectively.  
  
 The `.` member-selection operator works exactly the same way, except that an implicit `&` (address-of) operator is prefixed to the object name. The following example shows how this works:  
  
```  
// Expression encountered in code  
obj.name  
  
// How the compiler treats it  
(&obj)->name  
```  
  
 The left operand of the `–>*` and `.*` (pointer to member) operators are treated the same way as the `.` and `–>` (member-selection) operators with respect to argument matching.  
  
## Restrictions  
 Several restrictions govern an acceptable set of overloaded functions:  
  
-   Any two functions in a set of overloaded functions must have different argument lists.  
  
-   Overloading functions with argument lists of the same types, based on return type alone, is an error.  
  
     **Microsoft Specific**  
  
 You can overload **operator new** solely on the basis of return type — specifically, on the basis of the memory-model modifier specified.  
  
## END Microsoft Specific  
  
-   Member functions cannot be overloaded solely on the basis of one being static and the other nonstatic.  
  
-   `typedef` declarations do not define new types; they introduce synonyms for existing types. They do not affect the overloading mechanism. Consider the following code:  
  
    ```  
    typedef char * PSTR;  
  
    void Print( char *szToPrint );  
    void Print( PSTR szToPrint );  
    ```  
  
     The preceding two functions have identical argument lists. `PSTR` is a synonym for type **char \***. In member scope, this code generates an error.  
  
-   Enumerated types are distinct types and can be used to distinguish between overloaded functions.  
  
-   The types "array of " and "pointer to" are considered identical for the purposes of distinguishing between overloaded functions. This is true only for singly dimensioned arrays. Therefore, the following overloaded functions conflict and generate an error message:  
  
    ```  
    void Print( char *szToPrint );  
    void Print( char szToPrint[] );  
    ```  
  
     For multiply dimensioned arrays, the second and all succeeding dimensions are considered part of the type. Therefore, they are used in distinguishing between overloaded functions:  
  
    ```  
    void Print( char szToPrint[] );  
    void Print( char szToPrint[][7] );  
    void Print( char szToPrint[][9][42] );  
    ```  
  
## Declaration matching  
 Any two function declarations of the same name in the same scope can refer to the same function, or to two discrete functions that are overloaded. If the argument lists of the declarations contain arguments of equivalent types (as described in the previous section), the function declarations refer to the same function. Otherwise, they refer to two different functions that are selected using overloading.  
  
 Class scope is strictly observed; therefore, a function declared in a base class is not in the same scope as a function declared in a derived class. If a function in a derived class is declared with the same name as a function in the base class, the derived-class function hides the base-class function instead of causing overloading.  
  
 Block scope is strictly observed; therefore, a function declared in file scope is not in the same scope as a function declared locally. If a locally declared function has the same name as a function declared in file scope, the locally declared function hides the file-scoped function instead of causing overloading. For example:  
  
```  
// declaration_matching1.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
void func( int i )  
{  
    cout << "Called file-scoped func : " << i << endl;  
}  
  
void func( char *sz )  
{  
   cout << "Called locally declared func : " << sz << endl;  
}  
  
int main()  
{  
   // Declare func local to main.  
   extern void func( char *sz );  
  
   func( 3 );   // C2664 Error. func( int ) is hidden.  
   func( "s" );  
}  
```  
  
 The preceding code shows two definitions from the function `func`. The definition that takes an argument of type `char *` is local to `main` because of the `extern` statement. Therefore, the definition that takes an argument of type `int` is hidden, and the first call to `func` is in error.  
  
 For overloaded member functions, different versions of the function can be given different access privileges. They are still considered to be in the scope of the enclosing class and thus are overloaded functions. Consider the following code, in which the member function `Deposit` is overloaded; one version is public, the other, private.  
  
 The intent of this sample is to provide an `Account` class in which a correct password is required to perform deposits. This is accomplished using overloading.  
  
 Note that the call to `Deposit` in `Account::Deposit` calls the private member function. This call is correct because `Account::Deposit` is a member function and therefore has access to the private members of the class.  
  
```  
// declaration_matching2.cpp  
class Account  
{  
public:  
   Account()  
   {  
   }  
   double Deposit( double dAmount, char *szPassword );  
  
private:  
   double Deposit( double dAmount )  
   {  
      return 0.0;  
   }  
   int Validate( char *szPassword )  
   {  
      return 0;  
   }  
  
};  
  
int main()  
{  
    // Allocate a new object of type Account.  
    Account *pAcct = new Account;  
  
    // Deposit $57.22. Error: calls a private function.  
    // pAcct->Deposit( 57.22 );  
  
    // Deposit $57.22 and supply a password. OK: calls a  
    //  public function.  
    pAcct->Deposit( 52.77, "pswd" );  
}  
  
double Account::Deposit( double dAmount, char *szPassword )  
{  
   if ( Validate( szPassword ) )  
      return Deposit( dAmount );  
   else  
      return 0.0;  
}  
```  
  
## See Also  
 [Functions (C++)](../cpp/functions-cpp.md)