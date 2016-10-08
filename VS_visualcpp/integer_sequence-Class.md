---
title: "integer_sequence Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 2cfdddee-819d-478e-bb78-c8a9c2696803
caps.latest.revision: 6
manager: ghogen
translation.priority.mt: 
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
# integer_sequence Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Represents an integer sequence. Can be used to deduce and expand parameter packs in variadic types such as std::tuple&lt;T...&gt; that are passed as arguments to a function.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax language="cpp">template &lt;class T, T... Vals&gt;
struct integer_sequence</legacySyntax>
    </syntaxSection>
    <parameters>
        <content>
            <definitionTable>
                <definedTerm>T</definedTerm>
                <definition>
                    <para>The type of the values; must be an integral type: bool, char, char16_t, char32_t, wchar_t, or signed or unsigned integer types.</para>
                </definition>
                <definedTerm>Vals</definedTerm>
                <definition>
                    <para>A non-type parameter pack that represents a sequence of values of integral type T. </para>
                </definition>
            </definitionTable>
        </content>
    </parameters>
    <section>
        <title>Members</title>
        <content>
            <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                <tbody>
                    <tr>
                        <TD>
                            <para> <unmanagedCodeEntityReference>static size_t size() noexcept</unmanagedCodeEntityReference>
                            </para>
                        </TD>
                        <TD>
                            <para>The number of elements in the sequence.</para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para>typedef T value_type</para>
                        </TD>
                        <TD>
                            <para>The type of each element in the sequence. Must be an integral type.</para>
                        </TD>
                    </tr>
                </tbody>
            </table>
            <para/>
        </content>
    </section>
    <languageReferenceRemarks>
        <content>
            <para>A parameter pack that is passed directly to a function can be unpacked without any special library helpers. When a parameter pack is part of a type that is passed to a function, and you need indices to access the elements, then the easiest way to unpack it is to use <unmanagedCodeEntityReference>integer_sequence</unmanagedCodeEntityReference> and its related type aliases <unmanagedCodeEntityReference>make_integer_sequence</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>index_sequence</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>make_index_sequence</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>index_sequence_for</unmanagedCodeEntityReference>.</para>
        </content>
    </languageReferenceRemarks>
    <section><title>Example</title><content>
                <para>The following example is based on the original proposal                     <externalLink> <linkText>N3658</linkText> <linkUri>http://open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3658.html</linkUri>
                    </externalLink>. It shows how to use an <unmanagedCodeEntityReference>integer_sequence</unmanagedCodeEntityReference> to create a <unmanagedCodeEntityReference>std::tuple</unmanagedCodeEntityReference> from a <unmanagedCodeEntityReference>std::array&lt;T,N&gt;</unmanagedCodeEntityReference>, and how to use an <unmanagedCodeEntityReference>integer_sequence</unmanagedCodeEntityReference> to get at the tuple members.</para>
                <para>In the <codeInline>a2t</codeInline> function, an <unmanagedCodeEntityReference>index_sequence</unmanagedCodeEntityReference> is an alias of <unmanagedCodeEntityReference>integer_sequence</unmanagedCodeEntityReference> based on the <unmanagedCodeEntityReference>size_t</unmanagedCodeEntityReference> integral type. <unmanagedCodeEntityReference>make_index_sequence</unmanagedCodeEntityReference> is an alias that at compile time creates a zero-based <unmanagedCodeEntityReference> index_sequence</unmanagedCodeEntityReference> with the same number of elements as the array that is passed in by the caller. <codeInline>a2t</codeInline> passes the <unmanagedCodeEntityReference>index_sequence</unmanagedCodeEntityReference> by value to <codeInline>a2t_</codeInline> , where the expression <codeInline>a[I]...</codeInline> unpacks <codeInline>I</codeInline>, and then the elements are being fed to <unmanagedCodeEntityReference>make_tuple</unmanagedCodeEntityReference> which consumes them as individual arguments. For example, if the sequence contains three elements, then <unmanagedCodeEntityReference>make_tuple</unmanagedCodeEntityReference> is called as make_tuple(a[0], a[1], a[2]). The array elements themselves can of course be any type.</para>
                <para>The apply function accepts a std::tuple, and produces an integer_sequence by using the <unmanagedCodeEntityReference> tuple_size</unmanagedCodeEntityReference> helper class. Note that <legacyLink xlink:href="96baa2fd-c8e0-49af-be91-ba375ba7f9dc">std::decay_t</legacyLink>_is necessary because <legacyLink xlink:href="73852fc5-eb68-41f1-8379-465cedc2314a">tuple_size</legacyLink> does not work with reference types. The <codeInline>apply_</codeInline> function unpacks the tuple members and forwards them as separate arguments to a function call. In this example the function is a simple lambda expression that prints out the values.</para>
            <!--EndSnipComment-->
        <code>
#include &lt;stddef.h&gt;
#include &lt;iostream&gt;
#include &lt;tuple&gt;
#include &lt;utility&gt;
#include &lt;array&gt;
#include &lt;string&gt;

using namespace std;

// Create a tuple from the array and the index_sequence
template&lt;typename Array, size_t... I&gt;
auto a2t_(const Array&amp; a, index_sequence&lt;I...&gt;)
{
    return make_tuple(a[I]...);
}

// Create an index sequence for the array, and pass it to the
// implementation function a2t_
template&lt;typename T, size_t N&gt;
auto a2t(const array&lt;T, N&gt;&amp; a)
{
    return a2t_(a, make_index_sequence&lt;N&gt;());
}

// Call function F with the tuple members as separate arguments. 
template&lt;typename F, typename Tuple = tuple&lt;T...&gt;, size_t... I&gt;
decltype(auto) apply_(F&amp;&amp; f, Tuple&amp;&amp; args, index_sequence&lt;I...&gt;) 
{
    return forward&lt;F&gt;(f)(get&lt;I&gt;(forward&lt;Tuple&gt;(args))...);
}

// Create an index_sequence for the tuple, and pass it with the 
// function object and the tuple to the implementation function apply_
template&lt;typename F, typename Tuple = tuple&lt;T...&gt;&gt;
decltype(auto) apply(F&amp;&amp; f, Tuple&amp;&amp; args)
{
    using Indices = make_index_sequence&lt;tuple_size&lt;decay_t&lt;Tuple&gt;&gt;::value &gt;;
    return apply_(forward&lt;F&gt;(f), forward&lt;Tuple&gt;(args), Indices());
}


int main()
{ 
    const array&lt;string, 3&gt; arr { "Hello", "from", "C++14" };

    //Create a tuple given a array
    auto tup = a2t(arr); 

    // Extract the tuple elements
    apply([](const string&amp; a, const string&amp; b, const string&amp; c) {cout &lt;&lt; a &lt;&lt; " " &lt;&lt; b &lt;&lt; " " &lt;&lt; c &lt;&lt; endl; }, tup);

    char c;
    cin &gt;&gt; c;
}


</code>
        <!--SnipComment-->
                <para>To make an <unmanagedCodeEntityReference>index_sequence</unmanagedCodeEntityReference> for a parameter pack, use <unmanagedCodeEntityReference>index_sequence_for</unmanagedCodeEntityReference>&lt;T...&gt; which is an alias for <unmanagedCodeEntityReference>make_index_sequence</unmanagedCodeEntityReference>&lt;sizeof...(T)&gt;</para>
            <!--EndSnipComment-->
    </content></section>
    <requirements>
        <content>
            <para>Header: &lt;type_traits&gt;</para>
            <para>Namepace: std</para>
        </content>
    </requirements>
    <relatedTopics> <legacyLink xlink:href="f20967d9-c967-4fd2-b902-2bb1d5ed87e3">Ellipses and Variadic Templates</legacyLink>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



