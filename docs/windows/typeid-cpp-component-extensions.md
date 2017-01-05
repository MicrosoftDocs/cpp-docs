---
title: "typeid  (C++ Component Extensions) | Microsoft Docs"
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
  - "typeid keyword [C++]"
ms.assetid: e9706cae-e7c4-4d6d-b474-646d73df3e70
caps.latest.revision: 35
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# typeid  (C++ Component Extensions)
Gets a value that indicates the type of an object.  
  
> [!WARNING]
>  This topic refers to the C++ Component Extensions version of typeid. For the ISO C++ version of this keyword, see [typeid Operator](../cpp/typeid-operator.md).  
  
## All Runtimes  
  
### Syntax  
  
```cpp  
  
T::typeid  
```  
  
### Parameters  
 *T*  
 A type name.  
  
## Windows Runtime  
  
### Syntax  
  
```cpp  
Platform::Type^ type = T::typeid;  
```  
  
### Parameters  
 `T`  
 A type name.  
  
### Remarks  
 In [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)],  typeid returns a [Platform::Type](http://msdn.microsoft.com/Library/d6b03f1e-b240-49b9-a08e-53a460030475) that is constructed from runtime type information.  
  
### Requirements  
 Compiler option: **/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Syntax**  
  
```  
  
type::typeid  
```  
  
 **Parameters**  
  
 *type*  
 The name of a type (abstract declarator) for which you want the System::Type object.  
  
 **Remarks**  
  
 `typeid` is used to get the <xref:System.Type> for a type at compile time.  
  
 `typeid` is similar to getting the System::Type for a type at run time using <xref:System.Type.GetType%2A> or <xref:System.Object.GetType%2A>. However, typeid only accepts a type name as a parameter.  If you want to use an instance of a type to get its System::Type name, use GetType.  
  
 `typeid` must be able to evaluate a type name (type) at compile time, whereas GetType evaluates the type to return at run time.  
  
 `typeid` can take a native type name or common language runtime alias for the native type name; see [.NET Framework Equivalents to C++ Native Types (C++/CLI)](../dotnet/dotnet-framework-equivalents-to-cpp-native-types-cpp-cli.md) for more information.  
  
 `typeid` also works with native types, although it will still return a System::Type.  To get a type_info structure, use [typeid Operator](../cpp/typeid-operator.md).  
  
### Requirements  
 Compiler option: **/clr**  
  
### Examples  
 **Example**  
  
 The following example compares the typeid keyword to the GetType() member.  
  
```  
// keyword__typeid.cpp  
// compile with: /clr  
using namespace System;  
  
ref struct G {  
   int i;  
};  
  
int main() {  
   G ^ pG = gcnew G;  
   Type ^ pType = pG->GetType();  
   Type ^ pType2 = G::typeid;  
  
   if (pType == pType2)  
      Console::WriteLine("typeid and GetType returned the same System::Type");  
   Console::WriteLine(G::typeid);  
  
   typedef float* FloatPtr;  
   Console::WriteLine(FloatPtr::typeid);  
}  
```  
  
 **Output**  
  
```Output  
typeid and GetType returned the same System::Type  
G  
  
System.Single*  
  
```  
  
 **Example**  
  
 The following sample shows that a variable of type System::Type can be used to get the attributes on a type.  It also shows that for some types, you will have to create a typedef to use `typeid`.  
  
```  
// keyword__typeid_2.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::Security;  
using namespace System::Security::Permissions;  
  
typedef int ^ handle_to_int;  
typedef int * pointer_to_int;  
  
public ref class MyClass {};  
  
class MyClass2 {};  
  
[attribute(AttributeTargets::All)]  
ref class AtClass {  
public:  
   AtClass(Type ^) {  
      Console::WriteLine("in AtClass Type ^ constructor");  
   }  
};  
  
[attribute(AttributeTargets::All)]  
ref class AtClass2 {  
public:  
   AtClass2() {  
      Console::WriteLine("in AtClass2 constructor");  
   }  
};  
  
// Apply the AtClass and AtClass2 attributes to class B  
[AtClass(MyClass::typeid), AtClass2]     
[AttributeUsage(AttributeTargets::All)]  
ref class B : Attribute {};  
  
int main() {  
   Type ^ MyType = B::typeid;  
  
   Console::WriteLine(MyType->IsClass);  
  
   array<Object^>^ MyArray = MyType -> GetCustomAttributes(true);  
   for (int i = 0 ; i < MyArray->Length ; i++ )  
      Console::WriteLine(MyArray[i]);  
  
   if (int::typeid != pointer_to_int::typeid)  
      Console::WriteLine("int::typeid != pointer_to_int::typeid, as expected");  
  
   if (int::typeid == handle_to_int::typeid)  
      Console::WriteLine("int::typeid == handle_to_int::typeid, as expected");  
}  
```  
  
 **Output**  
  
```Output  
True  
  
in AtClass2 constructor  
  
in AtClass Type ^ constructor  
  
AtClass2  
  
System.AttributeUsageAttribute  
  
AtClass  
  
int::typeid != pointer_to_int::typeid, as expected  
  
int::typeid == handle_to_int::typeid, as expected  
```  
  
## See Also  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)