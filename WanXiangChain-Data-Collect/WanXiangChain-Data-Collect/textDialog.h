#pragma once


// textDialog 对话框

class textDialog : public CDialog
{
	DECLARE_DYNAMIC(textDialog)

public:
	textDialog(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~textDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnNMCustomdrawSlider1(NMHDR *pNMHDR, LRESULT *pResult);
	// m_list
	CListBox m_list;
	CEdit m_edit;
	virtual BOOL OnInitDialog();
};
