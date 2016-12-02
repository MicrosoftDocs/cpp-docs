---
title: "Compiler Warnings C4400 Through C4599 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4413"
  - "C4415"
  - "C4416"
  - "C4417"
  - "C4418"
  - "C4419"
  - "C4421"
  - "C4423"
  - "C4424"
  - "C4425"
  - "C4426"
  - "C4427"
  - "C4438"
  - "C4442"
  - "C4443"
  - "C4444"
  - "C4446"
  - "C4447"
  - "C4448"
  - "C4449"
  - "C4450"
  - "C4451"
  - "C4452"
  - "C4453"
  - "C4454"
  - "C4455"
  - "C4456"
  - "C4457"
  - "C4458"
  - "C4459"
  - "C4463"
  - "C4464"
  - "C4471"
  - "C4472"
  - "C4480"
  - "C4482"
  - "C4483"
  - "C4491"
  - "C4492"
  - "C4493"
  - "C4494"
  - "C4509"
  - "C4519"
  - "C4531"
  - "C4542"
  - "C4562"
  - "C4568"
  - "C4569"
  - "C4573"
  - "C4574"
  - "C4575"
  - "C4582"
  - "C4583"
  - "C4585"
  - "C4586"
  - "C4587"
  - "C4588"
  - "C4591"
  - "C4592"
  - "C4593"
  - "C4594"
  - "C4595"
dev_langs: 
  - "C++"
ms.assetid: b07850a5-ae89-48ea-bf9a-f0e30939f9b9
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Warnings C4400 Through C4599
The articles in this part of the documentation contain information about a subset of the Visual C++ compiler warnings. You can access the information here or, in the **Output** window in Visual Studio, you can select a warning number and then choose the F1 key.  
  
## In This Section  
  
|Warning|Message|  
|-------------|-------------|  
|[Compiler Warning (level 1) C4600](../../error-messages/compiler-warnings/compiler-warning-level-1-c4600.md)|#pragma 'macro name': expected a valid non-empty string|  
|[Compiler Warning (level 4) C4400](../../error-messages/compiler-warnings/compiler-warning-level-4-c4400.md)|'type': const/volatile qualifiers on this type are not supported|  
|[Compiler Warning (level 1) C4401](../../error-messages/compiler-warnings/compiler-warning-level-1-c4401.md)|'bitfield': member is bit field|  
|[Compiler Warning (level 1) C4402](../../error-messages/compiler-warnings/compiler-warning-level-1-c4402.md)|must use PTR operator|  
|[Compiler Warning (level 1) C4403](../../error-messages/compiler-warnings/compiler-warning-level-1-c4403.md)|illegal PTR operator|  
|[Compiler Warning (level 3) C4404](../../error-messages/compiler-warnings/compiler-warning-level-3-c4404.md)|period on directive ignored|  
|[Compiler Warning (level 1) C4405](../../error-messages/compiler-warnings/compiler-warning-level-1-c4405.md)|'identifier': identifier is reserved word|  
|[Compiler Warning (level 1) C4406](../../error-messages/compiler-warnings/compiler-warning-level-1-c4406.md)|operand on directive ignored|  
|[Compiler Warning (level 1) C4407](../../error-messages/compiler-warnings/compiler-warning-level-1-c4407.md)|cast between different pointer to member representations, compiler may generate incorrect code|  
|[Compiler Warning (level 4) C4408](../../error-messages/compiler-warnings/compiler-warning-level-4-c4408.md)|anonymous 'struct&#124;union' did not declare any data members|  
|[Compiler Warning (level 1) C4409](../../error-messages/compiler-warnings/compiler-warning-level-1-c4409.md)|illegal instruction size|  
|[Compiler Warning (level 1) C4410](../../error-messages/compiler-warnings/compiler-warning-level-1-c4410.md)|illegal size for operand|  
|[Compiler Warning (level 1) C4411](../../error-messages/compiler-warnings/compiler-warning-level-1-c4411.md)|'identifier': symbol resolves to displacement register|  
|[Compiler Warning (level 2) C4412](../../error-messages/compiler-warnings/compiler-warning-level-2-c4412.md)|'function': function signature contains type 'type'; C++ objects are unsafe to pass between pure code and mixed or native.|  
|Compiler warning C4413|'classname::member': reference member is initialized to a temporary that doesn't persist after the constructor exits|  
|[Compiler Warning (level 3) C4414](../../error-messages/compiler-warnings/compiler-warning-level-3-c4414.md)|'function': short jump to function converted to near|  
|Compiler warning (level 1) C4415|duplicate __declspec(code_seg('%$I'))|  
|Compiler warning (level 1) C4416|__declspec(code_seg(...)) contains empty string: ignored|  
|Compiler warning (level 1) C4417|an explicit template instantiation cannot have __declspec(code_seg(...)): ignored|  
|Compiler warning (level 1) C4418|__declspec(code_seg(...)) ignored on an enum|  
|Compiler warning (level 3) C4419|'%$I' has no effect when applied to private ref class '%$S'.|  
|[Compiler Warning (level 1) C4420](../../error-messages/compiler-warnings/compiler-warning-level-1-c4420.md)|'checked_operator': operator not available, using 'operator' instead; run-time checking may be compromised|  
|Compiler warning (level 3) C4421|'%$I': a reference parameter on a resumable function is potentially unsafe|  
|Compiler warning (level 3) C4423|'std::bad_alloc': will be caught by class ('%$T') on line %d|  
|Compiler warning (level 3) C4424|catch for '%$T' preceded by '%$T' on line %d; unpredictable behavior may result if 'std::bad_alloc' is thrown|  
|Compiler warning (level 1) C4425|A SAL annotation cannot be applied to '...'|  
|Compiler warning C4426|optimization flags changed after including header, may be due to #pragma optimize()|  
|Compiler warning (level 1) C4427|'%$L': overflow in constant division, undefined behavior|  
|[Compiler Warning (level 4) C4429](../../error-messages/compiler-warnings/compiler-warning-level-4-c4429.md)|possible incomplete or improperly formed universal-character-name|  
|[Compiler Warning C4430](../../error-messages/compiler-warnings/compiler-warning-c4430.md)|missing type specifier - int assumed. Note: C++ does not support default-int|  
|[Compiler Warning (level 4) C4431](../../error-messages/compiler-warnings/compiler-warning-level-4-c4431.md)|missing type specifier - int assumed. Note: C no longer supports default-int|  
|[Compiler Warning (level 4) C4434](../../error-messages/compiler-warnings/compiler-warning-level-4-c4434.md)|a static constructor must have private accessibility; changing to private access|  
|[Compiler Warning (level 4) C4435](../../error-messages/compiler-warnings/compiler-warning-level-4-c4435.md)|'derived_class': Object layout under /vd2 will change due to virtual base 'base_class'|  
|[Compiler Warning (level 1) C4436](../../error-messages/compiler-warnings/compiler-warning-level-1-c4436.md)|dynamic_cast from virtual base 'base_class' to 'derived_class' in constructor or destructor could fail with partially-constructed object|  
|[Compiler Warning (level 4) C4437](../../error-messages/compiler-warnings/compiler-warning-level-4-c4437.md)|dynamic_cast from virtual base 'base_class' to 'derived_class' could fail in some contexts|  
|Compiler warning C4438|'%$S': cannot be called safely in /await:clrcompat mode. If '%$S' calls into the CLR it may result in CLR head corruption|  
|[Compiler Warning C4439](../../error-messages/compiler-warnings/compiler-warning-c4439.md)|'function': function definition with a managed type in the signature must have a __clrcall calling convention|  
|[Compiler Warning (level 1) C4440](../../error-messages/compiler-warnings/compiler-warning-level-1-c4440.md)|calling convention redefinition from 'calling_convention1' to 'calling_convenction2' ignored|  
|[Compiler Warning (level 1) C4441](../../error-messages/compiler-warnings/compiler-warning-level-1-c4441.md)|calling convention of 'calling_convention1' ignored; 'calling_convention2' used instead|  
|Compiler warning (level 1) C4442|embedded null terminator in __annotation argument.  Value will be truncated.|  
|Compiler warning (level 1) C4443|expected pragma parameter to be '0', '1', or '2'|  
|Compiler warning (level 3) C4444|'identifier': top level '__unaligned' is not implemented in this context|  
|[Compiler Warning (level 1) C4445](../../error-messages/compiler-warnings/compiler-warning-level-1-c4445.md)|'function': in a 'WinRT&#124;managed' type a virtual method cannot be private|  
|Compiler warning (level 1) C4446|'%$S': cannot map member '%$I' into this type, due to conflict with the type name. The method was renamed to '%$I'|  
|Compiler warning (level 1) C4447|'main' signature found without threading model. Consider using 'int main(Platform::Array\<Platform::String^>^ args)'.|  
|Compiler warning C4448|'%$S' does not have a default interface specified in metadata. Picking: '%$S', which may fail at runtime.|  
|Compiler warning C4449|'%$S' an unsealed type should be marked as '[WebHostHidden]'|  
|Compiler warning C4450|'%$S' should be marked as '[WebHostHidden]' because it derives from '%$S'|  
|Compiler warning (level 4) C4451|'classname1::member': Usage of ref class 'classname2::member' inside this context can lead to invalid marshaling of object across contexts|  
|Compiler warning (level 1) C4452|'identifier': public type cannot be at global scope. It must be in a namespace that is a child of the name of the output .winmd file.|  
|Compiler warning (level 1) C4453|'%$S': A '[WebHostHidden]' type should not be used on the published surface of a public type that is not '[WebHostHidden]'|  
|Compiler warning (level 1) C4454|'%$S' is overloaded by more than the number of input parameters without having [DefaultOverload] specified. Picking '%$D' as the default overload|  
|Compiler warning (level 1) C4455|'operator %$I': literal suffix identifiers that do not start with an underscore are reserved|  
|Compiler warning (level 3) C4456|declaration of 'identifier' hides previous local declaration|  
|Compiler warning (level 3) C4457|declaration of 'identifier' hides function parameter|  
|Compiler warning (level 3) C4458|declaration of 'identifier' hides class member|  
|Compiler warning (level 3) C4459|declaration of 'identifier' hides global declaration|  
|[Compiler Warning (level 4) C4460](../../error-messages/compiler-warnings/compiler-warning-level-4-c4460.md)|'WinRT&#124;managed' operator 'operator', has parameter passed by reference. 'WinRT&#124;managed' operator 'operator' has different semantics from C++ operator 'cpp_operator', did you intend to pass by value?|  
|[Compiler Warning (level 1) C4461](../../error-messages/compiler-warnings/compiler-warning-level-1-c4461.md)|'classname': this class has a finalizer '!finalizer' but no destructor '~dtor'|  
|[Compiler Warning (level 1) C4462](../../error-messages/compiler-warnings/compiler-warning-level-1-c4462.md)|'type' : cannot determine the GUID of the type. Program may fail at runtime.|  
|Compiler warning C4463|overflow; assigning 'value' to bit-field that can only hold values from 'mi_valuen' to 'max_value'|  
|Compiler warning C4464|relative include path contains '..'|  
|[Compiler Warning (level 1) C4470](../../error-messages/compiler-warnings/compiler-warning-level-1-c4470.md)|floating-point control pragmas ignored under /clr|  
|Compiler warning (level 4) C4471|'enumeration': a forward declaration of an unscoped enumeration must have an underlying type (int assumed)|  
|Compiler warning (level 1) C4472|'identifier' is a native enum: add an access specifier (private/public) to declare a 'WinRT&#124;managed' enum|  
|Compiler warning C4480|nonstandard extension used: specifying underlying type for enum 'enumeration'|  
|[Compiler Warning (level 4) C4481](../../error-messages/compiler-warnings/compiler-warning-level-4-c4481.md)|nonstandard extension used: override specifier 'keyword'|  
|Compiler warning C4482|nonstandard extension used: enum 'enumeration' used in qualified name|  
|Compiler warning (level 1) C4483|syntax error: expected C++ keyword|  
|[Compiler Warning C4484](../../error-messages/compiler-warnings/compiler-warning-c4484.md)|'override_function': matches base ref class method 'base_class_function', but is not marked 'virtual', 'new' or 'override'; 'new' (and not 'virtual') is assumed|  
|[Compiler Warning C4485](../../error-messages/compiler-warnings/compiler-warning-c4485.md)|'override_function': matches base ref class method 'base_class_function', but is not marked 'new' or 'override'; 'new' (and 'virtual') is assumed|  
|[Compiler Warning (level 1) C4486](../../error-messages/compiler-warnings/compiler-warning-level-1-c4486.md)|'function': a private virtual method of a ref class or value class should be marked 'sealed'|  
|[Compiler Warning (level 4) C4487](../../error-messages/compiler-warnings/compiler-warning-level-4-c4487.md)|'derived_class_function': matches inherited non-virtual method 'base_class_function' but is not explicitly marked 'new'|  
|[Compiler Warning (level 1) C4488](../../error-messages/compiler-warnings/compiler-warning-level-1-c4488.md)|'function': requires 'keyword' keyword to implement the interface method 'interface_method'|  
|[Compiler Warning (level 1) C4489](../../error-messages/compiler-warnings/compiler-warning-level-1-c4489.md)|'specifier': not allowed on interface method 'method'; override specifiers are only allowed on ref class and value class methods|  
|[Compiler Warning (level 1) C4490](../../error-messages/compiler-warnings/compiler-warning-level-1-c4490.md)|'override': incorrect use of override specifier; 'function' does not match a base ref class method|  
|Compiler warning (level 1) C4491|'%s': has an illegal IDL version format|  
|Compiler warning (level 1) C4492|'%$S': matches base ref class method '%$S', but is not marked 'override'|  
|Compiler warning (level 3) C4493|delete expression has no effect as the destructor of 'type' does not have 'public' accessibility|  
|Compiler warning (level 1) C4494|'%$S' : Ignoring __declspec(allocator) because the function return type is not a pointer or reference|  
|[Compiler Warning (level 1) C4502](../../error-messages/compiler-warnings/compiler-warning-level-1-c4502.md)|'linkage specification' requires use of keyword 'extern' and must precede all other specifiers|  
|[Compiler Warning (level 1) C4503](../../error-messages/compiler-warnings/compiler-warning-level-1-c4503.md)|'identifier': decorated name length exceeded, name was truncated|  
|[Compiler Warning (level 4) C4505](../../error-messages/compiler-warnings/compiler-warning-level-4-c4505.md)|'function': unreferenced local function has been removed|  
|[Compiler Warning (level 1) C4506](../../error-messages/compiler-warnings/compiler-warning-level-1-c4506.md)|no definition for inline function 'function'|  
|[Compiler Warning (level 1) C4508](../../error-messages/compiler-warnings/compiler-warning-level-1-c4508.md)|'function': function should return a value; 'void' return type assumed|  
|Compiler warning C4509|nonstandard extension used: 'function' uses SEH and 'object' has destructor|  
|[Compiler Warning (level 4) C4510](../../error-messages/compiler-warnings/compiler-warning-level-4-c4510.md)|'class': default constructor was implicitly defined as deleted|  
|[Compiler Warning (level 3) C4511](../../error-messages/compiler-warnings/compiler-warning-level-3-c4511.md)|'class': copy constructor was implicitly defined as deleted|  
|[Compiler Warning (level 4) C4512](../../error-messages/compiler-warnings/compiler-warning-level-4-c4512.md)|'class': assignment operator was implicitly defined as deleted|  
|[Compiler Warning (level 4) C4513](../../error-messages/compiler-warnings/compiler-warning-level-4-c4513.md)|'class': destructor was implicitly defined as deleted|  
|[Compiler Warning (level 4) C4514](../../error-messages/compiler-warnings/compiler-warning-level-4-c4514.md)|'function': unreferenced inline function has been removed|  
|[Compiler Warning (level 4) C4515](../../error-messages/compiler-warnings/compiler-warning-level-4-c4515.md)|'namespace': namespace uses itself|  
|[Compiler Warning (level 4) C4516](../../error-messages/compiler-warnings/compiler-warning-level-4-c4516.md)|'class::symbol': access-declarations are deprecated; member using-declarations provide a better alternative|  
|[Compiler Warning (level 4) C4517](../../error-messages/compiler-warnings/compiler-warning-level-4-c4517.md)|access-declarations are deprecated; member using-declarations provide a better alternative|  
|[Compiler Warning (level 1) C4518](../../error-messages/compiler-warnings/compiler-warning-level-1-c4518.md)|'specifier': storage-class or type specifier(s) unexpected here; ignored|  
|Compiler warning C4519|default template arguments are only allowed on a class template|  
|[Compiler Warning (level 3) C4521](../../error-messages/compiler-warnings/compiler-warning-level-3-c4521.md)|'class': multiple copy constructors specified|  
|[Compiler Warning (level 3) C4522](../../error-messages/compiler-warnings/compiler-warning-level-3-c4522.md)|'class': multiple assignment operators specified|  
|[Compiler Warning (level 3) C4523](../../error-messages/compiler-warnings/compiler-warning-level-3-c4523.md)|'class': multiple destructors specified|  
|[Compiler Warning (level 1) C4526](../../error-messages/compiler-warnings/compiler-warning-level-1-c4526.md)|'function': static member function cannot override virtual function 'virtual function'\n override ignored, virtual function will be hidden|  
|[Compiler Warning (level 1) C4530](../../error-messages/compiler-warnings/compiler-warning-level-1-c4530.md)|C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc|  
|Compiler warning (level 1) C4531|C++ exception handling not available on Windows CE. Use Structured Exception Handling|  
|[Compiler Warning (level 1) C4532](../../error-messages/compiler-warnings/compiler-warning-level-1-c4532.md)|'continue': jump out of '__finally/finally' block has undefined behavior during termination handling|  
|[Compiler Warning (level 1) C4533](../../error-messages/compiler-warnings/compiler-warning-level-1-c4533.md)|initialization of 'variable' is skipped by 'goto label'|  
|[Compiler Warning (level 3) C4534](../../error-messages/compiler-warnings/compiler-warning-level-3-c4534.md)|'constructor' will not be a default constructor for 'class&#124;struct' 'identifier' due to the default argument|  
|[Compiler Warning (level 3) C4535](../../error-messages/compiler-warnings/compiler-warning-level-3-c4535.md)|calling _set_se_translator() requires /EHa|  
|[Compiler Warning (level 4) C4536](../../error-messages/compiler-warnings/compiler-warning-level-4-c4536.md)|'typename': type-name exceeds meta-data limit of 'character_limit' characters|  
|[Compiler Warning (level 1) C4537](../../error-messages/compiler-warnings/compiler-warning-level-1-c4537.md)|'object': '.' applied to non-UDT type|  
|[Compiler Warning (level 3) C4538](../../error-messages/compiler-warnings/compiler-warning-level-3-c4538.md)|'type': const/volatile qualifiers on this type are not supported|  
|[Compiler Warning (level 1) C4540](../../error-messages/compiler-warnings/compiler-warning-level-1-c4540.md)|dynamic_cast used to convert to inaccessible or ambiguous base; run-time test will fail ('type1' to 'type2')|  
|[Compiler Warning (level 1) C4541](../../error-messages/compiler-warnings/compiler-warning-level-1-c4541.md)|'identifier' used on polymorphic type 'type' with /GR-; unpredictable behavior may result|  
|Compiler warning (level 1) C4542|Skipping generation of merged injected text file, cannot write %$M file: '%s': %$e|  
|[Compiler Warning (level 3) C4543](../../error-messages/compiler-warnings/compiler-warning-level-3-c4543.md)|Injected text suppressed by attribute 'no_injected_text'|  
|[Compiler Warning (level 1) C4544](../../error-messages/compiler-warnings/compiler-warning-level-1-c4544.md)|'declaration': default template argument ignored on this template declaration|  
|[Compiler Warning (level 1) C4545](../../error-messages/compiler-warnings/compiler-warning-level-1-c4545.md)|expression before comma evaluates to a function which is missing an argument list|  
|[Compiler Warning (level 1) C4546](../../error-messages/compiler-warnings/compiler-warning-level-1-c4546.md)|function call before comma missing argument list|  
|[Compiler Warning (level 1) C4547](../../error-messages/compiler-warnings/compiler-warning-level-1-c4547.md)|'operator': operator before comma has no effect; expected operator with side-effect|  
|[Compiler Warning (level 1) C4548](../../error-messages/compiler-warnings/compiler-warning-level-1-c4548.md)|expression before comma has no effect; expected expression with side-effect|  
|[Compiler Warning (level 1) C4549](../../error-messages/compiler-warnings/compiler-warning-level-1-c4549.md)|'operator': operator before comma has no effect; did you intend 'operator'?|  
|[Compiler Warning (level 1) C4550](../../error-messages/compiler-warnings/compiler-warning-level-1-c4550.md)|expression evaluates to a function which is missing an argument list|  
|[Compiler Warning (level 1) C4551](../../error-messages/compiler-warnings/compiler-warning-level-1-c4551.md)|function call missing argument list|  
|[Compiler Warning (level 1) C4552](../../error-messages/compiler-warnings/compiler-warning-level-1-c4552.md)|'operator': operator has no effect; expected operator with side-effect|  
|[Compiler Warning (level 1) C4553](../../error-messages/compiler-warnings/compiler-warning-level-1-c4553.md)|'operator': operator has no effect; did you intend 'operator?|  
|[Compiler Warning (level 3) C4554](../../error-messages/compiler-warnings/compiler-warning-level-3-c4554.md) C4554|'operator': check operator precedence for possible error; use parentheses to clarify precedence|  
|[Compiler Warning (level 1) C4555](../../error-messages/compiler-warnings/compiler-warning-level-1-c4555.md)|expression has no effect; expected expression with side-effect|  
|[Compiler Warning (level 1) C4556](../../error-messages/compiler-warnings/compiler-warning-level-1-c4556.md)|value of intrinsic immediate argument 'value' is out of range 'lower_bound - upper_bound'|  
|[Compiler Warning (level 3) C4557](../../error-messages/compiler-warnings/compiler-warning-level-3-c4557.md)|'__assume' contains effect 'effect'|  
|[Compiler Warning (level 1) C4558](../../error-messages/compiler-warnings/compiler-warning-level-1-c4558.md)|value of operand 'value' is out of range 'lower_bound - upper_bound'|  
|[Compiler Warning (level 4) C4559](../../error-messages/compiler-warnings/compiler-warning-level-4-c4559.md)|'function': redefinition; the function gains __declspec(modifier)|  
|[Compiler Warning (level 1) C4561](../../error-messages/compiler-warnings/compiler-warning-level-1-c4561.md)|'__fastcall' incompatible with the '/clr' option: converting to '\__stdcall'|  
|Compiler warning (level 4) C4562|fully prototyped functions are required with the '/clr' option: converting '()' to '(void)'|  
|[Compiler Warning (level 4) C4564](../../error-messages/compiler-warnings/compiler-warning-level-4-c4564.md)|method 'method' of 'class' 'classname' defines unsupported default parameter 'parameter'|  
|[Compiler Warning (level 4) C4565](../../error-messages/compiler-warnings/compiler-warning-level-4-c4565.md)|'function': redefinition; the symbol was previously declared with __declspec(modifier)|  
|[Compiler Warning (level 1) C4566](../../error-messages/compiler-warnings/compiler-warning-level-1-c4566.md)|character represented by universal-character-name 'char' cannot be represented in the current code page (%d)|  
|Compiler warning (level 1) C4568|'%$S': no members match the signature of the explicit override|  
|Compiler warning (level 3) C4569|'%$S': no members match the signature of the explicit override|  
|[Compiler Warning (level 3) C4570](../../error-messages/compiler-warnings/compiler-warning-level-3-c4570.md)|'type': is not explicitly declared as abstract but has abstract functions|  
|[Compiler Warning (level 4) C4571](../../error-messages/compiler-warnings/compiler-warning-level-4-c4571.md)|Informational: catch(...) semantics changed since Visual C++ 7.1; structured exceptions (SEH) are no longer caught|  
|[Compiler Warning (level 1) C4572](../../error-messages/compiler-warnings/compiler-warning-level-1-c4572.md)|[ParamArray] attribute is deprecated under /clr, use '...' instead|  
|Compiler warning (level 1) C4573|the usage of '%$S' requires the compiler to capture 'this' but the current default capture mode does not allow it|  
|Compiler warning (level 4) C4574|'Identifier' is defined to be '0': did you mean to use '#if identifier'?|  
|Compiler warning (level 1) C4575|'__vectorcall' incompatible with the '/clr' option: converting to '\__stdcall'|  
|[Compiler Warning (level 3) C4580](../../error-messages/compiler-warnings/compiler-warning-level-3-c4580.md)|[attribute] is deprecated; instead specify System::Attribute or Platform::Metadata as a base class|  
|[Compiler Warning (level 1) C4581](../../error-messages/compiler-warnings/compiler-warning-level-1-c4581.md)|deprecated behavior: '"string"' replaced with 'string' to process attribute|  
|Compiler warning (level 4) C4582|'%$S': constructor is not implicitly called|  
|Compiler warning (level 4) C4583|'%$S': destructor is not implicitly called|  
|[Compiler Warning (level 1) C4584](../../error-messages/compiler-warnings/compiler-warning-level-1-c4584.md)|'class1': base-class 'class2' is already a base-class of '%class3'|  
|Compiler warning (level 1) C4585|'class': A WinRT 'public ref class' must either be sealed or derive from an existing unsealed class|  
|Compiler warning (level 1) C4586|'%$S': A public type cannot be declared in a top-level namespace called 'Windows'|  
|Compiler warning (level 1) C4587|'anonymous_structure': behavior change: constructor is no longer implicitly called|  
|Compiler warning (level 1) C4588|'anonymous_structure': behavior change: destructor is no longer implicitly called|  
|Compiler warning (level 1) C4591|'constexpr' call-depth limit of %d exceeded (/constexpr:depth\<NUMBER>)|  
|Compiler warning (level 3) C4592|'function': 'constexpr' call evaluation failed; function will be called at run-time|  
|Compiler warning (level 1) C4593|'function': 'constexpr' call evaluation step limit of 'limit' exceeded; use /constexpr:steps\<NUMBER> to increase the limit|  
|Compiler warning (level 3) C4594|'%$S': destructor will not be implicitly called if an exception is thrown|  
|Compiler warning (level 1) C4595|'%$S': behavior change: destructor will no longer be implicitly called if an exception is thrown|