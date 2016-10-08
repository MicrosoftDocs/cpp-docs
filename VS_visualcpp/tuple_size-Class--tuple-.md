---
title: "tuple_size Class &lt;tuple&gt;"
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
ms.assetid: 73852fc5-eb68-41f1-8379-465cedc2314a
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
# tuple_size Class &lt;tuple&gt;
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://dduestorage.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Reports the number of elements that a <codeInline>tuple</codeInline> contains.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>// TEMPLATE STRUCT tuple_size
template&lt;class Tuple&gt;
struct tuple_size;

// size of tuple
template&lt;class... Types&gt;
struct tuple_size&lt;tuple&lt;Types...&gt;&gt;
: integral_constant&lt;size_t, sizeof...(Types)&gt;;

// size of const tuple
template&lt;class Tuple&gt;
struct tuple_size&lt;const Tuple&gt;;

// size of volatile tuple
template&lt;class Tuple&gt;
struct tuple_size&lt;volatile Tuple&gt;;

// size of const volatile tuple
template&lt;class Tuple&gt;
struct tuple_size&lt;const volatile Tuple&gt;; </legacySyntax>
    </syntaxSection>
    <parameters>
        <content>
            <definitionTable>
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
            <para>The template class has a member <codeInline>value</codeInline> that is an integral constant expression whose value is the extent of the tuple type <codeInline>Tuple</codeInline>.</para>
        </content>
    </languageReferenceRemarks>
    <section><title>Example</title><content>
                <para> </para>
            <!--EndSnipComment-->
        <code>#include &lt;tuple&gt; 
#include &lt;iostream&gt; 


using namespace std;

typedef tuple&lt;int, double, int, double&gt; MyTuple;
int main()
{
    MyTuple c0(0, 1.5, 2, 3.7);

    // display contents " 0 1 2 3" 
    cout &lt;&lt; " " &lt;&lt; get&lt;0&gt;(c0);
    cout &lt;&lt; " " &lt;&lt; get&lt;1&gt;(c0);
    cout &lt;&lt; " " &lt;&lt; get&lt;2&gt;(c0);
    cout &lt;&lt; " " &lt;&lt; get&lt;3&gt;(c0) &lt;&lt; endl;

    // display size " 4" 
    cout &lt;&lt; " " &lt;&lt; tuple_size&lt;MyTuple&gt;::value &lt;&lt; endl;
}

/*
Output:
0 1.5 2 3.7
4
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



