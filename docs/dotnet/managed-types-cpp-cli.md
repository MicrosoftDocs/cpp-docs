---
title: "Managed Types (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["data types [C++], managed", "managed data types [C++]", ".NET Framework [C++], managed types", "data types [C++], .NET feature access",
    "main function, in managed applications", "managed code, main() function",
    ".NET Framework [C++], C++ equivalents",
    "__nogc type declarations", "__value keyword, issues when nesting",
    "equality, testing for",
    "versioning, diagnosing conflicts", "versioning", "exceptions, diagnosing odd behavior", "compatibility, between assemblies"]
ms.assetid: 679b8ed3-d966-4a0c-b627-2a3f3ec96b74
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# Managed Types (C++/CLI)
Visual C++ allows access to .NET features through managed types, which provide support for features of the common language runtime and are subject to the advantages and restrictions of the runtime.  
  
## <a name="main_functions"></a> Managed Types and the main Function
When writing an application using **/clr**, the arguments of the **main()** function cannot be of a managed type.  
  
 An example of a proper signature is:  
  
```cpp  
// managed_types_and_main.cpp  
// compile with: /clr  
int main(int, char*[], char*[]) {}  
```  

## <a name="dotnet"></a> .NET Framework Equivalents to C++ Native Types
The following table shows the keywords for built-in Visual C++ types, which are aliases of predefined types in the **System** namespace.  
  
|Visual C++ type|.NET Framework type|  
|-----------------------|-------------------------|  
|**bool**|**System.Boolean**|  
|**signed char** (see [/J](../build/reference/j-default-char-type-is-unsigned.md) for more information)|**System.SByte**|  
|**unsigned char**|**System.Byte**|  
|**wchar_t**|**System.Char**|  
|**double** and **long double**|**System.Double**|  
|**float**|**System.Single**|  
|**int**, **signed int**, **long**, and **signed long**|**System.Int32**|  
|**unsigned int** and **unsigned long**|**System.UInt32**|  
|**__int64** and **signed __int64**|**System.Int64**|  
|**unsigned __int64**|**System.UInt64**|  
|**short** and **signed short**|**System.Int16**|  
|**unsigned short**|**System.UInt16**|  
|**void**|**System.Void**|  
  
## <a name="version_issues"></a> Version Issues for Value Types Nested in Native Types
Consider a signed (strong name) assembly component used to build a client assembly. The component contains a value type that is used in the client as the type for a member of a native union, a class, or an array. If a future version of the component changes the size or layout of the value type, the client must be recompiled.  
  
 Create a keyfile with [sn.exe](/dotnet/framework/tools/sn-exe-strong-name-tool) (`sn -k mykey.snk`).  
  
### Example  
 The following sample is the component.  
  
```cpp 
// nested_value_types.cpp  
// compile with: /clr /LD  
using namespace System::Reflection;  
[assembly:AssemblyVersion("1.0.0.*"),   
assembly:AssemblyKeyFile("mykey.snk")];  
  
public value struct S {  
   int i;  
   void Test() {  
      System::Console::WriteLine("S.i = {0}", i);  
   }  
};  
```  
  
### Example  
 This sample is the client:  
  
```cpp  
// nested_value_types_2.cpp  
// compile with: /clr  
#using <nested_value_types.dll>  
  
struct S2 {  
   S MyS1, MyS2;  
};  
  
int main() {  
   S2 MyS2a, MyS2b;  
   MyS2a.MyS1.i = 5;  
   MyS2a.MyS2.i = 6;  
   MyS2b.MyS1.i = 10;  
   MyS2b.MyS2.i = 11;  
  
   MyS2a.MyS1.Test();  
   MyS2a.MyS2.Test();  
   MyS2b.MyS1.Test();  
   MyS2b.MyS2.Test();  
}  
```  
  
### Output  
  
```  
S.i = 5  
S.i = 6  
S.i = 10  
S.i = 11  
```  
  
### Comments  
 However, if you add another member to `struct S` in nested_value_types.cpp, (for example, `double d;`) and recompile the component without recompiling the client, the result is an unhandled exception (of type <xref:System.IO.FileLoadException?displayProperty=fullName>).  

## <a name="test_equality"></a> How to: Test for Equality
In the following sample, a test for equality that uses Managed Extensions for C++ is based on what the handles refer to.  
  
### Example  
  
```cpp  
// mcppv2_equality_test.cpp  
// compile with: /clr /LD  
using namespace System;  
  
bool Test1() {  
   String ^ str1 = "test";  
   String ^ str2 = "test";  
   return (str1 == str2);  
}  
```  
  
 The IL for this program shows that the return value is implemented by using a call to op_Equality.  
  
```  
IL_0012:  call       bool [mscorlib]System.String::op_Equality(string,  
                                                               string)  
```  

## <a name="diagnose_fix"></a> How to: Diagnose and Fix Assembly Compatibility Problems
This topic explains what can happen when the version of an assembly referenced at compile time doesn't match the version of the assembly referenced at runtime, and how to avoid the problem.  
  
 When an assembly is compiled, other assemblies may be referenced with the `#using` syntax. During the compilation, these assemblies are accessed by the compiler. Information from these assemblies is used to make optimization decisions.  
  
 However, if the referenced assembly is changed and recompiled, and you do not recompile the referencing assembly that is dependent on it, the assemblies might not still be compatible. Optimization decisions that were valid at first might not be correct with respect to the new assembly version. Various runtime errors might occur due to these incompatibilities. There is no specific exception that will be produced in such cases. The way the failure is reported at runtime depends on the nature of the code change that caused the problem.  
  
 These errors should not be a problem in your final production code as long as the entire application is rebuilt for the released version of your product. Assemblies that are released to the public should be marked with an official version number, which will ensure that these problems are avoided. For more information, see [Assembly Versioning](/dotnet/framework/app-domains/assembly-versioning).  
  
### Diagnosing and fixing an incompatibility error  
  
1.  If you encounter runtime exceptions or other error conditions that occur in code that references another assembly, and have no other identified cause, you may be dealing with an out of date assembly.  
  
2.  First, isolate and reproduce the exception or other error condition. A problem that occurs due to an outdated exception should be reproducible.  
  
3.  Check the timestamp of any assemblies referenced in your application.  
  
4.  If the timestamps of any referenced assemblies are later than the timestamp of your application's last compilation, then your application is out of date. If this occurs, recompile your application with the most recent assembly, and make any code changes required.  
  
5.  Rerun the application, perform the steps that reproduce the problem, and verify that the exception does not occur.  
  
### Example  
 The following program illustrates the problem by reducing the accessibility of a method, and trying to access that method in another assembly without recompiling. Try compiling `changeaccess.cpp` first. This is the referenced assembly which will change. Then compile `referencing.cpp`. The compilation succeeds. Now, reduce the accessibility of the called method. Recompile `changeaccess.cpp` with the flag `/DCHANGE_ACCESS`. This makes the method protected, rather than private, so it can longer be called legally. Without recompiling `referencing.exe`, rerun the application. An exception <xref:System.MethodAccessException> will result.  
  
```cpp  
// changeaccess.cpp  
// compile with: /clr:safe /LD  
// After the initial compilation, add /DCHANGE_ACCESS and rerun  
// referencing.exe to introduce an error at runtime. To correct  
// the problem, recompile referencing.exe  
  
public ref class Test {  
#if defined(CHANGE_ACCESS)  
protected:  
#else  
public:  
#endif  
  
  int access_me() {  
    return 0;  
  }  
  
};  
  
```  
  
```cpp  
// referencing.cpp  
// compile with: /clr:safe   
#using <changeaccess.dll>  
  
// Force the function to be inline, to override the compiler's own  
// algorithm.  
__forceinline  
int CallMethod(Test^ t) {  
  // The call is allowed only if access_me is declared public  
  return t->access_me();  
}  
  
int main() {  
  Test^ t = gcnew Test();  
  try  
  {  
    CallMethod(t);  
    System::Console::WriteLine("No exception.");  
  }  
  catch (System::Exception ^ e)  
  {  
    System::Console::WriteLine("Exception!");  
  }  
  return 0;  
}  
  
```  

## See Also  
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

 [Interoperability with Other .NET Languages (C++/CLI)](../dotnet/interoperability-with-other-dotnet-languages-cpp-cli.md)

 [Managed Types (C++/CLI)](../dotnet/managed-types-cpp-cli.md)

 [#using Directive](../preprocessor/hash-using-directive-cpp.md) 
