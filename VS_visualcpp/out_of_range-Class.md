---
title: "out_of_range Class"
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
ms.assetid: d0e14dc0-065e-4666-9ac9-51e52223c503
caps.latest.revision: 21
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
# out_of_range Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>The class serves as the base class for all exceptions thrown to report an argument that is out of its valid range.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class out_of_range : public logic_error {
public:
    explicit out_of_range(const string&amp; <parameterReference>message</parameterReference>);
    explicit out_of_range(const char *message);
};</legacySyntax>
    </syntaxSection>
    <languageReferenceRemarks>
        <content>
            <para>The value returned by <link xlink:href="4f181f67-5888-4b50-89a6-745091ffb2fe">what</link> is a copy of <legacyBold>message</legacyBold> <codeInline>.</codeInline> <legacyLink xlink:href="a9c3e0a2-39bf-4c8a-b093-9abe30839591#basic_string__data">data</legacyLink>.</para>
        </content>
    </languageReferenceRemarks>
    <codeExample>
        <code>// out_of_range.cpp
// compile with: /EHsc
#include &lt;string&gt;
#include &lt;iostream&gt;

using namespace std;

int main() {
// out_of_range
   try {
      string str( "Micro" );
      string rstr( "soft" );
      str.append( rstr, 5, 3 );
      cout &lt;&lt; str &lt;&lt; endl;
   }
   catch ( exception &amp;e ) {
      cerr &lt;&lt; "Caught: " &lt;&lt; e.what( ) &lt;&lt; endl;
   };
}</code>
    </codeExample>
    <section>
        <title>Output</title>
        <content>
            <code>Caught: invalid string position</code>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>&lt;stdexcept&gt;</para>
            <para>
                <embeddedLabel>Namespace:</embeddedLabel> std</para>
        </content>
    </requirements>
    <relatedTopics> <link xlink:href="b290d73d-94e1-4288-af86-2bb5d71f677a">logic_error Class</link> <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



