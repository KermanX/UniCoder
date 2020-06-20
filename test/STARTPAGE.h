#pragma once


// STARTPAGE 对话框

class STARTPAGE : public CDialogEx
{
	DECLARE_DYNAMIC(STARTPAGE)

public:
	STARTPAGE(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~STARTPAGE();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_STARTPAGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CEdit m_loginid;
	CEdit m_loginpassword;
	CButton m_savepw;
	afx_msg void OnBnClickedSavepw();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedLogin();
	//CIPAddressCtrl m_loginip;
	afx_msg void OnIpnFieldchangedLoginip2(NMHDR* pNMHDR, LRESULT* pResult);
	CIPAddressCtrl m_loginip2;
	CString m_id;
	afx_msg void OnBnClickedRdpw();
	CEdit m_gg;
	afx_msg void OnBnClickedRdgg();
	virtual BOOL OnInitDialog();
	CEdit m_ver;
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	CStatic m_writer;
	CStatic m_to;
	afx_msg void OnBnClickedReadme();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	CButton m_update;
	afx_msg void OnBnClickedButton2();
	CEdit m_name;
	CStatic m_ggt;
};
