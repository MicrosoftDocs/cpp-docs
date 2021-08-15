---
description: "Learn more about: call_in_appdomain Function"
title: "call_in_appdomain Function"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["call_in_appdomain"]
helpviewer_keywords: ["call_in_appdomain function"]
ms.assetid: 9a1a5026-b76b-4cae-a3d4-29badeb9db9c
---
# call_in_appdomain Function

Executes a function in a specified application domain.

## Syntax

```
template <typename ArgType1, ...typename ArgTypeN>
void call_in_appdomain(
   DWORD appdomainId,
   void (*voidFunc)(ArgType1, ...ArgTypeN) [ ,
   ArgType1 arg1,
   ...
   ArgTypeN argN ]
);
template <typename RetType, typename ArgType1, ...typename ArgTypeN>
RetType call_in_appdomain(
   DWORD appdomainId,
   RetType (*nonvoidFunc)(ArgType1, ...ArgTypeN) [ ,
   ArgType1 arg1,
   ...
   ArgTypeN argN ]
);
```

#### Parameters

*appdomainId*<br/>
The appdomain in which to call the function.

*voidFunc*<br/>
Pointer to a **`void`** function that takes N parameters (0 <= N <= 15).

*nonvoidFunc*<br/>
Pointer to a non-**`void`** function that takes N parameters (0 <= N <= 15).

*arg1...argN*<br/>
Zero to 15 parameters to be passed to `voidFunc` or `nonvoidFunc` in the other appdomain.

## Return Value

The result of executing `voidFunc` or `nonvoidFunc` in the specified application domain.

## Remarks

The arguments of the function passed to `call_in_appdomain` must not be CLR types.

## Example

```cpp
// msl_call_in_appdomain.cpp
// compile with: /clr

// Defines two functions: one takes a parameter and returns nothing,
// the other takes no parameters and returns an int.  Calls both
// functions in the default appdomain and in a newly-created
// application domain using call_in_appdomain.

#include <msclr\appdomain.h>

using namespace System;
using namespace msclr;

void PrintCurrentDomainName( char* format )
{
   String^ s = gcnew String(format);
   Console::WriteLine( s, AppDomain::CurrentDomain->FriendlyName );
}

int GetDomainId()
{
   return AppDomain::CurrentDomain->Id;
}

int main()
{
   AppDomain^ appDomain1 = AppDomain::CreateDomain( "First Domain" );

   call_in_appdomain( AppDomain::CurrentDomain->Id,
                   &PrintCurrentDomainName,
                   (char*)"default appdomain: {0}" );
   call_in_appdomain( appDomain1->Id,
                   &PrintCurrentDomainName,
                   (char*)"in appDomain1: {0}" );

   int id;
   id = call_in_appdomain( AppDomain::CurrentDomain->Id, &GetDomainId );
   Console::WriteLine( "default appdomain id = {0}", id );
   id = call_in_appdomain( appDomain1->Id, &GetDomainId );
   Console::WriteLine( "appDomain1 id = {0}", id );
}
```

## Output

```
default appdomain: msl_call_in_appdomain.exe
in appDomain1: First Domain
default appdomain id = 1
appDomain1 id = 2
```

## Requirements

**Header file** \<msclr\appdomain.h>

**Namespace** msclr
