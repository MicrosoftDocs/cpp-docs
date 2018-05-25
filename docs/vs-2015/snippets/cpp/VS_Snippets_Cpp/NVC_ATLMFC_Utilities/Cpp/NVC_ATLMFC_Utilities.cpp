// NVC_ATLMFC_Utilities.cpp : Defines the entry point for the console application.
//
// Demonstrates use of shared ATL/MFC utility classes.
//
// Topic                                           Snippet
// COleDateTime Class                              1
// COleDateTime::COleDateTime                      2
// COleDateTime::Format                            3
// COleDateTime::GetAsDBTIMESTAMP                  4
// COleDateTime::GetCurrentTime                    5
// COleDateTime::GetDay                            6
// COleDateTime::GetDayOfWeek                      7
// COleDateTime::GetDayOfYear                      8
// COleDateTime::GetHour                           9
// COleDateTime::GetStatus                         10
// COleDateTime::SetDate                           11
// COleDateTime::operator +, -                     12
// COleDateTime Relational Operators               13, 170
// COleDateTimeSpan::COleDateTimeSpan              14
// COleDateTimeSpan::Format                        15
// COleDateTimeSpan::GetDays                       16
// COleDateTimeSpan::GetHours                      17
// COleDateTimeSpan::GetMinutes                    18
// COleDateTimeSpan::GetSeconds                    19
// COleDateTimeSpan::GetTotalDays                  20
// COleDateTimeSpan::SetDateTimeSpan               21
// COleDateTimeSpan::SetStatus                     22
// COleDateTimeSpan::operator +, -                 23
// COleDateTimeSpan::operator +=, -=               24
// COleDateTimeSpan Relational Operators           25 - 26
// CPoint::CPoint                                  27
// CPoint::Offset                                  28
// CPoint::operator ==                             29
// CPoint::operator !=                             30
// CPoint::operator +=                             31
// CPoint::operator -=                             32
// CPoint::operator +                              33
// CPoint::operator -                              34
// CRect::BottomRight                              35
// CRect::CenterPoint                              36
// CRect::CopyRect                                 37
// CRect::CRect                                    38
// CRect::DeflateRect                              39
// CRect::EqualRect                                40
// CRect::Height                                   41
// CRect::InflateRect                              42
// CRect::IntersectRect                            43
// CRect::IsRectEmpty                              44
// CRect::IsRectNull                               45
// CRect::MoveToX                                  46
// CRect::MoveToXY                                 47
// CRect::MoveToY                                  48
// CRect::NormalizeRect                            49
// CRect::OffsetRect                               50
// CRect::PtInRect                                 51
// CRect::SetRect                                  52
// CRect::SetRectEmpty                             53
// CRect::Size                                     54
// CRect::SubtractRect                             55
// CRect::UnionRect                                56
// CRect::Width                                    57
// CRect::operator LPCRECT                         58
// CRect::operator =                               59
// CRect::operator ==                              60
// CRect::operator !=                              61
// CRect::operator +=                              62
// CRect::operator -=                              63
// CRect::operator |=                              64
// CRect::operator +                               65
// CRect::operator -                               66
// CRect::operator &                               67
// CRect::operator |                               68
// CImage Class                                    70 - 71
// CImage::CreateEx                                69
// CImage::GetExporterFilterString                 73
// CImage::GetImporterFilterString                 74
// CImage::Save                                    72
// CSimpleStringT::Append                          75
// CSimpleStringT::CopyChars                       76
// CSimpleStringT::CSimpleStringT                  77
// CSimpleStringT::Empty                           78
// CSimpleStringT::FreeExtra                       79
// CSimpleStringT::GetAt                           80
// CSimpleStringT::GetBuffer                       81
// CSimpleStringT::GetBufferSetLength              82
// CSimpleStringT::GetString                       83
// CSimpleStringT::IsEmpty                         84
// CSimpleStringT::LockBuffer                      85
// CSimpleStringT::Preallocate                     86
// CSimpleStringT::ReleaseBuffer                   87
// CSimpleStringT::SetAt                           88
// CSimpleStringT::SetManager                      89
// CSimpleStringT::SetString                       90
// CSimpleStringT::StringLength                    91
// CSimpleStringT::Truncate                        92
// CSimpleStringT::operator +=                     93
// CSimpleStringT::operator =                      94
// CSimpleStringT::operator []                     95
// CSimpleStringT::operator PCXSTR                 96
// CSize::CSize                                    97
// CSize::operator ==                              98
// CSize::operator !=                              99
// CSize::operator +=                              100
// CSize::operator -=                              101
// CSize::operator +                               102
// CSize::operator -                               103
// CStringData::Release                            104
// CStringT::AllocSysString                        105
// CStringT::AnsiToOem                             106
// CStringT::AppendFormat                          107
// CStringT::CollateNoCase                         109
// CStringT::Compare                               110
// CStringT::CompareNoCase                         111
// CStringT::CStringT                              112
// CStringT::Delete                                113
// CStringT::Find                                  114
// CStringT::FindOneOf                             115
// CStringT::Format                                116 - 117
// CStringT::FormatMessage                         118
// CStringT::FormatV                               119 - 120
// CStringT::GetEnvironmentVariable                121
// CStringT::Insert                                122
// CStringT::Left                                  123
// CStringT::LoadString                            124
// CStringT::MakeLower                             125
// CStringT::MakeReverse                           126
// CStringT::MakeUpper                             127
// CStringT::Mid                                   128
// CStringT::Remove                                129
// CStringT::ReverseFind                           130
// CStringT::Right                                 131
// CStringT::SetSysString                          132
// CStringT::SpanExcluding                         133
// CStringT::SpanIncluding                         134
// CStringT::Tokenize                              135
// CStringT::Trim                                  136
// CStringT::TrimLeft                              137
// CStringT::TrimRight                             138
// CStringT::operator =                            139
// CStringT::operator +                            140
// CStringT::operator +=                           141
// CStringT::operator ==                           142
// CStringT::operator !=                           143
// CStringT::operator <                            144
// CStringT::operator >                            145
// CStringT::operator <=                           146
// CStringT::operator >=                           147
// CTime::CTime                                    148
// CTime::Format                                   149
// CTime::GetAsDBTIMESTAMP                         150
// CTime::GetAsSystemTime                          151
// CTime::GetCurrentTime                           152
// CTime::GetDay                                   153
// CTime::GetDayOfWeek                             154
// CTime::GetGmtTm                                 155
// CTime::GetHour                                  156
// CTime::GetLocalTm                               157
// CTime::GetTime                                  158
// CTime::operator +, -                            159
// CTime::operator +=, -=                          160
// CTime Comparison Operators                      161
// CTimeSpan::CTimeSpan                            162
// CTimeSpan::Format                               163
// CTimeSpan::GetDays                              164
// CTimeSpan::GetHours                             165
// CTimeSpan::GetTotalHours                        166
// CTimeSpan::operator +, -                        167
// CTimeSpan::operator +=, -=                      168
// CTimeSpan Comparison Operators                  169
// Current Time: General Purpose Classes           171 - 173
// Elapsed Time: General-Purpose Classes           174
// Formatting Time Values: General-Purpose Classes 175
// Date and Time: Automation Support               176
// Current Time: Automation Classes                177
// Elapsed Time: Automation Classes                178
// Formatting Time: Automation Classes             179
// Implementation of Custom String Management      180 - 181
// Avoidance of Heap Contention                    182
// Basic CString Operations                        183 - 186
// String Data Management                          187
// CString Semantics                               188
// CString Operations Related to C-Style Strings   189 - 191
// Allocating and Releasing Memory for a BSTR      192 - 196
// CString Argument Passing                        197 - 198
// CImage::TransparentBlt                          199
// CStringT::Replace                               200

#include "stdafx.h"
#include "NVC_ATLMFC_Utilities.h"
#include <iostream>

#include "MyDlg.h"
#include "DTDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// The one and only application object

CWinApp theApp;

using namespace std;

void DoCOleDateTimeTests()
{
   {
// <Snippet1>
   COleDateTime mytime(1996, 1, 1, 0, 0, 0); 
// </Snippet1>
   }

   {
// <Snippet2>
   time_t osBinaryTime;   // C run-time time (defined in <time.h>)
   time(&osBinaryTime);   // Get the current time from the 
                        // operating system.

   COleDateTime time1;   // initialized to 00:00am, 30 December 1899
                        // (and m_nStatus is valid!)

   COleDateTime time2 = time1; // Copy constructor
   COleDateTime time3(osBinaryTime);   // from time_t
   COleDateTime time4(1999, 3, 19, 22, 15, 0); // 10:15PM March 19, 1999

   SYSTEMTIME sysTime;   // Win32 time information
   GetSystemTime(&sysTime);

   COleDateTime time5(sysTime);    
// </Snippet2>
   }

   {
// <Snippet3>
   COleDateTime t(1999, 3, 19, 22, 15, 0);

   CString str = t.Format(_T("%A, %B %d, %Y"));
   ASSERT(str == _T("Friday, March 19, 1999"));   
// </Snippet3>
   }

   {
// <Snippet4>
   COleDateTime t = COleDateTime::GetCurrentTime();
   DBTIMESTAMP ts;
   t.GetAsDBTIMESTAMP(ts); // retrieves the time in t into the ts structure
// </Snippet4>
   }

   {
// <Snippet5>
   // example for COleDateTime::GetCurrentTime
   COleDateTime dateTest;
      // dateTest value = midnight 30 December 1899

   dateTest = COleDateTime::GetCurrentTime();
      // dateTest value = current date and time

   // a second example for COleDateTime::GetCurrentTime
   // Since GetCurrentTime() is a static member, you can use it in
   // a constructor:

   COleDateTime t1 = COleDateTime::GetCurrentTime();
   COleDateTime t2(COleDateTime::GetCurrentTime());

   // Or in a normal assignment operator

   COleDateTime t3;
   t3 = COleDateTime::GetCurrentTime();

   // or even in an expression

    if (COleDateTime::GetCurrentTime().GetDayOfWeek() == 6)
       _tprintf(_T("Thank Goodness it is Friday!\n\n"));   
 // </Snippet5>
   }

   {
// <Snippet6>
   COleDateTime t(1999, 3, 19, 22, 15, 0);  // 10:15PM March 19, 1999
   ASSERT(t.GetDay() == 19);
   ASSERT(t.GetMonth() == 3);
   ASSERT(t.GetYear() == 1999);   
// </Snippet6>
   }

   {
// <Snippet7>
   COleDateTime t(1999, 3, 19, 22, 15, 0); // 10:15PM March 19, 1999
   ASSERT(t.GetDayOfWeek() == 6);          // it's a Friday   
// </Snippet7>
   }

   {
// <Snippet8>
   COleDateTime t(1999, 3, 19, 22, 15, 0); // 10:15PM March 19, 1999
   ASSERT(t.GetDayOfYear() == 78);         // 78th day of that year   
// </Snippet8>
   }

   {
// <Snippet9>
   COleDateTime t(1999, 3, 19, 22, 15, 0);  // 10:15PM March 19, 1999
   ASSERT(t.GetSecond() == 0);
   ASSERT(t.GetMinute() == 15);
   ASSERT(t.GetHour() == 22);   
// </Snippet9>
   }

   {
// <Snippet10>
   COleDateTime t;

   // this one is a leap year
   t.SetDateTime(2000, 2, 29, 5, 0, 0);
   ASSERT(t.GetStatus() == COleDateTime::valid);

   // this date isn't valid
   t.SetDateTime(1925, 2, 30, 5, 0, 0);
   ASSERT(t.GetStatus() == COleDateTime::invalid);

   // the only way to set null is to set null!
   t.SetStatus(COleDateTime::null);
   ASSERT(t.GetStatus() == COleDateTime::null);   
// </Snippet10>
   }

   {
   COleDateTime dt;
// <Snippet11>
   // set only the date, time set to midnight
   dt.SetDate(1999, 3, 19);
   ASSERT(dt.GetYear() == 1999);
   ASSERT(dt.GetDay() == 19);
   ASSERT(dt.GetMonth() == 3);
   ASSERT(dt.GetHour() == 0);
   ASSERT(dt.GetMinute() == 0);
   ASSERT(dt.GetSecond() == 0);

   // setting the time only resets the date to 1899!
   dt.SetTime(22, 15, 0);
   ASSERT(dt.GetYear() == 1899);
   ASSERT(dt.GetDay() == 30);
   ASSERT(dt.GetMonth() == 12);
   ASSERT(dt.GetHour() == 22);
   ASSERT(dt.GetMinute() == 15);
   ASSERT(dt.GetSecond() == 0);   
// </Snippet11>
   }

   {
// <Snippet12>
   COleDateTime t1(1999, 3, 19, 22, 15, 0); // 10:15PM March 19, 1999
   COleDateTime t2(1999, 3, 20, 22, 15, 0); // 10:15PM March 20, 1999

   // Subtract 2 COleDateTimes
   COleDateTimeSpan ts = t2 - t1;

   // one day is 24 * 60 * 60 == 86400 seconds
   ASSERT(ts.GetTotalSeconds() == 86400L);

   // Add a COleDateTimeSpan to a COleDateTime.
   ASSERT((t1 + ts) == t2);

   // Subtract a COleDateTimeSpan from a COleDateTime.
   ASSERT((t2 - ts) == t1);   
// </Snippet12>
   }

   {
// <Snippet13>
   COleDateTime dateOne(1995, 3, 15, 12, 0, 0); // 15 March 1995 12 noon
   COleDateTime dateTwo(dateOne);             // 15 March 1995 12 noon
   BOOL b;
   b = dateOne == dateTwo;                    // TRUE
   b = dateOne < dateTwo;                     // FALSE, same value
   b = dateOne > dateTwo;                     // FALSE, same value
   b = dateOne <= dateTwo;                    // TRUE, same value
   b = dateOne >= dateTwo;                    // TRUE, same value   

   dateTwo.SetStatus(COleDateTime::invalid);
   b = dateOne == dateTwo;                    // FALSE, different status
   b = dateOne != dateTwo;                    // TRUE, different status
// </Snippet13>
   }

   {
// <Snippet170>
   VARIANT v = {};
   v.vt = VT_NULL;
   COleDateTime t1(v);
   COleDateTime t2(v);
   t1 = t1 + t2;
// </Snippet170>
   }

   {
// <Snippet177>
   COleDateTime timeNow;
   timeNow = COleDateTime::GetCurrentTime();   
// </Snippet177>
   }

   {
// <Snippet178>
   COleDateTime timeStart, timeEnd;
   timeStart = COleDateTime::GetCurrentTime();
   // ... perform time-consuming task
   timeEnd = COleDateTime::GetCurrentTime();
   COleDateTimeSpan spanElapsed = timeEnd - timeStart;   
// </Snippet178>
   }

   {
// <Snippet179>
   COleDateTime time(1970, 12, 18, 17, 30, 0);
   // 18 December 1970, 5:30 PM
   CString s = time.Format(VAR_DATEVALUEONLY);
   // s contains the date formatted based on 
   // the current national language specifications
   // (locale ID). The time portion is ignored for 
   // formatting purposes in this case.   
// </Snippet179>
   }
}

void DoCOleDateTimeSpanTests()
{
   {
// <Snippet14>
   COleDateTimeSpan spanOne(2.75);          // 2 days and 18 hours
   COleDateTimeSpan spanTwo(2, 18, 0, 0);   // 2 days and 18 hours
   COleDateTimeSpan spanThree(3, -6, 0, 0); // 2 days and 18 hours

   COleDateTimeSpan ts1;               // Uninitialized time value
   COleDateTimeSpan ts2a(ts1);         // Copy constructor
   COleDateTimeSpan ts2b = ts1;         // Copy constructor again
   COleDateTimeSpan ts3(100.0);          // 100 days
   COleDateTimeSpan ts4(0, 1, 5, 12);   // 1 hour, 5 minutes, and 12 seconds
// </Snippet14>
   }

   {
// <Snippet15>
    // get the current time
    COleDateTime tmStart = COleDateTime::GetCurrentTime();

    // waste some time
    CString str;
    ::Sleep(3000);

    // get the current time again
    COleDateTime tmFinish = COleDateTime::GetCurrentTime();

    // find the difference
    COleDateTimeSpan tmSpan = tmFinish - tmStart;

    // tell the user
    str = tmSpan.Format(_T("%S seconds elapsed"));
    _tprintf_s(_T("%s\n"), (LPCTSTR) str);
 // </Snippet15>
   }

   {
// <Snippet16>
   COleDateTimeSpan ts(3, 1, 5, 12); // 3 days, 1 hour, 5 min, and 12 sec
   ASSERT(ts.GetDays() == 3);   
// </Snippet16>
   }

   {
// <Snippet17>
   COleDateTimeSpan ts(3, 1, 5, 12); // 3 days, 1 hour, 5 min, and 12 sec
   ASSERT(ts.GetHours() == 1);
// </Snippet17>
   }

   {
// <Snippet18>
   COleDateTimeSpan ts(3, 1, 5, 12); // 3 days, 1 hour, 5 min, and 12 sec
   ASSERT(ts.GetMinutes() == 5);   
// </Snippet18>
   }

   {
// <Snippet19>
   COleDateTimeSpan ts(3, 1, 5, 12); // 3 days, 1 hour, 5 min, and 12 sec
   ASSERT(ts.GetSeconds() == 12);   
// </Snippet19>
   }

   {
// <Snippet20>
   COleDateTimeSpan ts(3, 1, 5, 12); // 3 days, 1 hour, 5 min, and 12 sec
   ASSERT(ts.GetTotalDays() == 3);
   ASSERT(ts.GetTotalHours() == 73);
   ASSERT(ts.GetTotalMinutes() == 4385);
   ASSERT(ts.GetTotalSeconds() == 263112);   
// </Snippet20>
   }

   {
// <Snippet21>
   COleDateTimeSpan spanOne;
   COleDateTimeSpan spanTwo;
   spanOne.SetDateTimeSpan(0, 2, 45, 0);  // 2 hours and 45 seconds
   spanTwo.SetDateTimeSpan(0, 3, -15, 0); // 2 hours and 45 seconds   
// </Snippet21>
   }

   {
   BOOL m_bStillInSchool = FALSE;
   COleDateTime m_dtDateOfGraduation(2006, 6, 15, 0, 0, 0);
   COleDateTimeSpan m_dtsDaysToGraduation(30, 0, 0, 0);
// <Snippet22>
   // if the person is not still in school, set days to graduation to null
   if (!m_bStillInSchool || m_dtDateOfGraduation.GetStatus() == COleDateTime::null)
      m_dtsDaysToGraduation.SetStatus(COleDateTimeSpan::null);   
// </Snippet22>
   }

   {
// <Snippet23>
   COleDateTimeSpan ts1(3, 1, 5, 12); // 3 days, 1 hour, 5 min, and 12 sec
   COleDateTimeSpan ts2(100.0 / (24 * 3600.0)); // 100 seconds
   COleDateTimeSpan ts3 = ts1 + ts2;
   ASSERT(ts3.GetSeconds() == 52); // 6 mins, 52 secs   
// </Snippet23>
   }

   {
// <Snippet24>
   COleDateTimeSpan ts1(10.0); // 10 days
   COleDateTimeSpan ts2(100.0); // 100 days
   ts2 -= ts1;
   ASSERT(ts2.GetTotalDays() == 90);   
// </Snippet24>
   }

   {
// <Snippet25>
   COleDateTimeSpan spanOne(3, 12, 0, 0); // 3 days and 12 hours
   COleDateTimeSpan spanTwo(spanOne);     // 3 days and 12 hours
   BOOL b;
   b = spanOne == spanTwo;                // TRUE
   b = spanOne < spanTwo;                 // FALSE, same value
   b = spanOne > spanTwo;                 // FALSE, same value
   b = spanOne <= spanTwo;                // TRUE, same value
   b = spanOne >= spanTwo;                // TRUE, same value   

   spanTwo.SetStatus(COleDateTimeSpan::invalid);
   b = spanOne == spanTwo;                // FALSE, different status
   b = spanOne != spanTwo;                // TRUE, different status
// </Snippet25>
   }

   {
// <Snippet26>
   COleDateTimeSpan ts1(100.0);   // one hundred days
   COleDateTimeSpan ts2(110.0);   // ten more days

   ASSERT((ts1 != ts2) && (ts1 < ts2) && (ts1 <= ts2));   
// </Snippet26>
   }
}

void DoCPointTests()
{
   {
// <Snippet27>
   CPoint   ptUndefined;
   CPoint   ptTopLeft(0,0);

   // works from a POINT, too

   POINT   ptHere;
   ptHere.x = 35;
   ptHere.y = 95;

   CPoint   ptMFCHere(ptHere);

   // works from A SIZE

   SIZE   sHowBig;
   sHowBig.cx = 300;
   sHowBig.cy = 10;

   CPoint ptMFCBig(sHowBig);

   // or from a DWORD

   DWORD   dwSize;
   dwSize = MAKELONG(35, 95);

   CPoint ptFromDouble(dwSize);
   ASSERT(ptFromDouble == ptMFCHere);   
// </Snippet27>
   }

   {
// <Snippet28>
   CPoint   ptStart(100, 100);
   ptStart.Offset(35, 35);

   CPoint   ptResult(135, 135);
   ASSERT(ptStart == ptResult);

   // works with POINT, too

   ptStart = CPoint(100, 100);
   POINT pt;

   pt.x = 35;
   pt.y = 35;

   ptStart.Offset(pt);

   ASSERT(ptStart == ptResult);

   // works with SIZE, too

   ptStart = CPoint(100, 100);
   SIZE size;

   size.cx = 35;
   size.cy = 35;

   ptStart.Offset(size);

   ASSERT(ptStart == ptResult);   
// </Snippet28>
   }

   {
// <Snippet29>
   CPoint ptFirst(256, 128);
   CPoint ptTest(256, 128);

   ASSERT(ptFirst == ptTest);

   // works with POINTs, too

   POINT pt;
   pt.x = 256;
   pt.y = 128;

   ASSERT(ptTest == pt);

   // note that pt == ptTest isn't correct!   
// </Snippet29>
   }

   {
// <Snippet30>
   CPoint ptFirst(256, 128);
   CPoint ptTest(111, 333);

   ASSERT(ptFirst != ptTest);

   // works with POINTs, too

   POINT pt;
   pt.x = 333;
   pt.y = 111;

   ASSERT(ptTest != pt);

   // note that pt != ptTest isn't correct!   
// </Snippet30>
   }

   {
// <Snippet31>
   CPoint   ptStart(100, 100);
   CSize   szOffset(35, 35);

   ptStart += szOffset;

   CPoint   ptResult(135, 135);

   ASSERT(ptResult == ptStart);

   // also works on SIZE

   ptStart = CPoint(100, 100);

   SIZE   sz;
   sz.cx = 35;
   sz.cy = 35;

   ptStart += sz;

   ASSERT(ptResult == ptStart);   
// </Snippet31>
   }

   {
// <Snippet32>
   CPoint   ptStart(100, 100);
   CSize   szOffset(35, 35);

   ptStart -= szOffset;

   CPoint   ptResult(65, 65);

   ASSERT(ptResult == ptStart);

   // also works on SIZE

   ptStart = CPoint(100, 100);

   SIZE   sz;
   sz.cx = 35;
   sz.cy = 35;

   ptStart -= sz;

   ASSERT(ptResult == ptStart);   
// </Snippet32>
   }

   {
// <Snippet33>
   CPoint   ptStart(100, 100);
   CSize   szOffset(35, 35);
   CPoint   ptEnd;

   ptEnd = ptStart + szOffset;

   CPoint   ptResult(135, 135);

   ASSERT(ptResult == ptEnd);

   // also works on SIZE

   ptStart = CPoint(100, 100);

   SIZE   sz;
   sz.cx = 35;
   sz.cy = 35;

   ptEnd = ptStart + sz;

   ASSERT(ptResult == ptEnd);   
// </Snippet33>
   }

   {
// <Snippet34>
   // example for CPoint subtraction
   CPoint   ptStart(100, 100);
   CSize   szOffset(35, 35);
   CPoint   ptEnd;

   ptEnd = ptStart - szOffset;

   CPoint   ptResult(65, 65);

   ASSERT(ptResult == ptEnd);

   // also works on SIZE

   ptStart = CPoint(100, 100);

   SIZE   sz;
   sz.cx = 35;
   sz.cy = 35;

   ptEnd = ptStart - sz;

   ASSERT(ptResult == ptEnd);

   // example for CPoint unary operator
   CPoint   pt(35, 35);
   pt = -pt;

   CPoint ptNeg(-35, -35);
   ASSERT(pt == ptNeg);   
// </Snippet34>
   }
}

void DoCRectTests()
{
   {
// <Snippet35>
   // use BottomRight() to retrieve the bottom
   // right point

   CRect rect(210, 150, 350, 900);
   CPoint ptDown;

   ptDown = rect.BottomRight();

   // ptDown is now set to (350, 900)
   ASSERT(ptDown == CPoint(350, 900));

   // or, use BottomRight() to set the bottom
   // right point

   CRect rect2(10, 10, 350, 350);
   CPoint ptLow(180, 180);

   rect2.BottomRight() = ptLow;

   // rect2 is now (10, 10, 180, 180)
   ASSERT(rect2 == CRect(10, 10, 180, 180));   
// </Snippet35>
   }

   {
      CMyDlg dlg;
      dlg.DoModal();
   }

   {
// <Snippet37>
   CRect rectSource(35, 10, 125, 10);
   CRect rectDest;

   rectDest.CopyRect(&rectSource);

   // rectDest is now set to (35, 10, 125, 10)

   RECT rectSource2;
   rectSource2.left = 0;
   rectSource2.top = 0;
   rectSource2.bottom = 480;
   rectSource2.right = 640;

   rectDest.CopyRect(&rectSource2);

   // works against RECT structures, too!
   // rectDest is now set to (0, 0, 640, 480)   
// </Snippet37>
   }

   {
// <Snippet38>
   // default constructor doesn't initialize!
   CRect rectUnknown;

   // four-integers are left, top, right, and bottom
   CRect rect(0, 0, 100, 50);
   ASSERT(rect.Width() == 100);
   ASSERT(rect.Height() == 50);

   // Initialize from RECT stucture
   RECT sdkRect;
   sdkRect.left = 0;
   sdkRect.top = 0;
   sdkRect.right = 100;
   sdkRect.bottom = 50;

   CRect rect2(sdkRect);   // by reference
   CRect rect3(&sdkRect);  // by address
   ASSERT(rect2 == rect);
   ASSERT(rect3 == rect);

   // from a point and a size
   CPoint pt(0, 0);
   CSize sz(100, 50);
   CRect rect4(pt, sz);
   ASSERT(rect4 == rect2);

   // from two points
   CPoint ptBottomRight(100, 50);
   CRect rect5(pt, ptBottomRight);
   ASSERT(rect5 == rect4);   
// </Snippet38>
   }

   {
// <Snippet39>
   CRect rect(10, 10, 50, 50);

   rect.DeflateRect(1, 2);

   ASSERT(rect.left == 11 && rect.right == 49);
   ASSERT(rect.top == 12 && rect.bottom == 48);

   CRect rect2(10, 10, 50, 50);
   CRect rectDeflate(1, 2, 3, 4);

   rect2.DeflateRect(&rectDeflate);
   ASSERT(rect2.left == 11 && rect2.right == 47);
   ASSERT(rect2.top == 12 && rect2.bottom == 46);   
// </Snippet39>
   }

   {
// <Snippet40>
   CRect rect1(35, 150, 10, 25);
   CRect rect2(35, 150, 10, 25);
   CRect rect3(98, 999,  6,  3);

   ASSERT(rect1.EqualRect(rect2));
   ASSERT(!rect1.EqualRect(rect3));

   // works just fine against RECTs, as well

   RECT test;
   test.left = 35;
   test.top = 150;
   test.right = 10;
   test.bottom = 25;

   ASSERT(rect1.EqualRect(&test));   
// </Snippet40>
   }

   {
// <Snippet41>
   CRect rect(20, 30, 80, 70);

   int nHt = rect.Height();

   // nHt is now 40
   ASSERT(nHt == 40);   
// </Snippet41>
   }

   {
// <Snippet42>
   CRect rect(0, 0, 300, 300);
   rect.InflateRect(50, 200);

   // rect is now (-50, -200, 350, 500)
   ASSERT(rect == CRect(-50, -200, 350, 500));   
// </Snippet42>
   }

   {
// <Snippet43>
   CRect rectOne(125,   0, 150, 200);
   CRect rectTwo(0,  75, 350,  95);
   CRect rectInter;

   rectInter.IntersectRect(rectOne, rectTwo);

   // rectInter is now (125, 75, 150, 95)

   ASSERT(rectInter == CRect(125, 75, 150, 95));

   // operator &= can do the same task:

   CRect rectInter2 = rectOne;
   rectInter2 &= rectTwo;
   ASSERT(rectInter2 == CRect(125, 75, 150, 95));   
// </Snippet43>
   }

   {
// <Snippet44>
   CRect rectNone(0, 0, 0, 0);
   CRect rectSome(35, 50, 135, 150);

   ASSERT(rectNone.IsRectEmpty());
   ASSERT(!rectSome.IsRectEmpty());

   CRect rectEmpty(35, 35, 35, 35);
   ASSERT(rectEmpty.IsRectEmpty());   
// </Snippet44>
   }

   {
// <Snippet45>
   CRect rectNone(0, 0, 0, 0);
   CRect rectSome(35, 50, 135, 150);

   ASSERT(rectNone.IsRectNull());
   ASSERT(!rectSome.IsRectNull());

   // note that null means _all_ zeros

   CRect rectNotNull(0, 0, 35, 50);
   ASSERT(!rectNotNull.IsRectNull());   
// </Snippet45>
   }

   {
// <Snippet46>
   CRect rect(0, 0, 100, 100);

   rect.MoveToX(10);

   // rect is now (10, 0, 110, 100);
   ASSERT(rect == CRect(10, 0, 110, 100));   
// </Snippet46>
   }

   {
// <Snippet47>
   CRect rect(0, 0, 100, 100);

   rect.MoveToXY(10, 10);

   // rect is now (10, 10, 110, 110);
   ASSERT(rect == CRect(10, 10, 110, 110));   
// </Snippet47>
   }

   {
// <Snippet48>
   CRect rect(0, 0, 100, 100);

   rect.MoveToY(10);

   // rect is now (0, 10, 100, 110);
   ASSERT(rect == CRect(0, 10, 100, 110));   
// </Snippet48>
   }

   {
// <Snippet49>
   CRect rect1(110, 100, 250, 310);
   CRect rect2(250, 310, 110, 100);

   rect1.NormalizeRect();
   rect2.NormalizeRect();

   // rect1 should be unchanged
   // rect2 becomes (110, 100, 250, 310)

   ASSERT(rect1 == rect2);   
// </Snippet49>
   }

   {
// <Snippet50>
   CRect rect(0, 0, 35, 35);

   rect.OffsetRect(230, 230);

   // rect is now (230, 230, 265, 265)
   ASSERT(rect == CRect(230, 230, 265, 265));   
// </Snippet50>
   }

   {
// <Snippet51>
   CRect rect(5, 5, 100, 100);
   CPoint pt1(35, 50);
   CPoint pt2(125, 298);

   // this is true, because pt1 is inside the rectangle
   ASSERT(rect.PtInRect(pt1));

   // this is NOT true, because pt2 is outside the rectangle
   ASSERT(!rect.PtInRect(pt2));

   // note that the right and the bottom aren't inside
   ASSERT(!rect.PtInRect(CPoint(35, 100)));
   ASSERT(!rect.PtInRect(CPoint(100, 98)));

   // but the top and the left are inside
   ASSERT(rect.PtInRect(CPoint(5, 65)));
   ASSERT(rect.PtInRect(CPoint(88, 5)));

   // and that PtInRect() works against a POINT, too
   POINT pt;
   pt.x = 35;
   pt.y = 50;
   ASSERT(rect.PtInRect(pt));   
// </Snippet51>
   }

   {
// <Snippet52>
   CRect rect;
   rect.SetRect(256, 256, 512, 512);

   ASSERT(rect == CRect(256, 256, 512, 512));   
// </Snippet52>
   }

   {
// <Snippet53>
   CRect rect;
   rect.SetRectEmpty();

   // rect is now (0, 0, 0, 0)
   ASSERT(rect.IsRectEmpty());   
// </Snippet53>
   }

   {
// <Snippet54>
   CRect rect(10, 10, 50, 50);
   CSize sz = rect.Size();
   ASSERT(sz.cx == 40 && sz.cy == 40);   
// </Snippet54>
   }

   {
// <Snippet55>
   RECT   rectOne;
   RECT   rectTwo;

   rectOne.left = 10;
   rectOne.top = 10;
   rectOne.bottom = 100;
   rectOne.right = 100;

   rectTwo.left = 50;
   rectTwo.top = 10;
   rectTwo.bottom = 150;
   rectTwo.right = 150;

   CRect   rectDiff;

   rectDiff.SubtractRect(&rectOne, &rectTwo);

   CRect   rectResult(10, 10, 50, 100);

   ASSERT(rectDiff == rectResult);

   // works for CRect, too, since there is
   // implicit CRect -> LPCRECT conversion

   CRect rect1(10, 10, 100, 100);
   CRect rect2(50, 10, 150, 150);
   CRect rectOut;

   rectOut.SubtractRect(rect1, rect2);
   ASSERT(rectResult == rectOut);   
// </Snippet55>
   }

   {
// <Snippet56>
   CRect   rect1(100,   0, 200, 300);
   CRect   rect2(0, 100, 300, 200);
   CRect   rect3;

   rect3.UnionRect(&rect1, &rect2);

   CRect   rectResult(0, 0, 300, 300);
   ASSERT(rectResult == rect3);   
// </Snippet56>
   }

   {
// <Snippet57>
   CRect rect(20, 30, 80, 70);

   int nWid = rect.Width();

   // nWid is now 60
   ASSERT(nWid == 60);   
// </Snippet57>
   }

   {
// <Snippet59>
   CRect rect(0, 0, 127, 168);
   CRect rect2;

   rect2 = rect;

   ASSERT(rect2 == CRect(0, 0, 127, 168));   
// </Snippet59>
   }

   {
// <Snippet60>
   CRect rect1(35, 150, 10, 25);
   CRect rect2(35, 150, 10, 25);
   CRect rect3(98, 999,  6,  3);

   ASSERT(rect1 == rect2);

   // works just fine against RECTs, as well

   RECT test;
   test.left = 35;
   test.top = 150;
   test.right = 10;
   test.bottom = 25;

   ASSERT(rect1 == test);   
// </Snippet60>
   }

   {
// <Snippet61>
   CRect rect1(35, 150, 10, 25);
   CRect rect2(35, 150, 10, 25);
   CRect rect3(98, 999,  6,  3);

   ASSERT(rect1 != rect3);

   // works just fine against RECTs, as well

   RECT test;
   test.left = 35;
   test.top = 150;
   test.right = 10;
   test.bottom = 25;

   ASSERT(rect3 != test);   
// </Snippet61>
   }

   {
// <Snippet62>
   CRect   rect1(100, 235, 200, 335);
   CPoint   pt(35, 65);
   CRect   rect2(135, 300, 235, 400);

   rect1 += pt;

   ASSERT(rect1 == rect2);   
// </Snippet62>
   }

   {
// <Snippet63>
   CRect   rect1(100, 235, 200, 335);
   CPoint   pt(35, 65);

   rect1 -= pt;

   CRect   rectResult(65, 170, 165, 270);
   ASSERT(rect1 == rectResult);   
// </Snippet63>
   }

   {
// <Snippet64>
   CRect   rect1(100,   0, 200, 300);
   CRect   rect2( 0, 100, 300, 200);

   rect1 |= rect2;

   CRect   rectResult(0, 0, 300, 300);
   ASSERT(rectResult == rect1);   
// </Snippet64>
   }

   {
// <Snippet65>
   CRect   rect1(100, 235, 200, 335);
   CPoint   pt(35, 65);
   CRect   rect2;

   rect2 = rect1 + pt;

   CRect   rectResult(135, 300, 235, 400);

   ASSERT(rectResult == rect2);   
// </Snippet65>
   }

   {
// <Snippet66>
   CRect   rect1(100, 235, 200, 335);
   CPoint   pt(35, 65);
   CRect   rect2;

   rect2 = rect1 - pt;

   CRect   rectResult(65, 170, 165, 270);

   ASSERT(rect2 == rectResult);   
// </Snippet66>
   }

   {
// <Snippet67>
   CRect   rect1(100,   0, 200, 300);
   CRect   rect2( 0, 100, 300, 200);
   CRect   rect3;

   rect3 = rect1 & rect2;

   CRect   rectResult(100, 100, 200, 200);
   ASSERT(rectResult == rect3);   
// </Snippet67>
   }

   {
// <Snippet68>
   CRect   rect1(100,   0, 200, 300);
   CRect   rect2( 0, 100, 300, 200);
   CRect   rect3;

   rect3 = rect1 | rect2;

   CRect   rectResult(0, 0, 300, 300);
   ASSERT(rectResult == rect3);   
// </Snippet68>
   }
}

#pragma warning(push)
#pragma warning(disable: 4996) // C4996: func was declared deprecated

void DoCSimpleStringTTests()
{
   CAtlString basestr;
   IAtlStringMgr* pMgr;
   pMgr = basestr.GetManager();

   {
// <Snippet75>
   CSimpleString str1(pMgr), str2(pMgr);

   str1.SetString(_T("Soccer is"));
   str2.SetString(_T(" an elegant game"));

   str1.Append(str2);
   ASSERT(_tcscmp(str1, _T("Soccer is an elegant game")) == 0);
// </Snippet75>
   }

   {
// <Snippet76>
   CSimpleString str(_T("xxxxxxxxxxxxxxxxxxx"), 20, pMgr);
   TCHAR* pszSrc = _T("Hello world!");

   _tprintf_s(_T("%s\n"), str);

   str.CopyChars(str.GetBuffer(), pszSrc, 12);
   _tprintf_s(_T("%s\n"), str);
// </Snippet76>
   }

   {
// <Snippet77>
   CSimpleString s1(pMgr);                   // Empty string
   CSimpleString s2(_T("cat"), pMgr);        // From a C string literal

   CSimpleString s3(s2);                     // Copy constructor
   CSimpleString s4(s2 + _T(" ") + s3);      // From a string expression

   CSimpleString s5(_T("xxxxxx"), 6, pMgr);  // s5 = "xxxxxx"   
// </Snippet77>
   }

   {
// <Snippet78>
   CSimpleString s(_T("abc"), pMgr);
   s.Empty();
   _ASSERT(s.GetLength() == 0);   
// </Snippet78>
   }

   {
// <Snippet79>
   CAtlString basestr;
   IAtlStringMgr* pMgr;

   pMgr= basestr.GetManager();
   ASSERT(pMgr != NULL);

   // Create a CSimpleString with 28 characters
   CSimpleString str(_T("Many sports are fun to play."), 28, pMgr);
   _tprintf_s(_T("Alloc length is %d, String length is %d\n"),
      str.GetAllocLength(), str.GetLength());

   // Assigning a smaller string won't cause CSimpleString to free its
   // memory, because it assumes the string will grow again anyway.
   str = _T("Soccer is best!");
   _tprintf_s(_T("Alloc length is %d, String length is %d\n"),
      str.GetAllocLength(), str.GetLength());

   // This call forces CSimpleString to release the extra
   // memory it doesn't need.
   str.FreeExtra();
   _tprintf_s(_T("Alloc length is %d, String length is %d\n"),
      str.GetAllocLength(), str.GetLength());
// </Snippet79>
   }

   {
// <Snippet80>
   CSimpleString s(_T("abcdef"), pMgr);
   ASSERT(s.GetAt(2) == _T('c'));   
// </Snippet80>
   }

   {
// <Snippet81>
   CSimpleString s(_T("abcd"), pMgr);

   LPTSTR pBuffer = s.GetBuffer(10);
   int    sizeOfBuffer = s.GetAllocLength();

   // Directly access CSimpleString buffer
   _tcscpy_s(pBuffer, sizeOfBuffer, _T("Hello")); 
   ASSERT(_tcscmp(s, _T("Hello")) == 0);

   s.ReleaseBuffer();   
// </Snippet81>
   }

   {
// <Snippet82>
   CSimpleString str(pMgr);
   LPTSTR pstr = str.GetBufferSetLength(3);
   pstr[0] = _T('C');
   pstr[1] = _T('u');
   pstr[2] = _T('p');

   // No need for trailing zero or call to ReleaseBuffer()
   // because GetBufferSetLength() set it for us.

   str += _T(" soccer is best!");
   ASSERT(_tcscmp(str, _T("Cup soccer is best!")) == 0);   
// </Snippet82>
   }

   {
// <Snippet83>
   CSimpleString str(pMgr);

   str += _T("Cup soccer is best!");
   _tprintf_s(_T("%s"), str.GetString());
// </Snippet83>
   }

   {
// <Snippet84>
   CSimpleString s(pMgr);
   ASSERT(s.IsEmpty());   
// </Snippet84>
   }

   {
// <Snippet85>
   CSimpleString str(_T("Hello"), pMgr);
   TCHAR ch;

   str.LockBuffer();
   ch = str.GetAt(2);
   _tprintf_s(_T("%c"), ch);
   str.UnlockBuffer();
// </Snippet85>
   }

   {
// <Snippet86>
   CSimpleString str(pMgr);

   _tprintf_s(_T("Allocated length: %d\n"), str.GetAllocLength());
   str.Preallocate(100);
   _tprintf_s(_T("Allocated length: %d\n"), str.GetAllocLength());
// </Snippet86>
   }

   {
// <Snippet87>
   const int bufferSize = 1024;
   CSimpleString s(_T("abc"), pMgr);

   LPTSTR p = s.GetBuffer(bufferSize);
   _tcscpy_s(p, bufferSize , _T("abc"));   // use the buffer directly
   ASSERT(s.GetLength() == 3); // String length = 3
   s.ReleaseBuffer();  // Surplus memory released, p is now invalid.
   ASSERT(s.GetLength() == 3); // Length still 3
// </Snippet87>
   }

   {
// <Snippet88>
   CSimpleString s(_T("abcdef"), pMgr);

   s.SetAt(1, _T('a'));
   ASSERT(_tcscmp(s, _T("aacdef")) == 0);   
// </Snippet88>
   }

   {
   IAtlStringMgr* pCustomMgr = pMgr;
// <Snippet89>
   CSimpleString s(pMgr);
   s.SetManager(pCustomMgr);   
// </Snippet89>
   }

   {
// <Snippet90>
   CSimpleString s(_T("abcdef"), pMgr);
   ASSERT(_tcscmp(s, _T("abcdef")) == 0);

   s.SetString(_T("Soccer"), 6);
   ASSERT(_tcscmp(s, _T("Soccer")) == 0);   
// </Snippet90>
   }

   {
// <Snippet91>
   ASSERT(CSimpleString::StringLength(_T("soccer")) == 6);
// </Snippet91>
   }

   {
// <Snippet92>
   CSimpleString str(_T("abcdefghi"), pMgr);

   _tprintf_s(_T("Allocated length: %d\n"), str.GetLength());
   _tprintf_s(_T("Contents: %s\n"), str);

   str.Truncate(4);
   _tprintf_s(_T("Allocated length: %d\n"), str.GetLength());
   _tprintf_s(_T("Contents: %s\n"), str);
// </Snippet92>
   }

   {
// <Snippet93>
   CSimpleString str(_T("abc"), pMgr);
   ASSERT(_tcscmp((str += _T("def")), _T("abcdef")) == 0);   
// </Snippet93>
   }

   {
// <Snippet94>
   CSimpleString s1(pMgr), s2(pMgr);  // Empty CSimpleStringT objects

   s1 = _T("cat");            // s1 = "cat"
   ASSERT(_tcscmp(s1, _T("cat")) == 0);

   s2 = s1;               // s1 and s2 each = "cat"
   ASSERT(_tcscmp(s2, _T("cat")) == 0);

   s1 = _T("the ") + s1;      // Or expressions
   ASSERT(_tcscmp(s1, _T("the cat")) == 0);

   s1 = _T("x");              // Or just individual characters
   ASSERT(_tcscmp(s1, _T("x")) == 0);   
// </Snippet94>
   }

   {
// <Snippet95>
   CSimpleString s(_T("abc"), pMgr);
   ASSERT(s[1] == _T('b'));   
// </Snippet95>
   }

   {
// <Snippet96>
   // If the prototype of a function is known to the compiler,
   // the PCXSTR cast operator may be invoked implicitly.

   CSimpleString strSports(L"Soccer is Best!", pMgr);
   WCHAR sz[1024];

   wcscpy_s(sz, strSports);

   // If the prototype isn't known or is a va_arg prototype,
   // you must invoke the cast operator explicitly. For example,
   // the va_arg part of a call to swprintf_s() needs the cast:

   swprintf_s(sz, 1024, L"I think that %s!\n", (PCWSTR)strSports);

   // While the format parameter is known to be an PCXSTR and
   // therefore doesn't need the cast:

   swprintf_s(sz, 1024, strSports);

   // Note that some situations are ambiguous. This line will
   // put the address of the strSports object to stdout:

   wcout << strSports;

   // while this line will put the content of the string out:

   wcout << (PCWSTR)strSports;   
// </Snippet96>
   }
}

#pragma warning(pop)

void DoCSizeTests()
{
   {
// <Snippet97>
   CSize szEmpty;
   CSize szPointA(10, 25);

   SIZE sz;
   sz.cx = 10;
   sz.cy = 25;
   CSize szPointB(sz);

   POINT pt;
   pt.x = 10;
   pt.y = 25;
   CSize szPointC(pt);

   CPoint ptObject(10, 25);
   CSize szPointD(ptObject);   

   DWORD dw = MAKELONG(10, 25);
   CSize szPointE(dw);

   ASSERT(szPointA == szPointB);
   ASSERT(szPointB == szPointC);
   ASSERT(szPointC == szPointD);
   ASSERT(szPointD == szPointE);   
// </Snippet97>
   }

   {
// <Snippet98>
   CSize sz1(135, 135);
   CSize sz2(135, 135);

   ASSERT(sz1 == sz2);
// </Snippet98>
   }

   {
// <Snippet99>
   CSize sz1(222, 222);
   CSize sz2(111, 111);

   ASSERT(sz1 != sz2);   
// </Snippet99>
   }

   {
// <Snippet100>
   CSize sz1(100, 100);
   CSize sz2(50,  25);

   sz1 += sz2;

   CSize szResult(150, 125);
   ASSERT(sz1 == szResult);

   // works with SIZE, too

   sz1 = CSize(100, 100);
   SIZE sz3;
   sz3.cx = 50;
   sz3.cy = 25;

   sz1 += sz3;
   ASSERT(sz1 == szResult);   
// </Snippet100>
   }

   {
// <Snippet101>
   CSize sz1(100, 100);
   CSize sz2(50,  25);

   sz1 -= sz2;

   CSize szResult(50, 75);
   ASSERT(sz1 == szResult);

   // works with SIZE, too

   sz1 = CSize(100, 100);
   SIZE sz3;
   sz3.cx = 50;
   sz3.cy = 25;

   sz1 -= sz3;
   ASSERT(sz1 == szResult);   
// </Snippet101>
   }

   {
// <Snippet102>
   CSize sz1(100, 100);
   CSize sz2(50,  25);
   CSize szOut;

   szOut = sz1 + sz2;

   CSize szResult(150, 125);
   ASSERT(szOut == szResult);

   // works with SIZE, too

   sz1 = CSize(100, 100);
   SIZE sz3;
   sz3.cx = 50;
   sz3.cy = 25;

   szOut = sz1 + sz3;
   ASSERT(szOut == szResult);   
// </Snippet102>
   }

   {
// <Snippet103>
   CSize sz1(100, 100);
   CSize sz2(50,  25);
   CSize szOut;

   szOut = sz1 - sz2;

   CSize szResult(50, 75);
   ASSERT(szOut == szResult);

   // works with SIZE, too

   sz1 = CSize(100, 100);
   SIZE sz3;
   sz3.cx = 50;
   sz3.cy = 25;

   szOut = sz1 - sz3;
   ASSERT(szOut == szResult);   
// </Snippet103>
   }
}

// <Snippet119>
void WriteString(LPCTSTR pstrFormat, ...)
{
    CString str;

    // format and write the data you were given
    va_list args;
    va_start(args, pstrFormat);

    str.FormatV(pstrFormat, args);
    va_end(args);

    _tprintf_s(str);
    return;
}
// </Snippet119>

// <Snippet180>
// Declare a thread-safe, growable, private heap with initial size 0:
CWin32Heap g_stringHeap(0, 0, 0);

// Declare a string manager that uses the private heap:
CAtlStringMgr g_stringMgr(&g_stringHeap); 
// </Snippet180>

// <Snippet181>
void PrintPowers(int nBase)
{
   int n = 1;
   for(int nPower = 0; nPower < 10; nPower++)
   {
      // Use the private string manager, instead of the default:
      CString strPower(&g_stringMgr);

      strPower.Format(_T("%d"), n);
      _tprintf_s(_T("%s\n"), strPower);
      n *= nBase;
   }
}
// </Snippet181>

// <Snippet182>
DWORD WINAPI WorkerThreadProc(void* pBase)
{
   // Declare a non-thread-safe heap just for this thread:
   CWin32Heap stringHeap(HEAP_NO_SERIALIZE, 0, 0);

   // Declare a string manager that uses the thread's heap:
   CAtlStringMgr stringMgr(&stringHeap);

   int nBase = *((int*)pBase);
   int n = 1;
   for(int nPower = 0; nPower < 10; nPower++)
   {
      // Use the thread's string manager, instead of the default:
      CString strPower(&stringMgr);

      strPower.Format(_T("%d"), n);
      _tprintf_s(_T("%s\n"), strPower);
      n *= nBase;
   }

   return(0);
}
// </Snippet182>

class Fakey
{
public:
   Fakey() {}

// <Snippet191>
   void AddCustomer(const CString& name, const CString& address, 
      const CString& comment = _T(""));
// </Snippet191>
};

void Fakey::AddCustomer(const CString& name, const CString& address, 
      const CString& comment)
{
   TRACE(_T("name: %s, address %s, comment %s\n"), name, address, comment);
}

class CMyWebBrowser
{
public:
   CMyWebBrowser() : m_bstr(NULL) {}
   ~CMyWebBrowser() { ::SysFreeString(m_bstr); }

   BSTR m_bstr;

   HRESULT put_StatusText(BSTR bstr);
   HRESULT get_StatusText(BSTR* pbstr);
};

// <Snippet192>
HRESULT CMyWebBrowser::put_StatusText(BSTR bstr)
// </Snippet192>
{
   HRESULT hr = S_OK;

   if (NULL != m_bstr)
   {
      ::SysFreeString(m_bstr);
      m_bstr = NULL;
   }

   if (NULL != bstr)
   {
      m_bstr = ::SysAllocString(bstr);
      if (NULL == m_bstr)
      {
         hr = E_OUTOFMEMORY;
      }
   }

   return hr;
}

// <Snippet194>
HRESULT CMyWebBrowser::get_StatusText(BSTR* pbstr)
// </Snippet194>
{
   HRESULT hr = S_OK;

   if (NULL == pbstr)
   {
      hr = E_POINTER;   
   }
   *pbstr = NULL;

   if (NULL != m_bstr)
   {
      *pbstr = ::SysAllocString(m_bstr);
      if (NULL == *pbstr)
      {
         hr = E_OUTOFMEMORY;      
      }
   }

   return hr;
}

// Example shows using MFC's 
// CString::AllocSysString

class CMyClass
{
public:
   CMyClass() : m_str(_T("I'm a string!")) {}

   CString m_str;

   HRESULT get_StatusText(BSTR* pbstr);
};

// <Snippet196>
HRESULT CMyClass::get_StatusText(BSTR* pbstr)
{
   try
   {
      //m_str is a CString in your class
      *pbstr = m_str.AllocSysString();
   }
   catch (...)
   {
      return E_OUTOFMEMORY;
   }

   // The client is now responsible for freeing pbstr.
   return(S_OK);
}
// </Snippet196>

// <Snippet197>
class CName : public CObject
{
private:
   CString m_firstName;
   TCHAR m_middleInit;
   CString m_lastName;
public:
   CName() {}
   void SetData(LPCTSTR fn, const TCHAR mi, LPCTSTR ln)
   {
      m_firstName = fn;
      m_middleInit = mi;
      m_lastName = ln;
   }
   void GetData(CString& cfn, TCHAR& mi, CString& cln)
   {
      cfn = m_firstName;
      mi = m_middleInit;
      cln = m_lastName;
   }
   CString GetLastName()
   {
      return m_lastName;
   }
};
// </Snippet197>

void DoCStringTests()
{
   {
// <Snippet104>
   {
      CString str1 = _T("Hello world");  // Allocates new CStringData
   }
   // str1 is deleted when it goes out of scope, so it releases its string data   
// </Snippet104>
   }

   {
// <Snippet105>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString str(_T("This is a test string!"));
   BSTR bstr = str.AllocSysString();

   // bstr now contains "This is a test string!", and can be
   // passed to any OLE function requiring a BSTR.
   // Normally, if you pass the BSTR, you will
   // need to free the string after returning from the function call.   
// </Snippet105>
   bstr;
   }

   {
// <Snippet106>
   // OEM character 252 on most IBM-compatible computers in
   // Western countries/regions is superscript n, as in 2^n.
   // Converting it to the ANSI English charset results in a
   // normal character 'n', which is the closest possible
   // representation.

   CStringT<char, StrTraitATL<char, ChTraitsCRT<char>>> str((WCHAR)252);
   str.OemToAnsi();
   ASSERT(str[0] == 'n');

   // Be aware that in OEM to ANSI conversion the 'n'
   // from the previous result cannot be converted back to
   // a supsercript n because the system does not know what
   // the character's value truly was.
   str.AnsiToOem();
   ASSERT(str[0] != 252);
   ASSERT(str[0] == 'n');   
// </Snippet106>
   }

   {
// <Snippet107>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str = _T("Some data:\t");

   str.AppendFormat(_T("X value = %.2f\n"), 12345.12345);
   _tprintf_s(_T("%s"), (LPCTSTR) str);
// </Snippet107>
   }

   {
// <Snippet109>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str1 = _T("Co-Op");
   CAtlString str2 = _T("con");

   int n;

   // Collation uses language rules, such as ignoring dashes.
   // NoCase version ignores case.
   n = str1.CollateNoCase(str2);
   ASSERT(n < 0);

   // Comparison is a strict ASCII comparison with no language rules
   // but still ignores case in NoCase version.
   n = str1.CompareNoCase(str2);
   ASSERT(n < 0);   
// </Snippet109>
   }

   {
// <Snippet110>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s1(_T("abc"));
   CAtlString s2(_T("abd"));
   ASSERT(s1.Compare(s2) < 0);    // Compare with another CAtlString.
   ASSERT(s1.Compare(_T("abe")) < 0); // Compare with LPTSTR string.   
// </Snippet110>
   }

   {
// <Snippet111>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s1(_T("abc"));
   CAtlString s2(_T("ABD"));
   ASSERT(s1.CompareNoCase(s2) < 0); // Compare with a CAtlString.
   ASSERT(s1.CompareNoCase(_T("ABE")) < 0); // Compare with LPTSTR string.   
// </Snippet111>
   }

   {
// <Snippet112>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s1;                    // Empty string
   CAtlString s2(_T("cat"));           // From a C string literal
   CAtlString s3 = s2;               // Copy constructor
   CAtlString s4(s2 + _T(" ") + s3);   // From a string expression

   CAtlString s5(_T('x'));             // s5 = "x"
   CAtlString s6(_T('x'), 6);          // s6 = "xxxxxx"

   CAtlString s7((LPCSTR)ID_FILE_NEW); // s7 = "Create a new document"

   VARIANT var;
   V_VT(&var) = VT_BSTR;
   V_BSTR(&var) = ::SysAllocString(L"Football is a fun sport.");
   CAtlString s8(var); // s8 = "Football is a fun sport."

   // The following statement does not call the assignment operator.
   // The compiler considers the following statement equivalent to
   // CAtlString city("Paris")
   CAtlString city = _T("Paris");   
// </Snippet112>
   }

   {
// <Snippet113>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str(_T("Soccer is best, but hockey is quicker!"));
   _tprintf_s(_T("Before: %s\n"), (LPCTSTR)str);

   int n = str.Delete(6, 3);
   _tprintf_s(_T("After: %s\n"), (LPCTSTR)str);
   ASSERT(n == str.GetLength());
// </Snippet113>
   }

   {
// <Snippet114>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("abcdef"));
   ASSERT(s.Find(_T('c')) == 2);
   ASSERT(s.Find(_T("de")) == 3);

   CAtlString str(_T("The waves are still"));
   int n = str.Find(_T('e'), 5);
   ASSERT(n == 7);   
// </Snippet114>
   }

   {
// <Snippet115>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("abcdef"));
   ASSERT(s.FindOneOf(_T("xd")) == 3); // 'd' is first match   
// </Snippet115>
   }

   {
// <Snippet116>
   CAtlString str = _T("Some Data");
   str.Format(_T("%s%d"), str, 123);   
   // Attention: str is also used in the parameter list.   
// </Snippet116>
   }

   {
// <Snippet117>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString str;

   str.Format(_T("Floating point: %.2f\n"), 12345.12345);
   _tprintf_s(_T("%s"), (LPCTSTR) str);

   str.Format(_T("Left-justified integer: %.6d\n"), 35);
   _tprintf_s(_T("%s"), (LPCTSTR) str);
// </Snippet117>
   }

   {
// <Snippet118>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str;
   int nAsked = 5;
   int nAgree = 4;

   str.FormatMessage(_T("%1!d! of %2!d! writers agree: Soccer is %3%!"), 
      nAgree, nAsked, _T("Best"));
   ASSERT(str == _T("4 of 5 writers agree: Soccer is Best!"));   
// </Snippet118>
   }

   {
// <Snippet120>
   // Call the above WriteString function.
   WriteString(_T("%d error(s) found in %d line(s)"), 10, 1351);
// </Snippet120>
   }

   {
// <Snippet121>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString EnvStr;

   EnvStr.GetEnvironmentVariable(_T("TEMP"));
   _tprintf_s(_T("Current value of TEMP variable: %s\n"), EnvStr);
// </Snippet121>
   }

   {
// <Snippet122>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str(_T("SoccerBest"));
   int n = str.Insert(6, _T("is "));
   ASSERT(n == str.GetLength());
   _tprintf_s(_T("1: %s\n"), (LPCTSTR) str);

   n = str.Insert(6, _T(' '));
   ASSERT(n == str.GetLength());
   _tprintf_s(_T("2: %s\n"), (LPCTSTR) str);

   n = str.Insert(55, _T('!'));
   ASSERT(n == str.GetLength());
   _tprintf_s(_T("3: %s\n"), (LPCTSTR) str);
// </Snippet122>
   }

   {
// <Snippet123>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("abcdef"));
   ASSERT(s.Left(2) == _T("ab"));   
// </Snippet123>
   }

   {
// <Snippet124>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s;
   s.LoadString(IDS_APP_TITLE);   
// </Snippet124>
   }

   {
// <Snippet125>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("ABC"));

   ASSERT(s.MakeLower() == _T("abc"));   
// </Snippet125>
   }

   {
// <Snippet126>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("abc"));

   ASSERT(s.MakeReverse() == _T("cba"));   
// </Snippet126>
   }

   {
// <Snippet127>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("abc"));

   ASSERT(s.MakeUpper() == _T("ABC"));   
// </Snippet127>
   }

   {
// <Snippet128>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("abcdef"));
   ASSERT(s.Mid(2, 3) == _T("cde"));   
// </Snippet128>
   }

   {
// <Snippet129>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str(_T("This is a test."));
   int n = str.Remove(_T('t'));
   ASSERT(n == 2);
   ASSERT(str == _T("This is a es."));   
// </Snippet129>
   }

   {
// <Snippet200>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString strBang(_T("Everybody likes epee fencing"));
   int n = strBang.Replace(_T("epee"), _T("foil"));
   ASSERT(n == 1);   
// </Snippet200>
   }

   {
// <Snippet130>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("abcabc"));
   ASSERT(s.ReverseFind(_T('b')) == 4);   
// </Snippet130>
   }

   {
// <Snippet131>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("abcdef"));
   ASSERT(s.Right(2) == _T("ef"));   
// </Snippet131>
   }

   {
// <Snippet132>
   BSTR bstr = ::SysAllocString(L"Golf is fun!");

   // create a CAtlString and change the OLE
   // string to the contents of the BSTR
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str(_T("Soccer is best!"));
   BSTR bstr2 = str.SetSysString(&bstr);

   // Now, both bstr and bstr2 reference a single instance of
   // the "Soccer" string. The "Golf" string has been freed.
   ASSERT(bstr2 == bstr);   
// </Snippet132>
   }

   {
// <Snippet133>
   // The string can be delimited by a semicolon(;),
   //  a comma(,), a period(.), a dash(-),
   // or an apostrophe(').
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString src(_T("World Cup '98"));

   _tprintf_s(_T("%s"),src.SpanExcluding(_T(";,.-'")));
// </Snippet133>
   }

   {
// <Snippet134>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str(_T("cabbage"));
   CAtlString res = str.SpanIncluding(_T("abc"));
   ASSERT(res == _T("cabba"));
   res = str.SpanIncluding(_T("xyz"));
   ASSERT(res.IsEmpty());   
// </Snippet134>
   }

   {
// <Snippet135>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString str(_T("%First Second#Third"));
   CAtlString resToken;
   int curPos = 0;

   resToken= str.Tokenize(_T("% #"),curPos);
   while (resToken != _T(""))
   {
      _tprintf_s(_T("Resulting token: %s\n"), resToken);
      resToken = str.Tokenize(_T("% #"), curPos);
   };   
// </Snippet135>
   }

   {
// <Snippet136>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str;
   str = _T("******Soccer is best!?!?!?!?!");

   _tprintf_s(_T("Before: \"%s\"\n"), (LPCTSTR)str);
   _tprintf_s(_T("After : \"%s\"\n"), (LPCTSTR)str.Trim(_T("?!*")));

   // Output:
   // --------------------------
   // Before: ******Soccer is best!?!?!?!?!
   // After: Soccer is best
// </Snippet136>
   }

   {
// <Snippet137>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str;
   str = _T("\t\t   ****Soccer is best!");

   _tprintf_s(_T("Before: \"%s\"\n"), (LPCTSTR)str);
   _tprintf_s(_T("After: \"%s\"\n"), (LPCTSTR)str.TrimLeft(_T("\t *")));
   
   // Output:
   // --------------------------
   // Before:		****Soccer is best!
   // After: Soccer is best!
// </Snippet137>
   }

   {
// <Snippet138>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str;
   str = _T("Soccer is best!?!?!?!?!");

   _tprintf_s(_T("Before: \"%s\"\n"), (LPCTSTR)str);
   _tprintf_s(_T("After : \"%s\"\n"), (LPCTSTR)str.TrimRight(_T("?!")));
   
   // Output:
   // --------------------------
   // Before: Soccer is best!?!?!?!?!
   // After: Soccer is best
// </Snippet138>
   }

   {
// <Snippet139>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s1, s2;        // Empty CAtlString objects

   s1 = _T("cat");            // s1 = "cat"
   s2 = s1;                  // s1 and s2 each = "cat"
   s1 = _T("the ") + s1;      // Or expressions
   s1 = _T('x');              // Or just individual characters   
// </Snippet139>
   }

   {
// <Snippet140>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString s1(_T("dog ")), s2(_T(" awake")), s3;  // Empty CAtlString objects

   s1= _T("The ") + s1;
   s3= s1 + _T('i');
   s3= s3 + _T('s');
   s3= s3 + s2;
   ASSERT(s3 == _T("The dog is awake"));   
// </Snippet140>
   }

   {
// <Snippet141>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("abc"));
   ASSERT((s += _T("def")) == _T("abcdef"));   
// </Snippet141>
   }

   {
// <Snippet142>
   // typedef CStringT< TCHAR, StrTraitATL< TCHAR > > CAtlString;
   CAtlString s1(_T("dog")), s2(_T("f")), s3(_T("dog"));

   ASSERT(s1 == _T("dog"));
   ASSERT(s2 == _T('f'));
   ASSERT(s1 == s3);   
// </Snippet142>
   }

   {
// <Snippet143>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString s1(_T("cat")), s2(_T("f")), s3(_T("horse"));

   ASSERT(s1 != _T("dog"));
   ASSERT(s2 != _T('t'));
   ASSERT(s1 != s2);   
// </Snippet143>
   }

   {
// <Snippet144>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString s1(_T("cat")), s2(_T("cats")), s3(_T("dogs"));

   ASSERT(s1 < _T("dog"));
   ASSERT(s1 < _T("cats"));
   ASSERT(s2 < _T("cats and dogs"));
   ASSERT(s2 < s3);   
// </Snippet144>
   }

   {
// <Snippet145>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString s1(_T("cat")), s2(_T("cats")), s3(_T("dogs"));
   ASSERT(_T("dog") > s1);
   ASSERT(_T("cats") > s1);
   ASSERT(_T("cats and dogs") > s2);
   ASSERT(s3 > s2);   
// </Snippet145>
   }

   {
// <Snippet146>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString s1(_T("cat")), s2(_T("cats")), s3(_T("dogs"));

   ASSERT(s1 <= _T("dog"));
   ASSERT(s1 <= _T("cat"));
   ASSERT(s3 <= _T("dogs and cats"));
   ASSERT(s2 <= s3);   
// </Snippet146>
   }

   {
// <Snippet147>
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString s1(_T("cat")), s2(_T("cats")), s3(_T("dogs"));

   ASSERT(_T("dog") >= s1);
   ASSERT(_T("cats and dogs") >= s2);
   ASSERT(s3 >= s2);   
// </Snippet147>
   }

   PrintPowers(13);

   {
   DWORD dw = 15;
   ::CreateThread(NULL, 0, &WorkerThreadProc, &dw, 0, NULL);
   Sleep(2000);
   }

   CDTDlg dd;
   dd.DoModal();

   {
// <Snippet183>
   CString myString = _T("This is a test");   
// </Snippet183>

// <Snippet184>
   CString oldString = _T("This is a test");
   CString newString = oldString;
// </Snippet184>

// <Snippet185>
   CString s1 = _T("This ");        // Cascading concatenation
   s1 += _T("is a ");
   CString s2 = _T("test");
   CString message = s1 + _T("big ") + s2;  
   // Message contains "This is a big test".
// </Snippet185>
   }

   {
// <Snippet186>
   CString s1(_T("Tom"));
   CString s2(_T("Jerry"));
   ASSERT(s2 < s1);
// </Snippet186>
   }

   {
// <Snippet187>
   CString strName = _T("Name");   
// </Snippet187>
   }

   {
// <Snippet188>
   CString s1, s2;
   s1 = s2 = _T("hi there");

   ASSERT(s1 == s2); // they are equal

   s1.MakeUpper();  // Does not modify s2
   ASSERT(s2[0] == _T('h')); // s2 is still "hi there"   
// </Snippet188>
   }

   {
// <Snippet189>
   CString theString(_T("This is a test"));
   int sizeOfString = (theString.GetLength() + 1);
   LPTSTR lpsz = new TCHAR[sizeOfString];
   _tcscpy_s(lpsz, sizeOfString, theString);
   //... modify lpsz as much as you want   
// </Snippet189>
   delete [] lpsz;
   }

   {
// <Snippet190>
   CString kindOfFruit = _T("bananas");
   int howmany = 25;
   _tprintf_s(_T("You have %d %s\n"), howmany, (LPCTSTR)kindOfFruit);    
// </Snippet190>
   }

   {
   CString name(_T("Bill"));
   CString address(_T("Sir"));
   CString comment(_T("whimsical"));
   Fakey f;
   f.AddCustomer(name, address, comment);
   }

   {
   CMyWebBrowser* pBrowser = new CMyWebBrowser();
      {
// <Snippet193>
      // shows using the Win32 function 
      // to allocate memory for the string: 
      BSTR bstrStatus = ::SysAllocString(L"Some text");
      if (bstrStatus != NULL)
      {
         pBrowser->put_StatusText(bstrStatus);
         // Free the string:
         ::SysFreeString(bstrStatus);
      }
// </Snippet193>
      }

      {
// <Snippet195>
      BSTR bstrStatus;
      pBrowser->get_StatusText(&bstrStatus);

      // shows using the Win32 function 
      // to free the memory for the string: 
      ::SysFreeString(bstrStatus);
// </Snippet195>
      }

      delete pBrowser;
   }

   {
   CMyClass mc;
   BSTR bstr;
   mc.get_StatusText(&bstr);
   ::SysFreeString(bstr);
   }

   {
// <Snippet198>
   CName name;
   CString last, first;
   TCHAR middle;
   name.SetData(_T("John"), 'Q', _T("Public"));
   ASSERT(name.GetLastName() == _T("Public"));
   name.GetData(first, middle, last);
   ASSERT((first == _T("John")) && (last == _T("Public")));
// </Snippet198>
   }
}


void DoCTimeTests()
{
   {
// <Snippet148>
   time_t osBinaryTime;  // C run-time time (defined in <time.h>)
   time(&osBinaryTime) ;  // Get the current time from the 
                            // operating system.
   CTime time1; // Empty CTime. (0 is illegal time value.)
   CTime time2 = time1; // Copy constructor.
   CTime time3(osBinaryTime);  // CTime from C run-time time
   CTime time4(1999, 3, 19, 22, 15, 0); // 10:15PM March 19, 1999   
// </Snippet148>
   }

   {
// <Snippet149>
   CTime t(1999, 3, 19, 22, 15, 0); 
   // 10:15 PM March 19, 1999
   CString s = t.Format(_T("%A, %B %d, %Y"));
   ATLASSERT(s == _T("Friday, March 19, 1999"));   
// </Snippet149>
   }

   {
// <Snippet150>
   CTime t = CTime::GetCurrentTime();
   DBTIMESTAMP ts;
   t.GetAsDBTIMESTAMP(ts); // Retrieves the time in t into the ts structure
// </Snippet150>
   }

   {
// <Snippet151>
   // Convert CTime to FILETIME
   CTime time(CTime::GetCurrentTime());
   SYSTEMTIME timeDest;
   time.GetAsSystemTime(timeDest);
   FILETIME fileTime;
   ::SystemTimeToFileTime(&timeDest, &fileTime);   
// </Snippet151>
   }

   {
// <Snippet152>
   CTime t = CTime::GetCurrentTime();   
// </Snippet152>
   }

   {
// <Snippet153>
   // Example for CTime::GetDay, CTime::GetMonth, and CTime::GetYear
   CTime t(1999, 3, 19, 22, 15, 0); // 10:15 PM March 19, 1999
   ATLASSERT(t.GetDay() == 19);
   ATLASSERT(t.GetMonth() == 3);
   ATLASSERT(t.GetYear() == 1999);
// </Snippet153>
   }

   {
// <Snippet154>
   // Print out the day of the week using localized day name
   UINT DayOfWeek[] = {
      LOCALE_SDAYNAME7,   // Sunday
      LOCALE_SDAYNAME1,   
      LOCALE_SDAYNAME2,
      LOCALE_SDAYNAME3,
      LOCALE_SDAYNAME4, 
      LOCALE_SDAYNAME5, 
      LOCALE_SDAYNAME6   // Saturday
   };
   TCHAR strWeekday[256];
   CTime time(CTime::GetCurrentTime());   // Initialize CTime with current time
   ::GetLocaleInfo(LOCALE_USER_DEFAULT,   // Get string for day of the week from system
      DayOfWeek[time.GetDayOfWeek()-1],   // Get day of week from CTime
      strWeekday, sizeof(strWeekday) / sizeof(strWeekday[0]));
   ATLTRACE(_T("%s\n"), strWeekday);               // Print out day of the week   
// </Snippet154>
   }

   {
// <Snippet155>
   // Compute difference between local time and GMT
   CTime time(CTime::GetCurrentTime());
   tm t1, t2;
   time.GetLocalTm(&t1);
   time.GetGmtTm(&t2);

   ATLTRACE(_T("Difference between local time and GMT is %d hours.\n"), 
      t1.tm_hour - t2.tm_hour);   
// </Snippet155>
   }

   {
// <Snippet156>
   // Example for CTime::GetHour, CTime::GetMinute, and CTime::GetSecond
   CTime t(1999, 3, 19, 22, 15, 0); // 10:15 PM March 19, 1999
   ATLASSERT(t.GetSecond() == 0);
   ATLASSERT(t.GetMinute() == 15);
   ATLASSERT(t.GetHour() == 22);   
// </Snippet156>
   }

   {
// <Snippet157>
   CTime t(1999, 3, 19, 22, 15, 0); // 10:15PM March 19, 1999
   tm osTime;  // A structure containing time elements.
   t.GetLocalTm(&osTime);
   ATLASSERT(osTime.tm_mon == 2); // Note zero-based month!   
// </Snippet157>
   }

   {
// <Snippet158>
   CTime t(2005, 10, 20, 23, 50, 0); // 11:50 PM October 20, 2005
   time_t osBinaryTime = t.GetTime();  // time_t defined in <time.h>

   _tprintf_s(_T("time_t = %ld\n"), osBinaryTime);
// </Snippet158>
   }

   {
// <Snippet159>
   CTime t1(1999, 3, 19, 22, 15, 0); // 10:15 PM March 19, 1999
   CTime t2(1999, 3, 20, 22, 15, 0); // 10:15 PM March 20, 1999
   CTimeSpan ts = t2 - t1;             // Subtract 2 CTimes
   ATLASSERT(ts.GetTotalSeconds() == 86400L);
   ATLASSERT((t1 + ts) == t2);       // Add a CTimeSpan to a CTime.
   ATLASSERT((t2 - ts) == t1);       // Subtract a CTimeSpan from a CTime.   
// </Snippet159>
   }

   {
// <Snippet160>
   CTime t(1999, 3, 19, 22, 15, 0); // 10:15 PM March 19, 1999
   t += CTimeSpan(0, 1, 0, 0);      // 1 hour exactly
   ATLASSERT(t.GetHour() == 23);   
// </Snippet160>
   }

   {
// <Snippet161>
   CTime t1 = CTime::GetCurrentTime();
   CTime t2 = t1 + CTimeSpan(0, 1, 0, 0);    // 1 hour later
   ATLASSERT(t1 != t2);
   ATLASSERT(t1 < t2);
   ATLASSERT(t1 <= t2);   
// </Snippet161>
   }

   {
// <Snippet171>
   CTime theTime;   
// </Snippet171>
// <Snippet172>
   theTime = CTime::GetCurrentTime();
// </Snippet172>
   }

   {
// <Snippet173>
   CTime theTime = CTime::GetCurrentTime();   
// </Snippet173>
   }

   {
// <Snippet174>
   CTime startTime = CTime::GetCurrentTime();

   // ... perform time-consuming task ...

   CTime endTime = CTime::GetCurrentTime();

   CTimeSpan elapsedTime = endTime - startTime;   
// </Snippet174>
   }

   {
// <Snippet175>
   CTime t( 1991, 3, 19, 22, 15, 0 );
   // 10:15PM March 19, 1991

   CString s = t.Format( "%A, %B %d, %Y" );
   // s == "Tuesday, March 19, 1991"    
// </Snippet175>
   }
}

void DoCTimeSpanTests()
{
   {
// <Snippet162>
   CTimeSpan ts1;  // Uninitialized time value
   CTimeSpan ts2a(ts1); // Copy constructor
   CTimeSpan ts2b = ts1; // Copy constructor again
   CTimeSpan ts3(100); // 100 seconds
   CTimeSpan ts4(0, 1, 5, 12);    // 1 hour, 5 minutes, and 12 seconds   
// </Snippet162>
   }

   {
// <Snippet163>
   CTimeSpan ts(3, 1, 5, 12); // 3 days, 1 hour, 5 min, and 12 sec
   CString s = ts.Format(_T("Total days: %D, hours: %H, mins: %M, secs: %S"));
   ATLASSERT(s == _T("Total days: 3, hours: 01, mins: 05, secs: 12"));   
// </Snippet163>
   }

   {
// <Snippet164>
   CTimeSpan ts(3, 1, 5, 12); // 3 days, 1 hour, 5 min, and 12 sec
   ATLASSERT(ts.GetDays() == 3);   
// </Snippet164>
   }

   {
// <Snippet165>
   CTimeSpan ts(3, 1, 5, 12); // 3 days, 1 hour, 5 min, and 12 sec
   ATLASSERT(ts.GetHours() == 1);
   ATLASSERT(ts.GetMinutes() == 5);
   ATLASSERT(ts.GetSeconds() == 12);   
// </Snippet165>
   }

   {
// <Snippet166>
   CTimeSpan ts(3, 1, 5, 12); // 3 days, 1 hour, 5 min, and 12 sec
   ATLASSERT(ts.GetTotalHours() == 73);
   ATLASSERT(ts.GetTotalMinutes() == 4385);
   ATLASSERT(ts.GetTotalSeconds() == 263112);   
// </Snippet166>
   }

   {
// <Snippet167>
   CTimeSpan ts1(3, 1, 5, 12); // 3 days, 1 hour, 5 min, and 12 sec
   CTimeSpan ts2(100); // 100 seconds
   CTimeSpan ts3 = ts1 + ts2;
   ATLASSERT(ts3.GetSeconds() == 52); // 6 mins, 52 secs   
// </Snippet167>
   }

   {
// <Snippet168>
   CTimeSpan ts1(10); // 10 seconds
   CTimeSpan ts2(100); // 100 seconds
   ts2 -= ts1;
   ATLASSERT(ts2.GetTotalSeconds() == 90);   
// </Snippet168>
   }

   {
// <Snippet169>
   CTimeSpan ts1(100);
   CTimeSpan ts2(110);
   ATLASSERT((ts1 != ts2) && (ts1 < ts2) && (ts1 <= ts2));   
// </Snippet169>
   }
}

void DoCImageTests()
{
   CMyDlg dlg;
   dlg.DoModal();
}

enum TestSuite
{
   tsMin,
   tsCOleDateTime,
   tsCOleDateTimeSpan,
   tsCPoint,
   tsCRect,
   tsCSimpleStringT,
   tsCSize,
   tsCString,
   tsCTime,
   tsCTimeSpan,
   tsCImage,
   tsMax
};

typedef void (*t_TestSuiteFunction)();

t_TestSuiteFunction apfnTestSuite[] =
{
   NULL,
   &DoCOleDateTimeTests,
   &DoCOleDateTimeSpanTests,
   &DoCPointTests,
   &DoCRectTests,
   &DoCSimpleStringTTests,
   &DoCSizeTests,
   &DoCStringTests,
   &DoCTimeTests,
   &DoCTimeSpanTests,
   &DoCImageTests
};

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
   UNREFERENCED_PARAMETER(argv);
   UNREFERENCED_PARAMETER(argc);
   UNREFERENCED_PARAMETER(envp);

	int nRetCode = 0;

	// initialize MFC and print and error on failure
	if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
	{
		// TODO: change error code to suit your needs
		_tprintf(_T("Fatal Error: MFC initialization failed\n"));
		nRetCode = 1;
	}
	else
	{
      int iTest = 0;

      _tprintf_s(_T("Which tests do you want?\n")
         _T("%d COleDateTime\n")
         _T("%d COleDateTimeSpan\n")
         _T("%d CPoint\n")
         _T("%d CRect\n")
         _T("%d CSimpleStringT\n")
         _T("%d CSize\n")
         _T("%d CStringT\n")
         _T("%d CTime\n")
         _T("%d CTimeSpan\n")
         _T("%d CImage\n"),
         tsCOleDateTime,
         tsCOleDateTimeSpan,
         tsCPoint,
         tsCRect,
         tsCSimpleStringT,
         tsCSize,
         tsCString,
         tsCTime,
         tsCTimeSpan,
         tsCImage);
      _tscanf_s(_T("%d"), &iTest);

      if (tsMin < iTest && iTest < tsMax)
      {
         apfnTestSuite[iTest]();
      }
      else
      {
         _tprintf_s(_T("%d is not a valid choice!"), iTest);
      }
	}

	return nRetCode;
}
