---
title: "random_device Class"
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
ms.assetid: 4393d515-0cb6-4e0d-a2ba-c780f05dc1bf
caps.latest.revision: 20
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
# random_device Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Generates a random sequence from an external device.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class random_device {
public:
    typedef unsigned int result_type;
    // cosntructor    explicit random_device(const std::string&amp; token = "");
    // properties    static result_type min();
    static result_type max();
    double entropy() const;    // generate    result_type operator()();
    // no-copy functions    random_device(const random_device&amp;) = delete;
    void operator=(const random_device&amp;) = delete;
};</legacySyntax>
    </syntaxSection>
    <section>
        <title>Members</title>
        <content>
            <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                <tbody>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#random_device__random_device">random_device::random_device</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#random_device__entropy">random_device::entropy</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#random_device__operator__">random_device::operator()</link>
                            </para>
                        </TD>
                        <TD>
                            <para/>
                        </TD>
                    </tr>
                </tbody>
            </table>
        </content>
    </section>
    <languageReferenceRemarks>
        <content>
            <para>The class describes a source of random numbers, and is allowed but not required to be non-deterministic or cryptographically secure by the ISO C++ Standard. In the Visual Studio implementation the values produced are non-deterministic and cryptographically secure, but runs more slowly than generators created from engines and engine adaptors (such as <legacyLink xlink:href="7ee968fa-a1cc-450f-890f-7305de062685">mersenne_twister_engine</legacyLink>, the high quality and fast engine of choice for most applications). </para>
            <para> <languageKeyword>random_device</languageKeyword> results are uniformly distributed in the closed range [ <parameterReference>0, 2</parameterReference>
                <superscript>32</superscript>).</para>
            <para> <languageKeyword>random_device</languageKeyword> is not guaranteed to result in a non-blocking call.</para>
            <para>Generally, <languageKeyword>random_device</languageKeyword> is used to seed other generators created with engines or engine adaptors. For more information, see <link xlink:href="60afc25c-b162-4811-97c1-1b65398d4c57">&lt;random&gt;</link>.</para>
        </content>
    </languageReferenceRemarks>
    <section><title>Example</title><content>
                <para>The following code demonstrates basic functionality of this class and example results. Because of the non-deterministic nature of <languageKeyword>random_device</languageKeyword>, the random values shown in the                     <embeddedLabel>Output</embeddedLabel> section will not match your results. This is normal and expected.</para>
            <!--EndSnipComment-->
        <code language="cpp">// random_device_engine.cpp 
// cl.exe /W4 /nologo /EHsc /MTd 
#include &lt;random&gt; 
#include &lt;iostream&gt; 
using namespace std;

int main() 
{ 
    random_device gen; 
 
    cout &lt;&lt; "entropy == " &lt;&lt; gen.entropy() &lt;&lt; endl; 
    cout &lt;&lt; "min == " &lt;&lt; gen.min() &lt;&lt; endl; 
    cout &lt;&lt; "max == " &lt;&lt; gen.max() &lt;&lt; endl; 
 
    cout &lt;&lt; "a random value == " &lt;&lt; gen() &lt;&lt; endl; 
    cout &lt;&lt; "a random value == " &lt;&lt; gen() &lt;&lt; endl; 
    cout &lt;&lt; "a random value == " &lt;&lt; gen() &lt;&lt; endl; 
}</code>
        <!--SnipComment-->
                <para>
                    <embeddedLabel>Output:</embeddedLabel>
                </para>
                <computerOutput>entropy == 32min == 0max == 429496729510 random values:418382918114543916081176278697246883009639593472221803123400133959054513048968776040884902293276253</computerOutput>
                <para>This example is simplistic and not representative of the general use-case for this generator. For a more representative code example, see <link xlink:href="60afc25c-b162-4811-97c1-1b65398d4c57">&lt;random&gt;</link>.</para>
            <!--EndSnipComment-->
    </content></section>
    <requirements>
        <content>
            <para>
                <embeddedLabel>Header:</embeddedLabel> &lt;random&gt;</para>
            <para>
                <embeddedLabel>Namespace:</embeddedLabel> std</para>
        </content>
    </requirements>
    <section address="random_device__random_device">
        <!--3e4d021d-e50b-40bc-ae29-9071d7e5cd38-->
        <title>random_device::random_device</title>
        <content>
            <para>Constructs the generator.</para>
            <legacySyntax>random_device(const std::string&amp; = "");</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The constructor initializes the generator as needed, ignoring the string parameter. Throws a value of an implementation-defined type derived from <legacyLink xlink:href="4f181f67-5888-4b50-89a6-745091ffb2fe">exception</legacyLink> if the <languageKeyword>random_device</languageKeyword> could not be initialized.</para>
                    <para>For example code, see <link xlink:href="4393d515-0cb6-4e0d-a2ba-c780f05dc1bf">random_device</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="random_device__entropy">
        <!--9a177aa9-bd70-42df-8034-3fc1d100c4af-->
        <title>random_device::entropy</title>
        <content>
            <para>Estimates the randomness of the source.</para>
            <legacySyntax>double entropy() const noexcept;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The member function returns an estimate of the randomness of the source, as measured in bits.</para>
                    <para>For example code, see <link xlink:href="4393d515-0cb6-4e0d-a2ba-c780f05dc1bf">random_device</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="random_device__operator__">
        <!--ca5fc937-79b4-489d-a43c-3720fb87c9c7-->
        <title>random_device::operator()</title>
        <content>
            <para>Returns a random value.</para>
            <legacySyntax>result_type operator()();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Returns values uniformly distributed in the closed interval [ <parameterReference>min, max</parameterReference>] as determined by member functions <codeInline>min()</codeInline> and <codeInline>max()</codeInline>. Throws a value of an implementation-defined type derived from <legacyLink xlink:href="4f181f67-5888-4b50-89a6-745091ffb2fe">exception</legacyLink> if a random number could not be obtained.</para>
                    <para>For example code, see <link xlink:href="4393d515-0cb6-4e0d-a2ba-c780f05dc1bf">random_device</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="60afc25c-b162-4811-97c1-1b65398d4c57">&lt;random&gt;</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



