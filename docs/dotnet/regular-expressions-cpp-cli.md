---
description: "Learn more about: Regular Expressions (C++/CLI)"
title: "Regular Expressions (C++/CLI)"
ms.date: "11/04/2016"
helpviewer_keywords: ["regular expressions [C++]", ".NET Framework [C++], regular expressions", "regular expressions [C++], about regular expressions", "parsing strings [C++]", "examples [C++], strings", "regular expressions [C++], parsing strings", "Split method, parsing strings", "strings [C++], parsing", "substrings, simple matches", "searching, exact substring matches", "strings [C++], exact substring matching", "regular expressions [C++], simple matching", "IsMatch method", "strings [C++], extracting data from", "formatted strings [C++]", "regular expressions [C++], extracting data fields", "data [C++], extracting from strings", "regular expressions [C++], rearranging data", "data [C++], rearranging", "search and replace", "Replace method", "regular expressions [C++], search and replace", "strings [C++], formatting", "data [C++], formatting", "regular expressions [C++], validating data formatting"]
ms.assetid: 838bab49-0dbc-4089-a604-ef146269ef5a
---
# Regular Expressions (C++/CLI)

Demonstrates various string operations using regular expressions classes in the .NET Framework.

The following topics demonstrate the use of the .NET Framework <xref:System.Text.RegularExpressions> namespace (and in one case the <xref:System.String.Split%2A?displayProperty=fullName> method) to search, parse, and modify strings.

## <a name="parse_regex"></a> Parse Strings Using Regular Expressions

The following code example demonstrates simple string parsing using the <xref:System.Text.RegularExpressions.Regex> class in the <xref:System.Text.RegularExpressions?displayProperty=fullName> namespace. A string containing multiple types of word delineators is constructed. The string is then parsed using the <xref:System.Text.RegularExpressions.Regex> class in conjunction with the <xref:System.Text.RegularExpressions.Match> class. Then, each word in the sentence is displayed separately.

### Example

```cpp
// regex_parse.cpp
// compile with: /clr
#using <system.dll>

using namespace System;
using namespace System::Text::RegularExpressions;

int main( )
{
   int words = 0;
   String^ pattern = "[a-zA-Z]*";
   Console::WriteLine( "pattern : '{0}'", pattern );
   Regex^ regex = gcnew Regex( pattern );

   String^ line = "one\ttwo three:four,five six  seven";
   Console::WriteLine( "text : '{0}'", line );
   for( Match^ match = regex->Match( line );
        match->Success; match = match->NextMatch( ) )
   {
      if( match->Value->Length > 0 )
      {
         words++;
         Console::WriteLine( "{0}", match->Value );
      }
   }
   Console::WriteLine( "Number of Words : {0}", words );

   return 0;
}
```

## <a name="parse_split"></a> Parse Strings Using the Split Method

The following code example demonstrates using the <xref:System.String.Split%2A?displayProperty=fullName> method to extract each word from a string. A string containing multiple types of word delineators is constructed and then parsed by calling <xref:System.String.Split%2A> with a list of the delineators. Then, each word in the sentence is displayed separately.

### Example

```cpp
// regex_split.cpp
// compile with: /clr
using namespace System;

int main()
{
   String^ delimStr = " ,.:\t";
   Console::WriteLine( "delimiter : '{0}'", delimStr );
   array<Char>^ delimiter = delimStr->ToCharArray( );
   array<String^>^ words;
   String^ line = "one\ttwo three:four,five six seven";

   Console::WriteLine( "text : '{0}'", line );
   words = line->Split( delimiter );
   Console::WriteLine( "Number of Words : {0}", words->Length );
   for (int word=0; word<words->Length; word++)
      Console::WriteLine( "{0}", words[word] );

   return 0;
}
```

## <a name="regex_simple"></a> Use Regular Expressions for Simple Matching

The following code example uses regular expressions to look for exact substring matches. The search is performed by the static <xref:System.Text.RegularExpressions.Regex.IsMatch%2A> method, which takes two strings as input. The first is the string to be searched, and the second is the pattern to be searched for.

### Example

```cpp
// regex_simple.cpp
// compile with: /clr
#using <System.dll>

using namespace System;
using namespace System::Text::RegularExpressions;

int main()
{
   array<String^>^ sentence =
   {
      "cow over the moon",
      "Betsy the Cow",
      "cowering in the corner",
      "no match here"
   };

   String^ matchStr = "cow";
   for (int i=0; i<sentence->Length; i++)
   {
      Console::Write( "{0,24}", sentence[i] );
      if ( Regex::IsMatch( sentence[i], matchStr,
                     RegexOptions::IgnoreCase ) )
         Console::WriteLine("  (match for '{0}' found)", matchStr);
      else
         Console::WriteLine("");
   }
   return 0;
}
```

## <a name="regex_extract"></a> Use Regular Expressions to Extract Data Fields

The following code example demonstrates the use of regular expressions to extract data from a formatted string. The following code example uses the <xref:System.Text.RegularExpressions.Regex> class to specify a pattern that corresponds to an e-mail address. This patter includes field identifiers that can be used to retrieve the user and host name portions of each e-mail address. The <xref:System.Text.RegularExpressions.Match> class is used to perform the actual pattern matching. If the given e-mail address is valid, the user name and host names are extracted and displayed.

### Example

```cpp
// Regex_extract.cpp
// compile with: /clr
#using <System.dll>

using namespace System;
using namespace System::Text::RegularExpressions;

int main()
{
    array<String^>^ address=
    {
        "jay@southridgevideo.com",
        "barry@adatum.com",
        "treyresearch.net",
        "karen@proseware.com"
    };

    Regex^ emailregex = gcnew Regex("(?<user>[^@]+)@(?<host>.+)");

    for (int i=0; i<address->Length; i++)
    {
        Match^ m = emailregex->Match( address[i] );
        Console::Write("\n{0,25}", address[i]);

        if ( m->Success )
        {
            Console::Write("   User='{0}'",
            m->Groups["user"]->Value);
            Console::Write("   Host='{0}'",
            m->Groups["host"]->Value);
        }
        else
            Console::Write("   (invalid email address)");
        }

    Console::WriteLine("");
    return 0;
}
```

## <a name="regex_rearrange"></a> Use Regular Expressions to Rearrange Data

The following code example demonstrates how the .NET Framework regular expression support can be used to rearrange, or reformat data. The following code example uses the <xref:System.Text.RegularExpressions.Regex> and <xref:System.Text.RegularExpressions.Match> classes to extract first and last names from a string and then display these name elements in reverse order.

The <xref:System.Text.RegularExpressions.Regex> class is used to construct a regular expression that describes the current format of the data. The two names are assumed to be separated by a comma and can use any amount of white-space around the comma. The <xref:System.Text.RegularExpressions.Match> method is then used to analyze each string. If successful, first and last names are retrieved from the <xref:System.Text.RegularExpressions.Match> object and displayed.

### Example

```cpp
// regex_reorder.cpp
// compile with: /clr
#using <System.dll>
using namespace System;
using namespace Text::RegularExpressions;

int main()
{
   array<String^>^ name =
   {
      "Abolrous, Sam",
      "Berg,Matt",
      "Berry , Jo",
      "www.contoso.com"
   };

   Regex^ reg = gcnew Regex("(?<last>\\w*)\\s*,\\s*(?<first>\\w*)");

   for ( int i=0; i < name->Length; i++ )
   {
      Console::Write( "{0,-20}", name[i] );
      Match^ m = reg->Match( name[i] );
      if ( m->Success )
      {
         String^ first = m->Groups["first"]->Value;
         String^ last = m->Groups["last"]->Value;
         Console::WriteLine("{0} {1}", first, last);
      }
      else
         Console::WriteLine("(invalid)");
   }
   return 0;
}
```

## <a name="regex_search"></a> Use Regular Expressions to Search and Replace

The following code example demonstrates how the regular expression class <xref:System.Text.RegularExpressions.Regex> can be used to perform search and replace. This is done with the <xref:System.Text.RegularExpressions.Regex.Replace%2A> method. The version used takes two strings as input: the string to be modified, and the string to be inserted in place of the sections (if any) that match the pattern given to the <xref:System.Text.RegularExpressions.Regex> object.

This code replaces all the digits in a string with underscores (_) and then replaces those with an empty string, effectively removing them. The same effect can be accomplished in a single step, but two steps are used here for demonstration purposes.

### Example

```cpp
// regex_replace.cpp
// compile with: /clr
#using <System.dll>
using namespace System::Text::RegularExpressions;
using namespace System;

int main()
{
   String^ before = "The q43uick bro254wn f0ox ju4mped";
   Console::WriteLine("original  : {0}", before);

   Regex^ digitRegex = gcnew Regex("(?<digit>[0-9])");
   String^ after = digitRegex->Replace(before, "_");
   Console::WriteLine("1st regex : {0}", after);

   Regex^ underbarRegex = gcnew Regex("_");
   String^ after2 = underbarRegex->Replace(after, "");
   Console::WriteLine("2nd regex : {0}", after2);

   return 0;
}
```

## <a name="regex_validate"></a> Use Regular Expressions to Validate Data Formatting

The following code example demonstrates the use of regular expressions to verify the formatting of a string. In the following code example, the string should contain a valid phone number. The following code example uses the string "\d{3}-\d{3}-\d{4}" to indicate that each field represents a valid phone number. The "d" in the string indicates a digit, and the argument after each "d" indicates the number of digits that must be present. In this case, the number is required to be separated by dashes.

### Example

```cpp
// regex_validate.cpp
// compile with: /clr
#using <System.dll>

using namespace System;
using namespace Text::RegularExpressions;

int main()
{
   array<String^>^ number =
   {
      "123-456-7890",
      "444-234-22450",
      "690-203-6578",
      "146-893-232",
      "146-839-2322",
      "4007-295-1111",
      "407-295-1111",
      "407-2-5555",
   };

   String^ regStr = "^\\d{3}-\\d{3}-\\d{4}$";

   for ( int i = 0; i < number->Length; i++ )
   {
      Console::Write( "{0,14}", number[i] );

      if ( Regex::IsMatch( number[i], regStr ) )
         Console::WriteLine(" - valid");
      else
         Console::WriteLine(" - invalid");
   }
   return 0;
}
```

## Related Sections

[.NET Framework Regular Expressions](/dotnet/standard/base-types/regular-expressions)

## See also

[.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
