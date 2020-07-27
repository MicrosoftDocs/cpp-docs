---
title: "Keywords (C++)"
description: "Lists the C++ standard language keywords, Microsoft-specific keywords, and context-specific keywords."
ms.custom: "index-page"
ms.date: 07/25/2020
helpviewer_keywords: ["keywords [C++]"]
ms.assetid: d7ca94a8-f785-41ce-9f73-d3c4fd508489
---
# Keywords (C++)

Keywords are predefined reserved identifiers that have special meanings. They can't be used as identifiers in your program. The following keywords are reserved for Microsoft C++. Names with leading underscores and names specified for C++/CX and C++/CLI are Microsoft extensions.

## Standard C++ keywords

:::row:::
    :::column:::
        [`alignas`](align-cpp.md)<br/>
        [`alignof`](alignof-operator.md)<br/>
        [`and`](bitwise-and-operator-amp.md) <sup>b</sup><br/>
        [`and_eq`](assignment-operators.md) <sup>b</sup><br/>
        [`asm`](../assembler/inline/asm.md) <sup>a</sup><br/>
        [`auto`](auto-keyword.md)<br/>
        [`bitand`](bitwise-and-operator-amp.md) <sup>b</sup><br/>
        [`bitor`](bitwise-inclusive-or-operator-pipe.md) <sup>b</sup><br/>
        [`bool`](bool-cpp.md)<br/>
        [`break`](break-statement-cpp.md)<br/>
        [`case`](switch-statement-cpp.md)<br/>
        [`catch`](try-throw-and-catch-statements-cpp.md)<br/>
        [`char`](fundamental-types-cpp.md)<br/>
        [`char8_t`](fundamental-types-cpp.md) <sup>c</sup><br/>
        [`char16_t`](char-wchar-t-char16-t-char32-t.md)<br/>
        [`char32_t`](char-wchar-t-char16-t-char32-t.md)<br/>
        [`class`](class-cpp.md)<br/>
        [`compl`](one-s-complement-operator-tilde.md) <sup>b</sup><br/>
        **`concept`** <sup>c</sup><br/>
        [`const`](const-cpp.md)<br/>
        [`const_cast`](const-cast-operator.md)<br/>
        **`consteval`** <sup>c</sup><br/>
        [`constexpr`](constexpr-cpp.md)<br/>
    :::column-end:::
    :::column:::
        **`constinit`** <sup>c</sup><br/>
        [`continue`](continue-statement-cpp.md)<br/>
        **`co_await`** <sup>c</sup><br/>
        **`co_return`** <sup>c</sup><br/>
        **`co_yield`** <sup>c</sup><br/>
        [`decltype`](decltype-cpp.md)<br/>
        [`default`](switch-statement-cpp.md)<br/>
        [`delete`](delete-operator-cpp.md)<br/>
        [`do`](do-while-statement-cpp.md)<br/>
        [`double`](fundamental-types-cpp.md)<br/>
        [`dynamic_cast`](dynamic-cast-operator.md)<br/>
        [`else`](if-else-statement-cpp.md)<br/>
        [`enum`](enumerations-cpp.md)<br/>
        [`explicit`](user-defined-type-conversions-cpp.md)<br/>
        **`export`** <sup>c</sup><br/>
        [`extern`](using-extern-to-specify-linkage.md)<br/>
        [`false`](false-cpp.md)<br/>
        [`float`](fundamental-types-cpp.md)<br/>
        [`for`](for-statement-cpp.md)<br/>
        [`friend`](friend-cpp.md)<br/>
        [`goto`](goto-statement-cpp.md)<br/>
        [`if`](if-else-statement-cpp.md)<br/>
        [`inline`](inline-functions-cpp.md)<br/>
    :::column-end:::
    :::column:::
        [`int`](fundamental-types-cpp.md)<br/>
        [`long`](fundamental-types-cpp.md)<br/>
        [`mutable`](mutable-data-members-cpp.md)<br/>
        [`namespace`](namespaces-cpp.md)<br/>
        [`new`](new-operator-cpp.md)<br/>
        [`noexcept`](noexcept-cpp.md)<br/>
        [`not`](logical-negation-operator-exclpt.md) <sup>b</sup><br/>
        [`not_eq`](equality-operators-equal-equal-and-exclpt-equal.md) <sup>b</sup><br/>
        [`nullptr`](nullptr.md)<br/>
        [`operator`](operator-overloading.md)<br/>
        [`or`](logical-or-operator-pipe-pipe.md) <sup>b</sup><br/>
        [`or_eq`](assignment-operators.md) <sup>b</sup><br/>
        [`private`](private-cpp.md)<br/>
        [`protected`](protected-cpp.md)<br/>
        [`public`](public-cpp.md)<br/>
        [`register`](storage-classes-cpp.md#register)
        [`reinterpret_cast`](reinterpret-cast-operator.md)<br/>
        **`requires`** <sup>c</sup><br/>
        [`return`](return-statement-cpp.md)<br/>
        [`short`](fundamental-types-cpp.md)<br/>
        [`signed`](fundamental-types-cpp.md)<br/>
        [`sizeof`](sizeof-operator.md)<br/>
        [`static`](storage-classes-cpp.md)<br/>
        [`static_assert`](static-assert.md)<br/>
    :::column-end:::
    :::column:::
        [`static_cast`](static-cast-operator.md)<br/>
        [`struct`](struct-cpp.md)<br/>
        [`switch`](switch-statement-cpp.md)<br/>
        [`template`](templates-cpp.md)<br/>
        [`this`](this-pointer.md)<br/>
        [`thread_local`](storage-classes-cpp.md#thread_local)<br/>
        [`throw`](try-throw-and-catch-statements-cpp.md)<br/>
        [`true`](true-cpp.md)<br/>
        [`try`](try-throw-and-catch-statements-cpp.md)<br/>
        [`typedef`](aliases-and-typedefs-cpp.md)<br/>
        [`typeid`](typeid-operator.md)<br/>
        [`typename`](typename.md)<br/>
        [`union`](unions.md)<br/>
        [`unsigned`](fundamental-types-cpp.md)<br/>
        [`using`](using-declaration.md) declaration<br/>
        [`using`](namespaces-cpp.md#using_directives) directive<br/>
        [`virtual`](virtual-cpp.md)<br/>
        [`void`](void-cpp.md)<br/>
        [`volatile`](volatile-cpp.md)<br/>
        [`wchar_t`](fundamental-types-cpp.md)<br/>
        [`while`](while-statement-cpp.md)<br/>
        [`xor`](bitwise-exclusive-or-operator-hat.md) <sup>b</sup><br/>
        [`xor_eq`](assignment-operators.md) <sup>b</sup><br/>
    :::column-end:::
:::row-end:::

<sup>a</sup> The Microsoft-specific **`__asm`** keyword replaces C++ **`asm`** syntax. **`asm`** is reserved for compatibility with other C++ implementations, but not implemented. Use **`__asm`** for inline assembly on x86 targets. Microsoft C++ doesn't support Inline assembly for other targets.

<sup>b</sup> The extended operator synonyms are keywords when [`/permissive-`](../build/reference/permissive-standards-conformance.md) or [`/Za` \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified. They aren't keywords when Microsoft extensions are enabled.

<sup>c</sup> Supported when [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) is specified.

## Microsoft-specific C++ keywords

In C++, identifiers that contain two consecutive underscores are reserved for compiler implementations. The Microsoft convention is to precede Microsoft-specific keywords with double underscores. These words can't be used as identifier names.

Microsoft extensions are enabled by default. To ensure that your programs are fully portable, you can disable Microsoft extensions by specifying the [`/permissive-`](../build/reference/permissive-standards-conformance.md) or [`/Za` \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) option during compilation. These options disable some Microsoft-specific keywords.

When Microsoft extensions are enabled, you can use the Microsoft-specific keywords in your programs. For ANSI compliance, these keywords are prefaced by a double underscore. For backward compatibility, single-underscore versions of many of the double-underscored keywords are supported. The **`__cdecl`** keyword is available with no leading underscore.

The **`__asm`** keyword replaces C++ **`asm`** syntax. **`asm`** is reserved for compatibility with other C++ implementations, but not implemented. Use **`__asm`**.

The **`__based`** keyword has limited uses for 32-bit and 64-bit target compilations.

:::row:::
    :::column:::
        [`__alignof`](alignof-operator.md) <sup>e</sup><br/>
        [`__asm`](../assembler/inline/asm.md) <sup>e</sup><br/>
        [`__assume`](../intrinsics/assume.md) <sup>e</sup><br/>
        [`__based`](based-pointers-cpp.md) <sup>e</sup><br/>
        [`__cdecl`](cdecl.md) <sup>e</sup><br/>
        [`__declspec`](declspec.md) <sup>e</sup><br/>
        [`__event`](event.md)<br/>
        [`__except`](try-except-statement.md) <sup>e</sup><br/>
        [`__fastcall`](fastcall.md) <sup>e</sup><br/>
        [`__finally`](try-finally-statement.md) <sup>e</sup><br/>
        [`__forceinline`](inline-functions-cpp.md) <sup>e</sup><br/>
    :::column-end:::
    :::column:::
        [`__hook`](hook.md) <sup>d</sup><br/>
        [`__if_exists`](if-exists-statement.md)<br/>
        [`__if_not_exists`](if-not-exists-statement.md)<br/>
        [`__inline`](inline-functions-cpp.md) <sup>e</sup><br/>
        [`__int16`](int8-int16-int32-int64.md) <sup>e</sup><br/>
        [`__int32`](int8-int16-int32-int64.md) <sup>e</sup><br/>
        [`__int64`](int8-int16-int32-int64.md) <sup>e</sup><br/>
        [`__int8`](int8-int16-int32-int64.md) <sup>e</sup><br/>
        [`__interface`](interface.md)<br/>
        [`__leave`](try-finally-statement.md) <sup>e</sup><br/>
        [`__m128`](m128.md)<br/>
    :::column-end:::
    :::column:::
        [`__m128d`](m128d.md)<br/>
        [`__m128i`](m128i.md)<br/>
        [`__m64`](m64.md)<br/>
        [`__multiple_inheritance`](inheritance-keywords.md) <sup>e</sup><br/>
        [`__ptr32`](ptr32-ptr64.md) <sup>e</sup><br/>
        [`__ptr64`](ptr32-ptr64.md)<sup>e</sup><br/>
        [`__raise`](raise.md)<br/>
        [`__restrict`](extension-restrict.md) <sup>e</sup><br/>
        [`__single_inheritance`](inheritance-keywords.md)<sup>e</sup><br/>
        [`__sptr`](sptr-uptr.md)<sup>e</sup><br/>
        [`__stdcall`](stdcall.md) <sup>e</sup><br/>
    :::column-end:::
    :::column:::
        [`__super`](super.md)<br/>
        [`__thiscall`](thiscall.md)<br/>
        [`__unaligned`](unaligned.md) <sup>e</sup><br/>
        [`__unhook`](unhook.md) <sup>d</sup><br/>
        [`__uptr`](sptr-uptr.md) <sup>e</sup><br/>
        [`__uuidof`](uuidof-operator.md) <sup>e</sup><br/>
        [`__vectorcall`](vectorcall.md) <sup>e</sup><br/>
        [`__virtual_inheritance`](inheritance-keywords.md) <sup>e</sup><br/>
        [`__w64`](w64.md) <sup>e</sup><br/>
        [`__wchar_t`](fundamental-types-cpp.md)<br/>
    :::column-end:::
:::row-end:::

<sup>d</sup> Intrinsic function used in event handling.

<sup>e</sup> For backward compatibility with previous versions, these keywords are available both with two leading underscores and a single leading underscore when Microsoft extensions are enabled (the default).

## Microsoft keywords in __declspec modifiers

These identifiers are extended attributes for the **`__declspec`** modifier. They're considered keywords within that context.

:::row:::
    :::column:::
        [`align`](align-cpp.md)<br/>
        [`allocate`](allocate.md)<br/>
        [`allocator`](allocator.md)<br/>
        [`appdomain`](appdomain.md)<br/>
        [`code_seg`](code-seg-declspec.md)<br/>
        [`deprecated`](deprecated-cpp.md)
    :::column-end:::
    :::column:::
        [`dllexport`](dllexport-dllimport.md)<br/>
        [`dllimport`](dllexport-dllimport.md)<br/>
        [`jitintrinsic`](jitintrinsic.md)<br/>
        [`naked`](naked-cpp.md)<br/>
        [`noalias`](noalias.md)<br/>
        [`noinline`](noinline.md)
    :::column-end:::
    :::column:::
        [`noreturn`](noreturn.md)<br/>
        [`nothrow`](nothrow-cpp.md)<br/>
        [`novtable`](novtable.md)<br/>
        [`process`](process.md)<br/>
        [`property`](property-cpp.md)<br/>
        [`restrict`](restrict.md)
    :::column-end:::
    :::column:::
        [`safebuffers`](safebuffers.md)<br/>
        [`selectany`](selectany.md)<br/>
        [`spectre`](spectre.md)<br/>
        [`thread`](thread.md)<br/>
        [`uuid`](uuid-cpp.md)
    :::column-end:::
:::row-end:::

## C++/CLI and C++/CX keywords

:::row:::
    :::column:::
        [`__abstract`](../dotnet/declaration-of-a-managed-class-type.md) <sup>f</sup><br/>
        [`__box`](../dotnet/value-type-semantics.md) <sup>f</sup><br/>
        [`__delegate`](../dotnet/delegates-and-events.md) <sup>f</sup><br/>
        [`__gc`](../dotnet/declaration-of-a-clr-reference-class-object.md) <sup>f</sup><br/>
        [`__identifier`](../extensions/identifier-cpp-cli.md)<br/>
        [`__nogc`](../dotnet/declaration-of-a-clr-reference-class-object.md) <sup>f</sup><br/>
        [`__noop`](../intrinsics/noop.md)<br/>
        **`__pin`** <sup>f</sup><br/>
        **`__property`** <sup>f</sup><br/>
        **`__sealed`** <sup>f</sup><br/>
    :::column-end:::
    :::column:::
        [`__try_cast`](../dotnet/cast-notation-and-introduction-of-safe-cast-angles.md) <sup>f</sup><br/>
        [`__value`](../dotnet/value-type-semantics.md) <sup>f</sup><br/>
        [`abstract`](../extensions/abstract-cpp-component-extensions.md) <sup>g</sup><br/>
        [`array`](../extensions/arrays-cpp-component-extensions.md) <sup>g</sup><br/>
        [`as_friend`](../preprocessor/hash-using-directive-cpp.md)<br/>
        [`delegate`](../extensions/delegate-cpp-component-extensions.md) <sup>g</sup><br/>
        [`enum class`](../extensions/enum-class-cpp-component-extensions.md)<br/>
        [`enum struct`](../extensions/enum-class-cpp-component-extensions.md)<br/>
        [`event`](../extensions/event-cpp-component-extensions.md) <sup>g</sup><br/>
    :::column-end:::
    :::column:::
        [`finally`](../dotnet/finally.md)<br/>
        [`for each in`](../dotnet/for-each-in.md)<br/>
        [`gcnew`](../extensions/ref-new-gcnew-cpp-component-extensions.md) <sup>g</sup><br/>
        [`generic`](../extensions/generics-cpp-component-extensions.md) <sup>g</sup><br/>
        [`initonly`](../dotnet/initonly-cpp-cli.md)<br/>
        [`interface class`](../extensions/interface-class-cpp-component-extensions.md) <sup>g</sup><br/>
        [`interface struct`](../extensions/interface-class-cpp-component-extensions.md) <sup>g</sup><br/>
        [`interior_ptr`](../extensions/interior-ptr-cpp-cli.md) <sup>g</sup><br/>
        [`literal`](../extensions/literal-cpp-component-extensions.md) <sup>g</sup><br/>
    :::column-end:::
    :::column:::
        [`new`](../extensions/new-new-slot-in-vtable-cpp-component-extensions.md) <sup>g</sup><br/>
        [`property`](../extensions/property-cpp-component-extensions.md) <sup>g</sup><br/>
        [`ref class`](../extensions/classes-and-structs-cpp-component-extensions.md)<br/>
        [`ref struct`](../extensions/classes-and-structs-cpp-component-extensions.md)<br/>
        [`safecast`](../extensions/safe-cast-cpp-component-extensions.md)<br/>
        [`sealed`](../extensions/sealed-cpp-component-extensions.md) <sup>g</sup><br/>
        [`typeid`](../extensions/typeid-cpp-component-extensions.md)<br/>
        [`value class`](../extensions/classes-and-structs-cpp-component-extensions.md) <sup>g</sup><br/>
        [`value struct`](../extensions/classes-and-structs-cpp-component-extensions.md) <sup>g</sup><br/>
    :::column-end:::
:::row-end:::

<sup>f</sup> Applicable to Managed Extensions for C++ only. This syntax is now deprecated. For more information, see [Component Extensions for Runtime Platforms](../extensions/component-extensions-for-runtime-platforms.md).

<sup>f</sup> Applicable to C++/CLI.

## See also

[Lexical conventions](lexical-conventions.md)<br/>
[C++ built-in operators, precedence, and associativity](cpp-built-in-operators-precedence-and-associativity.md)
