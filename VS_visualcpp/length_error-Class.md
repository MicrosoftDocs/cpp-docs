---
title: "length_error Class"
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
ms.assetid: d53c46c5-4626-400d-bd76-bf3e1e0f64ae
caps.latest.revision: 17
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
# length_error Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>The class serves as the base class for all exceptions thrown to report an attempt to generate an object too long to be specified.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class length_error : public logic_error {
public:
    explicit length_error(const string&amp; <parameterReference>message</parameterReference>);
    explicit length_error(const char *message);
};</legacySyntax>
    </syntaxSection>
    <languageReferenceRemarks>
        <content>
            <para>The value returned by <link xlink:href="4f181f67-5888-4b50-89a6-745091ffb2fe">what</link> is a copy of <legacyBold>message</legacyBold> <codeInline>.</codeInline> <legacyLink xlink:href="a9c3e0a2-39bf-4c8a-b093-9abe30839591#basic_string__data">data</legacyLink>.</para>
        </content>
    </languageReferenceRemarks>
    <codeExample>
        <code>// length_error.cpp
// compile with: /EHsc /GR /MDd
#include &lt;vector&gt;
#include &lt;iostream&gt;

using namespace std;

template&lt;class _Ty&gt;
class stingyallocator : public allocator&lt;_Ty&gt;
{
public:
   template &lt;class U&gt;
      struct rebind { typedef stingyallocator&lt;U&gt; other; };
   _SIZT max_size( ) const
   {
         return 10;
   };

};

int main( )
{
   try
   {
      vector&lt;int, stingyallocator&lt; int &gt; &gt; myv;
      for ( int i = 0; i &lt; 11; i++ ) myv.push_back( i );
   }
   catch ( exception &amp;e )
   {
      cerr &lt;&lt; "Caught " &lt;&lt; e.what( ) &lt;&lt; endl;
      cerr &lt;&lt; "Type " &lt;&lt; typeid( e ).name( ) &lt;&lt; endl;
   };
}
\* Output: 
Caught vector&lt;T&gt; too long
Type class std::length_error
*\</code><!--EndSnipComment-->
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



