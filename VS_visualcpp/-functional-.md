---
title: "&lt;functional&gt;"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 7dd463e8-a29f-49bc-aedd-8fa53b54bfbc
caps.latest.revision: 23
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# &lt;functional&gt;
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://dduestorage.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Defines Standard Library functions that help construct <newTerm>function objects</newTerm>—also known as functors—and their binders. A function object is an object of a type that defines <codeInline>operator()</codeInline>. A function object can be a function pointer, but more typically, the object is used to store additional information that can be accessed during a function call.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>#include &lt;functional&gt;</legacySyntax>
  </syntaxSection>
  <languageReferenceRemarks>
    <content>
      <para>Algorithms require two types of function objects: unary and binary. Unary function objects require one argument, and binary function objects require two arguments. A function object and function pointers can be passed as a predicate to an algorithm, but function objects are also adaptable and increase the scope, flexibility, and efficiency of the STL. If, for example, a value needed to be bound to a function before being passed to an algorithm, then a function pointer could not be used. Function adaptors convert function pointers into adaptable function objects that can be bound to a value. The header &lt;functional&gt; also contains member function adaptors that allow member functions to be called as adaptable function objects. Functions are adaptable if they have nested type declarations specifying their argument and return types. The C++ Standard requires that this adaptability is implemented by having all standard object classes inherit from the unary_function or binary_function base classes. Function objects and their adaptors allow the STL to upgrade existing applications and help integrate the STL into the C++ programming environment.</para>
      <para>The <token>vcprvc</token> implementation of the function objects in &lt;functional&gt; includes <newTerm>transparent operator functors</newTerm>, which are specializations of standard function objects and take no template parameters, and perform perfect forwarding of the function arguments and perfect return of the result. This feature is part of the C++14 Draft Standard specification. These template specializations do not require that you specify argument types when you invoke arithmetic, comparison, logical, and bitwise operator functors. You can overload arithmetic, comparison, logical, or bitwise operators for your own types, or for heterogeneous combinations of types, and then use the transparent operator functors as function arguments. For example, if your type <placeholder>MyType</placeholder> implements <languageKeyword>operator&lt;</languageKeyword>, you can call <codeInline>sort(my_collection.begin(), my_collection.end(), less&lt;&gt;())</codeInline> instead of explicitly specifying the type <codeInline>sort(my_collection.begin(), my_collection.end(), less&lt;MyType&gt;())</codeInline>.</para>
    </content>
  </languageReferenceRemarks>
  <section>
    <title>C++11/C++14 Implementation</title>
    <content>
      <para>The following features are added in the Visual C++ implementation of C++11/C++14:</para>
      <list class="bullet">
        <listItem>
          <para>A <newTerm>call signature</newTerm> is the name of a return type followed by a parenthesized comma-separated list of zero or more argument types.</para>
        </listItem>
        <listItem>
          <para>A <newTerm>callable type</newTerm> is a pointer to function, a pointer to member function, a pointer to member data, or a class type whose objects can appear immediately to the left of a function call operator.</para>
        </listItem>
        <listItem>
          <para>A <newTerm>callable object</newTerm> is an object of a callable type.</para>
        </listItem>
        <listItem>
          <para>A <newTerm>call wrapper type</newTerm> is a type that holds a callable object and supports a call operation that forwards to that object.</para>
        </listItem>
        <listItem>
          <para>A <newTerm>call wrapper</newTerm> is an object of a call wrapper type.</para>
        </listItem>
        <listItem>
          <para>A <newTerm>target object</newTerm> is the callable object held by a call wrapper object.</para>
        </listItem>
      </list>
      <para>The pseudo-function <codeInline>INVOKE(f, t1, t2, ..., tN)</codeInline> means one of the following things:</para>
      <list class="bullet">
        <listItem>
          <para> <codeInline>(t1.*f)(t2, ..., tN)</codeInline> when <codeInline>f</codeInline> is a pointer to member function of class <codeInline>T</codeInline> and <codeInline>t1</codeInline> is an object of type <codeInline>T</codeInline> or a reference to an object of type <codeInline>T</codeInline> or a reference to an object of a type derived from <codeInline>T</codeInline>.</para>
        </listItem>
        <listItem>
          <para> <codeInline>((*t1).*f)(t2, ..., tN)</codeInline> when <codeInline>f</codeInline> is a pointer to member function of class <codeInline>T</codeInline> and <codeInline>t1</codeInline> is not one of the types described in the previous item.</para>
        </listItem>
        <listItem>
          <para> <codeInline>t1.*f</codeInline> when N == 1 and <codeInline>f</codeInline> is a pointer to member data of a class <codeInline>T</codeInline> and <codeInline>t1</codeInline> is an object of type <codeInline>T</codeInline> or a reference to an object of type <codeInline>T</codeInline> or a reference to an object of a type derived from <codeInline>T</codeInline>.</para>
        </listItem>
        <listItem>
          <para> <codeInline>(*t1).*f</codeInline> when N == 1 and <codeInline>f</codeInline> is a pointer to member data of a class <codeInline>T</codeInline> and <codeInline>t1</codeInline> is not one of the types described in the previous item.</para>
        </listItem>
        <listItem>
          <para> <codeInline>f(t1, t2, ..., tN)</codeInline> in all other cases.</para>
        </listItem>
      </list>
      <para>The pseudo-function <codeInline>INVOKE(f, t1, t2, ..., tN, R)</codeInline> means <codeInline>INVOKE(f, t1, t2, ..., tN)</codeInline> implicitly converted to <codeInline>R</codeInline>.</para>
      <para>If a call wrapper has a <newTerm>weak result type</newTerm>, the type of its member type <codeInline>result_type</codeInline> is based on the type <codeInline>T</codeInline> of the target object of the wrapper, as follows: </para>
      <list class="bullet">
        <listItem>
          <para>If <codeInline>T</codeInline> is a pointer to function, <codeInline>result_type</codeInline> is a synonym for the return type of <codeInline>T</codeInline>.</para>
        </listItem>
        <listItem>
          <para>If <codeInline>T</codeInline> is a pointer to member function, <codeInline>result_type</codeInline> is a synonym for the return type of <codeInline>T</codeInline>.</para>
        </listItem>
        <listItem>
          <para>If <codeInline>T</codeInline> is a class type that has a member type <codeInline>result_type</codeInline>, then <codeInline>result_type</codeInline> is a synonym for <codeInline>T::result_type</codeInline>.</para>
        </listItem>
        <listItem>
          <para>Otherwise, there is no member <codeInline>result_type</codeInline>.</para>
        </listItem>
      </list>
      <para>Every call wrapper has a move constructor and a copy constructor. A <newTerm>simple call wrapper</newTerm> is a call wrapper that has an assignment operator and whose copy constructor, move constructor, and assignment operator do not throw exceptions. A <newTerm>forwarding call wrapper</newTerm> is a call wrapper that can be called by using an arbitrary argument list and that delivers the arguments to the wrapped callable object as references. All rvalue arguments are delivered as rvalue references, and lvalue arguments are delivered as lvalue references.</para>
    </content>
  </section>
  <section>
    <title />
    <content />
    <sections>
      <section>
        <title>Classes</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="b70a0268-43ff-4f3b-a283-faf1cb172d4c">bad_function_call</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A class that describes an exception thrown to indicate that a call to <codeInline>operator()</codeInline> on a <legacyLink xlink:href="7b5ca76b-9ca3-4d89-8fcf-cad70a4aeae6">function</legacyLink> object failed because the object was empty.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="7b86f02c-af7e-4c7f-9df1-08addae4dd65">binary_negate</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A template class providing a member function that negates the return value of a specified binary function.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="6b8ee343-c82f-48f8-867d-06f9d1d324c0">binder1st</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A template class providing a constructor that converts a binary function object into a unary function object by binding the first argument of the binary function to a specified value.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="b2a9c1d1-dfc4-4ca9-a10e-ae84e195a62d">binder2nd</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A template class providing a constructor that converts a binary function object into a unary function object by binding the second argument of the binary function to a specified value.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="316ddbaa-9f46-4931-8eba-ea4ca66360ef">const_mem_fun_ref_t</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>An adapter class that allows a const member function that takes no arguments to be called as a unary function object when initialized with a reference argument.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="f169d381-019b-4a0e-a9a3-54da6d948270">const_mem_fun_t</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>An adapter class that allows a const member function that takes no arguments to be called as a unary function object when initialized with a pointer argument.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="8220d373-fa1c-44be-a21d-96d49b3ea6bb">const_mem_fun1_ref_t</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>An adapter class that allows a const member function that takes a single argument to be called as a binary function object when initialized with a reference argument.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="250fac30-9663-4133-9051-6303f76ea259">const_mem_fun1_t</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>An adapter class that allows a const member function that takes a single argument to be called as a binary function object when initialized with a pointer argument.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="7b5ca76b-9ca3-4d89-8fcf-cad70a4aeae6">function</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A class that wraps a callable object.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="e1b500c6-a5c8-4f6f-ad33-7ec52eb8e2e4">hash</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A class that computes a hash code for a value.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="0715f9e9-2239-4778-a1cf-2c21f49dfd47">is_bind_expression</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A class that tests if a particular type is generated by calling <codeInline>bind</codeInline>.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="2b21a792-96d1-4bb8-b911-0db796510835">is_placeholder</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A class that tests if a particular type is a placeholder.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="7dadcac3-8d33-4e4b-a792-81bd53d3df39">mem_fun_ref_t</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>An adapter class that allows a <legacyBold>non_const</legacyBold> member function that takes no arguments to be called as a unary function object when initialized with a reference argument.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="242566d4-750c-4c87-9d63-2e2c9d19ca2a">mem_fun_t</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>An adapter class that allows a <legacyBold>non_const</legacyBold> member function that takes no arguments to be called as a unary function object when initialized with a pointer argument.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="7d6742f6-19ba-4523-b3c8-0e5b8f11464f">mem_fun1_ref_t</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>An adapter class that allows a <legacyBold>non_const</legacyBold> member function that takes a single argument to be called as a binary function object when initialized with a reference argument.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="01a8c2c2-b2f7-4e3f-869c-5b5b9f06ea54">mem_fun1_t</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>An adapter class that allows a <legacyBold>non_const</legacyBold> member function that takes a single argument to be called as a binary function object when initialized with a pointer argument.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="fb50599f-bcb3-4076-a669-6dcc3eb189a5">pointer_to_binary_function</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Converts a binary function pointer into an adaptable binary function.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="05600207-b916-4759-beca-6b6facd2d6f6">pointer_to_unary_function</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Converts a unary function pointer into an adaptable unary function.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="90b8ed62-e6f1-44ed-acc7-9619bd58865a">reference_wrapper</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A class that wraps a reference.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="14ec0040-07f1-45a5-80b5-d0c9f9b00c8f">result_of</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A struct that holds the return type of a wrapped callable object.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="e3b86eec-3205-49b9-ab83-f55225af4e0c">unary_negate</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A template class providing a member function that negates the return value of a specified unary function.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Functions</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c34d0b45-50a7-447a-9368-2210d06339a4#bind_function">bind</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Binds arguments to a callable object.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c34d0b45-50a7-447a-9368-2210d06339a4#bind1st_function">bind1st</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A helper template function that creates an adaptor to convert a binary function object into a unary function object by binding the first argument of the binary function to a specified value.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c34d0b45-50a7-447a-9368-2210d06339a4#bind2nd_function">bind2nd</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A helper template function that creates an adaptor to convert a binary function object into a unary function object by binding the second argument of the binary function to a specified value.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c34d0b45-50a7-447a-9368-2210d06339a4#bit_and_function">bit_and</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Returns the bitwise logical AND (binary operator&amp;) of the two parameters.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c34d0b45-50a7-447a-9368-2210d06339a4#bit_not_function">bit_not</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Returns the bitwise logical complement (operator~) of the parameter.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c34d0b45-50a7-447a-9368-2210d06339a4#bit_or_function">bit_or</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Returns the bitwise logical OR (operator|) of the two parameters.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c34d0b45-50a7-447a-9368-2210d06339a4#bit_xor_function">bit_xor</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Returns the bitwise logical XOR (operator^) of the two parameters.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c34d0b45-50a7-447a-9368-2210d06339a4#cref_function">cref</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Constructs a const <codeInline>reference_wrapper</codeInline> from an argument.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c34d0b45-50a7-447a-9368-2210d06339a4#mem_fn_function">mem_fn</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Generates a simple call wrapper.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c34d0b45-50a7-447a-9368-2210d06339a4#mem_fun_function">mem_fun</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Helper template functions used to construct function object adaptors for member functions when initialized with pointer arguments.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c34d0b45-50a7-447a-9368-2210d06339a4#mem_fun_ref_function">mem_fun_ref</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A helper template function used to construct function object adaptors for member functions when initialized with reference arguments.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c34d0b45-50a7-447a-9368-2210d06339a4#not1_function">not1</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Returns the complement of a unary predicate.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c34d0b45-50a7-447a-9368-2210d06339a4#not2_function">not2</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Returns the complement of a binary predicate.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c34d0b45-50a7-447a-9368-2210d06339a4#ptr_fun_function">ptr_fun</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A helper template function used to convert unary and binary function pointers, respectively, into unary and binary adaptable functions.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c34d0b45-50a7-447a-9368-2210d06339a4#ref_function">ref</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Constructs a <codeInline>reference_wrapper</codeInline> from an argument.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c34d0b45-50a7-447a-9368-2210d06339a4#swap_function">swap</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Swaps two <codeInline>function</codeInline> objects.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Structs</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="79b6d53d-644c-4add-b0ba-3a5f40f69c60">binary_function</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>An empty base class that defines types that may be inherited by derived class that provides a binary function object.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="b9cf8e9c-6981-43a6-a6a3-8f761987dd7a">divides</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class provides a predefined function object that performs the arithmetic operation of division on elements of a specified value type.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="8e4f2b50-b2db-48e3-b4cc-6cc03362c2a6">equal_to</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A binary predicate that tests whether a value of a specified type is equal to another value of that type.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="ebc348e1-edcd-466b-b21a-db95bd8f9079">greater</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A binary predicate that tests whether a value of a specified type is greater than another value of that type.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="a8ba911b-7af8-4653-b972-d8618f4df7d5">greater_equal</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A binary predicate that tests whether a value of a specified type is greater than or equal to another value of that type.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="39349da3-11cd-4774-b2cc-b46af5aae5d7">less</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A binary predicate that tests whether a value of a specified type is less than another value of that type.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="32085782-c7e0-4310-9b40-8aa3c1bff211">less_equal</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A binary predicate that tests whether a value of a specified type is less than or equal to another value of that type.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="1a375cc2-0592-4d57-a553-78009c7ad610">logical_and</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class provides a predefined function object that performs the logical operation of conjunction on elements of a specified value type and tests for the truth or falsity of the result.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="892db678-31da-4540-974b-17b05efc0849">logical_not</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class provides a predefined function object that performs the logical operation of negation on elements of a specified value type and tests for the truth or falsity of the result.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="ec8143f8-5755-4e7b-8025-507fb6bf6911">logical_or</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class provides a predefined function object that performs the logical operation of disjunction on elements of a specified value type and tests for the truth or falsity of the result.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="7bce784e-2be6-413a-b516-004e9ecb2a39">minus</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class provides a predefined function object that performs the arithmetic operation of subtraction on elements of a specified value type.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="86d342f7-b7b1-46a4-b0bb-6b7ae827369b">modulus</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class provides a predefined function object that performs the arithmetic operation of modulus on elements of a specified value type.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="ec85e8af-70ad-44ad-90f0-d961a5847864">multiplies</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class provides a predefined function object that performs the arithmetic operation of multiplication on elements of a specified value type.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="8a372686-786e-4262-b37c-ca13dc11e62f">negate</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class provides a predefined function object that returns the negative of an element value.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="333fce09-4f51-44e0-ba26-533bccffd485">not_equal_to</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A binary predicate that tests whether a value of a specified type is not equal to another value of that type.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="4594abd5-b2f2-4fac-9b6b-fc9a2723f8cf">plus</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class provides a predefined function object that performs the arithmetic operation of addition on elements of a specified value type.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="04c2fbdc-c1f6-48ed-b6cc-292a6d484627">unary_function</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>An empty base class that defines types that may be inherited by derived class that provides a unary function object.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Objects</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="30c3c480-ff31-4708-94be-7d0d65f243c9">_1.._M</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Placeholders for replaceable arguments.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Operators</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="d4b3c760-f3e2-4b65-bdaa-d42e8dd6f5e1#operator_eq_eq">operator==</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Disallows equality comparison of callable objects.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="d4b3c760-f3e2-4b65-bdaa-d42e8dd6f5e1#operator_neq">operator!=</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Disallows inequality comparison of callable objects.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
    </sections>
  </section>
  <relatedTopics> <link xlink:href="e7bf497a-0f63-48d0-9b54-cb0eef4073c4">Header Files</link> <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link> <link xlink:href="59f76cd1-cf9d-4802-b9eb-d4b9cbe015d9">Standard Template Library</link>
</relatedTopics>
</developerReferenceWithSyntaxDocument>



