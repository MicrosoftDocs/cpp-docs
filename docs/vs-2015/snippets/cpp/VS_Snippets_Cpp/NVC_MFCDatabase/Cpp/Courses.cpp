// Courses.h : Implementation of the CCourses class



// CCourses implementation

// code generated on Wednesday, August 16, 2006, 4:29 PM

#include "stdafx.h"
#include "Courses.h"
IMPLEMENT_DYNAMIC(CCourses, CRecordset)

CCourses::CCourses(CDatabase* pdb)
	: CRecordset(pdb)
{
   m_strCourseID = L"";
   m_strInstructorID = L"";
   m_strRoomNo = L"";
   m_strSchedule = L"";

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
CString CCourses::GetDefaultConnect()
{
	return _T("DSN=MFC_ODBCTest;DBQ=Snippet.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CCourses::GetDefaultSQL()
{
	return _T("");
}

// <Snippet21>
// DoFieldExchange override
//
// Only necessary to handle parameter bindings.
// Don't use CRecordset-derived class with bound
// fields unless all result sets have same schema
// OR there is conditional binding code.
void CCourses::DoFieldExchange(CFieldExchange* pFX)
{
   pFX->SetFieldType(CFieldExchange::outputParam);
   RFX_Long(pFX, _T("Param1"), m_nCountParam);
      // The "Param1" name here is a dummy name 
      // that is never used

   pFX->SetFieldType(CFieldExchange::inputParam);
   RFX_Text(pFX, _T("Param2"), m_strNameParam);
      // The "Param2" name here is a dummy name 
      // that is never used
}
// </Snippet21>

/////////////////////////////////////////////////////////////////////////////
// CCourses diagnostics

#ifdef _DEBUG
void CCourses::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCourses::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG


