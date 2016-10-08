---
title: "bad_alloc Class"
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
ms.assetid: 6429a8e6-5a49-4907-8d56-f4a4ec8131d0
caps.latest.revision: 22
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
# bad_alloc Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://dduestorage.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>The class describes an exception thrown to indicate that an allocation request did not succeed.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class bad_alloc : public exception {
   bad_alloc();
   virtual ~bad_alloc();
};</legacySyntax>
    </syntaxSection>
    <languageReferenceRemarks>
        <content>
            <para>The value returned by <legacyBold>what</legacyBold> is an implementation-defined C string. None of the member functions throw any exceptions.</para>
        </content>
    </languageReferenceRemarks>
    <requirements>
        <content>
            <para> <legacyBold>Header:</legacyBold> &lt;new&gt;</para>
            <para>
                <embeddedLabel>Namespace:</embeddedLabel> std</para>
        </content>
    </requirements>
    <codeExample>
        <code>// bad_alloc.cpp
// compile with: /EHsc
#include&lt;new&gt;
#include&lt;iostream&gt;
using namespace std;

int main() {
   char* ptr;
   try {
      ptr = new char[(~unsigned int((int)0)/2) - 1];
      delete[] ptr;
   }
   catch( bad_alloc &amp;ba) {
      cout &lt;&lt; ba.what( ) &lt;&lt; endl;
   }
}</code>
    </codeExample>
    <section>
        <title>Sample Output</title>
        <content>
            <code>bad allocation</code>
        </content>
    </section>
    <requirements>
        <content>
            <para>
                <embeddedLabel>Header:</embeddedLabel> &lt;new&gt;</para>
        </content>
    </requirements>
    <relatedTopics> <link xlink:href="4f181f67-5888-4b50-89a6-745091ffb2fe">exception Class</link> <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



