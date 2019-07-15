// The control needs to have the MCS_MULTISELECT style
// for the following code to work.

// change the maximum selection count
m_calCtrl2.SetMaxSelCount(10);

// check that the change was really made
ASSERT(m_calCtrl2.GetMaxSelCount() == 10);