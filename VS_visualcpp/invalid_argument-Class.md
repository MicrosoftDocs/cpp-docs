---
title: "invalid_argument Class"
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
ms.assetid: af6c227d-ad7c-4e63-9dee-67af81d83506
caps.latest.revision: 16
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
# invalid_argument Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>The class serves as the base class for all exceptions thrown to report an invalid argument.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class invalid_argument : public logic_error {
public:
    explicit invalid_argument(const string&amp; <parameterReference>message</parameterReference>);
    explicit invalid_argument(const char *message);
};</legacySyntax>
    </syntaxSection>
    <languageReferenceRemarks>
        <content>
            <para>The value returned by <link xlink:href="4f181f67-5888-4b50-89a6-745091ffb2fe">what</link> is a copy of <legacyBold>message</legacyBold> <codeInline>.</codeInline> <legacyLink xlink:href="a9c3e0a2-39bf-4c8a-b093-9abe30839591#basic_string__data">data</legacyLink>.</para>
        </content>
    </languageReferenceRemarks>
    <codeExample>
        <code>// invalid_arg.cpp
// compile with: /EHsc /GR
#include &lt;bitset&gt;
#include &lt;iostream&gt;

using namespace std;

int main( )
{
   try 
   {
      bitset&lt; 32 &gt; bitset( string( "11001010101100001b100101010110000") );
   }
   catch ( exception &amp;e ) 
   {
      cerr &lt;&lt; "Caught " &lt;&lt; e.what( ) &lt;&lt; endl;
      cerr &lt;&lt; "Type " &lt;&lt; typeid( e ).name( ) &lt;&lt; endl;
   };
}
\* Output: 
Caught invalid bitset&lt;N&gt; char
Type class std::invalid_argument
*\</code>
            <!--EndSnipComment-->
    </codeExample>
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




