---
description: "Learn more about: Stringizing operator (#)"
title: "Stringizing operator (#)"
ms.date: "08/29/2019"
f1_keywords: ["#"]
helpviewer_keywords: ["preprocessor, operators", "arguments [C++], converting to strings", "stringizing operator", "preprocessor", "string literals, converting macro parameters to", "macros [C++], converting parameters to strings", "# preprocessor operator"]
ms.assetid: 1175dd19-4538-43b3-ad97-a008ab80e7b1
---
# Stringizing operator (#)

The number-sign or "stringizing" operator (**#**) converts macro parameters to string literals without expanding the parameter definition. It's used only with macros that take arguments. If it precedes a formal parameter in the macro definition, the actual argument passed by the macro invocation is enclosed in quotation marks and treated as a string literal. The string literal then replaces each occurrence of a combination of the stringizing operator and formal parameter within the macro definition.

> [!NOTE]
> The Microsoft C (versions 6.0 and earlier) extension to the ANSI C standard that previously expanded macro formal arguments appearing inside string literals and character constants is no longer supported. Code that relied on this extension should be rewritten using the stringizing (**#**) operator.

White space that precedes the first token and follows the last token of the actual argument is ignored. Any white space between the tokens in the actual argument is reduced to a single white space in the resulting string literal. Thus, if a comment occurs between two tokens in the actual argument, it's reduced to a single white space. The resulting string literal is automatically concatenated with any adjacent string literals that are separated only by white space.

Further, if a character contained in the argument usually requires an escape sequence when used in a string literal, for example, the quotation mark (`"`) or backslash (`\`) character, the necessary escape backslash is automatically inserted before the character.

The Microsoft C++ stringizing operator doesn't behave correctly when it's used with strings that include escape sequences. In this situation, the compiler generates [Compiler Error C2017](../error-messages/compiler-errors-1/compiler-error-c2017.md).

## Examples

The following example shows a macro definition that includes the stringizing operator, and a main function that invokes the macro:

```cpp
// stringizer.cpp
#include <stdio.h>
#define stringer( x ) printf_s( #x "\n" )
int main() {
   stringer( In quotes in the printf function call );
   stringer( "In quotes when printed to the screen" );
   stringer( "This: \"  prints an escaped double quote" );
}
```

The `stringer` macros are expanded during preprocessing, producing the following code:

```cpp
int main() {
   printf_s( "In quotes in the printf function call" "\n" );
   printf_s( "\"In quotes when printed to the screen\"" "\n" );
   printf_s( "\"This: \\\" prints an escaped double quote\"" "\n" );
}
```

```Output
In quotes in the printf function call
"In quotes when printed to the screen"
"This: \"  prints an escaped double quote"
```

The following sample shows how you can expand a macro parameter:

```cpp
// stringizer_2.cpp
// compile with: /E
#define F abc
#define B def
#define FB(arg) #arg
#define FB1(arg) FB(arg)
FB(F B)
FB1(F B)
```

## See also

[Preprocessor operators](../preprocessor/preprocessor-operators.md)
