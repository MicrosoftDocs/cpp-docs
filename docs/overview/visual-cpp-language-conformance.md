---
title: "Microsoft C/C++ language conformance"
description: "Microsoft C and C++ conformance updates by Visual Studio version."
ms.date: 03/01/2023
ms.technology: "cpp-language"
---
# Microsoft C/C++ language conformance by Visual Studio version

Standards conformance for the Microsoft C/C++ compiler in Visual Studio (MSVC) is a work in progress. Here's a summary of ISO Standard C and C++ language and library conformance by Visual Studio version. Each C++ compiler and standard library feature name has a link to the ISO Standard C++ proposal paper that describes the feature, when one is available at publication time. The **Supported** column lists the Visual Studio version in which support for the feature first appeared.

For details on conformance improvements, see [C++ conformance improvements in Visual Studio](cpp-conformance-improvements.md). For a list of other changes, see [What's New for Visual C++ in Visual Studio](what-s-new-for-visual-cpp-in-visual-studio.md). For conformance changes in earlier versions, see [Visual C++ change history](../porting/visual-cpp-change-history-2003-2015.md) and [Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md). For current news from the C++ team, visit the [C++ team blog](https://devblogs.microsoft.com/cppblog/).

> [!NOTE]
> There are no binary breaking changes between Visual Studio 2015, 2017, 2019, and 2022. For more information, see [C++ binary compatibility between Visual Studio versions](../porting/binary-compat-2015-2017.md)

## C++ compiler features

| Feature | Supported |
|--|--|
| **C++03/11 Core language features** | **Supported** |
| &emsp;Everything else | VS 2015 <sup>[A](#note_A)</sup> |
| &emsp;Two-phase name lookup | VS 2017 15.7 <sup>[B](#note_B)</sup> |
| &emsp;[`N2634 Expression SFINAE`](https://wg21.link/N2634) | VS 2017 15.7 |
| &emsp;[`N1653 C99 preprocessor`](https://wg21.link/N1653) | VS 2019 16.6 <sup>[C](#note_C)</sup> |
| **C++03/11 Core language features (Defect reports)** | **Supported** |
| **C++14 Core language features** | **Supported** |
| &emsp;[`N3323 Tweaked wording for contextual conversions`](https://wg21.link/N3323) | VS 2013 |
| &emsp;[`N3472 Binary literals`](https://wg21.link/N3472) | VS 2015 |
| &emsp;[`N3638 auto and decltype(auto) return types`](https://wg21.link/n3638) | VS 2015 |
| &emsp;[`N3648 init-captures`](https://wg21.link/n3648) | VS 2015 |
| &emsp;[`N3649 Generic lambdas`](https://wg21.link/n3649) | VS 2015 |
| &emsp;[`N3760 [[deprecated]] attribute`](https://wg21.link/n3760) | VS 2015 |
| &emsp;[`N3778 Sized deallocation`](https://wg21.link/n3778) | VS 2015 |
| &emsp;[`N3781 Digit separators`](https://wg21.link/n3781) | VS 2015 |
| &emsp;[`N3651 Variable templates`](https://wg21.link/n3651) | VS 2015 Update 2 |
| &emsp;[`N3652 Extended constexpr`](https://wg21.link/n3652) | VS 2017 15.0 |
| &emsp;[`N3653 Default member initializers for aggregates`](https://wg21.link/n3653) | VS 2017 15.0 |
| **C++17 Core language features** | **Supported** |
| &emsp;[`N4086 Removing trigraphs`](https://wg21.link/n4086) | VS 2010 <sup>[14](#note_14)</sup> |
| &emsp;[`N3922 New rules for auto with braced-init-lists`](https://wg21.link/n3922) | VS 2015 <sup>[14](#note_14)</sup> |
| &emsp;[`N4051 typename in template template-parameters`](https://wg21.link/n4051) | VS 2015 <sup>[14](#note_14)</sup> |
| &emsp;[`N4266 Attributes for namespaces and enumerators`](https://wg21.link/n4266) | VS 2015 <sup>[14](#note_14)</sup> |
| &emsp;[`N4267 u8 character literals`](https://wg21.link/n4267) | VS 2015 <sup>[14](#note_14)</sup> |
| &emsp;[`N4230 Nested namespace definitions`](https://wg21.link/n4230) | VS 2015.3 <sup>[17](#note_17)</sup> |
| &emsp;[`N3928 Terse static_assert`](https://wg21.link/n3928) | VS 2017 15.0 <sup>[17](#note_17)</sup> |
| &emsp;[`P0184R0 Generalized range-based for-loops`](https://wg21.link/p0184r0) | VS 2017 15.0 <sup>[14](#note_14)</sup> |
| &emsp;[`P0188R1 [[fallthrough]] attribute`](https://wg21.link/p0188r1) | VS 2017 15.0 <sup>[17](#note_17)</sup> |
| &emsp;[`P0001R1 Removing the register keyword`](https://wg21.link/p0001r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0002R1 Removing operator++ for bool`](https://wg21.link/p0002r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0018R3 Capturing *this by value`](https://wg21.link/p0018r3) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0028R4 Using attribute namespaces without repetition`](https://wg21.link/p0028r4) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0061R1 __has_include`](https://wg21.link/p0061r1) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &emsp;[`P0138R2 Direct-list-init of fixed enums from integers`](https://wg21.link/p0138r2) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0170R1 constexpr lambdas`](https://wg21.link/p0170r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0189R1 [[nodiscard]] attribute`](https://wg21.link/p0189r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0212R1 [[maybe_unused]] attribute`](https://wg21.link/p0212r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0217R3 Structured bindings`](https://wg21.link/p0217r3) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0292R2 constexpr if-statements`](https://wg21.link/p0292r2) | VS 2017 15.3 <sup>[D](#note_D)</sup> |
| &emsp;[`P0305R1 Selection statements with initializers`](https://wg21.link/p0305r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P1381R1 Reference capture of structured bindings`](https://wg21.link/P1381R1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0245R1 Hexfloat literals`](https://wg21.link/p0245r1) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &emsp;[`N4268 Allowing more non-type template args`](https://wg21.link/n4268) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &emsp;[`N4295 Fold expressions`](https://wg21.link/n4295) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &emsp;[`P0003R5 Removing dynamic-exception-specifications`](https://wg21.link/p0003r5) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &emsp;[`P0012R1 Adding noexcept to the type system`](https://wg21.link/p0012r1) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &emsp;[`P0035R4 Over-aligned dynamic memory allocation`](https://wg21.link/p0035r4) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &emsp;[`P0386R2 Inline variables`](https://wg21.link/p0386r2) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &emsp;[`P0522R0 Matching template template-parameters to compatible arguments`](https://wg21.link/p0522r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &emsp;[`P0036R0 Removing some empty unary folds`](https://wg21.link/p0036r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &emsp;[`N4261 Fixing qualification conversions`](https://wg21.link/n4261) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &emsp;[`P0017R1 Extended aggregate initialization`](https://wg21.link/p0017r1) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &emsp;[`P0091R3 Template argument deduction for class templates`](https://wg21.link/p0091r3)<br/>&emsp;[`P0512R0 Class template argument deduction issues`](https://wg21.link/p0512r0) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &emsp;[`P0127R2 Declaring non-type template parameters with auto`](https://wg21.link/p0127r2) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &emsp;[`P0135R1 Guaranteed copy elision`](https://wg21.link/p0135r1) | VS 2017 15.6 |
| &emsp;[`P0136R1 Rewording inheriting constructors`](https://wg21.link/p0136r1) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &emsp;[`P0137R1 std::launder`](https://wg21.link/p0137r1) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &emsp;[`P0145R3 Refining expression evaluation order`](https://wg21.link/p0145r3)<br/>&emsp;[`P0400R0 Order of evaluation of function arguments`](https://wg21.link/p0400r0) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &emsp;[`P0195R2 Pack expansions in using-declarations`](https://wg21.link/p0195r2) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &emsp;[`P0283R2 Ignoring unrecognized attributes`](https://wg21.link/p0283r2) | VS 2015 <sup>[14](#note_14)</sup> |
| **C++17 Core language features (Defect reports)** | **Supported** |
| &emsp;[`P0702R1 Fixing class template argument deduction for initializer-list ctors`](https://wg21.link/p0702r1) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &emsp;[`P0961R1 Relaxing the structured bindings customization point finding rules`](https://wg21.link/p0961r1) | VS 2019 16.0 <sup>[17](#note_17)</sup> |
| &emsp;[`P0969R0 Allowing structured bindings to accessible members`](https://wg21.link/p0969r0) | VS 2019 16.0 <sup>[17](#note_17)</sup> |
| &emsp;[`P0588R1 Simplifying implicit lambda capture`](https://wg21.link/p0588r1) | VS 2019 16.4 <sup>[17](#note_17)</sup> |
| &emsp;[`P1771R1 [[nodiscard]] for constructors`](https://wg21.link/p1771r1) | VS 2019 16.4 <sup>[17](#note_17)</sup> |
| &emsp;[`P1825R0 Merged wording for P0527R1 and P1155R3, more implicit moves`](https://wg21.link/p1825r0) | VS 2019 16.4 <sup>[17](#note_17)</sup> |
| &emsp;[`P0929R2 Checking for abstract class types`](https://wg21.link/P0929R2) | VS 2019 16.5 <sup>[17](#note_17)</sup> |
| &emsp;[`P0962R1 Relaxing the range-for loop customization point finding rules`](https://wg21.link/p0962r1) | VS 2019 16.5 <sup>[17](#note_17)</sup> |
| &emsp;[`P0859R0 CWG 1581: When are constexpr member functions defined`](https://wg21.link/p0859r0) | Partial in VS 2019 16.7 <sup>[E](#note_E)</sup> |
| &emsp;[`P1009R2 Array size deduction in new-expressions`](https://wg21.link/P1009R2) | VS 2019 16.7 <sup>[17](#note_17)</sup> |
| &emsp;[`P1286R2 Contra CWG DR1778`](https://wg21.link/P1286R2) | VS 2019 16.8 <sup>[17](#note_17)</sup> |
| **C++20 Core language features** | **Supported** |
| &emsp;[`P0641R2 const mismatch with defaulted copy constructor`](https://wg21.link/P0641R2) | VS 2015 <sup>[14](#note_14)</sup> |
| &emsp;[`P0704R1 Fixing const lvalue ref-qualified pointers to members`](https://wg21.link/p0704r1) | VS 2015 <sup>[14](#note_14)</sup> |
| &emsp;[`P1041R4 Make char16_t/char32_t string literals be UTF-16/32`](https://wg21.link/P1041R4) | VS 2015 <sup>[14](#note_14)</sup> |
| &emsp;[`P1330R0 Changing the active member of a union inside constexpr`](https://wg21.link/P1330R0) | VS 2017 15.0 <sup>[14](#note_14)</sup> |
| &emsp;[`P0972R0 noexcept For <chrono> zero(), min(), max()`](https://wg21.link/P0972R0) | VS 2017 15.7 <sup>[14](#note_14)</sup> |
| &emsp;[`P0515R3 Three-way (spaceship) comparison operator <=>`](https://wg21.link/P0515R3) | VS 2019 16.0 <sup>[20](#note_20)</sup> |
| &emsp;[`P0941R2 Feature-test macros`](https://wg21.link/P0941R2) | VS 2019 16.0 <sup>[14](#note_14)</sup> |
| &emsp;[`P1008R1 Prohibiting aggregates with user-declared constructors`](https://wg21.link/P1008R1) | VS 2019 16.0 <sup>[20](#note_20)</sup> |
| &emsp;[`P0329R4 Designated initialization`](https://wg21.link/p0329r4) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &emsp;[`P0846R0 ADL and function templates that are not visible`](https://wg21.link/P0846R0) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &emsp;[`P0409R2 Allowing lambda-capture [=, this]`](https://wg21.link/p0409r2) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &emsp;[`P0428R2 Familiar template syntax for generic lambdas`](https://wg21.link/p0428r2) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &emsp;[`P0624R2 Default constructible and assignable stateless lambdas`](https://wg21.link/P0624R2) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &emsp;[`P0780R2 Allowing pack expansion in lambda init-capture`](https://wg21.link/P0780R2) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &emsp;[`P0806R2 Deprecate implicit capture of this via [=]`](https://wg21.link/P0806R2) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &emsp;[`P1120R0 Consistency improvements for <=> and other comparison operators`](https://wg21.link/P1120R0) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &emsp;[`P1185R2 <=> != ==`](https://wg21.link/P1185R2) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &emsp;[`P0734R0 Concepts`](https://wg21.link/P0734R0) | VS 2019 16.3 <sup>[20](#note_20)</sup> |
| &emsp;[`P0857R0 Fixing functionality gaps in constraints`](https://wg21.link/P0857R0) | VS 2019 16.3 <sup>[20](#note_20)</sup> |
| &emsp;[`P1084R2 Today's return-type-requirements are insufficient`](https://wg21.link/P1084R2) | VS 2019 16.3 <sup>[20](#note_20)</sup> |
| &emsp;[`P0892R2 Conditional explicit`](https://wg21.link/P0892R2) | VS 2019 16.4 <sup>[20](#note_20)</sup> |
| &emsp;[`P1091R3 Extending structured bindings to be more like variable declarations`](https://wg21.link/P1091R3) | VS 2019 16.4 <sup>[20](#note_20)</sup> |
| &emsp;[`P1099R5 Using enum`](https://wg21.link/P1099R5) | VS 2019 16.4 <sup>[20](#note_20)</sup> |
| &emsp;[`P1186R3 When do you actually use <=>`](https://wg21.link/P1186R3) | VS 2019 16.4 <sup>[20](#note_20)</sup> |
| &emsp;[`P1630R1 Spaceship needs a tune-up`](https://wg21.link/P1630R1) | VS 2019 16.4 <sup>[20](#note_20)</sup> |
| &emsp;[`P0306R4 Adding __VA_OPT__ for comma omission and comma deletion`](https://wg21.link/P0306R4) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P0614R1 Range-based for-loops with initializers`](https://wg21.link/P0614R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P0683R1 Default member initializers for bit-fields`](https://wg21.link/P0683R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P1002R1 try-catch blocks in constexpr functions`](https://wg21.link/P1002R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P1161R3 Deprecate uses of the comma operator in subscripting expressions`](https://wg21.link/P1161R3) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P1301R4 [[nodiscard("message")]]`](https://wg21.link/P1301R4) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P1703R1 Recognizing header unit imports requires full preprocessing`](https://wg21.link/P1703R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P1946R0 Allow defaulting comparisons by value`](https://wg21.link/P1946R0) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P0479R5 [[likely]] and [[unlikely]] attributes`](https://wg21.link/P0479R5) | VS 2019 16.6 <sup>[20](#note_20)</sup> |
| &emsp;[`P0692R1 Relaxing access checking on specializations`](https://wg21.link/P0692R1) | VS 2019 16.6 <sup>[14](#note_14)</sup> |
| &emsp;[`P0732R2 Class types in non-type template parameters`](https://wg21.link/P0732R2) | VS 2019 16.6 <sup>[20](#note_20)</sup> |
| &emsp;[`P1139R2 Address wording issues related to ISO 10646`](https://wg21.link/P1139R2) | VS 2019 16.6 <sup>[14](#note_14)</sup> |
| &emsp;[`P1907R1 Inconsistencies with non-type template parameters`](https://wg21.link/P1907R1) | VS 2019 16.6 <sup>[20](#note_20)</sup> |
| &emsp;[`P1971R0 US053: Mandate the return type for return_void and return_value to be void`](https://wg21.link/P1971R0) | VS 2019 16.6 <sup>[20](#note_20)</sup> |
| &emsp;[`P1971R0 US065: Apply Coroutines issue 24 from P0664R8`](https://wg21.link/P1971R0) | VS 2019 16.6 <sup>[20](#note_20)</sup> |
| &emsp;[`P1979R0 Resolution to US086`](https://wg21.link/P1979R0) | VS 2019 16.6 <sup>[20](#note_20)</sup> |
| &emsp;[`P0388R4 Permit conversions to arrays of unknown bound`](https://wg21.link/P0388R4) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P0466R5 Layout-compatibility and Pointer-interconvertibility Traits`](https://wg21.link/P0466R5) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P0722R3 Efficient sized delete for variable sized classes`](https://wg21.link/P0722R3) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1094R2 Nested inline namespaces`](https://wg21.link/P1094R2) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1152R4 Deprecating volatile`](https://wg21.link/P1152R4) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1331R2 Permitting trivial default initialization in constexpr contexts`](https://wg21.link/P1331R2) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1358R0 2310: Type completeness and derived-to-base pointer conversions`](https://wg21.link/P1358R0) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1452R2 On the non-uniform semantics of return-type-requirements`](https://wg21.link/P1452R2) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1616R1 Using unconstrained TTPs with constrained templates`](https://wg21.link/P1616R1) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1814R0 CTAD for alias templates`](https://wg21.link/P1814R0) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1816R0 CTAD for aggregates`](https://wg21.link/P1816R0) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1957R1 Converting from T* to bool should be considered narrowing (re: US 212)`](https://wg21.link/P1957R1) | VS 2019 16.7 <sup>[DR](#note_DR)</sup> |
| &emsp;[`P1968R0 CWG 2282: Consistency with mismatched aligned/non-over-aligned allocation/deallocation functions`](https://wg21.link/P1968R0#2282) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1969R0 CWG 2280: Matching a usual deallocation function with placement new`](https://wg21.link/CWG2280) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1969R0 CWG 2382: Array allocation overhead for non-allocating placement new`](https://wg21.link/p1969r0#2382) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1969R0 CWG 2441: Inline function parameters`](https://wg21.link/p1969r0#2441) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1971R0 US052: Non-executed return statements in coroutines`](https://wg21.link/P1971R0) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1972R0 US105: Check satisfaction of constraints for non-templates when forming pointer to function`](https://wg21.link/P1972R0) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1980R0 CA096: Declaration matching for non-dependent requires-clauses`](https://wg21.link/P1980R0) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P2082R1 Fixing CTAD for aggregates`](https://wg21.link/P2082R1) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P2085R0 Consistent defaulted comparisons`](https://wg21.link/P2085R0) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P2103R0 US033: Allow "import" inside linkage-specifications`](https://wg21.link/P2103R0) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P2107R0 US064: Copy semantics of coroutine parameters`](https://wg21.link/P2107R0) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P0912R5 Coroutines`](https://wg21.link/P0912R5) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P1103R3 Modules`](https://wg21.link/P1103R3) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P0315R4 Allowing lambdas in unevaluated contexts`](https://wg21.link/P0315R4) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P0848R3 Conditionally trivial special member functions`](https://wg21.link/P0848R3) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P0960R3 Allow initializing aggregates from a parenthesized list of values`](https://wg21.link/P0960R3) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P1766R1 Mitigating minor modules maladies`](https://wg21.link/P1766R1) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P1811R0 Relaxing redefinition restrictions for re-exportation robustness`](https://wg21.link/P1811R0) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P1874R1 Dynamic Initialization Order of Non-Local Variables in Modules`](https://wg21.link/P1874R1) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P1975R0 Fixing the wording of parenthesized aggregate-initialization`](https://wg21.link/P1975R0) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P0634R3 Down with typename!`](https://wg21.link/P0634R3) | VS 2019 16.9 <sup>[20](#note_20)</sup> |
| &emsp;[`P0784R7 More constexpr containers`](https://wg21.link/P0784R7) | VS 2019 16.9 <sup>[20](#note_20)</sup> |
| &emsp;[`P0840R2 [[no_unique_address]] attribute`](https://wg21.link/P0840R2) | VS 2019 16.9 <sup>[20](#note_20)</sup> |
| &emsp;[`P1064R0 Allowing virtual function calls in constant expressions`](https://wg21.link/P1064R0) | VS 2019 16.9 <sup>[20](#note_20)</sup> |
| &emsp;[`P1141R2 Yet another approach for constrained declarations`](https://wg21.link/P1141R2) | VS 2019 16.9 <sup>[20](#note_20)</sup> |
| &emsp;[`P1327R1 Allowing dynamic_cast, polymorphic typeid in constant expressions`](https://wg21.link/P1327R1) | VS 2019 16.9 <sup>[20](#note_20)</sup> |
| &emsp;[`P1668R1 Permitting unevaluated inline assembly in constexpr functions`](https://wg21.link/P1668R1) | VS 2019 16.9 <sup>[20](#note_20)</sup> |
| &emsp;[`P1073R3 Immediate functions`](https://wg21.link/P1073R3) | VS 2019 16.10 <sup>[20](#note_20)</sup> |
| &emsp;[`P1143R2 constinit`](https://wg21.link/P1143R2) | VS 2019 16.10 <sup>[20](#note_20)</sup> |
| &emsp;[`P1353R0 Missing feature-test macros`](https://wg21.link/P1353R0) | VS 2019 16.10 <sup>[20](#note_20)</sup> |
| &emsp;[`P0735R1 Interaction of memory_order_consume with release sequences`](https://wg21.link/P0735R1) | N/A |
| &emsp;[`P1236R1 Signed integers are two's complement`](https://wg21.link/P1236R1) | N/A |
| **C++23 Core language features** | **Supported** |
| &emsp;[`P0330R8 Literal Suffix for (signed) size_t`](https://wg21.link/p0330r8) | no |
| &emsp;[`P0847R7 Deducing this`](https://wg21.link/p0847r7) | no |
| &emsp;[`P0849R8 auto(x): decay-copy in the language`](https://wg21.link/p0849r8) | no |
| &emsp;[`P1102R2 Down with ()!`](https://wg21.link/p1102r2) | no |
| &emsp;[`P1169R4 static operator()`](https://wg21.link/p1169r4) | no |
| &emsp;[`P1401R5 Narrowing contextual conversions to bool`](https://wg21.link/p1401r5) | no |
| &emsp;[`P1467R9 Extended floating-point types and standard names`](https://wg21.link/p1467r9) | no |
| &emsp;[`P1774R8 Portable assumptions`](https://wg21.link/p1774r8) | no |
| &emsp;[`P1787R6 Declarations and where to find them`](https://wg21.link/p1787r6) | no |
| &emsp;[`P1847R4 Make declaration order layout mandated`](https://wg21.link/p1847r4) | VS 2022 17.0 <sup>[23](#note_23)</sup> |
| &emsp;[`P1938R3 if consteval`](https://wg21.link/p1938r3) | no |
| &emsp;[`P1949R7 C++ Identifier Syntax using Unicode Standard Annex 31`](https://wg21.link/p1949r7) | no |
| &emsp;[`P2029R4 Proposed resolution for core issues 411, 1656, and 2333; numeric and universal character escapes in character and string literals`](https://wg21.link/p2029r4) | no |
| &emsp;[`P2036R3 Change scope of lambda trailing-return-type`](https://wg21.link/p2036r3) | no |
| &emsp;[`P2071R2 Named universal character escapes`](https://wg21.link/p2071r2) | no |
| &emsp;[`P2128R6 Multidimensional subscript operator`](https://wg21.link/p2128r6) | no |
| &emsp;[`P2156R1 Allow Duplicate Attributes`](https://wg21.link/p2156r1) | no |
| &emsp;[`P2173R1 Attributes on Lambda-Expressions`](https://wg21.link/p2173r1) | no |
| &emsp;[`P2186R2 Remove Garbage Collection Support`](https://wg21.link/p2186r2) | VS 2022 17.0 <sup>[23](#note_23)</sup> |
| &emsp;[`P2201R1 Mixed string literal concatenation`](https://wg21.link/p2201r1) | no |
| &emsp;[`P2223R2 Trimming whitespaces before line splicing`](https://wg21.link/p2223r2) | no |
| &emsp;[`P2242R3 Non-literal variables (and labels and gotos) in constexpr functions`](https://wg21.link/p2242r3) | no |
| &emsp;[`P2246R1 Character encoding of diagnostic text`](https://wg21.link/p2246r1) | VS 2022 17.0 <sup>[23](#note_23)</sup> |
| &emsp;[`P2266R3 Simpler implicit move`](https://wg21.link/p2266r3) | no |
| &emsp;[`P2280R4 Using unknown pointers and references in constant expressions`](https://wg21.link/p2280r4) | no |
| &emsp;[`P2290R3 Delimited escape sequences`](https://wg21.link/p2290r3) | no |
| &emsp;[`P2295R6 Support for UTF-8 as a portable source file encoding`](https://wg21.link/p2295r6) | no |
| &emsp;[`P2314R4 Character sets and encodings`](https://wg21.link/p2314r4) | no |
| &emsp;[`P2316R2 Consistent character literal encoding`](https://wg21.link/p2316r2) | VS 2022 17.0 <sup>[23](#note_23)</sup> |
| &emsp;[`P2324R2 Labels at the end of compound statements (C compatibility)`](https://wg21.link/p2324r2) | no |
| &emsp;[`P2327R1 De-deprecating volatile compound operations`](https://wg21.link/p2327r1) | no |
| &emsp;[`P2334R1 preprocessing directives elifdef and elifndef`](https://wg21.link/p2334r1) | no |
| &emsp;[`P2360R0 Extend init-statement to allow alias-declaration`](https://wg21.link/p2360r0) | no |
| &emsp;[`P2362R3 Remove non-encodable wide character literals and multicharacter wide character literals`](https://wg21.link/p2362r3) | no |
| &emsp;[`P2437R1 Support for #warning`](https://wg21.link/p2437r1) | no |
| &emsp;[`P2448R2 Relaxing some constexpr restrictions`](https://wg21.link/p2448r2) | no |
| &emsp;[`P2460R2 Relax requirements on wchar_t to match existing practices`](https://wg21.link/p2460r2) | no |
| &emsp;[`P2468R2 The Equality Operator You Are Looking For`](https://wg21.link/p2468r2) | no |
| &emsp;[`P2493R0 Missing feature test macros for C++20 core papers`](https://wg21.link/p2493r0) | no |
| &emsp;[`P2493R0 Missing feature test macros for C++20 core papers`](https://wg21.link/p2493r0) | no |
| &emsp;[`P2513R4 char8_t Compatibility and Portability Fix`](https://wg21.link/p2513r4) | VS 2022 17.4 <sup>[DR](#note_DR)</sup> |
| &emsp;[`P2579R0 Mitigation strategies for P2036 ”Changing scope for lambda trailing-return-type”`](https://wg21.link/p2579r0) | no |
| &emsp;[`P2582R1 Wording for class template argument deduction from inherited constructors`](https://wg21.link/p2582r1) | no |

## C++ Standard library features

A more detailed listing of Standard Library features and bug fixes by product version is available on the [GitHub Microsoft STL wiki Changelog](https://github.com/microsoft/STL/wiki/Changelog) page.

| Feature | Supported |
|--|--|
| **C++14 Standard library features** | **Supported** |
| &emsp;[`N3462 SFINAE-Friendly result_of`](https://wg21.link/n3462) | VS 2015.2 |
| &emsp;[`N3302 constexpr For <complex>`](https://wg21.link/n3302) | VS 2015 |
| &emsp;[`N3469 constexpr For <chrono>`](https://wg21.link/n3469) | VS 2015 |
| &emsp;[`N3470 constexpr For <array>`](https://wg21.link/n3470) | VS 2015 |
| &emsp;[`N3471 constexpr For <initializer_list>, <tuple>, <utility>`](https://wg21.link/n3471) | VS 2015 |
| &emsp;[`N3545 integral_constant::operator()()`](https://wg21.link/n3545) | VS 2015 |
| &emsp;[`N3642 UDLs For <chrono>, <string> (1729ms, "meow"s, etc.)`](https://wg21.link/n3642) | VS 2015 |
| &emsp;[`N3644 Null Forward Iterators`](https://wg21.link/n3644) | VS 2015 |
| &emsp;[`N3654 quoted()`](https://wg21.link/n3654) | VS 2015 |
| &emsp;[`N3657 Heterogeneous Associative Lookup`](https://wg21.link/n3657) | VS 2015 |
| &emsp;[`N3658 integer_sequence`](https://wg21.link/n3658) | VS 2015 |
| &emsp;[`N3659 shared_mutex (Timed)`](https://wg21.link/n3659) | VS 2015 |
| &emsp;[`N3668 exchange()`](https://wg21.link/n3668) | VS 2015 |
| &emsp;[`N3669 Fixing constexpr Member Functions Without const`](https://wg21.link/n3669) | VS 2015 |
| &emsp;[`N3670 get<T>()`](https://wg21.link/n3670) | VS 2015 |
| &emsp;[`N3671 Dual-Range equal(), is_permutation(), mismatch()`](https://wg21.link/n3671) | VS 2015 |
| &emsp;[`N3778 Sized Deallocation`](https://wg21.link/n3778) | VS 2015 |
| &emsp;[`N3779 UDLs For <complex> (3.14i, etc.)`](https://wg21.link/n3779) | VS 2015 |
| &emsp;[`N3789 constexpr For <functional>`](https://wg21.link/n3789) | VS 2015 |
| &emsp;[`N3887 tuple_element_t`](https://wg21.link/n3887) | VS 2015 |
| &emsp;[`N3891 Renaming shared_mutex (Timed) To shared_timed_mutex`](https://wg21.link/n3891) | VS 2015 |
| &emsp;[`N3346 Minimal Container Element Requirements`](https://wg21.link/n3346) | VS 2013 |
| &emsp;[`N3421 Transparent Operator Functors (less<>, etc.)`](https://wg21.link/n3421) | VS 2013 |
| &emsp;[`N3655 Alias Templates For <type_traits> (decay_t, etc.)`](https://wg21.link/n3655) | VS 2013 |
| &emsp;[`N3656 make_unique()`](https://wg21.link/n3656) | VS 2013 |
| **C++17 Standard library features** | **Supported** |
| &emsp;[`N3911 void_t`](https://wg21.link/n3911) | VS 2015 <sup>[14](#note_14)</sup> |
| &emsp;[`N4089 Safe Conversions In unique_ptr<T[]>`](https://wg21.link/n4089) | VS 2015 <sup>[14](#note_14)</sup> |
| &emsp;[`N4169 invoke()`](https://wg21.link/n4169) | VS 2015 <sup>[14](#note_14)</sup> |
| &emsp;[`N4190 Removing auto_ptr, random_shuffle(), And Old <functional> Stuff`](https://wg21.link/n4190) | VS 2015 <sup>[F](#note_F)</sup> |
| &emsp;[`N4258 noexcept Cleanups`](https://wg21.link/n4258) | VS 2015 <sup>[14](#note_14)</sup> |
| &emsp;[`N4259 uncaught_exceptions()`](https://wg21.link/n4259) | VS 2015 <sup>[14](#note_14)</sup> |
| &emsp;[`N4277 Trivially Copyable reference_wrapper`](https://wg21.link/n4277) | VS 2015 <sup>[14](#note_14)</sup> |
| &emsp;[`N4279 insert_or_assign()/try_emplace() For map/unordered_map`](https://wg21.link/n4279) | VS 2015 <sup>[14](#note_14)</sup> |
| &emsp;[`N4280 size(), empty(), data()`](https://wg21.link/n4280) | VS 2015 <sup>[14](#note_14)</sup> |
| &emsp;[`N4366 Precisely Constraining unique_ptr Assignment`](https://wg21.link/n4366) | VS 2015 <sup>[14](#note_14)</sup> |
| &emsp;[`N4387 Improving pair And tuple`](https://wg21.link/n4387) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &emsp;[`N4389 bool_constant`](https://wg21.link/n4389) | VS 2015 <sup>[14](#note_14)</sup> |
| &emsp;[`N4508 shared_mutex (Untimed)`](https://wg21.link/n4508) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &emsp;[`N4510 Supporting Incomplete Types In vector/list/forward_list`](https://wg21.link/n4510) | VS 2013 <sup>[14](#note_14)</sup> |
| &emsp;[`N4562 Library Fundamentals: <algorithm> sample()`](https://wg21.link/n4562#alg.random.sample) | VS 2017 15.0 |
| &emsp;[`N4562 Library Fundamentals: <any>`](https://wg21.link/n4562#any) | VS 2017 15.0 |
| &emsp;[`N4562 Library Fundamentals: <memory_resource>`](https://wg21.link/n4562#memory.resource.synop)<br/>&emsp;[`P0337R0 Deleting polymorphic_allocator Assignment`](https://wg21.link/p0337r0) | VS 2017 15.6 |
| &emsp;[`N4562 Library Fundamentals: <optional>`](https://wg21.link/n4562#optional) | VS 2017 15.0 |
| &emsp;[`N4562 Library Fundamentals: <string_view>`](https://wg21.link/n4562#string.view) | VS 2017 15.0 |
| &emsp;[`N4562 Library Fundamentals: <tuple> apply()`](https://wg21.link/n4562#tuple) | VS 2017 15.0 |
| &emsp;[`N4562 Library Fundamentals: Boyer-Moore search()`](https://wg21.link/n4562#func.searchers.boyer_moore)<br/>&emsp;[`P0253R1 Fixing Searcher Return Types`](https://wg21.link/p0253r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0003R5 Removing Dynamic Exception Specifications`](https://wg21.link/p0003r5) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &emsp;[`P0004R1 Removing Deprecated Iostreams Aliases`](https://wg21.link/p0004r1) | VS 2015.2 <sup>[F](#note_F)</sup> |
| &emsp;[`P0005R4 not_fn()`](https://wg21.link/p0005r4)<br/>&emsp;[`P0358R1 Fixes For not_fn()`](https://wg21.link/p0358r1) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &emsp;[`P0006R0 Variable Templates For Type Traits (is_same_v, etc.)`](https://wg21.link/p0006r0) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &emsp;[`P0007R1 as_const()`](https://wg21.link/p0007r1) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &emsp;[`P0013R1 Logical Operator Type Traits (conjunction, etc.)`](https://wg21.link/p0013r1) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &emsp;[`P0024R2 Parallel Algorithms`](https://wg21.link/p0024r2)<br/>&emsp;[`P0336R1 Renaming Parallel Execution Policies`](https://wg21.link/p0336r1)<br/>&emsp;[`P0394R4 Parallel Algorithms Should terminate() For Exceptions`](https://wg21.link/p0394r4)<br/>&emsp;[`P0452R1 Unifying <numeric> Parallel Algorithms`](https://wg21.link/p0452r1) | VS 2017 15.7 <sup>[G](#note_G)</sup> |
| &emsp;[`P0025R1 clamp()`](https://wg21.link/p0025r1) | VS 2015.3 |
| &emsp;[`P0030R1 hypot(x, y, z)`](https://wg21.link/p0030r1) | VS 2017 15.7 |
| &emsp;[`P0031R0 constexpr For <array> (Again) And <iterator>`](https://wg21.link/p0031r0) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0032R3 Homogeneous Interface For variant/any/optional`](https://wg21.link/p0032r3) | VS 2017 15.0 |
| &emsp;[`P0033R1 Rewording enable_shared_from_this`](https://wg21.link/p0033r1) | VS 2017 15.5 <sup>[14](#note_14)</sup> |
| &emsp;[`P0040R3 Extending Memory Management Tools`](https://wg21.link/p0040r3) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0063R3 C11 Standard Library`](https://wg21.link/p0063r3) | VS 2015 <sup>[C11](#note_C11), [14](#note_14)</sup> |
| &emsp;[`P0067R5 Elementary String Conversions`](https://wg21.link/p0067r5) | VS 2019 16.4 |
| &emsp;[`P0074R0 owner_less<>`](https://wg21.link/p0074r0) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &emsp;[`P0077R2 is_callable, is_nothrow_callable`](https://wg21.link/p0077r2) | VS 2017 15.0 |
| &emsp;[`P0083R3 Splicing Maps And Sets`](https://wg21.link/p0083r3)<br/>&emsp;[`P0508R0 Clarifying insert_return_type`](https://wg21.link/p0508r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &emsp;[`P0084R2 Emplace Return Type`](https://wg21.link/p0084r2) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0088R3 <variant>`](https://wg21.link/p0088r3) | VS 2017 15.0 |
| &emsp;[`P0092R1 <chrono> floor(), ceil(), round(), abs()`](https://wg21.link/p0092r1) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &emsp;[`P0152R1 atomic::is_always_lock_free`](https://wg21.link/p0152r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0154R1 hardware_destructive_interference_size, etc.`](https://wg21.link/p0154r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0156R0 Variadic lock_guard`](https://wg21.link/p0156r0) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &emsp;[`P0156R2 Renaming Variadic lock_guard to scoped_lock`](https://wg21.link/p0156r2) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0163R0 shared_ptr::weak_type`](https://wg21.link/p0163r0) | VS 2017 15.0 |
| &emsp;[`P0174R2 Deprecating Vestigial Library Parts`](https://wg21.link/p0174r2) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &emsp;[`P0185R1 is_swappable, is_nothrow_swappable`](https://wg21.link/p0185r1) | VS 2015.3 |
| &emsp;[`P0209R2 make_from_tuple()`](https://wg21.link/p0209r2) | VS 2017 15.0 |
| &emsp;[`P0218R1 <filesystem>`](https://wg21.link/p0218r1)<br/>&emsp;[`P0219R1 Relative Paths For Filesystem`](https://wg21.link/p0219r1)<br/>&emsp;[`P0317R1 Directory Entry Caching For Filesystem`](https://wg21.link/p0317r1)<br/>&emsp;[`P0392R0 Supporting string_view In Filesystem Paths`](https://wg21.link/p0392r0)<br/>&emsp;[`P0430R2 Supporting Non-POSIX Filesystems`](https://wg21.link/p0430r2)<br/>&emsp;[`P0492R2 Resolving NB Comments for Filesystem`](https://wg21.link/p0492r2) | VS 2017 15.7 <sup>[H](#note_H)</sup> |
| &emsp;[`P0220R1 Library Fundamentals V1`](https://wg21.link/p0220r1) | VS 2017 15.6 |
| &emsp;[`P0226R1 Mathematical Special Functions`](https://wg21.link/p0226r1) | VS 2017 15.7 |
| &emsp;[`P0254R2 Integrating string_view And std::string`](https://wg21.link/p0254r2) | VS 2017 15.0 |
| &emsp;[`P0258R2 has_unique_object_representations`](https://wg21.link/p0258r2) | VS 2017 15.3 <sup>[I](#note_I)</sup> |
| &emsp;[`P0272R1 Non-const basic_string::data()`](https://wg21.link/p0272r1) | VS 2015.3 |
| &emsp;[`P0295R0 gcd(), lcm()`](https://wg21.link/p0295r0) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0298R3 std::byte`](https://wg21.link/p0298r3) | VS 2017 15.3 <sup>[17](#note_17),&nbsp;[J](#note_J)</sup> |
| &emsp;[`P0302R1 Removing Allocator Support In std::function`](https://wg21.link/p0302r1) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &emsp;[`P0307R2 Making Optional Greater Equal Again`](https://wg21.link/p0307r2) | VS 2017 15.0 |
| &emsp;[`P0393R3 Making Variant Greater Equal`](https://wg21.link/p0393r3) | VS 2017 15.0 |
| &emsp;[`P0403R1 UDLs For <string_view> ("meow"sv, etc.)`](https://wg21.link/p0403r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0414R2 shared_ptr<T[]>, shared_ptr<T[N]>`](https://wg21.link/p0414r2)<br/>&emsp;[`P0497R0 Fixing shared_ptr For Arrays`](https://wg21.link/p0497r0) | VS 2017 15.5 <sup>[14](#note_14)</sup> |
| &emsp;[`P0418R2 atomic compare_exchange memory_order Requirements`](https://wg21.link/p0418r2) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &emsp;[`P0426R1 constexpr For char_traits`](https://wg21.link/p0426r1) | VS 2017 15.7 |
| &emsp;[`P0433R2 Integrating template deduction for class templates into the standard library`](https://wg21.link/p0433r2)<br/>&emsp;[`P0739R0 Improving class template argument deduction integration into the standard library`](https://wg21.link/p0739r0) | VS 2017 15.7 |
| &emsp;[`P0435R1 Overhauling common_type`](https://wg21.link/p0435r1)<br/>&emsp;[`P0548R1 Tweaking common_type and duration`](https://wg21.link/p0548r1) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &emsp;[`P0504R0 Revisiting in_place_t/in_place_type_t<T>/in_place_index_t<I>`](https://wg21.link/p0504r0) | VS 2017 15.0 |
| &emsp;[`P0505R0 constexpr For <chrono> (Again)`](https://wg21.link/p0505r0) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0510R0 Rejecting variants Of Nothing, Arrays, References, And Incomplete Types`](https://wg21.link/p0510r0) | VS 2017 15.0 |
| &emsp;[`P0513R0 Poisoning hash`](https://wg21.link/p0513r0)<br/>&emsp;[`P0599R1 noexcept hash`](https://wg21.link/p0599r1) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &emsp;[`P0516R0 Marking shared_future Copying As noexcept`](https://wg21.link/p0516r0) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &emsp;[`P0517R0 Constructing future_error From future_errc`](https://wg21.link/p0517r0) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &emsp;[`P0521R0 Deprecating shared_ptr::unique()`](https://wg21.link/p0521r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &emsp;[`P0558R1 Resolving atomic<T> Named Base Class Inconsistencies`](https://wg21.link/p0558r1) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &emsp;[`P0595R2 std::is_constant_evaluated()`](https://wg21.link/P0595R2) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P0602R4 Propagating Copy/Move Triviality In variant/optional`](https://wg21.link/P0602R4) | VS 2017 15.3<sup>[17](#note_17)</sup> |
| &emsp;[`P0604R0 Changing is_callable/result_of To invoke_result, is_invocable, is_nothrow_invocable`](https://wg21.link/p0604r0) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0607R0 Inline Variables for the Standard Library`](https://wg21.link/p0607r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &emsp;[`P0618R0 Deprecating <codecvt>`](https://wg21.link/p0618r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| **C++17 Standard library features (Defect reports)** | **Supported** |
| &emsp;[`P0682R1 Repairing Elementary String Conversions`](https://wg21.link/P0682R1) | VS 2015 15.7 <sup>[17](#note_17)</sup> |
| &emsp;[`P1164R1 Making create_directory() Intuitive`](https://wg21.link/P1164R1) | VS 2019 16.0 <sup>[14](#note_14)</sup> |
| **C++20 Standard library features** | **Supported** |
| &emsp;[`P0809R0 Comparing Unordered Containers`](https://wg21.link/p0809r0) | VS 2010 <sup>[14](#note_14)</sup> |
| &emsp;[`P0858R0 Constexpr Iterator Requirements`](https://wg21.link/p0858r0) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &emsp;[`P0777R1 Avoiding Unnecessary Decay`](https://wg21.link/p0777r1) | VS 2017 15.7 <sup>[14](#note_14)</sup> |
| &emsp;[`P0550R2 remove_cvref`](https://wg21.link/p0550r2) | VS 2019 16.0 <sup>[20](#note_20)</sup> |
| &emsp;[`P0318R1 unwrap_reference, unwrap_ref_decay`](https://wg21.link/p0318r1) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &emsp;[`P0457R2 starts_with()/ends_with() For basic_string/basic_string_view`](https://wg21.link/p0457r2) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &emsp;[`P0458R2 contains() For Ordered And Unordered Associative Containers`](https://wg21.link/p0458r2) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &emsp;[`P0646R1 list/forward_list remove()/remove_if()/unique() Return size_type`](https://wg21.link/p0646r1) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &emsp;[`P0769R2 shift_left(), shift_right()`](https://wg21.link/p0769r2) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &emsp;[`P0887R1 type_identity`](https://wg21.link/p0887r1) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &emsp;[`P0020R6 atomic<float>, atomic<double>, atomic<long double>`](https://wg21.link/p0020r6) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &emsp;[`P0463R1 endian`](https://wg21.link/p0463r1) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &emsp;[`P0482R6 char8_t: A type for UTF-8 characters and strings`](https://wg21.link/P0482R6) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &emsp;[`P0600R1 [[nodiscard]] For The STL, Part 1`](https://wg21.link/p0600r1) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &emsp;[`P0653R2 to_address()`](https://wg21.link/p0653r2) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &emsp;[`P0754R2 <version>`](https://wg21.link/p0754r2) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &emsp;[`P0771R1 noexcept For std::function's Move Constructor`](https://wg21.link/P0771R1) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &emsp;[`P0487R1 Fixing operator>>(basic_istream&, CharT*)`](https://wg21.link/P0487R1) | VS 2019 16.3 <sup>[20](#note_20)</sup> |
| &emsp;[`P0616R0 Using move() In <numeric>`](https://wg21.link/p0616r0) | VS 2019 16.3 <sup>[20](#note_20)</sup> |
| &emsp;[`P0758R1 is_nothrow_convertible`](https://wg21.link/P0758R1) | VS 2019 16.3 <sup>[20](#note_20)</sup> |
| &emsp;[`P0898R3 Standard Library Concepts`](https://wg21.link/P0898R3) | VS 2019 16.3 <sup>[20](#note_20)</sup> |
| &emsp;[`P0919R3 Heterogeneous Lookup For Unordered Containers`](https://wg21.link/P0919R3) | VS 2019 16.3 <sup>[20](#note_20)</sup> |
| &emsp;[`P1754R1 Rename Concepts to standard_case`](https://wg21.link/P1754R1) | VS 2019 16.4 <sup>[20](#note_20)</sup> |
| &emsp;[`P0325R4 to_array from LFTS with updates`](https://wg21.link/P0325R4) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P0340R3 SFINAE-Friendly underlying_type`](https://wg21.link/P0340R3) | VS 2019 16.5 <sup>[14](#note_14)</sup> |
| &emsp;[`P0356R5 bind_front()`](https://wg21.link/P0356R5) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P0439R0 enum class memory_order`](https://wg21.link/p0439r0) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P0553R4 <bit> Rotating And Counting Functions`](https://wg21.link/P0553R4) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P0556R3 <bit> ispow2(), ceil2(), floor2(), log2p1()`](https://wg21.link/P0556R3) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P0595R2 is_constant_evaluated()`](https://wg21.link/P0595R2) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P0631R8 <numbers> Math Constants`](https://wg21.link/P0631R8) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P0655R1 visit<R>()`](https://wg21.link/P0655R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P0738R2 istream_iterator Cleanup`](https://wg21.link/P0738R2) | VS 2019 16.5 <sup>[14](#note_14)</sup> |
| &emsp;[`P0767R1 Deprecating is_pod`](https://wg21.link/P0767R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P0966R1 string::reserve() Should Not Shrink`](https://wg21.link/P0966R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P1209R0 erase_if(), erase()`](https://wg21.link/P1209R0) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P1227R2 Signed std::ssize(), Unsigned span::size()`](https://wg21.link/P1227R2) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P1355R2 Narrow Contract For ceil2()`](https://wg21.link/P1355R2) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P1357R1 is_bounded_array, is_unbounded_array`](https://wg21.link/P1357R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P1612R1 Relocating endian To <bit>`](https://wg21.link/P1612R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P1651R0 bind_front() Should Not Unwrap reference_wrapper`](https://wg21.link/P1651R0) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P1690R1 Refining Heterogeneous Lookup For Unordered Containers`](https://wg21.link/P1690R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &emsp;[`P1902R1 Missing Feature-Test Macros 2017-2019`](https://wg21.link/P1902R1) | VS 2019 16.5 <sup>[14](#note_14)</sup> |
| &emsp;[`P0122R7 <span>`](https://wg21.link/p0122r7)<br/>&emsp;[`P1024R3 Enhancing span usability`](https://wg21.link/p1024r3)<br/>&emsp;[`P1085R2 Removing span comparisons`](https://wg21.link/p1085r2)<br/>&emsp;[`P1394R4 Range constructor for span`](https://wg21.link/p1394r4)<br/>&emsp;[`P1872R0 span should have size_type, not index_type`](https://wg21.link/p1872r0) | VS 2019 16.6 <sup>[20](#note_20)</sup> |
| &emsp;[`P0202R3 constexpr for <algorithm> and exchange()`](https://wg21.link/p0202r3) | VS 2019 16.6 <sup>[20](#note_20)</sup> |
| &emsp;[`P0357R3 Supporting Incomplete Types In reference_wrapper`](https://wg21.link/P0357R3) | VS 2019 16.6 <sup>[20](#note_20)</sup> |
| &emsp;[`P0619R4 Removing C++17-Deprecated Features In C++20`](https://wg21.link/P0619R4) | VS 2019 16.6 <sup>[20](#note_20)</sup> |
| &emsp;[`P0879R0 constexpr for swapping functions`](https://wg21.link/P0879R0) | VS 2019 16.6 <sup>[20](#note_20)</sup> |
| &emsp;[`P0883R2 Fixing atomic initialization`](https://wg21.link/P0883R2) | VS 2019 16.6 <sup>[14](#note_14)</sup> |
| &emsp;[`P0935R0 Eradicating Unnecessarily Explicit Default Constructors`](https://wg21.link/P0935R0) | VS 2019 16.6 <sup>[14](#note_14)</sup> |
| &emsp;[`P1006R1 constexpr For pointer_traits<T*>::pointer_to()`](https://wg21.link/P1006R1) | VS 2019 16.6 <sup>[20](#note_20)</sup> |
| &emsp;[`P1165R1 Consistently Propagating Stateful Allocators In basic_string's operator+()`](https://wg21.link/P1165R1) | VS 2019 16.6 <sup>[14](#note_14)</sup> |
| &emsp;[`P1423R3 char8_t backward compatibility remediation`](https://wg21.link/P1423R3) | VS 2019 16.6 <sup>[20](#note_20)</sup> |
| &emsp;[`P1645R1 constexpr for <numeric> algorithms`](https://wg21.link/P1645R1) | VS 2019 16.6 <sup>[20](#note_20)</sup> |
| &emsp;[`P0415R1 constexpr For <complex> (Again)`](https://wg21.link/p0415r1) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P0476R2 <bit> bit_cast`](https://wg21.link/P0476R2) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P0528R3 Atomic Compare-And-Exchange With Padding Bits`](https://wg21.link/P0528R3) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P0586R2 Integer comparison functions`](https://wg21.link/P0586R2) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P0674R1 make_shared() For Arrays`](https://wg21.link/p0674r1) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P0718R2 atomic<shared_ptr<T>>, atomic<weak_ptr<T>>`](https://wg21.link/p0718r2) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1023R0 constexpr For std::array Comparisons`](https://wg21.link/P1023R0) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1115R3 erase()/erase_if() Return size_type`](https://wg21.link/P1115R3) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1831R1 Deprecating volatile in the standard library`](https://wg21.link/P1831R1) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1871R1 Concept traits should be named after concepts`](https://wg21.link/P1831R1) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1956R1 <bit> has_single_bit(), bit_ceil(), bit_floor(), bit_width()`](https://wg21.link/P1956R1) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1964R2 Replacing boolean With boolean-testable`](https://wg21.link/P1964R2) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P1976R2 Fixed-size span construction from dynamic range`](https://wg21.link/P1976R2) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P2091R0 Issues with range access CPOs`](https://wg21.link/P2091R0) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P2102R0 Make "implicit expression variations" more explicit`](https://wg21.link/P2102R0) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P2116R0 Remove tuple-like protocol support from fixed-extent span`](https://wg21.link/P2116R0) | VS 2019 16.7 <sup>[20](#note_20)</sup> |
| &emsp;[`P0019R8 atomic_ref`](https://wg21.link/P0019R8) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P0528R3 Library support for atomic compare-and-exchange with padding bits`](https://wg21.link/P0528R3) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P0811R3 midpoint(), lerp()`](https://wg21.link/P0811R3) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P0912R5 Library Support For Coroutines`](https://wg21.link/P0912R5) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P1001R2 execution::unseq`](https://wg21.link/P1001R2) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P1032R1 Miscellaneous constexpr`](https://wg21.link/P1032R1) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P1065R2 constexpr INVOKE`](https://wg21.link/P1065R2) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P1123R0 Editorial Guidance for merging P0019r8 and P0528r3`](https://wg21.link/P1123R0) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P1960R0 NB Comment Changes Reviewed by SG1`](https://wg21.link/P1960R0) | VS 2019 16.8 <sup>[20](#note_20)</sup> |
| &emsp;[`P0339R6 polymorphic_allocator<>`](https://wg21.link/P0339R6) | VS 2019 16.9 <sup>[20](#note_20)</sup> |
| &emsp;[`P0660R10 <stop_token> and jthread`](https://wg21.link/p0660r10) | VS 2019 16.9 <sup>[20](#note_20)</sup> |
| &emsp;[`P0768R1 Library Support For The Spaceship Comparison Operator <=>`](https://wg21.link/p0768r1) | VS 2019 16.9 <sup>[20](#note_20)</sup> |
| &emsp;[`P1007R3 assume_aligned()`](https://wg21.link/P1007R3) | VS 2019 16.9 <sup>[20](#note_20)</sup> |
| &emsp;[`P1020R1 Smart Pointer Creation With Default Initialization`](https://wg21.link/P1020R1) | VS 2019 16.9 <sup>[20](#note_20)</sup> |
| &emsp;[`P1135R6 The C++20 Synchronization Library`](https://wg21.link/P1135R6) | VS 2019 16.9 <sup>[20](#note_20)</sup> |
| &emsp;[`P1771R1 Library support for [[nodiscard]] for constructors`](https://wg21.link/P1771R1) | VS 2019 16.9 <sup>[20](#note_20)</sup> |
| &emsp;[`P0053R7 <syncstream>`](https://wg21.link/p0053r7)<br/>&emsp;[`P0753R2 osyncstream Manipulators`](https://wg21.link/p0753r2) | VS 2019 16.10 <sup>[20](#note_20)</sup> |
| &emsp;[`P0355R7 <chrono> Calendars And Time Zones`](https://wg21.link/p0355r7) | VS 2019 16.10 <sup>[20abi](#note_20abi)</sup> |
| &emsp;[`P0408R7 Efficient access To basic_stringbuf's buffer`](https://wg21.link/p0408r7) | VS 2019 16.10 <sup>[20](#note_20)</sup> |
| &emsp;[`P0466R5 Library support for layout-compatibility and pointer-interconvertibility traits`](https://wg21.link/p0466r5) | VS 2019 16.10 <sup>[20](#note_20)</sup> |
| &emsp;[`P0475R1 Guaranteed Copy Elision For Piecewise Construction`](https://wg21.link/P0475R1) | VS 2019 16.10 <sup>[20](#note_20)</sup> |
| &emsp;[`P0591R4 Utility Functions For Uses-Allocator Construction`](https://wg21.link/P0591R4) | VS 2019 16.10 <sup>[20](#note_20)</sup> |
| &emsp;[`P0608R3 Improving variant's Converting Constructor/Assignment`](https://wg21.link/P0608R3) | VS 2019 16.10 <sup>[20](#note_20)</sup> |
| &emsp;[`P0645R10 <format> Text Formatting`](https://wg21.link/p0645r10) | VS 2019 16.10 <sup>[20abi](#note_20abi)</sup> |
| &emsp;[`P0784R7 Library support for more constexpr containers`](https://wg21.link/P0784R7) | VS 2019 16.10 <sup>[20](#note_20)</sup> |
| &emsp;[`P0896R4 <ranges>`](https://wg21.link/P0896R4) | VS 2019 16.10 <sup>[20abi](#note_20abi)</sup> |
| &emsp;[`P0980R1 constexpr std::string`](https://wg21.link/P0980R1) | VS 2019 16.10 <sup>[20](#note_20), [P](#note_P)</sup> |
| &emsp;[`P1004R2 constexpr std::vector`](https://wg21.link/P1004R2) | VS 2019 16.10 <sup>[20](#note_20), [P](#note_P)</sup> |
| &emsp;[`P1208R6 <source_location>`](https://wg21.link/P1208R6) | VS 2019 16.10 <sup>[20](#note_20)</sup> |
| &emsp;[`P1502R1 Standard Library Header Units`](https://wg21.link/P1502R1) | VS 2019 16.10 <sup>[20](#note_20)</sup> |
| &emsp;[`P1614R2 Adding Spaceship <=> To The Library`](https://wg21.link/P1614R2) | VS 2019 16.10 <sup>[20](#note_20)</sup> |
| &emsp;[`P1285R0 Improving Completeness Requirements For Type Traits`](https://wg21.link/P1285R0) | N/A |
| **C++20 Standard library features (Defect reports)** | **Supported** |
| &emsp;[`P2325R3 Views Should Not Be Required To Be Default Constructible`](https://wg21.link/P2325r3) | VS 2022 17.0 <sup>[20abi](#note_20abi)</sup> |
| &emsp;[`P2328R1 join_view should join all views of ranges`](https://wg21.link/P2328R1) | VS 2022 17.0 <sup>[20abi](#note_20abi)</sup> |
| &emsp;[`P2367R0 Remove misuses of list-initialization from clause 24 ranges`](https://wg21.link/P2367R0) | VS 2022 17.0 <sup>[20abi](#note_20abi)</sup> |
| &emsp;[`P2259R1 Partial LWG issue resolution: repairing Input Range Adaptors and counted_iterator`](https://wg21.link/P2259R1) | VS 2022 17.0 <sup>[23](#note_23)</sup> |
| **C++23 Standard library features** | **Supported** |
| &emsp;[`P0288R9 move_only_function​`](https://wg21.link/p0288r9) | VS 2022 17.2 <sup>[23](#note_23)</sup> |
| &emsp;[`P0323R12 <expected>​​`](https://wg21.link/p0323r12) | VS 2022 17.3 <sup>[23](#note_23)</sup> |
| &emsp;[`P0401R6 Providing Size Feedback In The Allocator Interface​`](https://wg21.link/p0401r6) | VS 2022 17.0 <sup>[23](#note_23)</sup> |
| &emsp;[`P0448R4 <spanstream>​`](https://wg21.link/p0448r4) | VS 2022 17.1 <sup>[23](#note_23)</sup> |
| &emsp;[`P0627R6 unreachable()​`](https://wg21.link/p0627r6) | VS 2022 17.2 <sup>[23](#note_23)</sup> |
| &emsp;[`P0798R8 Monadic Operations For optional​`](https://wg21.link/p0798r8) | VS 2022 17.2 <sup>[23](#note_23)</sup> |
| &emsp;[`P0849R8 auto(x): decay-copy In The Language​`](https://wg21.link/p0849r8) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P0881R7 <stacktrace>​`](https://wg21.link/p0881r7) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P0943R6 Supporting C Atomics In C++​`](https://wg21.link/p0943r6) | VS 2022 17.1 <sup>[23](#note_23)</sup> |
| &emsp;[`P1048R1 is_scoped_enum​`](https://wg21.link/p1048r1) | VS 2022 17.0 <sup>[23](#note_23)</sup> |
| &emsp;[`P1072R10 basic_string::resize_and_overwrite​`](https://wg21.link/p1072r10) | VS 2022 17.1 <sup>[23](#note_23)</sup> |
| &emsp;[`P1132R7 out_ptr(), inout_ptr()​`](https://wg21.link/p1132r7) | VS 2022 17.0 <sup>[23](#note_23)</sup> |
| &emsp;[`P1147R1 Printing volatile Pointers​`](https://wg21.link/p1147r1) | VS 2022 17.1 <sup>[23](#note_23)</sup> |
| &emsp;[`P1206R7 Conversions From Ranges To Containers​`](https://wg21.link/p1206r7) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P1272R4 byteswap()​`](https://wg21.link/p1272r4) | VS 2022 17.1 <sup>[23](#note_23)</sup> |
| &emsp;[`P1328R1 constexpr type_info::operator==()​`](https://wg21.link/p1328r1) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P1413R3 Deprecate aligned_storage And aligned_union​​`](https://wg21.link/p1413r3) | VS 2022 17.3 <sup>[23](#note_23)</sup> |
| &emsp;[`P1425R4 Iterator Pair Constructors For stack And queue​`](https://wg21.link/p1425r4) | VS 2022 17.1 <sup>[23](#note_23)</sup> |
| &emsp;[`P1518R2 Stop Overconstraining Allocators In Container Deduction Guides​`](https://wg21.link/p1518r2) | VS 2022 17.1 <sup>[23](#note_23)</sup> |
| &emsp;[`P1659R3 ranges::starts_with, ranges::ends_with​`](https://wg21.link/p1659r3) | VS 2022 17.1 <sup>[23](#note_23)</sup> |
| &emsp;[`P1679R3 contains() For basic_string/basic_string_view​`](https://wg21.link/p1679r3) | VS 2022 17.0 <sup>[23](#note_23)</sup> |
| &emsp;[`P1682R3 to_underlying() For Enumerations​`](https://wg21.link/p1682r3) | VS 2022 17.0 <sup>[23](#note_23)</sup> |
| &emsp;[`P1899R3 views::stride​`](https://wg21.link/p1899r3) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P1951R1 Default Template Arguments For pair's Forwarding Constructor​`](https://wg21.link/p1951r1) | VS 2022 17.0 <sup>[23](#note_23)</sup> |
| &emsp;[`P1989R2 Range Constructor For string_view​`](https://wg21.link/p1989r2) | VS 2022 17.0 <sup>[23](#note_23)</sup> |
| &emsp;[`P2077R3 Heterogeneous Erasure Overloads For Associative Containers​`](https://wg21.link/p2077r3) | VS 2022 17.2 <sup>[23](#note_23)</sup> |
| &emsp;[`P2136R3 invoke_r()​`](https://wg21.link/p2136r3) | VS 2022 17.1 <sup>[23](#note_23)</sup> |
| &emsp;[`P2162R2 Inheriting from std::variant`](https://wg21.link/P2162R2) | VS 2022 17.0 <sup>[17](#note_17)</sup> |
| &emsp;[`P2166R1 Prohibit basic_string and basic_string_view from being constructed from nullptr`](https://wg21.link/P2166R1) | VS 2022 17.0 <sup>[23](#note_23), [R](#note_R)</sup> |
| &emsp;[`P2186R2 Removed garbage collection support`](https://wg21.link/P2186R2) | VS 2022 17.0 <sup>[23](#note_23), [Q](#note_Q)</sup> |
| &emsp;[`P2251R1 Require span And basic_string_view To Be Trivially Copyable​`](https://wg21.link/p2251r1) | VS 2022 17.1 <sup>[23](#note_23)</sup> |
| &emsp;[`P2273R3 constexpr unique_ptr​​`](https://wg21.link/p2273r3) | VS 2022 17.3 <sup>[23](#note_23)</sup> |
| &emsp;[`P2291R3 constexpr Integral <charconv>​`](https://wg21.link/p2291r3) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P2302R4 ranges::contains, ranges::contains_subrange​`](https://wg21.link/p2302r4) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P2321R2 std::zip​`](https://wg21.link/p2321r2) | partial in VS 2022 17.5 <sup>[23](#note_23)</sup> |
| &emsp;[`P2322R6 ranges::fold_left, ranges::fold_right, etc.​`](https://wg21.link/p2322r6) | VS 2022 17.5 <sup>[23](#note_23)</sup> |
| &emsp;[`P2387R3 Pipe Support For User-Defined Range Adaptors​`](https://wg21.link/p2387r3) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P2393R1 Cleaning Up Integer-Class Types​`](https://wg21.link/p2393r1) | VS 2022 17.2 <sup>[23](#note_23)</sup> |
| &emsp;[`P2401R0 Conditional noexcept For exchange()​`](https://wg21.link/p2401r0) | VS 2022 17.1 <sup>[23](#note_23)</sup> |
| &emsp;[`P2408R5 Ranges Iterators As Inputs To Non-Ranges Algorithms​`](https://wg21.link/p2408r5) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P2417R2 More constexpr bitset​`](https://wg21.link/p2417r2) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P2419R2 Clarify Handling Of Encodings In Localized Formatting Of chrono Types​`](https://wg21.link/p2419r2) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P2438R2 string::substr() &&​`](https://wg21.link/p2438r2) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P2440R1 ranges::iota, ranges::shift_left, ranges::shift_right​`](https://wg21.link/p2440r1) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P2441R2 views::join_with​`](https://wg21.link/p2441r2) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P2442R1 Windowing Range Adaptors: views::chunk, views::slide​​`](https://wg21.link/p2442r1) | VS 2022 17.3 <sup>[23](#note_23)</sup> |
| &emsp;[`P2443R1 views::chunk_by​​`](https://wg21.link/p2443r1) | VS 2022 17.3 <sup>[23](#note_23)</sup> |
| &emsp;[`P2445R1 forward_like()​`](https://wg21.link/p2445r1) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P2446R2 views::as_rvalue​`](https://wg21.link/p2446r2) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P2465R3 Standard Library Modules std And std.compat​`](https://wg21.link/p2465r3) | no |
| &emsp;[`P2494R2 Relaxing Range Adaptors To Allow Move-Only Types​`](https://wg21.link/p2494r2) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P2499R0 string_view Range Constructor Should Be explicit​`](https://wg21.link/p2499r0) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P2508R1 basic_format_string, format_string, wformat_string​`](https://wg21.link/p2508r1) | VS 2022 17.5 <sup>[23](#note_23) |
| &emsp;[`P2517R1 Conditional noexcept For apply()​`](https://wg21.link/p2517r1) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P2520R0 move_iterator<T*> Should Be A Random-Access Iterator​​`](https://wg21.link/p2520r0) | VS 2022 17.4 <sup>[23](#note_23)</sup> |
| &emsp;[`P2549R1 unexpected<E>::error()`](https://wg21.link/p2549r1) | VS 2022 17.3 <sup>[23](#note_23)</sup> |

A group of papers listed together indicates a Standard feature along with one or more approved improvements or expansions. These features are implemented together.

## C Standard library features

| Feature | Supported |
|--|--|
| **C99 Standard library features** | **Supported** |
| &emsp;Alternative spellings macros `<iso646.h>` | VS 2015 |
| &emsp;Wide character support `<wchar.h>` and `<wctype.h>` | VS 2015 |
| &emsp;Complex support in `<complex.h>` | Partial in VS 2015 <sup>[K](#note_K)</sup> |
| &emsp;Type generic math functions `<tgmath.h>` | VS 2019 16.8 <sup>[2104](#note_2104)</sup> |
| &emsp;Additional floating point characteristics `<float.h>` | VS 2015 |
| &emsp;Hexadecimal float printf specifiers `%A`, `%a` | VS 2015 |
| &emsp;Extended integers types `<inttypes.h>`, `<stdint.h>` | VS 2015 |
| &emsp;`vscanf` family in `<stdio.h>` and `<wchar.h>` | VS 2015 |
| &emsp;New math functions in `<math.h>` | VS 2015 |
| &emsp;Treatment of math library error conditions (`math_errhandling`) | VS 2015 |
| &emsp;Floating point environment access `<fenv.h>` | VS 2015 |
| &emsp;`%lf` conversion specifier for `printf` | VS 2015 |
| &emsp;`snprintf` family of functions in `<stdio.h>` | VS 2015 |
| &emsp;`boolean` type in `<stdbool.h>` | VS 2015 |
| &emsp;`va_copy` macro | VS 2015 |
| &emsp;Additional `strftime` conversion specifiers | Partial in VS 2015 <sup>[L](#note_L)</sup> |
| **C11 Standard library features** | **Supported** |
| &emsp;Alignment specifiers `<stdalign.h>` | VS 2019 16.8 <sup>[C11](#note_C11), [2104](#note_2104)</sup> |
| &emsp;`aligned_alloc` | No <sup>[M](#note_M)</sup> |
| &emsp;No return specifiers `<stdnoreturn.h>` | VS 2019 16.8 <sup>[C11](#note_C11), [2104](#note_2104)</sup> |
| &emsp;Threading support `<threads.h>` | No |
| &emsp;Atomic support `<stdatomic.h>` | No |
| &emsp;`char16_t`, `char32_t` `<uchar.h>` | VS 2019 16.8 <sup>[C11](#note_C11)</sup> |
| &emsp;`gets()` removed | VS 2019 16.8 <sup>[C11](#note_C11), [N](#note_N)</sup> |
| &emsp;`gets_s()` | VS 2019 16.8 <sup>[C11](#note_C11)</sup> |
| &emsp;Bounds-checking interfaces (`*_s` APIs) | Partial in VS 2015 <sup>[C11](#note_C11), [O](#note_O)</sup> |
| &emsp;`fopen` `"x"` option | VS 2019 16.8 <sup>[C11](#note_C11)</sup> |
| &emsp;Static assertions | VS 2019 16.8  <sup>[C11](#note_C11), [2104](#note_2104)</sup> |
| &emsp;`quick_exit` | VS 2019 16.8 <sup>[C11](#note_C11)</sup> |
| &emsp;`<complex.h>` macros | VS 2019 16.8 <sup>[C11](#note_C11)</sup> |
| &emsp;floating point characteristics `<float.h>` | VS 2019 16.8 <sup>[C11](#note_C11)</sup> |

### Supported values

**No** Not yet implemented.\
**Partial** The implementation is incomplete. For more information, see the [Notes](#notes) section.\
**VS 2010** Supported in Visual Studio 2010.\
**VS 2013** Supported in Visual Studio 2013.\
**VS 2015** Supported in Visual Studio 2015 (RTW).\
**VS 2015.2** and **VS 2015.3** indicate features that are supported in Visual Studio 2015 Update 2 and Visual Studio 2015 Update 3, respectively.\
**VS 2017 15.0** Supported in Visual Studio 2017 version 15.0 (RTW).\
**VS 2017 15.3** Supported in Visual Studio 2017 version 15.3.\
**VS 2017 15.5** Supported in Visual Studio 2017 version 15.5.\
**VS 2017 15.7** Supported in Visual Studio 2017 version 15.7.\
**VS 2019 16.0** Supported in Visual Studio 2019 version 16.0 (RTW).\
**VS 2019 16.1** Supported in Visual Studio 2019 version 16.1.\
**VS 2019 16.2** Supported in Visual Studio 2019 version 16.2.\
**VS 2019 16.3** Supported in Visual Studio 2019 version 16.3.\
**VS 2019 16.4** Supported in Visual Studio 2019 version 16.4.\
**VS 2019 16.5** Supported in Visual Studio 2019 version 16.5.\
**VS 2019 16.6** Supported in Visual Studio 2019 version 16.6.\
**VS 2019 16.7** Supported in Visual Studio 2019 version 16.7.\
**VS 2019 16.8** Supported in Visual Studio 2019 version 16.8.\
**VS 2019 16.9** Supported in Visual Studio 2019 version 16.9.\
**VS 2019 16.10** Supported in Visual Studio 2019 version 16.10.\
**VS 2022 17.0** Supported in Visual Studio 2022 version 17.0.\
**VS 2022 17.1** Supported in Visual Studio 2022 version 17.1.\
**VS 2022 17.2** Supported in Visual Studio 2022 version 17.2.\
**VS 2022 17.3** Supported in Visual Studio 2022 version 17.3.\
**VS 2022 17.4** Supported in Visual Studio 2022 version 17.4.\
**VS 2022 17.5** Supported in Visual Studio 2022 version 17.5.

### Notes

<a name="note_A"></a> **A** In [`/std:c++14`](../build/reference/std-specify-language-standard-version.md) mode, dynamic exception specifications remain unimplemented, and `throw()` is still treated as a synonym for `__declspec(nothrow)`. In C++17, dynamic exception specifications were mostly removed by P0003R5, except for one vestige: `throw()` is deprecated and required to behave as a synonym for **`noexcept`**. In [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) mode, MSVC now conforms to the Standard by giving `throw()` the same behavior as **`noexcept`**, that is, enforcement via termination.

The compiler option [`/Zc:noexceptTypes`](../build/reference/zc-noexcepttypes.md) requests the old behavior of `__declspec(nothrow)`. It's likely that `throw()` will be removed in a future version of C++. To help with migrating code in response to these changes in the Standard and the Microsoft implementation, new compiler warnings for exception specification issues have been added under [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) and [`/permissive-`](../build/reference/permissive-standards-conformance.md).

<a name="note_B"></a> **B** Supported in [`/permissive-`](../build/reference/permissive-standards-conformance.md) mode in Visual Studio 2017 version 15.7. For more information, see [`Two-phase name lookup support comes to MSVC`](https://devblogs.microsoft.com/cppblog/two-phase-name-lookup-support-comes-to-msvc/).

<a name="note_C"></a> **C** In Visual Studio 2019 version 16.6 and later versions, the compiler fully implements the standard C99 preprocessor via the [`/Zc:preprocessor`](../build/reference/zc-conformance.md) option. (In Visual Studio 2017 versions 15.8 through 16.5, the compiler supports the standard C99 preprocessor via the [`/experimental:preprocessor`](../build/reference/experimental-preprocessor.md) compiler option.) This option is on by default when the compiler option [`/std:c11`](../build/reference/std-specify-language-standard-version.md) or [`/std:c17`](../build/reference/std-specify-language-standard-version.md) is specified.

<a name="note_D"></a> **D** Supported under [`/std:c++14`](../build/reference/std-specify-language-standard-version.md) with a suppressible warning, [`C4984`](../error-messages/compiler-warnings/compiler-warning-c4984.md).

<a name="note_E"></a> **E** The implementation is sufficient to support the C++20 Standard Library. A complete implementation requires a binary breaking change.

<a name="note_F"></a> **F** Features removed when the [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) or later compiler option is specified. To re-enable these features (to ease the transition to newer language modes), use these macros: `_HAS_AUTO_PTR_ETC`, `_HAS_FUNCTION_ALLOCATOR_SUPPORT`, `_HAS_OLD_IOSTREAMS_MEMBERS`, and `_HAS_UNEXPECTED`.

<a name ="note_G"></a> **G** C++17's parallel algorithms library is complete. Complete doesn't mean that every algorithm is parallelized in every case. The most important algorithms have been parallelized. Execution policy signatures are provided even where the implementation doesn't parallelize algorithms. The central internal header, `<yvals_core.h>`, contains the following "Parallel Algorithms Notes": C++ allows an implementation to implement parallel algorithms as calls to the serial algorithms. This implementation parallelizes several common algorithm calls, but not all.

The following algorithms are parallelized:

- `adjacent_difference`, `adjacent_find`, `all_of`, `any_of`, `count`, `count_if`, `equal`, `exclusive_scan`, `find`, `find_end`, `find_first_of`, `find_if`, `find_if_not`, `for_each`, `for_each_n`, `inclusive_scan`, `is_heap`, `is_heap_until`, `is_partitioned`, `is_sorted`, `is_sorted_until`, `mismatch`, `none_of`, `partition`, `reduce`, `remove`, `remove_if`, `replace`, `replace_if`, `search`, `search_n`, `set_difference`, `set_intersection`, `sort`, `stable_sort`, `transform`, `transform_exclusive_scan`, `transform_inclusive_scan`, `transform_reduce`

These algorithms aren't presently parallelized:

- These algorithms show no noticeable parallelism performance improvement on target hardware. All algorithms that merely copy or permute elements with no branches are typically memory bandwidth limited:
  - `copy`, `copy_n`, `fill`, `fill_n`, `move`, `reverse`, `reverse_copy`, `rotate`, `rotate_copy`, `shift_left`, `shift_right`, `swap_ranges`
- Confusion over user parallelism requirements exists for these algorithms, which are likely in the above category anyway:
  - `generate`, `generate_n`
- Effective parallelism of these algorithms might be infeasible:
  - `partial_sort`, `partial_sort_copy`
- These algorithms haven't been evaluated yet. The library might implement parallelism in a future release:
  - `copy_if`, `includes`, `inplace_merge`, `lexicographical_compare`, `max_element`, `merge`, `min_element`, `minmax_element`, `nth_element`, `partition_copy`, `remove_copy`, `remove_copy_if`, `replace_copy`, `replace_copy_if`, `set_symmetric_difference`, `set_union`, `stable_partition`, `unique`, `unique_copy`

<a name="note_H"></a> **H** This is a wholly new implementation, incompatible with the previous `std::experimental` version, made necessary by symlink support, bug fixes, and changes in standard-required behavior. Currently, `<filesystem>` provides both the new `std::filesystem` and the previous `std::experimental::filesystem`. The `<experimental/filesystem>` header provides only the old experimental implementation. Expect removal of the experimental implementation in the next ABI-breaking release of the libraries.

<a name="note_I"></a> **I** Supported by a compiler intrinsic.

<a name="note_J"></a> **J** `std::byte` is enabled by [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) or later, but because it can conflict with the Windows SDK headers in some cases, it has a fine-grained opt-out macro. To disable it, define `_HAS_STD_BYTE` as `0`.

<a name="note_K"></a> **K** MSVC doesn't support the `_Complex` keyword or native complex types. The Universal CRT `<complex.h>` uses implementation-specific macros to achieve the same effect. For more information, see [C complex math support](../c-runtime-library/complex-math-support.md).

<a name="note_L"></a> **L** The Universal CRT doesn't implement the `strftime` `E` and `O` alternative conversion modifiers. These modifiers are ignored (for example, `%Oe` behaves the same as `%e`). The modifiers aren't supported by the underlying locale APIs.

<a name="note_M"></a> **M** The Universal CRT doesn't implement C11 `aligned_alloc`, but does provide [`_aligned_malloc`](../c-runtime-library/reference/aligned-malloc.md) and [`_aligned_free`](../c-runtime-library/reference/aligned-free.md). Because the Windows operating system doesn't support aligned allocations, this function is unlikely to be implemented.

<a name="note_N"></a> **N** The declaration is removed, but the export for the function remains for backward compatibility.

<a name="note_O"></a> **O** Certain bounds-checking functions are unimplemented, or have different signatures, or aren't part of the C11 or C17 standard. These functions are unimplemented: `abort_handler_s`, `ignore_handler_s`, `memset_s`, `set_constraint_handler_s`, `snprintf_s`, `snwprintf_s`, `strerrorlen_s`, `vsnwprintf_s`. These functions have different signatures: `gmtime_s`, `localtime_s`, `qsort_s`, `strtok_s`, `vsnprintf_s`, `wcstok_s`. These functions don't appear in the standard: `clearerr_s`, `fread_s`.

<a name="note_P"></a> **P** Support was added in Visual Studio 2019 version 16.10. Support for Clang was added in Visual Studio 2022 version 17.0.

<a name="note_Q"></a> **Q** This removes `declare_reachable`, `undeclare_reachable`, `declare_no_pointers`, `undeclare_no_pointers`, `get_pointer_safety`. Previously, these functions had no effect.

<a name="note_R"></a> **R** This is a common **source-breaking** change. However, code that previously had undefined behavior at runtime is now rejected with compiler errors.

<a name="note_S"></a> **S** Input range adaptors and `counted_iterator` are implemented in VS 2022 17.0. A future update to Visual Studio 2019 version 16.11 is planned to incorporate these changes.

<a name="note_T"></a> **T** `<stdatomic.h>` is currently supported when compiled as C++ (`/std:c++latest`). It isn't yet supported when compiled as C (`/std:c11` and `/std:c17`)

<a name="note_14"></a> **14** These C++17 and C++20 features are always enabled, even when [`/std:c++14`](../build/reference/std-specify-language-standard-version.md) (the default) is specified. The reason is either because the feature was implemented before the introduction of the **`/std`** options, or because conditional implementation was undesirably complex.

<a name="note_17"></a> **17** These features are enabled by the [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) or later compiler option.

<a name="note_20"></a> **20** In versions through Visual Studio 2019 version 16.10, these features are enabled by the [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option. Visual Studio 2019 version 16.11 added the [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) compiler option to enable these features.

<a name="note_20abi"></a> **20abi** Because of ongoing post-release work on the C++20 standard, `<format>`, the formatting parts of `<chrono>` (which rely on `<format>`), and the range factories and range adaptors from `<ranges>` (everything that needs the `view` concept) are only available under **`/std:c++latest`**. Expect these features under **`/std:c++20`** after agreement is reached with WG21 that no further ABI-breaking changes are necessary. The remaining parts of `<chrono>` and the algorithms that apply to ranges are enabled under the **`/std:c++20`** compiler option in Visual Studio 2019 version 16.11 and later versions.

<a name="note_23"></a> **23** In Visual Studio 2022 version 17.0 and up, these features are enabled by the [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option.

<a name="note_C11"></a> **C11** Compiler support for C11 and C17 requires Visual Studio 2019 version 16.8 or higher. Except as noted, C11 and C17 library support requires Windows SDK build 10.0.20211.0 or higher. For more information on how to install support for C11 and C17, see [Install C11 and C17 support in Visual Studio](./install-c17-support.md).

<a name="note_DR"></a> **DR** These features are enabled in all C++ [`/std`](../build/reference/std-specify-language-standard-version.md) compiler option modes. The C++ Standard committee adopted this change as a retroactive Defect Report to C++11 and all later versions.

<a name="note_2104"></a> **2104** C11 library support for this feature requires Windows SDK build 10.0.20348.0 (version 2104) or higher.

## See also

[C++ Language Reference](../cpp/cpp-language-reference.md)\
[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)\
[C++ conformance improvements in Visual Studio](cpp-conformance-improvements.md)\
[What's New for Visual C++ in Visual Studio](what-s-new-for-visual-cpp-in-visual-studio.md)\
[Visual C++ change history 2003 through 2015](../porting/visual-cpp-change-history-2003-2015.md)\
[Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md)\
[C++ team blog](https://devblogs.microsoft.com/cppblog/)
