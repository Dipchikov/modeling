/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_to_legacy_loop_TM_conversions.h"

void C_P046_to_legacy_loop_reset_TM_conversions(
  outC_C_P046_to_legacy_loop_TM_conversions *outC)
{
}

/* TM_conversions::C_P046_to_legacy_loop */
void C_P046_to_legacy_loop_TM_conversions(
  /* TM_conversions::C_P046_to_legacy_loop::i */kcg_int i,
  /* TM_conversions::C_P046_to_legacy_loop::q_dir_in */Q_DIR q_dir_in,
  /* TM_conversions::C_P046_to_legacy_loop::P046_section_in */P046_OBU_sectionlist_enum_T_TM *P046_section_in,
  outC_C_P046_to_legacy_loop_TM_conversions *outC)
{
  outC->_L28 = q_dir_in;
  kcg_copy_P046_OBU_sectionlist_enum_T_TM(&outC->_L1, P046_section_in);
  outC->_L20 = i;
  if ((0 <= outC->_L20) & (outC->_L20 < 33)) {
    kcg_copy_P046_section_enum_T_TM(&outC->_L21, &outC->_L1[outC->_L20]);
  }
  else {
    kcg_copy_P046_section_enum_T_TM(
      &outC->_L21,
      (P046_section_enum_T_TM *) &DEFAULT_P046_OBU_section_TM);
  }
  outC->_L27 = outC->_L21.valid;
  outC->_L26 = outC->_L21.m_leveltr;
  outC->_L25 = outC->_L21.nid_ntc;
  outC->_L2.valid = outC->_L27;
  outC->_L2.q_dir = outC->_L28;
  outC->_L2.m_leveltr = outC->_L26;
  outC->_L2.nid_ntc = outC->_L25;
  kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg(
    &outC->P046_legacy_out,
    &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P046_to_legacy_loop_TM_conversions.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

