/*********************************************************
 **
 ** File  aol_driverid_display.c
 **
 ** Specification File:  P:\modeling\model\Scade\System\DMI_Control\SCADE Display\Widgets\DriverID_Display\driverid_display.ogfx
 **
 ** Automatically generated by SCADE Display KCG
 ** Version 6.6.3 (build i10)
 **
 ** Date of generation: 2017-05-30T13:27:24
 ** Command line: ScadeDisplayKCG.exe -outdir P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI_Code P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI.sgfx
 *********************************************************/

#include "aol_driverid_display.h"
#include "aol_imported_functions.h"
#include "sgl.h"


void aol_driverid_display_init(aol_typ_driverid_display *pContext)
{
  aol_driverid_display_S_titlewindow(pContext, 0L);
  aol_driverid_display_S_text_digit(pContext, 0L);
  aol_driverid_display_S_Ack_area(pContext, 0L);
  {
    static SGLint32 _lArray0[9UL] = {0L};
    aol_driverid_display_S_TrainRN_Display(pContext, _lArray0);
  }
  {
    static SGLint32 _lArray0[9UL] = {0L};
    aol_driverid_display_S_DriverID_Display(pContext, _lArray0);
  }
  aol_driverid_display_S_LevelIndex(pContext, 0L);
  aol_driverid_display_S_ButtonPressed(pContext, SGL_FALSE);
  aol_driverid_display_S_InputFieldAck(pContext, SGL_FALSE);

  pContext->_parentPriority = 0L;

}

void aol_driverid_display_predraw(aol_typ_driverid_display *pContext)
{

}

void aol_driverid_display_draw(aol_typ_driverid_display *pContext, SGLint32 pPriority)
{
  if (SGLint32_eq(pPriority, pContext->_parentPriority)) {

    /* Object: display, Type: container, OID: 2e25facd-6b90-42f2-bb5a-5583bd0bcc2b */
    {

      /* Object: rectangle, Type: rectangle, OID: c8380eca-374c-42f8-9ccf-dd2bf12e265d */
      {
        /* filled object part */
        sglIndexColori(6L);
        sglDisable(SGL_MODULATE);
        sglEnable(SGL_POLYGON_SMOOTH);
        sglTransparency8(255L);
        sglDisable(SGL_TEXTURE_2D);
        sglDisable(SGL_TESSELLATION);
        sglBegin(SGL_POLYGON);
        sglVertex2f(-153.0F, 100.0F);
        sglVertex2f(153.0F, 100.0F);
        sglVertex2f(153.0F, -100.0F);
        sglVertex2f(-153.0F, -100.0F);
        sglEnd();
      }

      /* Object: title, Type: container, OID: 9ae96cb5-08e0-4f84-83a3-091138d68e72 */
      {

        /* Object: rectangle_1, Type: rectangle, OID: 71d323fe-7a9c-47f0-ae28-2f5176569bb4 */
        {
          /* filled object part */
          sglIndexColori(2L);
          sglDisable(SGL_POLYGON_SMOOTH);
          sglBegin(SGL_POLYGON);
          sglVertex2f(-153.0F, 100.0F);
          sglVertex2f(153.0F, 100.0F);
          sglVertex2f(153.0F, 76.0F);
          sglVertex2f(-153.0F, 76.0F);
          sglEnd();
        }

        /* Object: conditional_group, Type: conditional, OID: 7878d876-55c6-4209-8b29-b45228557178 */
        {
          switch (aol_driverid_display_G_titlewindow(pContext)) {

          case 2L:

            /* Object: trainRN, Type: text, OID: 052de703-6fb6-41ab-bc86-8a588b37a713 */
            {
              static SGLuint8 _lArray0_trainRN[255UL] = {84U,114U,97U,105U,110U,32U,114U,117U,110U,110U,105U,110U,103U,32U,110U,117U,109U,98U,101U,114U};
              sglIndexColori(1L);
              sglIndexHaloColori(-1L);
              sglIndexFontLineWidthi(2L);
              sglIndexFonti(5L);
              sglDisable(SGL_LINE_HALOING);
              sglSetTextAlignment(SGL_ALIGN_LEFT, SGL_ALIGN_BOTTOM);
              sgluWriteText(-149.0F, 82.0F, _lArray0_trainRN, 255L);
            }
            break;

          case 3L:

            /* Object: level, Type: text, OID: a54596a9-09fd-4fc0-800b-0186f2e0a211 */
            {
              static SGLuint8 _lArray0_level[255UL] = {76U,101U,118U,101U,108U};
              sglIndexColori(1L);
              sglIndexHaloColori(-1L);
              sglIndexFontLineWidthi(2L);
              sglIndexFonti(5L);
              sglDisable(SGL_LINE_HALOING);
              sglSetTextAlignment(SGL_ALIGN_LEFT, SGL_ALIGN_BOTTOM);
              sgluWriteText(-149.0F, 82.0F, _lArray0_level, 255L);
            }
            break;

          default:
          /* case 1L */

            /* Object: driverID, Type: text, OID: 6393c928-3e99-487d-82c5-a8fd04443f81 */
            {
              static SGLuint8 _lArray0_driverID[255UL] = {68U,114U,105U,118U,101U,114U,32U,73U,68U};
              sglIndexColori(1L);
              sglIndexHaloColori(-1L);
              sglIndexFontLineWidthi(2L);
              sglIndexFonti(5L);
              sglDisable(SGL_LINE_HALOING);
              sglSetTextAlignment(SGL_ALIGN_LEFT, SGL_ALIGN_BOTTOM);
              sgluWriteText(-149.0F, 82.0F, _lArray0_driverID, 255L);
            }
            break;
          }
        }
      }

      /* Object: textfield, Type: container, OID: 75caa666-1c2f-4f5b-89dc-28188ed6deb7 */
      {
        sglPushMatrixAndTranslate(0.0F, 25.0F);

        /* Object: rectangle_2, Type: rectangle, OID: 8c281970-919d-4baa-bdc6-c7d124dd84d4 */
        {
          /* filled object part */
          sglIndexColori(3L);
          sglBegin(SGL_POLYGON);
          sglVertex2f(-153.0F, 26.0F);
          sglVertex2f(153.0F, 26.0F);
          sglVertex2f(153.0F, -26.0F);
          sglVertex2f(-153.0F, -26.0F);
          sglEnd();
          /* outlined object part */
          sglIndexColori(4L);
          sglIndexHaloColori(-1L);
          sglIndexLineWidthi((SGLbool_and(aol_driverid_display_G_ButtonPressed(pContext), aol_driverid_display_G_InputFieldAck(pContext)) ? 0L : 1L));
          sglIndexLineStipplei(0L);
          sglDisable(SGL_LINE_HALOING);
          sglSetLineCaps(SGL_ROUNDED_CAPS);
          sglBegin(SGL_LINE_LOOP);
          sglVertex2f(-153.0F, 26.0F);
          sglVertex2f(153.0F, 26.0F);
          sglVertex2f(153.0F, -26.0F);
          sglVertex2f(-153.0F, -26.0F);
          sglEnd();
        }

        /* Object: InputFieldAckArea, Type: rectangleArea, OID: d9958942-0bf5-45ac-a541-7f58e1a2bb2f */
        {
          SGLfloat _lX = 0.0F;
          SGLfloat _lY = 0.0F;
          aol_locate(-1L, &_lX, &_lY);
          aol_driverid_display_G_InputFieldAck(pContext) = sglRectangleActiveAreaGetStatus(_lX, _lY, -153.0F, 26.0F, 153.0F, -26.0F);
        }

        /* Object: Text_digit, Type: conditional, OID: a89239c6-b577-4fc1-b11f-56bfa10b6fea */
        {
          sglPushMatrixAndTranslate(-21.0F, -20.0F);
          switch (aol_driverid_display_G_text_digit(pContext)) {

          case 1L:

            /* Object: DriverID_digit, Type: text, OID: f8ad4891-abd8-4135-a105-d107d1667e95 */
            {
              sglIndexColori(2L);
              sglIndexFontLineWidthi(2L);
              sglIndexFonti(0L);
              sglSetTextAlignment(SGL_ALIGN_CENTER, SGL_ALIGN_MIDDLE);
              sgluWriteUnicodeText(-75.0F, 20.0F, aol_driverid_display_G_DriverID_Display(pContext), 9L);
            }
            break;

          case 2L:

            /* Object: TrainRN_digit, Type: text, OID: f63cb6a5-99fb-4a70-bf10-bcf39e5c70a3 */
            {
              sglIndexColori(2L);
              sglIndexFontLineWidthi(2L);
              sglIndexFonti(0L);
              sglSetTextAlignment(SGL_ALIGN_CENTER, SGL_ALIGN_MIDDLE);
              sgluWriteUnicodeText(-75.0F, 20.0F, aol_driverid_display_G_TrainRN_Display(pContext), 9L);
            }
            break;

          default:
          /* case 3L */

            /* Object: Level, Type: conditional, OID: 810fb91d-8975-473c-aec2-4239a8b38896 */
            {
              switch (aol_driverid_display_G_LevelIndex(pContext)) {

              case 2L:

                /* Object: level1, Type: text, OID: 79010271-206e-45fa-81fa-c07f7a4efa25 */
                {
                  static SGLuint8 _lArray0_level1[255UL] = {76U,101U,118U,101U,108U,32U,49U};
                  sglIndexColori(2L);
                  sglIndexFontLineWidthi(2L);
                  sglIndexFonti(0L);
                  sglSetTextAlignment(SGL_ALIGN_CENTER, SGL_ALIGN_MIDDLE);
                  sgluWriteText(-80.0F, 20.0F, _lArray0_level1, 255L);
                }
                break;

              case 3L:

                /* Object: level2, Type: text, OID: bc93f994-399f-4c17-b246-86e804c6a3f9 */
                {
                  static SGLuint8 _lArray0_level2[255UL] = {76U,101U,118U,101U,108U,32U,50U};
                  sglIndexColori(2L);
                  sglIndexFontLineWidthi(2L);
                  sglIndexFonti(0L);
                  sglSetTextAlignment(SGL_ALIGN_CENTER, SGL_ALIGN_MIDDLE);
                  sgluWriteText(-80.0F, 20.0F, _lArray0_level2, 255L);
                }
                break;

              case 4L:

                /* Object: level3, Type: text, OID: 34ef3635-1567-4df8-8f97-8c7951c3a032 */
                {
                  static SGLuint8 _lArray0_level3[255UL] = {76U,101U,118U,101U,108U,32U,51U};
                  sglIndexColori(2L);
                  sglIndexFontLineWidthi(2L);
                  sglIndexFonti(0L);
                  sglSetTextAlignment(SGL_ALIGN_CENTER, SGL_ALIGN_MIDDLE);
                  sgluWriteText(-80.0F, 20.0F, _lArray0_level3, 255L);
                }
                break;

              case 5L:

                /* Object: NTCA, Type: text, OID: 016c38c6-ab79-4070-a660-c32f05902a49 */
                {
                  static SGLuint8 _lArray0_NTCA[255UL] = {65U,84U,66U};
                  sglIndexColori(2L);
                  sglIndexFontLineWidthi(2L);
                  sglIndexFonti(0L);
                  sglSetTextAlignment(SGL_ALIGN_CENTER, SGL_ALIGN_MIDDLE);
                  sgluWriteText(-80.0F, 20.0F, _lArray0_NTCA, 255L);
                }
                break;

              case 6L:

                /* Object: NTCB, Type: text, OID: 6dfce295-6c69-4d35-8441-dfb19f17cd97 */
                {
                  static SGLuint8 _lArray0_NTCB[255UL] = {76U,101U,118U,101U,108U,32U,48U};
                  sglIndexColori(2L);
                  sglIndexFontLineWidthi(2L);
                  sglIndexFonti(0L);
                  sglSetTextAlignment(SGL_ALIGN_CENTER, SGL_ALIGN_MIDDLE);
                  sgluWriteText(-80.0F, 20.0F, _lArray0_NTCB, 255L);
                }
                break;

              case 7L:

                /* Object: NTCC, Type: text, OID: 450c3248-b92d-49b6-ba0e-0cf69b154c41 */
                {
                  static SGLuint8 _lArray0_NTCC[255UL] = {76U,101U,118U,101U,108U,32U,48U};
                  sglIndexColori(2L);
                  sglIndexFontLineWidthi(2L);
                  sglIndexFonti(0L);
                  sglSetTextAlignment(SGL_ALIGN_CENTER, SGL_ALIGN_MIDDLE);
                  sgluWriteText(-80.0F, 20.0F, _lArray0_NTCC, 255L);
                }
                break;

              case 8L:

                /* Object: NTCD, Type: text, OID: 38f6bfdc-6ed2-4f53-88c9-87594f1ad956 */
                {
                  static SGLuint8 _lArray0_NTCD[255UL] = {76U,101U,118U,101U,108U,32U,48U};
                  sglIndexColori(2L);
                  sglIndexFontLineWidthi(2L);
                  sglIndexFonti(0L);
                  sglSetTextAlignment(SGL_ALIGN_CENTER, SGL_ALIGN_MIDDLE);
                  sgluWriteText(-80.0F, 20.0F, _lArray0_NTCD, 255L);
                }
                break;

              case 9L:

                /* Object: NTCE, Type: text, OID: 21d07737-4826-413e-9279-e9f4b722b67d */
                {
                  static SGLuint8 _lArray0_NTCE[255UL] = {76U,101U,118U,101U,108U,32U,48U};
                  sglIndexColori(2L);
                  sglIndexFontLineWidthi(2L);
                  sglIndexFonti(0L);
                  sglSetTextAlignment(SGL_ALIGN_CENTER, SGL_ALIGN_MIDDLE);
                  sgluWriteText(-80.0F, 20.0F, _lArray0_NTCE, 255L);
                }
                break;

              case 10L:

                /* Object: level0_1, Type: text, OID: 22130964-bd21-499a-8aed-c163e313fd56 */
                {
                  static SGLuint8 _lArray0_level0_1[255UL] = {76U,101U,118U,101U,108U,32U,48U};
                  sglIndexColori(2L);
                  sglIndexFontLineWidthi(2L);
                  sglIndexFonti(0L);
                  sglSetTextAlignment(SGL_ALIGN_CENTER, SGL_ALIGN_MIDDLE);
                  sgluWriteText(-80.0F, 20.0F, _lArray0_level0_1, 255L);
                }
                break;

              default:
              /* case 1L */

                /* Object: level0, Type: text, OID: bfc3b484-4e5e-4069-9417-6e799a557371 */
                {
                  static SGLuint8 _lArray0_level0[255UL] = {76U,101U,118U,101U,108U,32U,48U};
                  sglIndexColori(2L);
                  sglIndexFontLineWidthi(2L);
                  sglIndexFonti(0L);
                  sglSetTextAlignment(SGL_ALIGN_CENTER, SGL_ALIGN_MIDDLE);
                  sgluWriteText(-80.0F, 20.0F, _lArray0_level0, 255L);
                }
                break;
              }
            }
            break;
          }
          sglPopMatrixAndTranslate();
        }
        sglPopMatrixAndTranslate();
      }
    }
  }
}


/*********************************************************
 ** End of file
 ** End of generation: 2017-05-30T13:27:24
 *********************************************************/
