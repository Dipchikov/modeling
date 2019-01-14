/*********************************************************
 **
 ** File  aol_mainmenu.h
 **
 ** Specification File:  P:\modeling\model\Scade\System\DMI_Control\SCADE Display\Widgets\MainMenu\mainmenu.ogfx
 **
 ** Automatically generated by SCADE Display KCG
 ** Version 6.6.3 (build i10)
 **
 ** Date of generation: 2017-05-30T13:27:24
 ** Command line: ScadeDisplayKCG.exe -outdir P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI_Code P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI.sgfx
 *********************************************************/

#ifndef _AOL_MAINMENU_H
#define _AOL_MAINMENU_H

#include "sgl_types.h"
#include "kcg_assign.h"

#include "aol_button.h"
#include "aol_closebutton.h"

/* Accessors */
#define aol_mainmenu_G_buttonEnabler(_C_) (*(_C_)->buttonEnabler)
#define aol_mainmenu_S_buttonEnabler(_C_,_V_) (_C_)->buttonEnabler = &(_V_)
#define aol_mainmenu_G_closeButtonEnabler(_C_) (_C_)->closeButtonEnabler
#define aol_mainmenu_S_closeButtonEnabler(_C_,_V_) (_C_)->closeButtonEnabler = (_V_)
#define aol_mainmenu_G_TitleVisibility(_C_) (_C_)->TitleVisibility
#define aol_mainmenu_S_TitleVisibility(_C_,_V_) (_C_)->TitleVisibility = (_V_)
#define aol_mainmenu_G_MousePressed(_C_) (_C_)->MousePressed
#define aol_mainmenu_S_MousePressed(_C_,_V_) (_C_)->MousePressed = (_V_)
#define aol_mainmenu_G_openTrainData(_C_) (_C_)->openTrainData
#define aol_mainmenu_S_openTrainData(_C_,_V_) (_C_)->openTrainData = (_V_)
#define aol_mainmenu_G_closeMainmenu(_C_) (_C_)->closeMainmenu
#define aol_mainmenu_S_closeMainmenu(_C_,_V_) (_C_)->closeMainmenu = (_V_)
#define aol_mainmenu_G_StartRequest(_C_) (_C_)->StartRequest
#define aol_mainmenu_S_StartRequest(_C_,_V_) (_C_)->StartRequest = (_V_)
#define aol_mainmenu_G_openTrainRN(_C_) (_C_)->openTrainRN
#define aol_mainmenu_S_openTrainRN(_C_,_V_) (_C_)->openTrainRN = (_V_)
#define aol_mainmenu_G_openDriverID(_C_) (_C_)->openDriverID
#define aol_mainmenu_S_openDriverID(_C_,_V_) (_C_)->openDriverID = (_V_)
#define aol_mainmenu_G_levelMenu(_C_) (_C_)->levelMenu
#define aol_mainmenu_S_levelMenu(_C_,_V_) (_C_)->levelMenu = (_V_)
#define aol_mainmenu_G_openShunting(_C_) (_C_)->openShunting
#define aol_mainmenu_S_openShunting(_C_,_V_) (_C_)->openShunting = (_V_)
#define aol_mainmenu_G_openNonLeading(_C_) (_C_)->openNonLeading
#define aol_mainmenu_S_openNonLeading(_C_,_V_) (_C_)->openNonLeading = (_V_)
#define aol_mainmenu_HOOK(_C_,_F_,_D_) 

/* Context type */
typedef struct aol_typ_mainmenu_ {
  /* ------------------------- inputs --------------------------- */
  SGLint32 (*buttonEnabler)[30UL];
  SGLint32 closeButtonEnabler;
  SGLbool TitleVisibility;
  SGLbool MousePressed;
  /* ------------------------- outputs -------------------------- */
  SGLbool openTrainData;
  SGLbool closeMainmenu;
  SGLbool StartRequest;
  SGLbool openTrainRN;
  SGLbool openDriverID;
  SGLbool levelMenu;
  SGLbool openShunting;
  SGLbool openNonLeading;
  /* ------------------------- parent priority ------------------ */
  SGLint32 _parentPriority;
  /* ------------------------- subcontexts ---------------------- */
  aol_typ_button __start__;
  aol_typ_button __DriverID__;
  aol_typ_button __traindata__;
  aol_typ_button __level__;
  aol_typ_button __trainRN__;
  aol_typ_button __Shunting__;
  aol_typ_button __nonLeading__;
  aol_typ_button __button__;
  aol_typ_closebutton __closebutton__;
} aol_typ_mainmenu;

/* Associated functions */
extern void aol_mainmenu_init(aol_typ_mainmenu *pContext);
extern void aol_mainmenu_predraw(aol_typ_mainmenu *pContext);
extern void aol_mainmenu_draw(aol_typ_mainmenu *pContext, SGLint32 pPriority);

#endif /* _AOL_MAINMENU_H */

/*********************************************************
 ** End of file
 ** End of generation: 2017-05-30T13:27:24
 *********************************************************/
