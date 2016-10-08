---
title: "logic_error Class"
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
ms.assetid: b290d73d-94e1-4288-af86-2bb5d71f677a
caps.latest.revision: 18
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
# logic_error Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>The class serves as the base class for all exceptions thrown to report errors presumably detectable before the program executes, such as violations of logical preconditions.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class logic_error : public exception {
public:
    explicit logic_error(const string&amp; <parameterReference>message</parameterReference>);
    explicit logic_error(const char *message);
};</legacySyntax>
    </syntaxSection>
    <languageReferenceRemarks>
        <content>
            <para>The value returned by <link xlink:href="4f181f67-5888-4b50-89a6-745091ffb2fe">what</link> is a copy of <legacyBold>message</legacyBold> <codeInline>.</codeInline> <legacyLink xlink:href="a9c3e0a2-39bf-4c8a-b093-9abe30839591#basic_string__data">data</legacyLink>.</para>
        </content>
    </languageReferenceRemarks>
    <codeExample>
        <legacy>
            <content>
                <code>// logic_error.cpp
// compile with: /EHsc /GR
#include &lt;iostream&gt;
using namespace std;

int main( )
{
   try 
   {
      throw logic_error( "logic error" );
   }
   catch ( exception &amp;e ) 
   {
      cerr &lt;&lt; "Caught: " &lt;&lt; e.what( ) &lt;&lt; endl;
      cerr &lt;&lt; "Type: " &lt;&lt; typeid( e ).name( ) &lt;&lt; endl;
   };
}</code>
                <para> <legacyBold>Output</legacyBold>
                </para>
                <code>Caught: logic error
Type: class std::logic_error</code>
            </content>
        </legacy>
    </codeExample>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>&lt;stdexcept&gt;</para>
            <para>
                <embeddedLabel>Namespace:</embeddedLabel> std</para>
        </content>
    </requirements>
    <relatedTopics> <link xlink:href="4f181f67-5888-4b50-89a6-745091ffb2fe">exception Class</link> <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



