// Customer.h : Declaration of the CCustomer

#pragma once

// code generated on Wednesday, August 16, 2006, 3:38 PM

class CCustomer : public CRecordset
{
public:
	CCustomer(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CCustomer)

   void NullStuff();

// Field/Param Data

// The string types below (if present) reflect the actual data type of the
// database field - CStringA for ANSI datatypes and CStringW for Unicode
// datatypes. This is to prevent the ODBC driver from performing potentially
// unnecessary conversions.  If you wish, you may change these members to
// CString types and the ODBC driver will perform all necessary conversions.
// (Note: You must use an ODBC driver version that is version 3.5 or greater
// to support both Unicode and these conversions).

	long	m_CustomerID;
	CStringW	m_ContactFirstName;
	CStringW	m_PostalCode;
	CStringW	m_L_Name;
   long m_BillingID;

   CStringW m_strParam;

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


class CMultiCustomer : public CRecordset
{
public:
	CMultiCustomer(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CMultiCustomer)

// Field/Param Data

// The string types below (if present) reflect the actual data type of the
// database field - CStringA for ANSI datatypes and CStringW for Unicode
// datatypes. This is to prevent the ODBC driver from performing potentially
// unnecessary conversions.  If you wish, you may change these members to
// CString types and the ODBC driver will perform all necessary conversions.
// (Note: You must use an ODBC driver version that is version 3.5 or greater
// to support both Unicode and these conversions).

	long*	m_pCustomerID;
	LPWSTR m_pContactFirstName;
	LPWSTR m_pPostalCode;
	LPWSTR m_pL_Name;
   long* m_pBillingID;

   long* m_pcCustomerID;
   long* m_pcContactFirstName;
   long* m_pcPostalCode;
   long* m_pcL_Name;
   long* m_pcBillingID;

   CStringW m_strParam;

// Overrides
	// Wizard generated virtual function overrides
	public:
	virtual CString GetDefaultConnect();	// Default connection string

	virtual CString GetDefaultSQL(); 	// default SQL for Recordset
   virtual void DoBulkFieldExchange(CFieldExchange* pFX);

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};
