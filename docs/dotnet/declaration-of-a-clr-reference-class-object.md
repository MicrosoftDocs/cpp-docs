---
title: "Declaration of a CLR Reference Class Object | Microsoft Docs"
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
  - "types [C++], reference types"
  - "reference types, CLR"
ms.assetid: 6d64f746-3715-4948-ada3-88859f4150e4
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
# Declaration of a CLR Reference Class Object
The syntax to declare and instantiate an object of a reference class type has changed from Managed Extensions for C++ to [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  
  
 In Managed Extensions, a reference class type object is declared by using the ISO-C++ pointer syntax, with an optional use of the `__gc` keyword to the left of the star (`*`). For example, here are a variety of reference class type object declarations under the Managed Extensions syntax:  
  
```  
public __gc class Form1 : public System::Windows::Forms::Form {  
private:  
   System::ComponentModel::Container __gc *components;  
   Button __gc *button1;  
   DataGrid __gc *myDataGrid;     
   DataSet __gc *myDataSet;  
  
   void PrintValues( Array* myArr ) {  
      System::Collections::IEnumerator* myEnumerator =   
         myArr->GetEnumerator();  
  
      Array *localArray;  
      myArr->Copy(myArr, localArray, myArr->Length);  
   }  
};  
```  
  
 Under the new syntax, you declare a reference class type object by using a new declarative token (`^`) referred to formally as a *tracking handle* and more informally as a *hat*. (The tracking adjective means that a reference type sits in the CLR heap, and can therefore transparently move locations during garbage collection heap compaction. A tracking handle is transparently updated during runtime. Two similar concepts are the *tracking reference* (`%`), and the *interior pointer* (`interior_ptr<>`), discussed in [Value Type Semantics](../dotnet/value-type-semantics.md).  
  
 The primary reasons to move the declarative syntax away from a reuse of the ISO-C++ pointer syntax are as follows:  
  
-   The use of the pointer syntax did not permit overloaded operators to be directly applied to a reference object. Rather, one had to call the operator by using its internal name, such as `rV1->op_Addition(rV2)` instead of  the more intuitive `rV1+rV2`.  
  
-   A number of pointer operations, such as casting and pointer arithmetic, not permitted for objects stored on a garbage collected heap. The notion of a tracking handle better captures the nature of a CLR reference type.  
  
 The `__gc` modifier on a tracking handle is unnecessary and is not supported. The use of the object itself is not changed; it still accesses members through the pointer member selection operator (`->`). For example, here is the previous Managed Extensions code sample translated into the new syntax:  
  
```  
public ref class Form1: public System::Windows::Forms::Form {  
private:  
   System::ComponentModel::Container^ components;  
   Button^ button1;  
   DataGrid^ myDataGrid;  
   DataSet^ myDataSet;  
  
   void PrintValues( Array^ myArr ) {  
      System::Collections::IEnumerator^ myEnumerator =  
         myArr->GetEnumerator();  
  
      Array ^localArray;  
      myArr->Copy(myArr, localArray, myArr->Length);   }  
};  
```  
  
## Dynamic Allocation of an Object on the CLR Heap  
 In Managed Extensions, the existence of two `new` expressions to allocate between the native and managed heap was largely transparent. In almost all instances, the compiler is able to use the context to determine whether to allocate memory from the native or managed heap. For example,  
  
```  
Button *button1 = new Button; // OK: managed heap  
int *pi1 = new int;           // OK: native heap  
Int32 *pi2 = new Int32;       // OK: managed heap  
```  
  
 When you do not want the contextual heap allocation, you could direct the compiler with either the `__gc` or `__nogc` keyword. In the new syntax, the separate nature of the two new expressions is made explicit with the introduction of the `gcnew` keyword. For example, the previous three declarations look as follows in the new syntax:  
  
```  
Button^ button1 = gcnew Button;        // OK: managed heap  
int * pi1 = new int;                   // OK: native heap  
Int32^ pi2 = gcnew Int32; // OK: managed heap  
```  
  
 Here is the Managed Extensions initialization of the `Form1` members declared in the previous section:  
  
```  
void InitializeComponent() {  
   components = new System::ComponentModel::Container();  
   button1 = new System::Windows::Forms::Button();  
   myDataGrid = new DataGrid();  
  
   button1->Click +=   
      new System::EventHandler(this, &Form1::button1_Click);  
}  
```  
  
 Here is the same initialization recast to the new syntax. Note that the hat is not required for the reference type when it is the target of a `gcnew` expression.  
  
```  
void InitializeComponent() {  
   components = gcnew System::ComponentModel::Container;  
   button1 = gcnew System::Windows::Forms::Button;  
   myDataGrid = gcnew DataGrid;  
  
   button1->Click +=   
      gcnew System::EventHandler( this, &Form1::button1_Click );  
}  
```  
  
## A Tracking Reference to No Object  
 In the new syntax, `0` no longer represents a null address but is treated as an integer, the same as `1`, `10`, or `100`. A new special token represents a null value for a tracking reference. For example, in Managed Extensions, we initialize a reference type to address no object as follows:  
  
```  
// OK: we set obj to refer to no object  
Object * obj = 0;  
  
// Error: no implicit boxing  
Object * obj2 = 1;  
```  
  
 In the new syntax, any initialization or assignment of a value type to an `Object` causes an implicit boxing of that value type. In the new syntax, both `obj` and `obj2` are initialized to addressed boxed Int32 objects holding the values 0 and 1, respectively. For example:  
  
```  
// causes the implicit boxing of both 0 and 1  
Object ^ obj = 0;  
Object ^ obj2 = 1;  
```  
  
 Therefore, in order to perform the explicit initialization, assignment, and comparison of a tracking handle to null, use a new keyword, `nullptr`.  The correct revision of the original example looks as follows:  
  
```  
// OK: we set obj to refer to no object  
Object ^ obj = nullptr;  
  
// OK: we initialize obj2 to a Int32^  
Object ^ obj2 = 1;  
```  
  
 This complicates somewhat the porting of existing code into the new syntax. For example, consider the following value class declaration:  
  
```  
__value struct Holder {  
   Holder( Continuation* c, Sexpr* v ) {  
      cont = c;  
      value = v;  
      args = 0;  
      env = 0;  
   }  
  
private:  
   Continuation* cont;  
   Sexpr * value;  
   Environment* env;  
   Sexpr * args __gc [];  
};  
```  
  
 Here, both `args` and `env` are CLR reference types. The initialization of these two members to `0` in the constructor cannot remain unchanged in the transition to the new syntax. Rather, they must be changed to `nullptr`:  
  
```  
value struct Holder {  
   Holder( Continuation^ c, Sexpr^ v )  
   {  
      cont = c;  
      value = v;  
      args = nullptr;  
      env = nullptr;  
   }  
  
private:  
   Continuation^ cont;  
   Sexpr^ value;  
   Environment^ env;  
   array<Sexpr^>^ args;  
};  
```  
  
 Similarly, tests against those members comparing them to `0` must also be changed to compare the members to `nullptr`. Here is the Managed Extensions syntax:  
  
```  
Sexpr * Loop (Sexpr* input) {  
   value = 0;  
   Holder holder = Interpret(this, input, env);  
  
   while (holder.cont != 0) {  
      if (holder.env != 0) {  
         holder=Interpret(holder.cont,holder.value,holder.env);  
      }  
      else if (holder.args != 0) {  
         holder =   
         holder.value->closure()->  
         apply(holder.cont,holder.args);  
      }  
   }  
  
   return value;  
}  
```  
  
 Here is the revision, replacing each `0` instance with a `nullptr`. The translation tool helps in this transformation by automating many if not all occurrences, including use of the `NULL` macro.  
  
```  
Sexpr ^ Loop (Sexpr^ input) {  
   value = nullptr;  
   Holder holder = Interpret(this, input, env);  
  
   while ( holder.cont != nullptr ) {  
      if ( holder.env != nullptr ) {  
         holder=Interpret(holder.cont,holder.value,holder.env);  
      }  
      else if (holder.args != nullptr ) {  
         holder =   
         holder.value->closure()->  
         apply(holder.cont,holder.args);  
      }  
   }  
  
   return value;  
}  
```  
  
 The `nullptr` is converted into any pointer or tracking handle type but is not promoted to an integral type. For example, in the following set of initializations, the `nullptr` is valid only as an initial value to the first two.  
  
```  
// OK: we set obj and pstr to refer to no object  
Object^ obj = nullptr;  
char*   pstr = nullptr; // 0 would also work here  
  
// Error: no conversion of nullptr to 0 …  
int ival = nullptr;  
```  
  
 Similarly, given an overloaded set of methods such as the following:  
  
```  
void f( Object^ ); // (1)  
void f( char* );   // (2)  
void f( int );     // (3)  
```  
  
 An invocation with `nullptr` literal, such as the following,  
  
```  
// Error: ambiguous: matches (1) and (2)  
f(  nullptr );  
```  
  
 is ambiguous because the `nullptr` matches both a tracking handle and a pointer, and there is no preference given to one type over the other. (This situation requires an explicit cast in order to disambiguate.)  
  
 An invocation with `0` exactly matches instance (3):  
  
```  
// OK: matches (3)  
f( 0 );  
```  
  
 because `0` is of type integer. Were `f(int)` not present, the call would unambiguously match `f(char*)` through a standard conversion. The matching rules give precedence of an exact match over a standard conversion. In the absence of an exact match, a standard conversion is given precedence over an implicit boxing of a value type. That is why there is no ambiguity.  
  
## See Also  
 [Managed Types (C++/CL)](../dotnet/managed-types-cpp-cl.md)   
 [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md)   
 [Handle to Object Operator (^)](../windows/handle-to-object-operator-hat-cpp-component-extensions.md)   
 [nullptr](../windows/nullptr-cpp-component-extensions.md)