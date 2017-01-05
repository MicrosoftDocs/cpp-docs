---
title: "Reflection (C++-CLI) | Microsoft Docs"
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
  - "typeid keyword [C++]"
  - "reflection [C++}, about reflection"
  - "metadata, reflection"
  - "GetType method"
  - ".NET Framework [C++], reflection"
  - "data types [C++], reflection"
  - "reflection [C++}"
ms.assetid: 46b6ff4a-e441-4022-8892-78e69422f230
caps.latest.revision: 24
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
# Reflection (C++/CLI)
Reflection allows known data types to be inspected at runtime. Reflection allows the enumeration of data types in a given assembly, and the members of a given class or value type can be discovered. This is true regardless of whether the type was known or referenced at compile time. This makes reflection a useful feature for development and code management tools.  
  
 Note that the assembly name provided is the strong name (see [Strong-Named Assemblies](http://msdn.microsoft.com/Library/ffbf6d9e-4a88-4a8a-9645-4ce0ee1ee5f9)), which includes the assembly version, culture, and signing information. Note also that the name of the namespace in which the data type is defined can be retrieved, along with the name of the base class.  
  
 The most common way to access reflection features is through the <xref:System.Object.GetType%2A> method. This method is provided by [System::Object](https://msdn.microsoft.com/en-us/library/system.object.aspx), from which all garbage-collected classes derive.  
  
 Reflection on an .exe built with the Visual C++ compiler is allowed if the .exe is built with the **/clr:pure** or **/clr:safe** compiler options. See [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md) for more information.  
  
 Topics in this section:  
  
-   [How to: Implement a Plug-In Component Architecture using Reflection (C++/CLI)](../dotnet/how-to-implement-a-plug-in-component-architecture-using-reflection-cpp-cli.md)  
  
-   [How to: Enumerate Data Types in Assemblies using Reflection (C++/CLI)](../dotnet/how-to-enumerate-data-types-in-assemblies-using-reflection-cpp-cli.md)  
  
 For more information, see [System.Reflection Namespace](https://msdn.microsoft.com/en-us/library/system.reflection.aspx)  
  
## Example  
 The `GetType` method returns a pointer to a <xref:System.Type> class object, which describes the type upon when the object is based. (The **Type** object does not contain any instance-specific information.) One such item is the full name of the type, which can be displayed as follows:  
  
 Note that the type name includes the full scope in which the type is defined, including the namespace, and that it is displayed in .NET syntax, with a dot as the scope resolution operator.  
  
```  
// vcpp_reflection.cpp  
// compile with: /clr  
using namespace System;  
int main() {  
   String ^ s = "sample string";  
   Console::WriteLine("full type name of '{0}' is '{1}'", s, s->GetType());  
}  
```  
  
```Output  
full type name of 'sample string' is 'System.String'  
```  
  
## Example  
 Value types can be used with the `GetType` function as well, but they must be boxed first.  
  
```  
// vcpp_reflection_2.cpp  
// compile with: /clr  
using namespace System;  
int main() {  
   Int32 i = 100;   
   Object ^ o = i;  
   Console::WriteLine("type of i = '{0}'", o->GetType());  
}  
```  
  
```Output  
type of i = 'System.Int32'  
```  
  
## Example  
 As with the `GetType` method, the [typeid](../windows/typeid-cpp-component-extensions.md) operator returns a pointer to a **Type** object, so this code indicates the type name **System.Int32**. Displaying type names is the most basic feature of reflection, but a potentially more useful technique is to inspect or discover the valid values for enumerated types. This can be done by using the static **Enum::GetNames** function, which returns an array of strings, each containing an enumeration value in text form.  The following sample retrieves an array of strings that describes the value enumeration values for the **Options** (CLR) enum and displays them in a loop.  
  
 If a fourth option is added to the **Options** enumeration, this code will report the new option without recompilation, even if the enumeration is defined in a separate assembly.  
  
```  
// vcpp_reflection_3.cpp  
// compile with: /clr  
using namespace System;  
  
enum class Options {   // not a native enum  
   Option1, Option2, Option3  
};  
  
int main() {  
   array<String^>^ names = Enum::GetNames(Options::typeid);  
  
   Console::WriteLine("there are {0} options in enum '{1}'",   
               names->Length, Options::typeid);  
  
   for (int i = 0 ; i < names->Length ; i++)  
      Console::WriteLine("{0}: {1}", i, names[i]);  
  
   Options o = Options::Option2;  
   Console::WriteLine("value of 'o' is {0}", o);  
}  
```  
  
```Output  
there are 3 options in enum 'Options'  
0: Option1  
1: Option2  
2: Option3  
value of 'o' is Option2  
```  
  
## Example  
 The `GetType` object supports a number of members and properties that can be used to examine a type. This code retrieves and displays some of this information:  
  
```  
// vcpp_reflection_4.cpp  
// compile with: /clr  
using namespace System;  
int main() {  
   Console::WriteLine("type information for 'String':");  
   Type ^ t = String::typeid;  
  
   String ^ assemblyName = t->Assembly->FullName;  
   Console::WriteLine("assembly name: {0}", assemblyName);  
  
   String ^ nameSpace = t->Namespace;  
   Console::WriteLine("namespace: {0}", nameSpace);  
  
   String ^ baseType = t->BaseType->FullName;  
   Console::WriteLine("base type: {0}", baseType);  
  
   bool isArray = t->IsArray;  
   Console::WriteLine("is array: {0}", isArray);  
  
   bool isClass = t->IsClass;  
   Console::WriteLine("is class: {0}", isClass);  
}  
```  
  
```Output  
type information for 'String':  
assembly name: mscorlib, Version=1.0.5000.0, Culture=neutral,   
PublicKeyToken=b77a5c561934e089  
namespace: System  
base type: System.Object  
is array: False  
is class: True  
```  
  
## Example  
 Reflection also allows the enumeration of types within an assembly and the members within classes. To demonstrate this feature, define a simple class:  
  
```  
// vcpp_reflection_5.cpp  
// compile with: /clr /LD  
using namespace System;  
public ref class TestClass {  
   int m_i;  
public:  
   TestClass() {}  
   void SimpleTestMember1() {}  
   String ^ SimpleMember2(String ^ s) { return s; }   
   int TestMember(int i) { return i; }  
   property int Member {  
      int get() { return m_i; }  
      void set(int i) { m_i = i; }  
   }  
};  
```  
  
## Example  
 If the code above is compiled into a DLL called vcpp_reflection_6.dll, you can then use reflection to inspect the contents of this assembly. This involves using the static reflection API function [Assembly::Load](https://msdn.microsoft.com/en-us/library/system.reflection.assembly.load.aspx) to load the assembly. This function returns the address of an **Assembly** object that can then be queried about the modules and types within.  
  
 Once the reflection system successfully loads the assembly, an array of **Type** objects is retrieved with the [Assembly::GetTypes](https://msdn.microsoft.com/en-us/library/system.reflection.assembly.gettypes.aspx) function. Each array element contains information about a different type, although in this case, only one class is defined. Using a loop, each **Type** in this array is queried about the type members using the **Type::GetMembers** function. This function returns an array of **MethodInfo** objects, each object containing information about the member function, data member, or property in the type.  
  
 Note that the list of methods includes the functions explicitly defined in **TestClass** and the functions implicitly inherited from the **System::Object** class. As part of being described in .NET rather than in Visual C++ syntax, properties appear as the underlying data member accessed by the get/set functions. The get/set functions appear in this list as regular methods. Reflection is supported through the common language runtime, not by the Visual C++ compiler.  
  
 Although you used this code to inspect an assembly that you defined, you can also use this code to inspect .NET assemblies. For example, if you change TestAssembly to mscorlib, then you will see a listing of every type and method defined in mscorlib.dll.  
  
```  
// vcpp_reflection_6.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::IO;  
using namespace System::Reflection;  
int main() {  
   Assembly ^ a = nullptr;  
   try {  
      // load assembly -- do not use file extension  
      // will look for .dll extension first  
      // then .exe with the filename  
      a = Assembly::Load("vcpp_reflection_5");  
   }  
   catch (FileNotFoundException ^ e) {  
      Console::WriteLine(e->Message);  
      return -1;  
   }  
  
   Console::WriteLine("assembly info:");  
   Console::WriteLine(a->FullName);  
   array<Type^>^ typeArray = a->GetTypes();  
  
   Console::WriteLine("type info ({0} types):", typeArray->Length);  
  
   int totalTypes = 0;  
   int totalMembers = 0;  
   for (int i = 0 ; i < typeArray->Length ; i++) {  
      // retrieve array of member descriptions  
      array<MemberInfo^>^ member = typeArray[i]->GetMembers();  
  
      Console::WriteLine("  members of {0} ({1} members):",   
      typeArray[i]->FullName, member->Length);  
      for (int j = 0 ; j < member->Length ; j++) {  
         Console::Write("       ({0})",   
         member[j]->MemberType.ToString() );  
         Console::Write("{0}  ", member[j]);  
         Console::WriteLine("");  
         totalMembers++;  
      }  
      totalTypes++;  
   }  
   Console::WriteLine("{0} total types, {1} total members",  
   totalTypes, totalMembers);  
}  
```  
  
## See Also  
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)