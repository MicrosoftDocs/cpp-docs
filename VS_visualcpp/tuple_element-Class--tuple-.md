---
title: "tuple_element Class &lt;tuple&gt;"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 4c51a6c1-ce81-462f-8c6c-291d69f2b77c
caps.latest.revision: 19
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
# tuple_element Class &lt;tuple&gt;
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://dduestorage.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Wraps a <codeInline>tuple</codeInline> element.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>// CLASS tuple_element (find element by index)
template&lt;size_t Index, class Tuple&gt;
struct tuple_element;

// tuple_element for const
template&lt;size_t Index, class Tuple&gt;
struct tuple_element&lt;Index, const Tuple&gt;;

// tuple_element for volatile
template&lt;size_t Index, class Tuple&gt;
struct tuple_element&lt;Index, volatile Tuple&gt;;

// tuple_element for const volatile
template&lt;size_t Index, class Tuple&gt;
struct tuple_element&lt;Index, const volatile Tuple&gt;;

template&lt;size_t Index, class Tuple&gt;
using tuple_element_t = typename tuple_element&lt;Index, Tuple&gt;::type;
</legacySyntax>
    </syntaxSection>
    <parameters>
        <content>
            <definitionTable>
                <definedTerm> <parameterReference>Index</parameterReference>
                </definedTerm>
                <definition>
                    <para>The index of the designated element.</para>
                </definition>
                <definedTerm> <parameterReference>Tuple</parameterReference>
                </definedTerm>
                <definition>
                    <para>The type of the tuple.</para>
                </definition>
            </definitionTable>
        </content>
    </parameters>
    <languageReferenceRemarks>
        <content>
            <para>The template class has a nested typedef <codeInline>type</codeInline> that is a synonym for the type at index <codeInline>Index</codeInline> of the tuple type <codeInline>Tuple</codeInline>.</para>
        </content>
    </languageReferenceRemarks>
    <section><title>Example</title><content>
                <para> </para>
            <!--EndSnipComment-->
        <code>#include &lt;tuple&gt;
#include &lt;string&gt;
#include &lt;iostream&gt;

using namespace std;
typedef tuple&lt;int, double, string&gt; MyTuple;


int main()
{

    MyTuple c0{ 0, 1.5, "Tail" };

    tuple_element_t&lt;0, MyTuple&gt; val = get&lt;0&gt;(c0); //get by index
    tuple_element_t&lt;1, MyTuple&gt; val2 = get&lt;1&gt;(c0);
    tuple_element_t&lt;2, MyTuple&gt; val3 = get&lt;string&gt;(c0); // get by type

    cout &lt;&lt; val &lt;&lt; " " &lt;&lt; val2 &lt;&lt; " " &lt;&lt; val3 &lt;&lt; endl;
}

/*
Output:
0 1.5 Tail
*/</code>
    </content></section>
    <requirements>
        <content>
            <para>
                <embeddedLabel>Header:</embeddedLabel> &lt;tuple&gt;</para>
            <para>
                <embeddedLabel>Namespace:</embeddedLabel> std</para>
        </content>
    </requirements>
    <relatedTopics> <link xlink:href="e4ef5c2d-318b-44f6-8bce-fce4ecd796a3">&lt;tuple&gt;</link> <link xlink:href="c38749be-ae4d-41f3-98ea-6aa3250de9a3">tuple</link> <link xlink:href="4c51a6c1-ce81-462f-8c6c-291d69f2b77c">tuple_element</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



