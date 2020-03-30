---
title: "Microsoft C++ language conformance table"
description: "Table of Microsoft C++ conformance updates by Visual Studio version."
ms.date: "03/17/2020"
ms.technology: "cpp-language"
ms.assetid: 475da6e9-0d78-4b4e-bd23-f41c406c4efe
author: "corob-msft"
ms.author: "corob"
---
# Microsoft C++ language conformance table

Standards conformance for the Microsoft C++ compiler in Visual Studio (MSVC) is a work in progress. Here's a summary of our ISO Standard C++ language and library conformance by Visual Studio version. Each compiler and standard library feature name links to the ISO Standard C++ proposal paper that describes the feature, if one is available at publication time. The **Supported** column lists the Visual Studio version in which support for the feature first appeared.

For details on Visual Studio 2017 or Visual Studio 2019 MSVC conformance improvements, see [C++ conformance improvements in Visual Studio](cpp-conformance-improvements.md). For a list of other changes, see [What's New for Visual C++ in Visual Studio](what-s-new-for-visual-cpp-in-visual-studio.md). For conformance changes in earlier versions, see [Visual C++ change history](../porting/visual-cpp-change-history-2003-2015.md) and [Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md). For current news from the C++ team, visit the [C++ team blog](https://devblogs.microsoft.com/cppblog/).

> [!NOTE]
> There are no binary breaking changes between Visual Studio 2015, Visual Studio 2017, and Visual Studio 2019. For more information, see [C++ binary compatibility between Visual Studio 2015, 2017, and 2019](../porting/binary-compat-2015-2017.md)

## Compiler features

|  |  |
|--|--|
| __C++03/11 Core language features__ | __Supported__ |
| &nbsp;&nbsp;Everything else | VS 2015 <sup>[A](#note_A)</sup> |
| &nbsp;&nbsp;Two-phase name lookup | VS 2017 15.7 <sup>[B](#note_B)</sup> |
| &nbsp;&nbsp;[N2634 Expression SFINAE](https://wg21.link/N2634) | VS 2017 15.7 |
| &nbsp;&nbsp;[N1653 C99 preprocessor](https://wg21.link/N1653) | Partial <sup>[C](#note_C)</sup> |
| __C++14 Core language features__ | __Supported__ |
| &nbsp;&nbsp;[N3323 Tweaked wording for contextual conversions](https://wg21.link/N3323) | VS 2013 |
| &nbsp;&nbsp;[N3472 Binary literals](https://wg21.link/N3472) | VS 2015 |
| &nbsp;&nbsp;[N3638 auto and decltype(auto) return types](https://wg21.link/n3638) | VS 2015 |
| &nbsp;&nbsp;[N3648 init-captures](https://wg21.link/n3648) | VS 2015 |
| &nbsp;&nbsp;[N3649 Generic lambdas](https://wg21.link/n3649) | VS 2015 |
| &nbsp;&nbsp;[N3760 \[\[deprecated\]\] attribute](https://wg21.link/n3760) | VS 2015 |
| &nbsp;&nbsp;[N3778 Sized deallocation](https://wg21.link/n3778) | VS 2015 |
| &nbsp;&nbsp;[N3781 Digit separators](https://wg21.link/n3781) | VS 2015 |
| &nbsp;&nbsp;[N3651 Variable templates](https://wg21.link/n3651) | VS 2015.2 |
| &nbsp;&nbsp;[N3652 Extended constexpr](https://wg21.link/n3652) | VS 2017 15.0 |
| &nbsp;&nbsp;[N3653 Default member initializers for aggregates](https://wg21.link/n3653) | VS 2017 15.0 |
| __C++17 Core language features__ | __Supported__ |
| &nbsp;&nbsp;[N4086 Removing trigraphs](https://wg21.link/n4086) | VS 2010 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N3922 New rules for auto with braced-init-lists](https://wg21.link/n3922) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4051 typename in template template-parameters](https://wg21.link/n4051) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4266 Attributes for namespaces and enumerators](https://wg21.link/n4266) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4267 u8 character literals](https://wg21.link/n4267) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4230 Nested namespace definitions](https://wg21.link/n4230) | VS 2015.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[N3928 Terse static_assert](https://wg21.link/n3928) | VS 2017 15.0 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0184R0 Generalized range-based for-loops](https://wg21.link/p0184r0) | VS 2017 15.0 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0188R1 \[\[fallthrough\]\] attribute](https://wg21.link/p0188r1) | VS 2017 15.0 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0001R1 Removing the register keyword](https://wg21.link/p0001r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0002R1 Removing operator++ for bool](https://wg21.link/p0002r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0018R3 Capturing *this by value](https://wg21.link/p0018r3) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0028R4 Using attribute namespaces without repetition](https://wg21.link/p0028r4) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0061R1 \_\_has_include](https://wg21.link/p0061r1) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0138R2 Direct-list-init of fixed enums from integers](https://wg21.link/p0138r2) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0170R1 constexpr lambdas](https://wg21.link/p0170r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0189R1 \[\[nodiscard\]\] attribute](https://wg21.link/p0189r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0212R1 \[\[maybe_unused\]\] attribute](https://wg21.link/p0212r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0217R3 Structured bindings](https://wg21.link/p0217r3) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0292R2 constexpr if-statements](https://wg21.link/p0292r2) | VS 2017 15.3 <sup>[D](#note_D)</sup> |
| &nbsp;&nbsp;[P0305R1 Selection statements with initializers](https://wg21.link/p0305r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0245R1 Hexfloat literals](https://wg21.link/p0245r1) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[N4268 Allowing more non-type template args](https://wg21.link/n4268) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[N4295 Fold expressions](https://wg21.link/n4295) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0003R5 Removing dynamic-exception-specifications](https://wg21.link/p0003r5) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0012R1 Adding noexcept to the type system](https://wg21.link/p0012r1) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0035R4 Over-aligned dynamic memory allocation](https://wg21.link/p0035r4) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0386R2 Inline variables](https://wg21.link/p0386r2) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0522R0 Matching template template-parameters to compatible arguments](https://wg21.link/p0522r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0036R0 Removing some empty unary folds](https://wg21.link/p0036r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[N4261 Fixing qualification conversions](https://wg21.link/n4261) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0017R1 Extended aggregate initialization](https://wg21.link/p0017r1) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0091R3 Template argument deduction for class templates](https://wg21.link/p0091r3)<br/>&nbsp;&nbsp;[P0512R0 Class template argument deduction issues](https://wg21.link/p0512r0) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0127R2 Declaring non-type template parameters with auto](https://wg21.link/p0127r2) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0135R1 Guaranteed copy elision](https://wg21.link/p0135r1) | VS 2017 15.6 |
| &nbsp;&nbsp;[P0136R1 Rewording inheriting constructors](https://wg21.link/p0136r1) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0137R1 std::launder](https://wg21.link/p0137r1) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0145R3 Refining expression evaluation order](https://wg21.link/p0145r3)<br/>&nbsp;&nbsp;[P0400R0 Order of evaluation of function arguments](https://wg21.link/p0400r0) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0195R2 Pack expansions in using-declarations](https://wg21.link/p0195r2) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0283R2 Ignoring unrecognized attributes](https://wg21.link/p0283r2) | VS 2015 <sup>[14](#note_14)</sup> |
| __C++17 Core language features (Defect reports)__ | __Supported__ |
| &nbsp;&nbsp;[P0702R1 Fixing class template argument deduction for initializer-list ctors](https://wg21.link/p0702r1) | VS 2017 15.7 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0961R1 Relaxing the structured bindings customization point finding rules](https://wg21.link/p0961r1) | VS 2019 16.0 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0969R0 Allowing structured bindings to accessible members](https://wg21.link/p0969r0) | VS 2019 16.0 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0588R1 Simplifying implicit lambda capture](https://wg21.link/p0588r1) | VS 2019 16.4 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P1771R1 \[\[nodiscard\]\] for constructors](https://wg21.link/p1771r1) | VS 2019 16.4 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P1825R0 Merged wording for P0527R1 and P1155R3, more implicit moves](https://wg21.link/p1825r0) | VS 2019 16.4 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0929R2 Checking for abstract class types](https://wg21.link/P0929R2) | No |
| &nbsp;&nbsp;[P0962R2 Relaxing the range-for loop customization point finding rules](https://wg21.link/p0962r1) | No |
| &nbsp;&nbsp;[P0859R0 CWG 1581: When are constexpr member functions defined](https://wg21.link/p0859r0) | No |
| &nbsp;&nbsp;[P1009R2 Array size deduction in new-expressions](https://wg21.link/P1009R2) | No |
| &nbsp;&nbsp;[P1286R2 Contra CWG DR1778](https://wg21.link/P1286R2) | No |
| __C++20 Core language features__ | __Supported__ |
| &nbsp;&nbsp;[P0704R1 Fixing const lvalue ref-qualified pointers to members](https://wg21.link/p0704r1) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P1041R4 Make char16_t/char32_t string literals be UTF-16/32](https://wg21.link/P1041R4) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P1330R0 Changing the active member of a union inside constexpr](https://wg21.link/P1330R0) | VS 2017 15.0 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0972R0 noexcept For \<chrono> zero(), min(), max()](https://wg21.link/P0972R0) | VS 2017 15.7 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0515R3 Three-way (spaceship) comparison operator <=>](https://wg21.link/P0515R3) | VS 2019 16.0 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0941R2 Feature-test macros](https://wg21.link/P0941R2) | VS 2019 16.0 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P1008R1 Prohibiting aggregates with user-declared constructors](https://wg21.link/P1008R1) | VS 2019 16.0 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0329R4 Designated initialization](https://wg21.link/p0329r4) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0846R0 ADL and function templates that are not visible](https://wg21.link/P0846R0) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0409R2 Allowing lambda-capture \[=, this\]](https://wg21.link/p0409r2) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0428R2 Familiar template syntax for generic lambdas](https://wg21.link/p0428r2) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0624R2 Default constructible and assignable stateless lambdas](https://wg21.link/P0624R2) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0780R2 Allowing pack expansion in lambda init-capture](https://wg21.link/P0780R2) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0806R2 Deprecate implicit capture of this via \[=\]](https://wg21.link/P0806R2) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1120R0 Consistency improvements for <=> and other comparison operators](https://wg21.link/P1120R0) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1185R2 \<=\> != ==](https://wg21.link/P1185R2) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0734R0 Concepts](https://wg21.link/P0734R0) | VS 2019 16.3 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0857R0 Fixing functionality gaps in constraints](https://wg21.link/P0857R0) | VS 2019 16.3 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1084R2 Today's return-type-requirements are insufficient](https://wg21.link/P1084R2) | VS 2019 16.3 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0892R2 Conditional explicit](https://wg21.link/P0892R2) | VS 2019 16.4 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1091R3 Extending structured bindings to be more like variable declarations](https://wg21.link/P1091R3) | VS 2019 16.4 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1099R5 Using enum](https://wg21.link/P1099R5) | VS 2019 16.4 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1186R3 When do you actually use \<=>](https://wg21.link/P1186R3) | VS 2019 16.4 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1630R1 Spaceship needs a tune-up](https://wg21.link/P1630R1) | VS 2019 16.4 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0306R4 Adding \_\_VA_OPT\_\_ for comma omission and comma deletion](https://wg21.link/P0306R4) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0614R1 Range-based for-loops with initializers](https://wg21.link/P0614R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0683R1 Default member initializers for bit-fields](https://wg21.link/P0683R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1002R1 try-catch blocks in constexpr functions](https://wg21.link/P1002R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1161R3 Deprecate uses of the comma operator in subscripting expressions](https://wg21.link/P1161R3) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1301R4 \[\[nodiscard("message")\]\]](https://wg21.link/P1301R4) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1703R1 Recognizing header unit imports requires full preprocessing](https://wg21.link/P1703R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1946R0 Allow defaulting comparisons by value](https://wg21.link/P1946R0) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0641R2 const mismatch with defaulted copy constructor](https://wg21.link/P0641R2) | Partial |
| &nbsp;&nbsp;[P0912R5 Coroutines](https://wg21.link/P0912R5) | Partial |
| &nbsp;&nbsp;[P1103R3 Modules](https://wg21.link/P1103R3) | Partial |
| &nbsp;&nbsp;[P0315R4 Allowing lambdas in unevaluated contexts](https://wg21.link/P0315R4) | No |
| &nbsp;&nbsp;[P0388R4 Permit conversions to arrays of unknown bound](https://wg21.link/P0388R4) | No |
| &nbsp;&nbsp;[P0479R5 \[\[likely\]\] and \[\[unlikely\]\] attributes](https://wg21.link/P0479R5) | No |
| &nbsp;&nbsp;[P0634R3 Down with typename!](https://wg21.link/P0634R3) | No |
| &nbsp;&nbsp;[P0692R1 Relaxing access checking on specializations](https://wg21.link/P0692R1) | No |
| &nbsp;&nbsp;[P0722R3 Efficient sized delete for variable sized classes](https://wg21.link/P0722R3) | No |
| &nbsp;&nbsp;[P0732R2 Class types in non-type template parameters](https://wg21.link/P0732R2) | No |
| &nbsp;&nbsp;[P0735R1 Interaction of memory_order_consume with release sequences](https://wg21.link/P0735R1) | No |
| &nbsp;&nbsp;[P0784R7 More constexpr containers](https://wg21.link/P0784R7) | No |
| &nbsp;&nbsp;[P0840R2 \[\[no_unique_address\]\] attribute](https://wg21.link/P0840R2) | No |
| &nbsp;&nbsp;[P0848R3 Conditionally trivial special member functions](https://wg21.link/P0848R3) | No |
| &nbsp;&nbsp;[P0960R3 Allow initializing aggregates from a parenthesized list of values](https://wg21.link/P0960R3) | No |
| &nbsp;&nbsp;[P1064R0 Allowing virtual function calls in constant expressions](https://wg21.link/P1064R0) | No |
| &nbsp;&nbsp;[P1073R3 Immediate functions](https://wg21.link/P1073R3) | No |
| &nbsp;&nbsp;[P1094R2 Nested inline namespaces](https://wg21.link/P1094R2) | No |
| &nbsp;&nbsp;[P1139R2 Address wording issues related to ISO 10646](https://wg21.link/P1139R2) | No |
| &nbsp;&nbsp;[P1141R2 Yet another approach for constrained declarations](https://wg21.link/P1141R2) | No |
| &nbsp;&nbsp;[P1143R2 constinit](https://wg21.link/P1143R2) | No |
| &nbsp;&nbsp;[P1152R4 Deprecating volatile](https://wg21.link/P1152R4) | No |
| &nbsp;&nbsp;[P1236R1 Signed integers are two's complement](https://wg21.link/P1236R1) | No |
| &nbsp;&nbsp;[P1327R1 Allowing dynamic_cast, polymorphic typeid in constant expressions](https://wg21.link/P1327R1) | No |
| &nbsp;&nbsp;[P1331R2 Permitting trivial default initialization in constexpr contexts](https://wg21.link/P1331R2) | No |
| &nbsp;&nbsp;[P1353R0 Missing feature-test macros](https://wg21.link/P1353R0) | No |
| &nbsp;&nbsp;[P1381R1 Reference capture of structured bindings](https://wg21.link/P1381R1) | No |
| &nbsp;&nbsp;[P1452R2 On the non-uniform semantics of return-type-requirements](https://wg21.link/P1452R2) | No |
| &nbsp;&nbsp;[P1616R1 Using unconstrained TTPs with constrained templates](https://wg21.link/P1616R1) | No |
| &nbsp;&nbsp;[P1668R1 Permitting unevaluated inline assembly in constexpr functions](https://wg21.link/P1668R1) | No |
| &nbsp;&nbsp;[P1766R1 Mitigating minor modules maladies](https://wg21.link/P1766R1) | No |
| &nbsp;&nbsp;[P1811R0 Relaxing redefinition restrictions for re-exportation robustness](https://wg21.link/P1811R0) | No |
| &nbsp;&nbsp;[P1814R0 CTAD for alias templates](https://wg21.link/P1814R0) | No |
| &nbsp;&nbsp;[P1816R0 CTAD for aggregates](https://wg21.link/P1816R0) | No |
| &nbsp;&nbsp;[P1874R1 Dynamic Initialization Order of Non-Local Variables in Modules](https://wg21.link/P1874R1) | No |
| &nbsp;&nbsp;[P1907R1 Inconsistencies with non-type template parameters](https://wg21.link/P1907R1) | No |
| &nbsp;&nbsp;[P1971R0 Core Changes for NB Comments at the Nov 2019 (Belfast) meeting](https://wg21.link/P1971R0) | No |
| &nbsp;&nbsp;[P1972R0 US105 Check satisfaction of constraints for non-templates when forming pointer to function](https://wg21.link/P1972R0) | No |
| &nbsp;&nbsp;[P1975R0 Fixing the wording of parenthesized aggregate-initialization](https://wg21.link/P1975R0) | No |
| &nbsp;&nbsp;[P1979R0 Resolution to US086](https://wg21.link/P1979R0) | No |
| &nbsp;&nbsp;[P1980R0 CA096: Declaration matching for non-dependent requires-clauses](https://wg21.link/P1980R0) | No |

## Standard library features

|  |  |
|--|--|
| __C++20 Standard library features__ | __Supported__ |
| &nbsp;&nbsp;[P0809R0 Comparing Unordered Containers](https://wg21.link/p0809r0) | VS 2010 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0858R0 Constexpr Iterator Requirements](https://wg21.link/p0858r0) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0777R1 Avoiding Unnecessary Decay](https://wg21.link/p0777r1) | VS 2017 15.7 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P1164R1 Making create_directory() Intuitive](https://wg21.link/P1164R1) | VS 2019 16.0 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0550R2 remove_cvref](https://wg21.link/p0550r2) | VS 2019 16.0 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0318R1 unwrap_reference, unwrap_ref_decay](https://wg21.link/p0318r1) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0457R2 starts_with()/ends_with() For basic_string/basic_string_view](https://wg21.link/p0457r2) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0458R2 contains() For Ordered And Unordered Associative Containers](https://wg21.link/p0458r2) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0646R1 list/forward_list remove()/remove_if()/unique() Return size_type](https://wg21.link/p0646r1) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0769R2 shift_left(), shift_right()](https://wg21.link/p0769r2) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0887R1 type_identity](https://wg21.link/p0887r1) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0020R6 atomic\<float>, atomic\<double>, atomic\<long double>](https://wg21.link/p0020r6) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0463R1 endian](https://wg21.link/p0463r1) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0482R6 char8_t: A type for UTF-8 characters and strings](https://wg21.link/P0482R6) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0600R1 \[\[nodiscard\]\] For The STL, Part 1](https://wg21.link/p0600r1) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0653R2 to_address()](https://wg21.link/p0653r2) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0754R2 \<version>](https://wg21.link/p0754r2) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0771R1 noexcept For std::function's Move Constructor](https://wg21.link/P0771R1) | VS 2019 16.2 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0487R1 Fixing operator>>(basic_istream&, CharT*)](https://wg21.link/P0487R1) | VS 2019 16.3 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0616R0 Using move() In \<numeric>](https://wg21.link/p0616r0) | VS 2019 16.3 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0758R1 is_nothrow_convertible](https://wg21.link/P0758R1) | VS 2019 16.3 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0898R3 Standard Library Concepts](https://wg21.link/P0898R3) | VS 2019 16.3 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0919R3 Heterogeneous Lookup For Unordered Containers](https://wg21.link/P0919R3) | VS 2019 16.3 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1754R1 Rename Concepts to standard_case](https://wg21.link/P1754R1) | VS 2019 16.4 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0325R4 to_array from LFTS with updates](https://wg21.link/P0325R4) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0340R3 SFINAE-Friendly underlying_type](https://wg21.link/P0340R3) | VS 2019 16.5 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0356R5 bind_front()](https://wg21.link/P0356R5) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0439R0 enum class memory_order](https://wg21.link/p0439r0) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0553R4 \<bit> Rotating And Counting Functions](https://wg21.link/P0553R4) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0556R3 \<bit> ispow2(), ceil2(), floor2(), log2p1()](https://wg21.link/P0556R3) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0595R2 is_constant_evaluated()](https://wg21.link/P0595R2) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0631R8 \<numbers> Math Constants](https://wg21.link/P0631R8) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0738R2 istream_iterator Cleanup](https://wg21.link/P0738R2) | VS 2019 16.5 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0767R1 Deprecating is_pod](https://wg21.link/P0767R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0966R1 string::reserve() Should Not Shrink](https://wg21.link/P0966R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1209R0 erase_if(), erase()](https://wg21.link/P1209R0) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1227R2 Signed std::ssize(), Unsigned span::size()](https://wg21.link/P1227R2) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1355R2 Narrow Contract For ceil2()](https://wg21.link/P1355R2) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1357R1 is_bounded_array, is_unbounded_array](https://wg21.link/P1357R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1612R1 Relocating endian To \<bit>](https://wg21.link/P1612R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1651R0 bind_front() Should Not Unwrap reference_wrapper](https://wg21.link/P1651R0) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1690R1 Refining Heterogeneous Lookup For Unordered Containers](https://wg21.link/P1690R1) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P1902R1 Missing Feature-Test Macros 2017-2019](https://wg21.link/P1902R1) | VS 2019 16.5 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0019R8 atomic_ref](https://wg21.link/P0019R8) | No |
| &nbsp;&nbsp;[P0053R7 \<syncstream>](https://wg21.link/p0053r7)<br/>&nbsp;&nbsp;[P0753R2 osyncstream Manipulators](https://wg21.link/p0753r2) | No |
| &nbsp;&nbsp;[P0122R7 \<span>](https://wg21.link/p0122r7) | No |
| &nbsp;&nbsp;[P0202R3 constexpr For \<algorithm> And exchange()](https://wg21.link/p0202r3) | No |
| &nbsp;&nbsp;[P0339R6 polymorphic_allocator<>](https://wg21.link/P0339R6) | No |
| &nbsp;&nbsp;[P0355R7 \<chrono> Calendars And Time Zones](https://wg21.link/p0355r7) | No |
| &nbsp;&nbsp;[P0357R3 Supporting Incomplete Types In reference_wrapper](https://wg21.link/P0357R3) | No |
| &nbsp;&nbsp;[P0415R1 constexpr For \<complex> (Again)](https://wg21.link/p0415r1) | No |
| &nbsp;&nbsp;[P0475R1 Guaranteed Copy Elision For Piecewise Construction](https://wg21.link/P0475R1) | No |
| &nbsp;&nbsp;[P0476R2 \<bit> bit_cast](https://wg21.link/P0476R2) | No |
| &nbsp;&nbsp;[P0528R3 Atomic Compare-And-Exchange With Padding Bits](https://wg21.link/P0528R3) | No |
| &nbsp;&nbsp;[P0591R4 Utility Functions For Uses-Allocator Construction](https://wg21.link/P0591R4) | No |
| &nbsp;&nbsp;[P0608R3 Improving variant's Converting Constructor/Assignment](https://wg21.link/P0608R3) | No |
| &nbsp;&nbsp;[P0619R4 Removing C++17-Deprecated Features In C++20](https://wg21.link/P0619R4) | No |
| &nbsp;&nbsp;[P0653R2 to_address()](https://wg21.link/p0653r2) | No |
| &nbsp;&nbsp;[P0655R1 visit\<R>()](https://wg21.link/P0655R1) | No |
| &nbsp;&nbsp;[P0674R1 make_shared() For Arrays](https://wg21.link/p0674r1) | No |
| &nbsp;&nbsp;[P0718R2 atomic\<shared_ptr\<T>>, atomic\<weak_ptr\<T>>](https://wg21.link/p0718r2) | No |
| &nbsp;&nbsp;[P0768R1 Library Support For The Spaceship Comparison Operator \<=>](https://wg21.link/p0768r1) | No |
| &nbsp;&nbsp;[P0811R3 midpoint(), lerp()](https://wg21.link/P0811R3) | No |
| &nbsp;&nbsp;[P0879R0 constexpr For Swapping Functions](https://wg21.link/P0879R0) | No |
| &nbsp;&nbsp;[P0896R4 \<ranges\>](https://wg21.link/P0896R4) | No |
| &nbsp;&nbsp;[P0912R5 Library Support For Coroutines](https://wg21.link/P0912R5) | No |
| &nbsp;&nbsp;[P0920R2 Precalculated Hash Value Lookup](https://wg21.link/P0920R2) | No |
| &nbsp;&nbsp;[P0935R0 Eradicating Unnecessarily Explicit Default Constructors](https://wg21.link/P0935R0) | No |
| &nbsp;&nbsp;[P1001R2 execution::unseq](https://wg21.link/P1001R2) | No |
| &nbsp;&nbsp;[P1006R1 constexpr For pointer_traits<T*>::pointer_to()](https://wg21.link/P1006R1) | No |
| &nbsp;&nbsp;[P1007R3 assume_aligned()](https://wg21.link/P1007R3) | No |
| &nbsp;&nbsp;[P1020R1 Smart Pointer Creation With Default Initialization](https://wg21.link/P1020R1) | No |
| &nbsp;&nbsp;[P1023R0 constexpr For std::array Comparisons](https://wg21.link/P1023R0) | No |
| &nbsp;&nbsp;[P1032R1 Miscellaneous constexpr](https://wg21.link/P1032R1) | No |
| &nbsp;&nbsp;[P1165R1 Consistently Propagating Stateful Allocators In basic_string's operator+()](https://wg21.link/P1165R1) | No |
| &nbsp;&nbsp;[P1285R0 Improving Completeness Requirements For Type Traits](https://wg21.link/P1285R0) | No |
| __C++17 Standard library features__ | __Supported__ |
| &nbsp;&nbsp;[LWG 2221 Formatted output operator for nullptr](https://cplusplus.github.io/LWG/issue2221) | VS 2019 16.1 |
| &nbsp;&nbsp;[N3911 void_t](https://wg21.link/n3911) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4089 Safe Conversions In unique_ptr\<T[]>](https://wg21.link/n4089) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4169 invoke()](https://wg21.link/n4169) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4190 Removing auto_ptr, random_shuffle(), And Old \<functional> Stuff](https://wg21.link/n4190) | VS 2015 <sup>[rem](#note_rem)</sup> |
| &nbsp;&nbsp;[N4258 noexcept Cleanups](https://wg21.link/n4258) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4259 uncaught_exceptions()](https://wg21.link/n4259) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4277 Trivially Copyable reference_wrapper](https://wg21.link/n4277) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4279 insert_or_assign()/try_emplace() For map/unordered_map](https://wg21.link/n4279) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4280 size(), empty(), data()](https://wg21.link/n4280) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4366 Precisely Constraining unique_ptr Assignment](https://wg21.link/n4366) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4387 Improving pair And tuple](https://wg21.link/n4387) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4389 bool_constant](https://wg21.link/n4389) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4508 shared_mutex (Untimed)](https://wg21.link/n4508) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4510 Supporting Incomplete Types In vector/list/forward_list](https://wg21.link/n4510) | VS 2013 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4562 Library Fundamentals: \<algorithm> sample()](https://wg21.link/n4562#alg.random.sample) | VS 2017 15.0 |
| &nbsp;&nbsp;[N4562 Library Fundamentals: \<any>](https://wg21.link/n4562#any) | VS 2017 15.0 |
| &nbsp;&nbsp;[N4562 Library Fundamentals: \<memory_resource>](https://wg21.link/n4562#memory.resource.synop)<br/>&nbsp;&nbsp;[P0337R0 Deleting polymorphic_allocator Assignment](https://wg21.link/p0337r0) | VS 2017 15.6 |
| &nbsp;&nbsp;[N4562 Library Fundamentals: \<optional>](https://wg21.link/n4562#optional) | VS 2017 15.0 |
| &nbsp;&nbsp;[N4562 Library Fundamentals: \<string_view>](https://wg21.link/n4562#string.view) | VS 2017 15.0 |
| &nbsp;&nbsp;[N4562 Library Fundamentals: \<tuple> apply()](https://wg21.link/n4562#tuple) | VS 2017 15.0 |
| &nbsp;&nbsp;[N4562 Library Fundamentals: Boyer-Moore search()](https://wg21.link/n4562#func.searchers.boyer_moore)<br/>&nbsp;&nbsp;[P0253R1 Fixing Searcher Return Types](https://wg21.link/p0253r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0003R5 Removing Dynamic Exception Specifications](https://wg21.link/p0003r5) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0004R1 Removing Deprecated Iostreams Aliases](https://wg21.link/p0004r1) | VS 2015.2 <sup>[rem](#note_rem)</sup> |
| &nbsp;&nbsp;[P0005R4 not_fn()](https://wg21.link/p0005r4)<br/>&nbsp;&nbsp;[P0358R1 Fixes For not_fn()](https://wg21.link/p0358r1) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0006R0 Variable Templates For Type Traits (is_same_v, etc.)](https://wg21.link/p0006r0) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0007R1 as_const()](https://wg21.link/p0007r1) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0013R1 Logical Operator Type Traits (conjunction, etc.)](https://wg21.link/p0013r1) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0024R2 Parallel Algorithms](https://wg21.link/p0024r2)<br/>&nbsp;&nbsp;[P0336R1 Renaming Parallel Execution Policies](https://wg21.link/p0336r1)<br/>&nbsp;&nbsp;[P0394R4 Parallel Algorithms Should terminate() For Exceptions](https://wg21.link/p0394r4)<br/>&nbsp;&nbsp;[P0452R1 Unifying \<numeric> Parallel Algorithms](https://wg21.link/p0452r1) | VS 2017 15.7 |
| &nbsp;&nbsp;[P0025R1 clamp()](https://wg21.link/p0025r1) | VS 2015.3 |
| &nbsp;&nbsp;[P0030R1 hypot(x, y, z)](https://wg21.link/p0030r1) | VS 2017 15.7 |
| &nbsp;&nbsp;[P0031R0 constexpr For \<array> (Again) And \<iterator>](https://wg21.link/p0031r0) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0032R3 Homogeneous Interface For variant/any/optional](https://wg21.link/p0032r3) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0033R1 Rewording enable_shared_from_this](https://wg21.link/p0033r1) | VS 2017 15.5 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0040R3 Extending Memory Management Tools](https://wg21.link/p0040r3) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0063R3 C11 Standard Library](https://wg21.link/p0063r3) | VS 2015 <sup>[C11](#note_C11), [14](#note_14)</sup> |
| &nbsp;&nbsp;[P0067R5 Elementary String Conversions](https://wg21.link/p0067r5) | VS 2019 16.4 <sup>[charconv](#note_charconv)</sup> |
| &nbsp;&nbsp;[P0074R0 owner_less\<>](https://wg21.link/p0074r0) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0077R2 is_callable, is_nothrow_callable](https://wg21.link/p0077r2) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0083R3 Splicing Maps And Sets](https://wg21.link/p0083r3)<br/>&nbsp;&nbsp;[P0508R0 Clarifying insert_return_type](https://wg21.link/p0508r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0084R2 Emplace Return Type](https://wg21.link/p0084r2) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0088R3 \<variant>](https://wg21.link/p0088r3) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0092R1 \<chrono> floor(), ceil(), round(), abs()](https://wg21.link/p0092r1) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0152R1 atomic::is_always_lock_free](https://wg21.link/p0152r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0154R1 hardware_destructive_interference_size, etc.](https://wg21.link/p0154r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0156R0 Variadic lock_guard](https://wg21.link/p0156r0) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0156R2 Renaming Variadic lock\_guard to scoped\_lock](https://wg21.link/p0156r2) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0163R0 shared_ptr::weak_type](https://wg21.link/p0163r0) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0174R2 Deprecating Vestigial Library Parts](https://wg21.link/p0174r2) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0185R1 is_swappable, is_nothrow_swappable](https://wg21.link/p0185r1) | VS 2015.3 |
| &nbsp;&nbsp;[P0209R2 make_from_tuple()](https://wg21.link/p0209r2) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0218R1 \<filesystem>](https://wg21.link/p0218r1)<br/>&nbsp;&nbsp;[P0219R1 Relative Paths For Filesystem](https://wg21.link/p0219r1)<br/>&nbsp;&nbsp;[P0317R1 Directory Entry Caching For Filesystem](https://wg21.link/p0317r1)<br/>&nbsp;&nbsp;[P0392R0 Supporting string_view In Filesystem Paths](https://wg21.link/p0392r0)<br/>&nbsp;&nbsp;[P0430R2 Supporting Non-POSIX Filesystems](https://wg21.link/p0430r2)<br/>&nbsp;&nbsp;[P0492R2 Resolving NB Comments for Filesystem](https://wg21.link/p0492r2) | VS 2017 15.7 <sup>[E](#note_E)</sup> |
| &nbsp;&nbsp;[P0220R1 Library Fundamentals V1](https://wg21.link/p0220r1) | VS 2017 15.6 |
| &nbsp;&nbsp;[P0226R1 Mathematical Special Functions](https://wg21.link/p0226r1) | VS 2017 15.7 |
| &nbsp;&nbsp;[P0254R2 Integrating string_view And std::string](https://wg21.link/p0254r2) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0258R2 has_unique_object_representations](https://wg21.link/p0258r2) | VS 2017 15.3 <sup>[G](#note_G)</sup> |
| &nbsp;&nbsp;[P0272R1 Non-const basic_string::data()](https://wg21.link/p0272r1) | VS 2015.3 |
| &nbsp;&nbsp;[P0295R0 gcd(), lcm()](https://wg21.link/p0295r0) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0298R3 std::byte](https://wg21.link/p0298r3) | VS 2017 15.3 <sup>[17](#note_17),&nbsp;[byte](#note_byte)</sup> |
| &nbsp;&nbsp;[P0302R1 Removing Allocator Support In std::function](https://wg21.link/p0302r1) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0307R2 Making Optional Greater Equal Again](https://wg21.link/p0307r2) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0393R3 Making Variant Greater Equal](https://wg21.link/p0393r3) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0403R1 UDLs For \<string_view> ("meow"sv, etc.)](https://wg21.link/p0403r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0414R2 shared_ptr\<T[]>, shared_ptr\<T[N]>](https://wg21.link/p0414r2)<br/>&nbsp;&nbsp;[P0497R0 Fixing shared_ptr For Arrays](https://wg21.link/p0497r0) | VS 2017 15.5 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0418R2 atomic compare_exchange memory_order Requirements](https://wg21.link/p0418r2) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0426R1 constexpr For char_traits](https://wg21.link/p0426r1) | VS 2017 15.7 |
| &nbsp;&nbsp;[P0433R2 Integrating template deduction for class templates into the standard library](https://wg21.link/p0433r2)<br/>&nbsp;&nbsp;[P0739R0 Improving class template argument deduction integration into the standard library](https://wg21.link/p0739r0) | VS 2017 15.7 |
| &nbsp;&nbsp;[P0435R1 Overhauling common_type](https://wg21.link/p0435r1)<br/>&nbsp;&nbsp;[P0548R1 Tweaking common\_type and duration](https://wg21.link/p0548r1) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0504R0 Revisiting in_place_t/in_place_type_t\<T>/in_place_index_t\<I>](https://wg21.link/p0504r0) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0505R0 constexpr For \<chrono> (Again)](https://wg21.link/p0505r0) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0510R0 Rejecting variants Of Nothing, Arrays, References, And Incomplete Types](https://wg21.link/p0510r0) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0513R0 Poisoning hash](https://wg21.link/p0513r0)<br/>&nbsp;&nbsp;[P0599R1 noexcept hash](https://wg21.link/p0599r1) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0516R0 Marking shared_future Copying As noexcept](https://wg21.link/p0516r0) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0517R0 Constructing future_error From future_errc](https://wg21.link/p0517r0) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0521R0 Deprecating shared_ptr::unique()](https://wg21.link/p0521r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0558R1 Resolving atomic\<T> Named Base Class Inconsistencies](https://wg21.link/p0558r1) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0595R2 std::is_constant_evaluated()](https://wg21.link/P0595R2) | VS 2019 16.5 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0602R4 Propagating Copy/Move Triviality In variant/optional](https://wg21.link/P0602R4) | VS 2017 15.3<sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0604R0 Changing is\_callable/result\_of To invoke\_result, is\_invocable, is\_nothrow\_invocable](https://wg21.link/p0604r0) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0607R0 Inline Variables for the Standard Library](https://wg21.link/p0607r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0618R0 Deprecating \<codecvt>](https://wg21.link/p0618r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0682R1 Repairing Elementary String Conversions](https://wg21.link/P0682R1) | VS 2015 15.7 <sup>[17](#note_17)</sup> |
| __C++14 Standard library features__ | __Supported__ |
| &nbsp;&nbsp;[N3462 SFINAE-Friendly result_of](https://wg21.link/n3462) | VS 2015.2 |
| &nbsp;&nbsp;[N3302 constexpr For \<complex>](https://wg21.link/n3302) | VS 2015 |
| &nbsp;&nbsp;[N3469 constexpr For \<chrono>](https://wg21.link/n3469) | VS 2015 |
| &nbsp;&nbsp;[N3470 constexpr For \<array>](https://wg21.link/n3470) | VS 2015 |
| &nbsp;&nbsp;[N3471 constexpr For \<initializer_list>, \<tuple>, \<utility>](https://wg21.link/n3471) | VS 2015 |
| &nbsp;&nbsp;[N3545 integral_constant::operator()()](https://wg21.link/n3545) | VS 2015 |
| &nbsp;&nbsp;[N3642 UDLs For \<chrono>, \<string> (1729ms, "meow"s, etc.)](https://wg21.link/n3642) | VS 2015 |
| &nbsp;&nbsp;[N3644 Null Forward Iterators](https://wg21.link/n3644) | VS 2015 |
| &nbsp;&nbsp;[N3654 quoted()](https://wg21.link/n3654) | VS 2015 |
| &nbsp;&nbsp;[N3657 Heterogeneous Associative Lookup](https://wg21.link/n3657) | VS 2015 |
| &nbsp;&nbsp;[N3658 integer_sequence](https://wg21.link/n3658) | VS 2015 |
| &nbsp;&nbsp;[N3659 shared_mutex (Timed)](https://wg21.link/n3659) | VS 2015 |
| &nbsp;&nbsp;[N3668 exchange()](https://wg21.link/n3668) | VS 2015 |
| &nbsp;&nbsp;[N3669 Fixing constexpr Member Functions Without const](https://wg21.link/n3669) | VS 2015 |
| &nbsp;&nbsp;[N3670 get\<T>()](https://wg21.link/n3670) | VS 2015 |
| &nbsp;&nbsp;[N3671 Dual-Range equal(), is_permutation(), mismatch()](https://wg21.link/n3671) | VS 2015 |
| &nbsp;&nbsp;[N3778 Sized Deallocation](https://wg21.link/n3778) | VS 2015 |
| &nbsp;&nbsp;[N3779 UDLs For \<complex> (3.14i, etc.)](https://wg21.link/n3779) | VS 2015 |
| &nbsp;&nbsp;[N3789 constexpr For \<functional>](https://wg21.link/n3789) | VS 2015 |
| &nbsp;&nbsp;[N3887 tuple_element_t](https://wg21.link/n3887) | VS 2015 |
| &nbsp;&nbsp;[N3891 Renaming shared_mutex (Timed) To shared_timed_mutex](https://wg21.link/n3891) | VS 2015 |
| &nbsp;&nbsp;[N3346 Minimal Container Element Requirements](https://wg21.link/n3346) | VS 2013 |
| &nbsp;&nbsp;[N3421 Transparent Operator Functors (less\<>, etc.)](https://wg21.link/n3421) | VS 2013 |
| &nbsp;&nbsp;[N3655 Alias Templates For \<type_traits> (decay_t, etc.)](https://wg21.link/n3655) | VS 2013 |
| &nbsp;&nbsp;[N3656 make_unique()](https://wg21.link/n3656) | VS 2013 |

A group of papers listed together indicates a Standard feature along with one or more approved improvements or expansions. These features are implemented together.

### Supported values

__No__ means not yet implemented.\
__Partial__ means the implementation is incomplete. For more information, see the Notes section.\
__VS 2010__ indicates features that are supported in Visual Studio 2010.\
__VS 2013__ indicates features that are supported in Visual Studio 2013.\
__VS 2015__ indicates features that are supported in Visual Studio 2015 (RTW).\
__VS 2015.2__ and __VS 2015.3__ indicate features that are supported in Visual Studio 2015 Update 2 and Visual Studio 2015 Update 3, respectively.\
__VS 2017 15.0__ indicates features that are supported in Visual Studio 2017 version 15.0 (RTW).\
__VS 2017 15.3__ indicates features that are supported in Visual Studio 2017 version 15.3.\
__VS 2017 15.5__ indicates features that are supported in Visual Studio 2017 version 15.5.\
__VS 2017 15.7__ indicates features that are supported in Visual Studio 2017 version 15.7.\
__VS 2019 16.0__ indicates features that are supported in Visual Studio 2019 version 16.0 (RTW).\
__VS 2019 16.1__ indicates features that are supported in Visual Studio 2019 version 16.1.\
__VS 2019 16.2__ indicates features that are supported in Visual Studio 2019 version 16.2.\
__VS 2019 16.3__ indicates features that are supported in Visual Studio 2019 version 16.3.\
__VS 2019 16.4__ indicates features that are supported in Visual Studio 2019 version 16.4.\
__VS 2019 16.5__ indicates features that are supported in Visual Studio 2019 version 16.5.

### Notes

<a name="note_A"></a> __A__ In [/std:c++14](../build/reference/std-specify-language-standard-version.md) mode, dynamic exception specifications remain unimplemented, and `throw()` is still treated as a synonym for `__declspec(nothrow)`. In C++17, dynamic exception specifications were mostly removed by P0003R5, leaving one vestige: `throw()` is deprecated and required to behave as a synonym for `noexcept`. In [/std:c++17](../build/reference/std-specify-language-standard-version.md) mode, MSVC now conforms to the Standard by giving `throw()` the same behavior as `noexcept`, that is, enforcement via termination.

The compiler option [/Zc:noexceptTypes](../build/reference/zc-noexcepttypes.md) requests our old behavior of `__declspec(nothrow)`. It's likely that `throw()` will be removed in C++20. To help with migrating code in response to these changes in the Standard and our implementation, new compiler warnings for exception specification issues have been added under [/std:c++17](../build/reference/std-specify-language-standard-version.md) and [/permissive-](../build/reference/permissive-standards-conformance.md).

<a name="note_B"></a> __B__ Supported in [/permissive-](../build/reference/permissive-standards-conformance.md) mode in Visual Studio 2017 version 15.7. For more information, see [Two-phase name lookup support comes to MSVC](https://devblogs.microsoft.com/cppblog/two-phase-name-lookup-support-comes-to-msvc/).

<a name="note_C"></a> __C__ The compiler's support for C99 Preprocessor rules is incomplete in Visual Studio 2017. We're overhauling the preprocessor, and began shipping those changes in Visual Studio 2017 version 15.8 with the [/experimental:preprocessor](../build/reference/experimental-preprocessor.md) compiler switch.

<a name="note_D"></a> __D__ Supported under [/std:c++14](../build/reference/std-specify-language-standard-version.md) with a suppressible warning, [C4984](../error-messages/compiler-warnings/compiler-warning-c4984.md).

<a name="note_E"></a> __E__ This is a wholly new implementation, incompatible with the
previous `std::experimental` version, made necessary by symlink support, bug fixes, and changes in standard-required behavior. Currently, including \<filesystem> provides the new `std::filesystem` and the previous `std::experimental::filesystem`, and including \<experimental/filesystem> provides only the old experimental implementation. The experimental implementation will be REMOVED in the next ABI-breaking release of the libraries.

<a name="note_G"></a> __G__ Supported by a compiler intrinsic.

<a name="note_14"></a> __14__ These C++17/20 features are always enabled, even when [/std:c++14](../build/reference/std-specify-language-standard-version.md) (the default) is specified. The reason is either because the feature was implemented before the introduction of the **/std** options, or because conditional implementation was undesirably complex.

<a name="note_17"></a> __17__ These features are enabled by the [/std:c++17](../build/reference/std-specify-language-standard-version.md) (or [/std:c++latest](../build/reference/std-specify-language-standard-version.md)) compiler option.

<a name="note_20"></a> __20__ These features are enabled by the [/std:c++latest](../build/reference/std-specify-language-standard-version.md) compiler option. When the C++20 implementation is complete, a new **/std:c++20** compiler option will be added, under which these features will also be available.

<a name="note_byte"></a> __byte__ `std::byte` is enabled by [/std:c++17](../build/reference/std-specify-language-standard-version.md) (or [/std:c++latest](../build/reference/std-specify-language-standard-version.md)), but because it can conflict with the Windows SDK headers in some cases, it has a fine-grained opt-out macro. It can be disabled by defining `_HAS_STD_BYTE` as `0`.

<a name="note_C11"></a> __C11__ The Universal CRT implemented the parts of the C11 Standard Library that are required by C++17, with the exception of C99 `strftime()` E/O alternative conversion specifiers, C11 `fopen()` exclusive mode, and C11 `aligned_alloc()`. The latter is unlikely to be implemented, because C11 specified `aligned_alloc()` in a way that's incompatible with the Microsoft implementation of `free()`: namely, that `free()` must be able to handle highly aligned allocations.

<a name="note_rem"></a> __rem__ Features removed when the [/std:c++17](../build/reference/std-specify-language-standard-version.md) (or [/std:c++latest](../build/reference/std-specify-language-standard-version.md)) compiler option is specified. These features can be re-enabled to ease the transition to newer language modes by use of these macros: `_HAS_AUTO_PTR_ETC`, `_HAS_FUNCTION_ALLOCATOR_SUPPORT`, `_HAS_OLD_IOSTREAMS_MEMBERS`, and `_HAS_UNEXPECTED`.

<a name="note_charconv"></a> __charconv__ `from_chars()` and `to_chars()` are available for integers. The timeline for floating-point `from_chars()` and floating-point `to_chars()` is as follows:

- VS 2017 15.7: Integer `from_chars()` and `to_chars()`.
- VS 2017 15.8: Floating-point `from_chars()`.
- VS 2017 15.9: Floating-point `to_chars()` overloads for shortest decimal.
- VS 2019 16.0: Floating-point `to_chars()` overloads for shortest hex and precision hex.
- VS 2019 16.2: Floating-point `to_chars()` overloads for precision fixed and precision scientific.
- VS 2019 16.4: The floating-point `to_chars()` overload for precision general.

<a name ="note_parallel"></a> __parallel__ C++17's parallel algorithms library is complete. Complete doesn't mean every algorithm is parallelized in every case. The most important algorithms have been parallelized, and execution policy signatures are provided even where algorithms aren't parallelized. Our implementation's central internal header, yvals_core.h, contains the following "Parallel Algorithms Notes": C++ allows an implementation to implement parallel algorithms as calls to the serial algorithms. This implementation parallelizes several common algorithm calls, but not all.

The following algorithms are parallelized:

- `adjacent_difference`, `adjacent_find`, `all_of`, `any_of`, `count`, `count_if`, `equal`, `exclusive_scan`, `find`, `find_end`, `find_first_of`, `find_if`, `find_if_not`, `for_each`, `for_each_n`, `inclusive_scan`, `is_heap`, `is_heap_until`, `is_partitioned`, `is_sorted`, `is_sorted_until`, `mismatch`, `none_of`, `partition`, `reduce`, `remove`, `remove_if`, `replace`, `replace_if`, `search`, `search_n`, `set_difference`, `set_intersection`, `sort`, `stable_sort`, `transform`, `transform_exclusive_scan`, `transform_inclusive_scan`, `transform_reduce`

The following aren't presently parallelized:

- No noticeable parallelism performance improvement on target hardware; all algorithms that merely copy or permute elements with no branches are typically memory bandwidth limited:
  - `copy`, `copy_n`, `fill`, `fill_n`, `move`, `reverse`, `reverse_copy`, `rotate`, `rotate_copy`, `shift_left`, `shift_right`, `swap_ranges`
- Confusion over user parallelism requirements exists; likely in the above category anyway:
  - `generate`, `generate_n`
- Effective parallelism suspected to be infeasible:
  - `partial_sort`, `partial_sort_copy`
- Not yet evaluated; parallelism may be implemented in a future release and is suspected to be beneficial:
  - `copy_if`, `includes`, `inplace_merge`, `lexicographical_compare`, `max_element`, `merge`, `min_element`, `minmax_element`, `nth_element`, `partition_copy`, `remove_copy`, `remove_copy_if`, `replace_copy`, `replace_copy_if`, `set_symmetric_difference`, `set_union`, `stable_partition`, `unique`, `unique_copy`

## See also

[C++ Language Reference](../cpp/cpp-language-reference.md)\
[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)\
[C++ conformance improvements in Visual Studio](cpp-conformance-improvements.md)\
[What's New for Visual C++ in Visual Studio](what-s-new-for-visual-cpp-in-visual-studio.md)\
[Visual C++ change history 2003 through 2015](../porting/visual-cpp-change-history-2003-2015.md)\
[Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md)\
[C++ team blog](https://devblogs.microsoft.com/cppblog/)
