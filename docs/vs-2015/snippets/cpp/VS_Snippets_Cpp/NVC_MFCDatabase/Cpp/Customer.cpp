// Customer.h : Implementation of the CCustomer class



// CCustomer implementation

// code generated on Wednesday, August 16, 2006, 3:38 PM

#include "stdafx.h"
#include "Customer.h"
IMPLEMENT_DYNAMIC(CCustomer, CRecordset)

CCustomer::CCustomer(CDatabase* pdb)
   : CRecordset(pdb)
{
   m_CustomerID = 0;
   m_ContactFirstName = L"";
   m_PostalCode = L"";
   m_L_Name = L"";
   m_BillingID = 0;
   m_nFields = 5;
   m_nDefaultType = dynaset;

   m_strParam = L"";
   m_nParams = 1;
}
// The connection string below may contain plain text passwords and/or
// other sensitive information. Please remove the #error after reviewing
// the connection string for any security related issues. You may want to
// store the password in some other form or use a different user authentication.
CString CCustomer::GetDefaultConnect()
{
//	return _T("DSN=MFC_ODBCTest;DBQ=c:\\Documents and Settings\\Laren\\My Documents\\Visual Studio 2005\\Projects\\NVC_MFCDatabase\\Cpp\\Snippet.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
   return _T("DSN=MFC_ODBCTest;DBQ=Snippet.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CCustomer::GetDefaultSQL()
{
   return _T("[Customer]");
}

// <Snippet19>
void CCustomer::DoFieldExchange(CFieldExchange* pFX)
{
   pFX->SetFieldType(CFieldExchange::outputColumn);
   // Macros such as RFX_Text() and RFX_Int() are dependent on the
   // type of the member variable, not the type of the field in the database.
   // ODBC will try to automatically convert the column value to the requested type
   RFX_Long(pFX, _T("[CustomerID]"), m_CustomerID);
   RFX_Text(pFX, _T("[ContactFirstName]"), m_ContactFirstName);
   RFX_Text(pFX, _T("[PostalCode]"), m_PostalCode);
   RFX_Text(pFX, _T("[L_Name]"), m_L_Name);
   RFX_Long(pFX, _T("[BillingID]"), m_BillingID);

   pFX->SetFieldType(CFieldExchange::inputParam);
   RFX_Text(pFX, _T("Param"), m_strParam);
}
// </Snippet19>
/////////////////////////////////////////////////////////////////////////////
// CCustomer diagnostics

#ifdef _DEBUG
void CCustomer::AssertValid() const
{
   CRecordset::AssertValid();
}

void CCustomer::Dump(CDumpContext& dc) const
{
   CRecordset::Dump(dc);
}
#endif //_DEBUG

void CCustomer::NullStuff()
{
// <Snippet26>
   SetFieldNull(NULL);
// </Snippet26>

// <Snippet27>
   SetFieldNull(&m_strParam);
// </Snippet27>
}


// CMultiCustomer

IMPLEMENT_DYNAMIC(CMultiCustomer, CRecordset)

CMultiCustomer::CMultiCustomer(CDatabase* pdb)
   : CRecordset(pdb)
{
   m_pCustomerID = NULL;
   m_pcCustomerID = NULL;
   m_pContactFirstName = NULL;
   m_pcContactFirstName = NULL;
   m_pPostalCode = NULL;
   m_pcPostalCode = NULL;
   m_pL_Name = NULL;
   m_pcL_Name = NULL;
   m_pBillingID = NULL;
   m_pcBillingID = NULL;

   m_nFields = 5;
   m_nDefaultType = dynaset;
}
// The connection string below may contain plain text passwords and/or
// other sensitive information. Please remove the #error after reviewing
// the connection string for any security related issues. You may want to
// store the password in some other form or use a different user authentication.
CString CMultiCustomer::GetDefaultConnect()
{
   return _T("DSN=MFC_ODBCTest;DBQ=Snippet.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CMultiCustomer::GetDefaultSQL()
{
   return _T("[Customer]");
}

#ifdef _DEBUG
void CMultiCustomer::AssertValid() const
{
   CRecordset::AssertValid();
}

void CMultiCustomer::Dump(CDumpContext& dc) const
{
   CRecordset::Dump(dc);
}
#endif //_DEBUG

// <Snippet42>
void CMultiCustomer::DoBulkFieldExchange(CFieldExchange* pFX)
{
   pFX->SetFieldType(CFieldExchange::outputColumn);
   RFX_Long_Bulk(pFX, _T("[CustomerID]"), &m_pCustomerID, &m_pcCustomerID);
   RFX_Text_Bulk(pFX, _T("[ContactFirstName]"), &m_pContactFirstName, &m_pcContactFirstName, 50);
   RFX_Text_Bulk(pFX, _T("[PostalCode]"), &m_pPostalCode, &m_pcPostalCode, 50);
   RFX_Text_Bulk(pFX, _T("[L_Name]"), &m_pL_Name, &m_pcL_Name, 50);
   RFX_Long_Bulk(pFX, _T("[BillingID]"), &m_pBillingID, &m_pcBillingID);

   pFX->SetFieldType(CFieldExchange::inputParam);
   RFX_Text(pFX, _T("Param"), m_strParam);
}
// </Snippet42>