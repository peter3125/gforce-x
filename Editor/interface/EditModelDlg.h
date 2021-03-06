#pragma once

#include "system/log.h"
#include "editor/resource.h"

#include "interface/genericPropertyPage.h"
#include "interface/colourControl.h"

class Model;
class PropertiesDlg;

/////////////////////////////////////////////////////////////////////////////

class EditModelDlg : public GenericPropertyPage
{
public:
	EditModelDlg(CWnd* pParent);
	virtual ~EditModelDlg();

	// Dialog Data
	enum { IDD = IDD_EDIT_MODEL };

	void SetData(WorldObject* obj);

	// activate this page
	virtual void Activate();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnOK();
	virtual void OnCancel();

	void OnSize(UINT,int,int);
	void Resize();
	void SetupData();

	void OnSelectMesh();
	void OnSelectTexture();
	void OnSelectColour();
	void OnKillfocusTransparency();

protected:
	bool			initialised;
	Model*			obj;

	CButton			bSelectFile;
	CEdit			meshFilename;

	CButton			bSelectTexture;
	CEdit			textureFilename;

	CButton			bSelectColour;
	CColourControl	colour;

	CEdit			transparency;

	DECLARE_MESSAGE_MAP()
};

