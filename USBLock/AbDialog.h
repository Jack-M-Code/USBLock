#pragma once


// AbDialog ��ܤ��

class AbDialog : public CDialogEx
{
	DECLARE_DYNAMIC(AbDialog)

public:
	AbDialog(CWnd* pParent = NULL);   // �зǫغc�禡
	virtual ~AbDialog();

// ��ܤ�����
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �䴩

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};
