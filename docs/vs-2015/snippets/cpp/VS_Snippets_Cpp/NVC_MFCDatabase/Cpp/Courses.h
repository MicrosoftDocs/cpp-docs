// Courses.h : Declaration of the CCourses

#pragma once

// code generated on Wednesday, August 16, 2006, 4:29 PM

class CCourses : public CRecordset
{
public:
	CCourses(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CCourses)

// Field/Param Data

// The string types below (if present) reflect the actual data type of the
// database field - CStringA for ANSI datatypes and CStringW for Unicode
// datatypes. This is to prevent the ODBC driver from performing potentially
// unnecessary conversions.  If you wish, you may change these members to
// CString types and the ODBC driver will perform all necessary conversions.
// (Note: You must use an ODBC driver version that is version 3.5 or greater
// to support both Unicode and these conversions).
   
   CStringW m_strCourseID;
   CStringW m_strInstructorID;
   CStringW m_strRoomNo;
   CStringW m_strSchedule;

   long m_nCountParam;
   CStringW m_strNameParam;

// Overrides
	// Wizard generated virtual function overrides
	public:
	virtual CString GetDefaultConnect();	// Default connection string

	virtual CString GetDefaultSQL(); 	// default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX support

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};


