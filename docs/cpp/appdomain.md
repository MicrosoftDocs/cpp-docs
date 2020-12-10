---
description: "Learn more about: appdomain"
title: "appdomain"
ms.date: "11/04/2016"
f1_keywords: ["appdomain_cpp"]
helpviewer_keywords: ["appdomain __declspec keyword", "__declspec keyword [C++], appdomain"]
ms.assetid: 29d843cb-cb6b-4d1b-a48d-d928a877234d
---
# appdomain

Specifies that each application domain of your managed application should have its own copy of a particular global variable or static member variable. See [Application Domains and Visual C++](../dotnet/application-domains-and-visual-cpp.md) for more information.

Every application domain has its own copy of a per-appdomain variable. A constructor of an appdomain variable is executed when an assembly is loaded into an application domain, and the destructor is executed when the application domain is unloaded.

If you want all application domains within a process in the common language runtime to share a global variable, use the `__declspec(process)` modifier. `__declspec(process)` is in effect by default under [/clr](../build/reference/clr-common-language-runtime-compilation.md). The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

`__declspec(appdomain)` is only valid when one of the **/clr** compiler options is used. Only a global variable, static member variable, or a static local variable can be marked with `__declspec(appdomain)`. It is an error to apply `__declspec(appdomain)` to static members of managed types because they always have this behavior.

Using `__declspec(appdomain)` is similar to using [Thread Local Storage (TLS)](../parallel/thread-local-storage-tls.md). Threads have their own storage, as do application domains. Using `__declspec(appdomain)` ensures the global variable has its own storage in each application domain created for this application.

There are limitations to mixing the use of per process and per appdomain variables; see [process](../cpp/process.md) for more information.

For example, at program start up, all per-process variables are initialized, then all per-appdomain variables are initialized. Therefore when a per-process variable is being initialized, it cannot depend on the value of any per-application domain variable. It is bad practice to mix the use (assignment) of per appdomain and per process variables.

For information on how to call a function in a specific application domain, see [call_in_appdomain Function](../dotnet/call-in-appdomain-function.md).

## Example

```cpp
// declspec_appdomain.cpp
// compile with: /clr
#include <stdio.h>
using namespace System;

class CGlobal {
public:
   CGlobal(bool bProcess) {
      Counter = 10;
      m_bProcess = bProcess;
      Console::WriteLine("__declspec({0}) CGlobal::CGlobal constructor", m_bProcess ? (String^)"process" : (String^)"appdomain");
   }

   ~CGlobal() {
      Console::WriteLine("__declspec({0}) CGlobal::~CGlobal destructor", m_bProcess ? (String^)"process" : (String^)"appdomain");
   }

   int Counter;

private:
   bool m_bProcess;
};

__declspec(process) CGlobal process_global = CGlobal(true);
__declspec(appdomain) CGlobal appdomain_global = CGlobal(false);

value class Functions {
public:
   static void change() {
      ++appdomain_global.Counter;
   }

   static void display() {
      Console::WriteLine("process_global value in appdomain '{0}': {1}",
         AppDomain::CurrentDomain->FriendlyName,
         process_global.Counter);

      Console::WriteLine("appdomain_global value in appdomain '{0}': {1}",
         AppDomain::CurrentDomain->FriendlyName,
         appdomain_global.Counter);
   }
};

int main() {
   AppDomain^ defaultDomain = AppDomain::CurrentDomain;
   AppDomain^ domain = AppDomain::CreateDomain("Domain 1");
   AppDomain^ domain2 = AppDomain::CreateDomain("Domain 2");
   CrossAppDomainDelegate^ changeDelegate = gcnew CrossAppDomainDelegate(&Functions::change);
   CrossAppDomainDelegate^ displayDelegate = gcnew CrossAppDomainDelegate(&Functions::display);

   // Print the initial values of appdomain_global in all appdomains.
   Console::WriteLine("Initial value");
   defaultDomain->DoCallBack(displayDelegate);
   domain->DoCallBack(displayDelegate);
   domain2->DoCallBack(displayDelegate);

   // Changing the value of appdomain_global in the domain and domain2
   // appdomain_global value in "default" appdomain remain unchanged
   process_global.Counter = 20;
   domain->DoCallBack(changeDelegate);
   domain2->DoCallBack(changeDelegate);
   domain2->DoCallBack(changeDelegate);

   // Print values again
   Console::WriteLine("Changed value");
   defaultDomain->DoCallBack(displayDelegate);
   domain->DoCallBack(displayDelegate);
   domain2->DoCallBack(displayDelegate);

   AppDomain::Unload(domain);
   AppDomain::Unload(domain2);
}
```

```Output
__declspec(process) CGlobal::CGlobal constructor
__declspec(appdomain) CGlobal::CGlobal constructor
Initial value
process_global value in appdomain 'declspec_appdomain.exe': 10
appdomain_global value in appdomain 'declspec_appdomain.exe': 10
__declspec(appdomain) CGlobal::CGlobal constructor
process_global value in appdomain 'Domain 1': 10
appdomain_global value in appdomain 'Domain 1': 10
__declspec(appdomain) CGlobal::CGlobal constructor
process_global value in appdomain 'Domain 2': 10
appdomain_global value in appdomain 'Domain 2': 10
Changed value
process_global value in appdomain 'declspec_appdomain.exe': 20
appdomain_global value in appdomain 'declspec_appdomain.exe': 10
process_global value in appdomain 'Domain 1': 20
appdomain_global value in appdomain 'Domain 1': 11
process_global value in appdomain 'Domain 2': 20
appdomain_global value in appdomain 'Domain 2': 12
__declspec(appdomain) CGlobal::~CGlobal destructor
__declspec(appdomain) CGlobal::~CGlobal destructor
__declspec(appdomain) CGlobal::~CGlobal destructor
__declspec(process) CGlobal::~CGlobal destructor
```

## See also

[__declspec](../cpp/declspec.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
