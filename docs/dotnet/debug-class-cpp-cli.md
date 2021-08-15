---
description: "Learn more about: Debug Class (C++/CLI)"
title: "Debug Class (C++/CLI)"
ms.date: "11/04/2016"
helpviewer_keywords: ["Trace class, Visual C++", ".NET Framework [C++], Debug class", "Debug class"]
ms.assetid: 076bd528-1b6f-4e8a-a372-eb5849cf969a
---
# Debug Class (C++/CLI)

When using <xref:System.Diagnostics.Debug> in a Visual C++ application, the behavior does not change between a debug and a release build.

## Remarks

The behavior for <xref:System.Diagnostics.Trace> is identical to the behavior for the Debug class, but is dependent on the symbol TRACE being defined. This means that you must `#ifdef` any Trace-related code to prevent debug behavior in a release build.

## Example: Always executes output statements

### Description

The following sample always executes the output statements, regardless of whether you compile with **/DDEBUG** or **/DTRACE**.

### Code

```cpp
// mcpp_debug_class.cpp
// compile with: /clr
#using <system.dll>
using namespace System::Diagnostics;
using namespace System;

int main() {
   Trace::Listeners->Add( gcnew TextWriterTraceListener( Console::Out ) );
   Trace::AutoFlush = true;
   Trace::Indent();
   Trace::WriteLine( "Entering Main" );
   Console::WriteLine( "Hello World." );
   Trace::WriteLine( "Exiting Main" );
   Trace::Unindent();

   Debug::WriteLine("test");
}
```

### Output

```Output
    Entering Main
Hello World.
    Exiting Main
test
```

## Example: Use #ifdef and #endif directives

### Description

To get the expected behavior (that is, no "test" output printed for a release build), you must use the `#ifdef` and `#endif` directives. The previous code sample is modified below to demonstrate this fix:

### Code

```cpp
// mcpp_debug_class2.cpp
// compile with: /clr
#using <system.dll>
using namespace System::Diagnostics;
using namespace System;

int main() {
   Trace::Listeners->Add( gcnew TextWriterTraceListener( Console::Out ) );
   Trace::AutoFlush = true;
   Trace::Indent();

#ifdef TRACE   // checks for a debug build
   Trace::WriteLine( "Entering Main" );
   Console::WriteLine( "Hello World." );
   Trace::WriteLine( "Exiting Main" );
#endif
   Trace::Unindent();

#ifdef DEBUG   // checks for a debug build
   Debug::WriteLine("test");
#endif   //ends the conditional block
}
```

## See also

[.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
