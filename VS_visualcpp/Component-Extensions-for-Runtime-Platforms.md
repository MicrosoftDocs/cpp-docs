---
title: "Component Extensions for Runtime Platforms"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 1e400ee6-3ac9-4910-a608-9d3d5993e423
caps.latest.revision: 77
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
# Component Extensions for Runtime Platforms
Visual C++ provides language extensions to help you program against runtime platforms. By using Visual C++ component extensions (C++/CX), you can program Windows 8.x Store apps and components that compile to native code. Although you can create Windows 8.x Store apps by programming directly against the Windows Runtime COM interfaces, by using C++/CX, you can work with constructors, exceptions, and other modern C++ programming idioms. To enable C++ programming in a managed execution environment on the .NET platform, you can use C++/CLI.  
  
 **Two runtimes, one set of extensions**  
  
 C++/CX is a subset of C++/CLI. For extensions that are common to C++/CX and C++/CLI, the semantics depend on whether you are targeting the common language runtime (CLR) or the Windows Runtime. To compile your app to run on the Windows Runtime, specify the **/ZW** compiler option. To compile it to run on the CLR, specify the **/clr** compiler option. These switches are set automatically when you use Visual Studio to create a project.  
  
 For more information about how to create Windows 8.x Store apps in C++, see [Roadmap for Windows Runtime apps using C++](http://msdn.microsoft.com/library/windows/apps/hh700360.aspx).  
  
 C++/CLI extends the ISO/ANSI C++ standard, and is defined under the Ecma C++/CLI Standard. For more information, see [.NET Programming with C++/CLI (Visual C++)](../VS_visualcpp/.NET-Programming-with-C---CLI--Visual-C---.md).  
  
## Data Type Keywords  
 The language extensions include *aggregate keywords*, which are keywords that consist of two tokens separated by white space. The tokens might have one meaning when they are used separately, and another meaning when they are used together. For example, the word "ref" is an ordinary identifier, and the word "class" is a keyword that declares a native class. But when these words are combined to form `ref class`, the resulting aggregate keyword declares an entity that is known as a *runtime class*.  
  
 The extensions also include *context-sensitive* keywords. A keyword is treated as context-sensitive depending on the kind of statement that contains it, and its placement in that statement. For example, the token "property" can be an identifier, or it can declare a special kind of public class member.  
  
 The following table lists keywords in the C++ language extension.  
  
|Keyword|Context sensitive|Purpose|Reference|  
|-------------|-----------------------|-------------|---------------|  
|`ref class`<br /><br /> `ref struct`|No|Declares a class.|[Classes and Structs](../VS_visualcpp/Classes-and-Structs---C---Component-Extensions-.md)|  
|`value class`<br /><br /> `value struct`|No|Declares a value class.|[Classes and Structs](../VS_visualcpp/Classes-and-Structs---C---Component-Extensions-.md)|  
|`interface class`<br /><br /> `interface struct`|No|Declares an interface.|[interface class](../VS_visualcpp/interface-class---C---Component-Extensions-.md)|  
|`enum class`<br /><br /> `enum struct`|No|Declares an enumeration.|[enum class](../VS_visualcpp/enum-class---C---Component-Extensions-.md)|  
|`property`|Yes|Declares a property.|[property](../VS_visualcpp/property---C---Component-Extensions-.md)|  
|`delegate`|Yes|Declares a delegate.|[delegate  (C++ Component Extensions)](../VS_visualcpp/delegate---C---Component-Extensions-.md)|  
|`event`|Yes|Declares an event.|[event](../VS_visualcpp/event---C---Component-Extensions-.md)|  
  
## Override Specifiers  
 You can use the following keywords to qualify override behavior for derivation. Although the `new` keyword is not an extension of C++, it is listed here because it can be used in an additional context. Some specifiers are also valid for native programming. For more information, see [How to: Declare Override Specifiers in Native Compilations (C++/CLI)](../VS_visualcpp/How-to--Declare-Override-Specifiers-in-Native-Compilations--C---CLI-.md).  
  
|Keyword|Context Sensitive|Purpose|Reference|  
|-------------|-----------------------|-------------|---------------|  
|`abstract`|Yes|Indicates that functions or classes are abstract.|[abstract](../VS_visualcpp/abstract---C---Component-Extensions-.md)|  
|`new`|No|Indicates that a function is not an override of a base class version.|[new (new slot in vtable)](../VS_visualcpp/new--new-slot-in-vtable----C---Component-Extensions-.md)|  
|`override`|Yes|Indicates that a method must be an override of a base-class version.|[override](../VS_visualcpp/override---C---Component-Extensions-.md)|  
|`sealed`|Yes|Prevents classes from being used as base classes.|[sealed](../VS_visualcpp/sealed---C---Component-Extensions-.md)|  
  
## Keywords for Generics  
 The following keywords have been added to support generic types. For more information, see [Generics](../VS_visualcpp/Generics---C---Component-Extensions-.md).  
  
|Keyword|Context sensitive|Purpose|  
|-------------|-----------------------|-------------|  
|`generic`|No|Declares a generic type.|  
|`where`|Yes|Specifies the constraints that are applied to a generic type parameter.|  
  
## Miscellaneous Keywords  
 The following keywords have been added to the C++ extensions.  
  
|Keyword|Context sensitive|Purpose|Reference|  
|-------------|-----------------------|-------------|---------------|  
|`finally`|Yes|Indicates default exception handlings behavior.|[Exception Handling](../VS_visualcpp/Exception-Handling---C---Component-Extensions-.md)|  
|`for each, in`|No|Enumerates elements of a collection.|[for each, in](../VS_visualcpp/for-each--in.md)|  
|`gcnew`|No|Allocates types on the garbage-collected heap. Use instead of `new` and `delete`.|[ref new, gcnew](../VS_visualcpp/ref-new--gcnew---C---Component-Extensions-.md)|  
|`ref new`|Yes|Allocates a Windows Runtime type. Use instead of `new` and `delete`.|[ref new, gcnew](../VS_visualcpp/ref-new--gcnew---C---Component-Extensions-.md)|  
|`initonly`|Yes|Indicates that a member can only be initialized at declaration or in a static constructor.|[initonly (C++/CLI)](../VS_visualcpp/initonly--C---CLI-.md)|  
|`literal`|Yes|Creates a literal variable.|[literal](../VS_visualcpp/literal--C---Component-Extensions-.md)|  
|`nullptr`|No|Indicates that a handle or pointer does not point at an object.|[nullptr](../VS_visualcpp/nullptr---C---Component-Extensions-.md)|  
  
## Template Constructs  
 The following language constructs are implemented as templates, instead of as keywords. If you specify the **/ZW** compiler option, they are defined in the `lang` namespace. If you specify the **/clr** compiler option, they are defined in the `cli` namespace.  
  
|Keyword|Purpose|Reference|  
|-------------|-------------|---------------|  
|`array`|Declares an array.|[Arrays](../VS_visualcpp/Arrays--C---Component-Extensions-.md)|  
|`interior_ptr`|(CLR only) Points to data in a reference type.|[interior_ptr (C++/CLI)](../VS_visualcpp/interior_ptr--C---CLI-.md)|  
|`pin_ptr`|(CLR only) Points to CLR reference types to temporarily suppress the garbage-collection system.|[pin_ptr (C++/CLI)](../VS_visualcpp/pin_ptr--C---CLI-.md)|  
|`safe_cast`|Determines and executes the optimal casting method for a runtime type.|[safe_cast](../VS_visualcpp/safe_cast--C---Component-Extensions-.md)|  
|`typeid`|(CLR only) Retrieves a <xref:System.Type?qualifyHint=True> object that describes the given type or object.|[typeid](../VS_visualcpp/typeid---C---Component-Extensions-.md)|  
  
## Declarators  
 The following type declarators instruct the runtime to automatically manage the lifetime and deletion of allocated objects.  
  
|Operator|Purpose|Reference|  
|--------------|-------------|---------------|  
|`^`|Declares a handle to an object; that is, a pointer to a Windows Runtime or CLR object that is automatically deleted when it is no longer usable.|[Handle to Object Operator (^)](../VS_visualcpp/Handle-to-Object-Operator--^----C---Component-Extensions-.md)|  
|`%`|Declares a tracking reference; that is, a reference to a Windows Runtime or CLR object that is automatically deleted when it is no longer usable.|[Tracking Reference Operator](../VS_visualcpp/Tracking-Reference-Operator--C---Component-Extensions-.md)|  
  
## Additional Constructs and Related Topics  
 This section lists additional programming constructs, and topics that pertain to the CLR.  
  
|Topic|Description|  
|-----------|-----------------|  
|[__identifier (C++/CLI)](../VS_visualcpp/__identifier--C---CLI-.md)|(Windows Runtime and CLR) Enables the use of keywords as identifiers.|  
|[Variable Argument Lists (...) (C++/CLI)](../VS_visualcpp/Variable-Argument-Lists--...---C---CLI-.md)|(Windows Runtime and CLR) Enables a function to take a variable number of arguments.|  
|[.NET Framework Equivalents to C++ Native Types (C++/CLI)](../VS_visualcpp/.NET-Framework-Equivalents-to-C---Native-Types--C---CLI-.md)|Lists the CLR types that are used in place of C++ integral types.|  
|[appdomain](../VS_visualcpp/appdomain.md) `__declspec` modifier|`__declspec` modifier that mandates that static and global variables exist per appdomain.|  
|[C-Style Casts with /clr (C++/CLI)](../VS_visualcpp/C-Style-Casts-with--clr--C---CLI-.md)|Describes how C-style casts are interpreted.|  
|[__clrcall](../VS_visualcpp/__clrcall.md) calling convention|Indicates the CLR-compliant calling convention.|  
|`__cplusplus_cli`|[Predefined Macros](../VS_visualcpp/Predefined-Macros.md)|  
|[Custom Attributes](../VS_visualcpp/Custom-Attributes--C---.md)|Describes how to define your own CLR attributes.|  
|[Exception Handling](../VS_visualcpp/Exception-Handling---C---Component-Extensions-.md)|Provides an overview of exception handling.|  
|[Explicit Overrides](../VS_visualcpp/Explicit-Overrides---C---Component-Extensions-.md)|Demonstrates how member functions can override arbitrary members.|  
|[Friend Assemblies (C++)](../VS_visualcpp/Friend-Assemblies--C---.md)|Discusses how a client assembly can access all types in an assembly component.|  
|[Boxing](../VS_visualcpp/Boxing---C---Component-Extensions-.md)|Demonstrates the conditions in which values types are boxed.|  
|[Compiler Support for Type Traits](../VS_visualcpp/Compiler-Support-for-Type-Traits--C---Component-Extensions-.md)|Discusses how to detect characteristics of types at compile time.|  
|[managed, unmanaged](../VS_visualcpp/managed--unmanaged.md) pragmas|Demonstrates how managed and unmanaged functions can co-exist in the same module.|  
|[process](../VS_visualcpp/process.md) `__declspec` modifier|`__declspec` modifier that mandates that static and global variables exist per process.|  
|[Reflection (C++/CLI)](../VS_visualcpp/Reflection--C---CLI-.md)|Demonstrates the CLR version of run-time type information.|  
|[String](../VS_visualcpp/String---C---Component-Extensions-.md)|Discusses compiler conversion of string literals to <xref:System.String?qualifyHint=False>.|  
|[Type Forwarding (C++/CLI)](../VS_visualcpp/Type-Forwarding--C---CLI-.md)|Enables the movement of a type in a shipping assembly to another assembly so that client code does not have to be recompiled.|  
|[User-Defined Attributes](../VS_visualcpp/User-Defined-Attributes---C---Component-Extensions-.md)|Demonstrates user-defined attributes.|  
|[#using Directive](../VS_visualcpp/#using-Directive--C---.md)|Imports external assemblies.|  
|[XML Documentation](../VS_visualcpp/XML-Documentation--Visual-C---.md)|Explains XML-based code documentation by using [/doc (Process Documentation Comments) (C/C++)](../VS_visualcpp/-doc--Process-Documentation-Comments---C-C---.md)|  
  
## See Also  
 [.NET Programming with C++/CLI (Visual C++)](../VS_visualcpp/.NET-Programming-with-C---CLI--Visual-C---.md)   
 [Native and .NET Interoperability](../VS_visualcpp/Native-and-.NET-Interoperability.md)