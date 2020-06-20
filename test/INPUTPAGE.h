#pragma once


// INPUTPAGE 对话框

class INPUTPAGE : public CDialogEx
{
	DECLARE_DYNAMIC(INPUTPAGE)

public:
	INPUTPAGE(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~INPUTPAGE();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CEdit m_inp;
	CEdit m_inf;
	CString m_t, m_r;
	virtual BOOL OnInitDialog();
};
