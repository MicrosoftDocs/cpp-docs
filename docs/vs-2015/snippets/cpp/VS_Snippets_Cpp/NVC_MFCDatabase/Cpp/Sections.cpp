// Sections.h : Implementation of the CSections class



// CSections implementation

// code generated on Thursday, August 17, 2006, 4:28 PM

#include "stdafx.h"
#include "Sections.h"
IMPLEMENT_DYNAMIC(CSections, CRecordset)

CSections::CSections(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_CourseID = L"";
	m_InstructorID = L"";
	m_RoomNo = L"";
	m_Schedule = L"";
	m_nFields = 4;
	m_nDefaultType = dynaset;

   m_nCountParam = 0;
   m_strNameParam = L"";
   m_nParams = 2;
}
// The connection string below may contain plain text passwords and/or
// other sensitive information. Please remove the #error after reviewing
// the connection string for any security related issues. You may want to
// store the password in some other form or use a different user authentication.
CString CSections::GetDefaultConnect()
{
	return _T("DSN=MFC_ODBCTest;DBQ=Snippet.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CSections::GetDefaultSQL()
{
	return _T("[Courses]");
}

// <Snippet33>
void CSections::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[CourseID]"), m_CourseID);
	RFX_Text(pFX, _T("[InstructorID]"), m_InstructorID);
	RFX_Text(pFX, _T("[RoomNo]"), m_RoomNo);
	RFX_Text(pFX, _T("[Schedule]"), m_Schedule);

   // output parameter
   pFX->SetFieldType(CFieldExchange::outputParam);
   RFX_Long(pFX, _T("Instructor_Count"), m_nCountParam);

   // input parameter
   pFX->SetFieldType(CFieldExchange::inputParam);
   RFX_Text(pFX, _T("Department_Name"), m_strNameParam);
}
// </Snippet33>
/////////////////////////////////////////////////////////////////////////////
// CSections diagnostics

#ifdef _DEBUG
void CSections::AssertValid() const
{
	CRecordset::AssertValid();
}

void CSections::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG


