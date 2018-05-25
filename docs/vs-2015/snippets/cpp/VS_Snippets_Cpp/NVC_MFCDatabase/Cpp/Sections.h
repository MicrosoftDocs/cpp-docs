// Sections.h : Declaration of the CSections

#pragma once

// code generated on Thursday, August 17, 2006, 4:28 PM

class CSections : public CRecordset
{
public:
	CSections(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CSections)

// Field/Param Data

// The string types below (if present) reflect the actual data type of the
// database field - CStringA for ANSI datatypes and CStringW for Unicode
// datatypes. This is to prevent the ODBC driver from performing potentially
// unnecessary conversions.  If you wish, you may change these members to
// CString types and the ODBC driver will perform all necessary conversions.
// (Note: You must use an ODBC driver version that is version 3.5 or greater
// to support both Unicode and these conversions).

	CStringW	m_CourseID;
	CStringW	m_InstructorID;
	CStringW	m_RoomNo;
	CStringW	m_Schedule;

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


