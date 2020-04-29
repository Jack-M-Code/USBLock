#pragma once


// AbDialog 對話方塊

class AbDialog : public CDialogEx
{
	DECLARE_DYNAMIC(AbDialog)

public:
	AbDialog(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~AbDialog();

// 對話方塊資料
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支援

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};
