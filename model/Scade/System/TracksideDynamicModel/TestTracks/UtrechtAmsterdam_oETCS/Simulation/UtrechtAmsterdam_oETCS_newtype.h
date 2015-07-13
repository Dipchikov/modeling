#ifndef UTRECHTAMSTERDAM_OETCS_TYPES_CONVERSION
#define UTRECHTAMSTERDAM_OETCS_TYPES_CONVERSION

#include "NewSmuTypes.h"

/****************************************************************
 ** kcg_real 
 ****************************************************************/
extern int kcg_real_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_real_string(const char *str, char **endptr);
extern int string_to_kcg_real(const char *str, void *pValue, char **endptr);
extern int is_kcg_real_allow_double_conversion();
extern int kcg_real_to_double(const void *pValue, double *nValue);
extern int get_kcg_real_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_real(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_real_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_real_Utils;

/****************************************************************
 ** kcg_bool 
 ****************************************************************/
extern int kcg_bool_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_bool_string(const char *str, char **endptr);
extern int string_to_kcg_bool(const char *str, void *pValue, char **endptr);
extern int is_kcg_bool_allow_double_conversion();
extern int kcg_bool_to_double(const void *pValue, double *nValue);
extern int get_kcg_bool_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_bool(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_bool_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_bool_Utils;

/****************************************************************
 ** kcg_char 
 ****************************************************************/
extern int kcg_char_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_char_string(const char *str, char **endptr);
extern int string_to_kcg_char(const char *str, void *pValue, char **endptr);
extern int is_kcg_char_allow_double_conversion();
extern int kcg_char_to_double(const void *pValue, double *nValue);
extern int get_kcg_char_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_char(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_char_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_char_Utils;

/****************************************************************
 ** kcg_int 
 ****************************************************************/
extern int kcg_int_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_int_string(const char *str, char **endptr);
extern int string_to_kcg_int(const char *str, void *pValue, char **endptr);
extern int is_kcg_int_allow_double_conversion();
extern int kcg_int_to_double(const void *pValue, double *nValue);
extern int get_kcg_int_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_int(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_int_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_int_Utils;

/****************************************************************
 ** struct__21746 
 ****************************************************************/
extern int struct__21746_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21746_string(const char *str, char **endptr);
extern int string_to_struct__21746(const char *str, void *pValue, char **endptr);
extern int is_struct__21746_allow_double_conversion();
extern int struct__21746_to_double(const void *pValue, double *nValue);
extern int get_struct__21746_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21746(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21746_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21746_Utils;

/****************************************************************
 ** array_int_500 
 ****************************************************************/
extern int array_int_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_500_string(const char *str, char **endptr);
extern int string_to_array_int_500(const char *str, void *pValue, char **endptr);
extern int is_array_int_500_allow_double_conversion();
extern int array_int_500_to_double(const void *pValue, double *nValue);
extern int get_array_int_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_500(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_500_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_500_Utils;

/****************************************************************
 ** struct__21762 
 ****************************************************************/
extern int struct__21762_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21762_string(const char *str, char **endptr);
extern int string_to_struct__21762(const char *str, void *pValue, char **endptr);
extern int is_struct__21762_allow_double_conversion();
extern int struct__21762_to_double(const void *pValue, double *nValue);
extern int get_struct__21762_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21762(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21762_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21762_Utils;

/****************************************************************
 ** array__21770 
 ****************************************************************/
extern int array__21770_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__21770_string(const char *str, char **endptr);
extern int string_to_array__21770(const char *str, void *pValue, char **endptr);
extern int is_array__21770_allow_double_conversion();
extern int array__21770_to_double(const void *pValue, double *nValue);
extern int get_array__21770_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__21770(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__21770_default_value(void *pValue);
extern SimTypeUtils _Type_array__21770_Utils;

/****************************************************************
 ** struct__21773 
 ****************************************************************/
extern int struct__21773_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21773_string(const char *str, char **endptr);
extern int string_to_struct__21773(const char *str, void *pValue, char **endptr);
extern int is_struct__21773_allow_double_conversion();
extern int struct__21773_to_double(const void *pValue, double *nValue);
extern int get_struct__21773_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21773(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21773_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21773_Utils;

/****************************************************************
 ** struct__21778 
 ****************************************************************/
extern int struct__21778_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21778_string(const char *str, char **endptr);
extern int string_to_struct__21778(const char *str, void *pValue, char **endptr);
extern int is_struct__21778_allow_double_conversion();
extern int struct__21778_to_double(const void *pValue, double *nValue);
extern int get_struct__21778_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21778(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21778_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21778_Utils;

/****************************************************************
 ** struct__21791 
 ****************************************************************/
extern int struct__21791_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21791_string(const char *str, char **endptr);
extern int string_to_struct__21791(const char *str, void *pValue, char **endptr);
extern int is_struct__21791_allow_double_conversion();
extern int struct__21791_to_double(const void *pValue, double *nValue);
extern int get_struct__21791_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21791(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21791_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21791_Utils;

/****************************************************************
 ** struct__21796 
 ****************************************************************/
extern int struct__21796_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21796_string(const char *str, char **endptr);
extern int string_to_struct__21796(const char *str, void *pValue, char **endptr);
extern int is_struct__21796_allow_double_conversion();
extern int struct__21796_to_double(const void *pValue, double *nValue);
extern int get_struct__21796_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21796(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21796_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21796_Utils;

/****************************************************************
 ** struct__21802 
 ****************************************************************/
extern int struct__21802_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21802_string(const char *str, char **endptr);
extern int string_to_struct__21802(const char *str, void *pValue, char **endptr);
extern int is_struct__21802_allow_double_conversion();
extern int struct__21802_to_double(const void *pValue, double *nValue);
extern int get_struct__21802_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21802(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21802_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21802_Utils;

/****************************************************************
 ** struct__21807 
 ****************************************************************/
extern int struct__21807_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21807_string(const char *str, char **endptr);
extern int string_to_struct__21807(const char *str, void *pValue, char **endptr);
extern int is_struct__21807_allow_double_conversion();
extern int struct__21807_to_double(const void *pValue, double *nValue);
extern int get_struct__21807_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21807(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21807_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21807_Utils;

/****************************************************************
 ** struct__21815 
 ****************************************************************/
extern int struct__21815_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21815_string(const char *str, char **endptr);
extern int string_to_struct__21815(const char *str, void *pValue, char **endptr);
extern int is_struct__21815_allow_double_conversion();
extern int struct__21815_to_double(const void *pValue, double *nValue);
extern int get_struct__21815_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21815(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21815_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21815_Utils;

/****************************************************************
 ** struct__21824 
 ****************************************************************/
extern int struct__21824_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21824_string(const char *str, char **endptr);
extern int string_to_struct__21824(const char *str, void *pValue, char **endptr);
extern int is_struct__21824_allow_double_conversion();
extern int struct__21824_to_double(const void *pValue, double *nValue);
extern int get_struct__21824_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21824(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21824_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21824_Utils;

/****************************************************************
 ** struct__21829 
 ****************************************************************/
extern int struct__21829_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21829_string(const char *str, char **endptr);
extern int string_to_struct__21829(const char *str, void *pValue, char **endptr);
extern int is_struct__21829_allow_double_conversion();
extern int struct__21829_to_double(const void *pValue, double *nValue);
extern int get_struct__21829_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21829(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21829_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21829_Utils;

/****************************************************************
 ** array_int_3 
 ****************************************************************/
extern int array_int_3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_3_string(const char *str, char **endptr);
extern int string_to_array_int_3(const char *str, void *pValue, char **endptr);
extern int is_array_int_3_allow_double_conversion();
extern int array_int_3_to_double(const void *pValue, double *nValue);
extern int get_array_int_3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_3(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_3_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_3_Utils;

/****************************************************************
 ** struct__21840 
 ****************************************************************/
extern int struct__21840_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21840_string(const char *str, char **endptr);
extern int string_to_struct__21840(const char *str, void *pValue, char **endptr);
extern int is_struct__21840_allow_double_conversion();
extern int struct__21840_to_double(const void *pValue, double *nValue);
extern int get_struct__21840_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21840(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21840_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21840_Utils;

/****************************************************************
 ** array_int_3_33 
 ****************************************************************/
extern int array_int_3_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_3_33_string(const char *str, char **endptr);
extern int string_to_array_int_3_33(const char *str, void *pValue, char **endptr);
extern int is_array_int_3_33_allow_double_conversion();
extern int array_int_3_33_to_double(const void *pValue, double *nValue);
extern int get_array_int_3_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_3_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_3_33_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_3_33_Utils;

/****************************************************************
 ** array_int_99 
 ****************************************************************/
extern int array_int_99_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_99_string(const char *str, char **endptr);
extern int string_to_array_int_99(const char *str, void *pValue, char **endptr);
extern int is_array_int_99_allow_double_conversion();
extern int array_int_99_to_double(const void *pValue, double *nValue);
extern int get_array_int_99_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_99(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_99_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_99_Utils;

/****************************************************************
 ** array__21852 
 ****************************************************************/
extern int array__21852_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__21852_string(const char *str, char **endptr);
extern int string_to_array__21852(const char *str, void *pValue, char **endptr);
extern int is_array__21852_allow_double_conversion();
extern int array__21852_to_double(const void *pValue, double *nValue);
extern int get_array__21852_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__21852(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__21852_default_value(void *pValue);
extern SimTypeUtils _Type_array__21852_Utils;

/****************************************************************
 ** array__21855 
 ****************************************************************/
extern int array__21855_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__21855_string(const char *str, char **endptr);
extern int string_to_array__21855(const char *str, void *pValue, char **endptr);
extern int is_array__21855_allow_double_conversion();
extern int array__21855_to_double(const void *pValue, double *nValue);
extern int get_array__21855_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__21855(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__21855_default_value(void *pValue);
extern SimTypeUtils _Type_array__21855_Utils;

/****************************************************************
 ** struct__21858 
 ****************************************************************/
extern int struct__21858_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21858_string(const char *str, char **endptr);
extern int string_to_struct__21858(const char *str, void *pValue, char **endptr);
extern int is_struct__21858_allow_double_conversion();
extern int struct__21858_to_double(const void *pValue, double *nValue);
extern int get_struct__21858_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21858(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21858_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21858_Utils;

/****************************************************************
 ** array_int_2 
 ****************************************************************/
extern int array_int_2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_2_string(const char *str, char **endptr);
extern int string_to_array_int_2(const char *str, void *pValue, char **endptr);
extern int is_array_int_2_allow_double_conversion();
extern int array_int_2_to_double(const void *pValue, double *nValue);
extern int get_array_int_2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_2_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_2_Utils;

/****************************************************************
 ** struct__21875 
 ****************************************************************/
extern int struct__21875_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21875_string(const char *str, char **endptr);
extern int string_to_struct__21875(const char *str, void *pValue, char **endptr);
extern int is_struct__21875_allow_double_conversion();
extern int struct__21875_to_double(const void *pValue, double *nValue);
extern int get_struct__21875_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21875(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21875_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21875_Utils;

/****************************************************************
 ** array_int_2_33 
 ****************************************************************/
extern int array_int_2_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_2_33_string(const char *str, char **endptr);
extern int string_to_array_int_2_33(const char *str, void *pValue, char **endptr);
extern int is_array_int_2_33_allow_double_conversion();
extern int array_int_2_33_to_double(const void *pValue, double *nValue);
extern int get_array_int_2_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_2_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_2_33_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_2_33_Utils;

/****************************************************************
 ** array_int_66 
 ****************************************************************/
extern int array_int_66_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_66_string(const char *str, char **endptr);
extern int string_to_array_int_66(const char *str, void *pValue, char **endptr);
extern int is_array_int_66_allow_double_conversion();
extern int array_int_66_to_double(const void *pValue, double *nValue);
extern int get_array_int_66_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_66(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_66_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_66_Utils;

/****************************************************************
 ** array__21886 
 ****************************************************************/
extern int array__21886_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__21886_string(const char *str, char **endptr);
extern int string_to_array__21886(const char *str, void *pValue, char **endptr);
extern int is_array__21886_allow_double_conversion();
extern int array__21886_to_double(const void *pValue, double *nValue);
extern int get_array__21886_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__21886(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__21886_default_value(void *pValue);
extern SimTypeUtils _Type_array__21886_Utils;

/****************************************************************
 ** array__21889 
 ****************************************************************/
extern int array__21889_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__21889_string(const char *str, char **endptr);
extern int string_to_array__21889(const char *str, void *pValue, char **endptr);
extern int is_array__21889_allow_double_conversion();
extern int array__21889_to_double(const void *pValue, double *nValue);
extern int get_array__21889_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__21889(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__21889_default_value(void *pValue);
extern SimTypeUtils _Type_array__21889_Utils;

/****************************************************************
 ** struct__21892 
 ****************************************************************/
extern int struct__21892_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21892_string(const char *str, char **endptr);
extern int string_to_struct__21892(const char *str, void *pValue, char **endptr);
extern int is_struct__21892_allow_double_conversion();
extern int struct__21892_to_double(const void *pValue, double *nValue);
extern int get_struct__21892_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21892(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21892_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21892_Utils;

/****************************************************************
 ** struct__21903 
 ****************************************************************/
extern int struct__21903_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21903_string(const char *str, char **endptr);
extern int string_to_struct__21903(const char *str, void *pValue, char **endptr);
extern int is_struct__21903_allow_double_conversion();
extern int struct__21903_to_double(const void *pValue, double *nValue);
extern int get_struct__21903_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21903(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21903_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21903_Utils;

/****************************************************************
 ** array_int_32 
 ****************************************************************/
extern int array_int_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_32_string(const char *str, char **endptr);
extern int string_to_array_int_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_32_allow_double_conversion();
extern int array_int_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_32_Utils;

/****************************************************************
 ** struct__21918 
 ****************************************************************/
extern int struct__21918_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21918_string(const char *str, char **endptr);
extern int string_to_struct__21918(const char *str, void *pValue, char **endptr);
extern int is_struct__21918_allow_double_conversion();
extern int struct__21918_to_double(const void *pValue, double *nValue);
extern int get_struct__21918_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21918(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21918_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21918_Utils;

/****************************************************************
 ** struct__21947 
 ****************************************************************/
extern int struct__21947_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21947_string(const char *str, char **endptr);
extern int string_to_struct__21947(const char *str, void *pValue, char **endptr);
extern int is_struct__21947_allow_double_conversion();
extern int struct__21947_to_double(const void *pValue, double *nValue);
extern int get_struct__21947_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21947(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21947_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21947_Utils;

/****************************************************************
 ** array_int_500_500 
 ****************************************************************/
extern int array_int_500_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_500_500_string(const char *str, char **endptr);
extern int string_to_array_int_500_500(const char *str, void *pValue, char **endptr);
extern int is_array_int_500_500_allow_double_conversion();
extern int array_int_500_500_to_double(const void *pValue, double *nValue);
extern int get_array_int_500_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_500_500(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_500_500_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_500_500_Utils;

/****************************************************************
 ** array_int_499 
 ****************************************************************/
extern int array_int_499_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_499_string(const char *str, char **endptr);
extern int string_to_array_int_499(const char *str, void *pValue, char **endptr);
extern int is_array_int_499_allow_double_conversion();
extern int array_int_499_to_double(const void *pValue, double *nValue);
extern int get_array_int_499_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_499(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_499_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_499_Utils;

/****************************************************************
 ** array_int_1 
 ****************************************************************/
extern int array_int_1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_1_string(const char *str, char **endptr);
extern int string_to_array_int_1(const char *str, void *pValue, char **endptr);
extern int is_array_int_1_allow_double_conversion();
extern int array_int_1_to_double(const void *pValue, double *nValue);
extern int get_array_int_1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_1_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_1_Utils;

/****************************************************************
 ** array_int_496 
 ****************************************************************/
extern int array_int_496_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_496_string(const char *str, char **endptr);
extern int string_to_array_int_496(const char *str, void *pValue, char **endptr);
extern int is_array_int_496_allow_double_conversion();
extern int array_int_496_to_double(const void *pValue, double *nValue);
extern int get_array_int_496_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_496(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_496_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_496_Utils;

/****************************************************************
 ** array_int_4 
 ****************************************************************/
extern int array_int_4_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_4_string(const char *str, char **endptr);
extern int string_to_array_int_4(const char *str, void *pValue, char **endptr);
extern int is_array_int_4_allow_double_conversion();
extern int array_int_4_to_double(const void *pValue, double *nValue);
extern int get_array_int_4_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_4(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_4_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_4_Utils;

/****************************************************************
 ** array_int_492 
 ****************************************************************/
extern int array_int_492_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_492_string(const char *str, char **endptr);
extern int string_to_array_int_492(const char *str, void *pValue, char **endptr);
extern int is_array_int_492_allow_double_conversion();
extern int array_int_492_to_double(const void *pValue, double *nValue);
extern int get_array_int_492_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_492(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_492_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_492_Utils;

/****************************************************************
 ** array_int_8 
 ****************************************************************/
extern int array_int_8_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_8_string(const char *str, char **endptr);
extern int string_to_array_int_8(const char *str, void *pValue, char **endptr);
extern int is_array_int_8_allow_double_conversion();
extern int array_int_8_to_double(const void *pValue, double *nValue);
extern int get_array_int_8_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_8(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_8_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_8_Utils;

/****************************************************************
 ** array_int_2_33_99 
 ****************************************************************/
extern int array_int_2_33_99_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_2_33_99_string(const char *str, char **endptr);
extern int string_to_array_int_2_33_99(const char *str, void *pValue, char **endptr);
extern int is_array_int_2_33_99_allow_double_conversion();
extern int array_int_2_33_99_to_double(const void *pValue, double *nValue);
extern int get_array_int_2_33_99_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_2_33_99(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_2_33_99_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_2_33_99_Utils;

/****************************************************************
 ** array_int_430 
 ****************************************************************/
extern int array_int_430_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_430_string(const char *str, char **endptr);
extern int string_to_array_int_430(const char *str, void *pValue, char **endptr);
extern int is_array_int_430_allow_double_conversion();
extern int array_int_430_to_double(const void *pValue, double *nValue);
extern int get_array_int_430_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_430(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_430_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_430_Utils;

/****************************************************************
 ** array_int_70 
 ****************************************************************/
extern int array_int_70_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_70_string(const char *str, char **endptr);
extern int string_to_array_int_70(const char *str, void *pValue, char **endptr);
extern int is_array_int_70_allow_double_conversion();
extern int array_int_70_to_double(const void *pValue, double *nValue);
extern int get_array_int_70_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_70(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_70_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_70_Utils;

/****************************************************************
 ** array__21985 
 ****************************************************************/
extern int array__21985_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__21985_string(const char *str, char **endptr);
extern int string_to_array__21985(const char *str, void *pValue, char **endptr);
extern int is_array__21985_allow_double_conversion();
extern int array__21985_to_double(const void *pValue, double *nValue);
extern int get_array__21985_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__21985(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__21985_default_value(void *pValue);
extern SimTypeUtils _Type_array__21985_Utils;

/****************************************************************
 ** array_int_444 
 ****************************************************************/
extern int array_int_444_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_444_string(const char *str, char **endptr);
extern int string_to_array_int_444(const char *str, void *pValue, char **endptr);
extern int is_array_int_444_allow_double_conversion();
extern int array_int_444_to_double(const void *pValue, double *nValue);
extern int get_array_int_444_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_444(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_444_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_444_Utils;

/****************************************************************
 ** array_int_6 
 ****************************************************************/
extern int array_int_6_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_6_string(const char *str, char **endptr);
extern int string_to_array_int_6(const char *str, void *pValue, char **endptr);
extern int is_array_int_6_allow_double_conversion();
extern int array_int_6_to_double(const void *pValue, double *nValue);
extern int get_array_int_6_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_6(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_6_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_6_Utils;

/****************************************************************
 ** array_int_24 
 ****************************************************************/
extern int array_int_24_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_24_string(const char *str, char **endptr);
extern int string_to_array_int_24(const char *str, void *pValue, char **endptr);
extern int is_array_int_24_allow_double_conversion();
extern int array_int_24_to_double(const void *pValue, double *nValue);
extern int get_array_int_24_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_24(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_24_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_24_Utils;

/****************************************************************
 ** array_int_56 
 ****************************************************************/
extern int array_int_56_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_56_string(const char *str, char **endptr);
extern int string_to_array_int_56(const char *str, void *pValue, char **endptr);
extern int is_array_int_56_allow_double_conversion();
extern int array_int_56_to_double(const void *pValue, double *nValue);
extern int get_array_int_56_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_56(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_56_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_56_Utils;

/****************************************************************
 ** array_int_18 
 ****************************************************************/
extern int array_int_18_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_18_string(const char *str, char **endptr);
extern int string_to_array_int_18(const char *str, void *pValue, char **endptr);
extern int is_array_int_18_allow_double_conversion();
extern int array_int_18_to_double(const void *pValue, double *nValue);
extern int get_array_int_18_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_18(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_18_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_18_Utils;

/****************************************************************
 ** array_int_3_33_99 
 ****************************************************************/
extern int array_int_3_33_99_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_3_33_99_string(const char *str, char **endptr);
extern int string_to_array_int_3_33_99(const char *str, void *pValue, char **endptr);
extern int is_array_int_3_33_99_allow_double_conversion();
extern int array_int_3_33_99_to_double(const void *pValue, double *nValue);
extern int get_array_int_3_33_99_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_3_33_99(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_3_33_99_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_3_33_99_Utils;

/****************************************************************
 ** array_int_395 
 ****************************************************************/
extern int array_int_395_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_395_string(const char *str, char **endptr);
extern int string_to_array_int_395(const char *str, void *pValue, char **endptr);
extern int is_array_int_395_allow_double_conversion();
extern int array_int_395_to_double(const void *pValue, double *nValue);
extern int get_array_int_395_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_395(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_395_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_395_Utils;

/****************************************************************
 ** array_int_5 
 ****************************************************************/
extern int array_int_5_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_5_string(const char *str, char **endptr);
extern int string_to_array_int_5(const char *str, void *pValue, char **endptr);
extern int is_array_int_5_allow_double_conversion();
extern int array_int_5_to_double(const void *pValue, double *nValue);
extern int get_array_int_5_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_5(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_5_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_5_Utils;

/****************************************************************
 ** array_int_105 
 ****************************************************************/
extern int array_int_105_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_105_string(const char *str, char **endptr);
extern int string_to_array_int_105(const char *str, void *pValue, char **endptr);
extern int is_array_int_105_allow_double_conversion();
extern int array_int_105_to_double(const void *pValue, double *nValue);
extern int get_array_int_105_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_105(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_105_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_105_Utils;

/****************************************************************
 ** array__22015 
 ****************************************************************/
extern int array__22015_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22015_string(const char *str, char **endptr);
extern int string_to_array__22015(const char *str, void *pValue, char **endptr);
extern int is_array__22015_allow_double_conversion();
extern int array__22015_to_double(const void *pValue, double *nValue);
extern int get_array__22015_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22015(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22015_default_value(void *pValue);
extern SimTypeUtils _Type_array__22015_Utils;

/****************************************************************
 ** NID_PACKET 
 ****************************************************************/
extern int NID_PACKET_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_PACKET_string(const char *str, char **endptr);
extern int string_to_NID_PACKET(const char *str, void *pValue, char **endptr);
extern int is_NID_PACKET_allow_double_conversion();
extern int NID_PACKET_to_double(const void *pValue, double *nValue);
extern int get_NID_PACKET_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_PACKET(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_PACKET_default_value(void *pValue);
extern SimTypeUtils _Type_NID_PACKET_Utils;

/****************************************************************
 ** Q_DIR 
 ****************************************************************/
extern int Q_DIR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DIR_string(const char *str, char **endptr);
extern int string_to_Q_DIR(const char *str, void *pValue, char **endptr);
extern int is_Q_DIR_allow_double_conversion();
extern int Q_DIR_to_double(const void *pValue, double *nValue);
extern int get_Q_DIR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIR_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIR_Utils;

/****************************************************************
 ** Q_UPDOWN 
 ****************************************************************/
extern int Q_UPDOWN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_UPDOWN_string(const char *str, char **endptr);
extern int string_to_Q_UPDOWN(const char *str, void *pValue, char **endptr);
extern int is_Q_UPDOWN_allow_double_conversion();
extern int Q_UPDOWN_to_double(const void *pValue, double *nValue);
extern int get_Q_UPDOWN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_UPDOWN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_UPDOWN_default_value(void *pValue);
extern SimTypeUtils _Type_Q_UPDOWN_Utils;

/****************************************************************
 ** M_VERSION 
 ****************************************************************/
extern int M_VERSION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_VERSION_string(const char *str, char **endptr);
extern int string_to_M_VERSION(const char *str, void *pValue, char **endptr);
extern int is_M_VERSION_allow_double_conversion();
extern int M_VERSION_to_double(const void *pValue, double *nValue);
extern int get_M_VERSION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_VERSION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_VERSION_default_value(void *pValue);
extern SimTypeUtils _Type_M_VERSION_Utils;

/****************************************************************
 ** Q_MEDIA 
 ****************************************************************/
extern int Q_MEDIA_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_MEDIA_string(const char *str, char **endptr);
extern int string_to_Q_MEDIA(const char *str, void *pValue, char **endptr);
extern int is_Q_MEDIA_allow_double_conversion();
extern int Q_MEDIA_to_double(const void *pValue, double *nValue);
extern int get_Q_MEDIA_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_MEDIA(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_MEDIA_default_value(void *pValue);
extern SimTypeUtils _Type_Q_MEDIA_Utils;

/****************************************************************
 ** N_PIG 
 ****************************************************************/
extern int N_PIG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_N_PIG_string(const char *str, char **endptr);
extern int string_to_N_PIG(const char *str, void *pValue, char **endptr);
extern int is_N_PIG_allow_double_conversion();
extern int N_PIG_to_double(const void *pValue, double *nValue);
extern int get_N_PIG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_N_PIG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_N_PIG_default_value(void *pValue);
extern SimTypeUtils _Type_N_PIG_Utils;

/****************************************************************
 ** N_TOTAL 
 ****************************************************************/
extern int N_TOTAL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_N_TOTAL_string(const char *str, char **endptr);
extern int string_to_N_TOTAL(const char *str, void *pValue, char **endptr);
extern int is_N_TOTAL_allow_double_conversion();
extern int N_TOTAL_to_double(const void *pValue, double *nValue);
extern int get_N_TOTAL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_N_TOTAL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_N_TOTAL_default_value(void *pValue);
extern SimTypeUtils _Type_N_TOTAL_Utils;

/****************************************************************
 ** M_DUP 
 ****************************************************************/
extern int M_DUP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_DUP_string(const char *str, char **endptr);
extern int string_to_M_DUP(const char *str, void *pValue, char **endptr);
extern int is_M_DUP_allow_double_conversion();
extern int M_DUP_to_double(const void *pValue, double *nValue);
extern int get_M_DUP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_DUP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_DUP_default_value(void *pValue);
extern SimTypeUtils _Type_M_DUP_Utils;

/****************************************************************
 ** M_MCOUNT 
 ****************************************************************/
extern int M_MCOUNT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_MCOUNT_string(const char *str, char **endptr);
extern int string_to_M_MCOUNT(const char *str, void *pValue, char **endptr);
extern int is_M_MCOUNT_allow_double_conversion();
extern int M_MCOUNT_to_double(const void *pValue, double *nValue);
extern int get_M_MCOUNT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_MCOUNT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_MCOUNT_default_value(void *pValue);
extern SimTypeUtils _Type_M_MCOUNT_Utils;

/****************************************************************
 ** NID_C 
 ****************************************************************/
extern int NID_C_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_C_string(const char *str, char **endptr);
extern int string_to_NID_C(const char *str, void *pValue, char **endptr);
extern int is_NID_C_allow_double_conversion();
extern int NID_C_to_double(const void *pValue, double *nValue);
extern int get_NID_C_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_C(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_C_default_value(void *pValue);
extern SimTypeUtils _Type_NID_C_Utils;

/****************************************************************
 ** NID_BG 
 ****************************************************************/
extern int NID_BG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_BG_string(const char *str, char **endptr);
extern int string_to_NID_BG(const char *str, void *pValue, char **endptr);
extern int is_NID_BG_allow_double_conversion();
extern int NID_BG_to_double(const void *pValue, double *nValue);
extern int get_NID_BG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_BG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_BG_default_value(void *pValue);
extern SimTypeUtils _Type_NID_BG_Utils;

/****************************************************************
 ** Q_LINK 
 ****************************************************************/
extern int Q_LINK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LINK_string(const char *str, char **endptr);
extern int string_to_Q_LINK(const char *str, void *pValue, char **endptr);
extern int is_Q_LINK_allow_double_conversion();
extern int Q_LINK_to_double(const void *pValue, double *nValue);
extern int get_Q_LINK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LINK(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LINK_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LINK_Utils;

/****************************************************************
 ** BaliseGroupData_Basics 
 ****************************************************************/
extern int BaliseGroupData_Basics_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BaliseGroupData_Basics_string(const char *str, char **endptr);
extern int string_to_BaliseGroupData_Basics(const char *str, void *pValue, char **endptr);
extern int is_BaliseGroupData_Basics_allow_double_conversion();
extern int BaliseGroupData_Basics_to_double(const void *pValue, double *nValue);
extern int get_BaliseGroupData_Basics_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BaliseGroupData_Basics(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BaliseGroupData_Basics_default_value(void *pValue);
extern SimTypeUtils _Type_BaliseGroupData_Basics_Utils;

/****************************************************************
 ** OrBG_TM 
 ****************************************************************/
extern int OrBG_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_OrBG_TM_string(const char *str, char **endptr);
extern int string_to_OrBG_TM(const char *str, void *pValue, char **endptr);
extern int is_OrBG_TM_allow_double_conversion();
extern int OrBG_TM_to_double(const void *pValue, double *nValue);
extern int get_OrBG_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_OrBG_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_OrBG_TM_default_value(void *pValue);
extern SimTypeUtils _Type_OrBG_TM_Utils;

/****************************************************************
 ** OrLine_TM 
 ****************************************************************/
extern int OrLine_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_OrLine_TM_string(const char *str, char **endptr);
extern int string_to_OrLine_TM(const char *str, void *pValue, char **endptr);
extern int is_OrLine_TM_allow_double_conversion();
extern int OrLine_TM_to_double(const void *pValue, double *nValue);
extern int get_OrLine_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_OrLine_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_OrLine_TM_default_value(void *pValue);
extern SimTypeUtils _Type_OrLine_TM_Utils;

/****************************************************************
 ** BaliseTelegramHeader_int_T_TM 
 ****************************************************************/
extern int BaliseTelegramHeader_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BaliseTelegramHeader_int_T_TM_string(const char *str, char **endptr);
extern int string_to_BaliseTelegramHeader_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_BaliseTelegramHeader_int_T_TM_allow_double_conversion();
extern int BaliseTelegramHeader_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_BaliseTelegramHeader_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BaliseTelegramHeader_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BaliseTelegramHeader_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_BaliseTelegramHeader_int_T_TM_Utils;

/****************************************************************
 ** P255_trackside_int_T_TM 
 ****************************************************************/
extern int P255_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P255_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P255_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P255_trackside_int_T_TM_allow_double_conversion();
extern int P255_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P255_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P255_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P255_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P255_trackside_int_T_TM_Utils;

/****************************************************************
 ** nid_packet_meta_TM 
 ****************************************************************/
extern int nid_packet_meta_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_nid_packet_meta_TM_string(const char *str, char **endptr);
extern int string_to_nid_packet_meta_TM(const char *str, void *pValue, char **endptr);
extern int is_nid_packet_meta_TM_allow_double_conversion();
extern int nid_packet_meta_TM_to_double(const void *pValue, double *nValue);
extern int get_nid_packet_meta_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_nid_packet_meta_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_nid_packet_meta_TM_default_value(void *pValue);
extern SimTypeUtils _Type_nid_packet_meta_TM_Utils;

/****************************************************************
 ** P045_trackside_int_T_TM 
 ****************************************************************/
extern int P045_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P045_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P045_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P045_trackside_int_T_TM_allow_double_conversion();
extern int P045_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P045_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P045_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P045_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P045_trackside_int_T_TM_Utils;

/****************************************************************
 ** BaliseGroupData_TM 
 ****************************************************************/
extern int BaliseGroupData_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BaliseGroupData_TM_string(const char *str, char **endptr);
extern int string_to_BaliseGroupData_TM(const char *str, void *pValue, char **endptr);
extern int is_BaliseGroupData_TM_allow_double_conversion();
extern int BaliseGroupData_TM_to_double(const void *pValue, double *nValue);
extern int get_BaliseGroupData_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BaliseGroupData_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BaliseGroupData_TM_default_value(void *pValue);
extern SimTypeUtils _Type_BaliseGroupData_TM_Utils;

/****************************************************************
 ** CompressedBaliseMessage_TM 
 ****************************************************************/
extern int CompressedBaliseMessage_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CompressedBaliseMessage_TM_string(const char *str, char **endptr);
extern int string_to_CompressedBaliseMessage_TM(const char *str, void *pValue, char **endptr);
extern int is_CompressedBaliseMessage_TM_allow_double_conversion();
extern int CompressedBaliseMessage_TM_to_double(const void *pValue, double *nValue);
extern int get_CompressedBaliseMessage_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CompressedBaliseMessage_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CompressedBaliseMessage_TM_default_value(void *pValue);
extern SimTypeUtils _Type_CompressedBaliseMessage_TM_Utils;

/****************************************************************
 ** P042_trackside_int_T_TM 
 ****************************************************************/
extern int P042_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P042_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P042_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P042_trackside_int_T_TM_allow_double_conversion();
extern int P042_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P042_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P042_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P042_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P042_trackside_int_T_TM_Utils;

/****************************************************************
 ** P046_trackside_int_T_TM 
 ****************************************************************/
extern int P046_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P046_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P046_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P046_trackside_int_T_TM_allow_double_conversion();
extern int P046_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P046_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P046_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P046_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P046_trackside_int_T_TM_Utils;

/****************************************************************
 ** P046_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int P046_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P046_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_P046_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P046_trackide_sectionlist_T_TM_allow_double_conversion();
extern int P046_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P046_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P046_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P046_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P046_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** P046_section_int_T_TM 
 ****************************************************************/
extern int P046_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P046_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P046_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P046_section_int_T_TM_allow_double_conversion();
extern int P046_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P046_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P046_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P046_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P046_section_int_T_TM_Utils;

/****************************************************************
 ** P046_sections_array_flat_T_TM 
 ****************************************************************/
extern int P046_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P046_sections_array_flat_T_TM_string(const char *str, char **endptr);
extern int string_to_P046_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P046_sections_array_flat_T_TM_allow_double_conversion();
extern int P046_sections_array_flat_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P046_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P046_sections_array_flat_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P046_sections_array_flat_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P046_sections_array_flat_T_TM_Utils;

/****************************************************************
 ** P046_OBU_sectionlist_array_T_TM 
 ****************************************************************/
extern int P046_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P046_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P046_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P046_OBU_sectionlist_array_T_TM_allow_double_conversion();
extern int P046_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P046_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P046_OBU_sectionlist_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P046_OBU_sectionlist_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P046_OBU_sectionlist_array_T_TM_Utils;

/****************************************************************
 ** P046_section_array_T_TM 
 ****************************************************************/
extern int P046_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P046_section_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P046_section_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P046_section_array_T_TM_allow_double_conversion();
extern int P046_section_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P046_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P046_section_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P046_section_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P046_section_array_T_TM_Utils;

/****************************************************************
 ** P046_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int P046_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P046_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P046_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P046_OBU_sectionlist_int_T_TM_allow_double_conversion();
extern int P046_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P046_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P046_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P046_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P046_OBU_sectionlist_int_T_TM_Utils;

/****************************************************************
 ** P041_trackside_int_T_TM 
 ****************************************************************/
extern int P041_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_trackside_int_T_TM_allow_double_conversion();
extern int P041_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_trackside_int_T_TM_Utils;

/****************************************************************
 ** P041_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int P041_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_trackide_sectionlist_T_TM_allow_double_conversion();
extern int P041_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** P041_section_int_T_TM 
 ****************************************************************/
extern int P041_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_section_int_T_TM_allow_double_conversion();
extern int P041_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_section_int_T_TM_Utils;

/****************************************************************
 ** P041_sections_array_flat_T_TM 
 ****************************************************************/
extern int P041_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_sections_array_flat_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_sections_array_flat_T_TM_allow_double_conversion();
extern int P041_sections_array_flat_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_sections_array_flat_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_sections_array_flat_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_sections_array_flat_T_TM_Utils;

/****************************************************************
 ** P041_OBU_sectionlist_array_T_TM 
 ****************************************************************/
extern int P041_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_OBU_sectionlist_array_T_TM_allow_double_conversion();
extern int P041_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_OBU_sectionlist_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_OBU_sectionlist_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_OBU_sectionlist_array_T_TM_Utils;

/****************************************************************
 ** P041_section_array_T_TM 
 ****************************************************************/
extern int P041_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_section_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_section_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_section_array_T_TM_allow_double_conversion();
extern int P041_section_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_section_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_section_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_section_array_T_TM_Utils;

/****************************************************************
 ** P041_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int P041_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_OBU_sectionlist_int_T_TM_allow_double_conversion();
extern int P041_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_OBU_sectionlist_int_T_TM_Utils;

/****************************************************************
 ** P137_trackside_int_T_TM 
 ****************************************************************/
extern int P137_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P137_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P137_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P137_trackside_int_T_TM_allow_double_conversion();
extern int P137_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P137_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P137_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P137_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P137_trackside_int_T_TM_Utils;

/****************************************************************
 ** B_data_internal_T_InfraLib 
 ****************************************************************/
extern int B_data_internal_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_B_data_internal_T_InfraLib_string(const char *str, char **endptr);
extern int string_to_B_data_internal_T_InfraLib(const char *str, void *pValue, char **endptr);
extern int is_B_data_internal_T_InfraLib_allow_double_conversion();
extern int B_data_internal_T_InfraLib_to_double(const void *pValue, double *nValue);
extern int get_B_data_internal_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_B_data_internal_T_InfraLib(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_B_data_internal_T_InfraLib_default_value(void *pValue);
extern SimTypeUtils _Type_B_data_internal_T_InfraLib_Utils;

/****************************************************************
 ** TrackSectionData_T_InfraLib 
 ****************************************************************/
extern int TrackSectionData_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TrackSectionData_T_InfraLib_string(const char *str, char **endptr);
extern int string_to_TrackSectionData_T_InfraLib(const char *str, void *pValue, char **endptr);
extern int is_TrackSectionData_T_InfraLib_allow_double_conversion();
extern int TrackSectionData_T_InfraLib_to_double(const void *pValue, double *nValue);
extern int get_TrackSectionData_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TrackSectionData_T_InfraLib(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TrackSectionData_T_InfraLib_default_value(void *pValue);
extern SimTypeUtils _Type_TrackSectionData_T_InfraLib_Utils;

/****************************************************************
 ** TrainPosRaw_T_InfraLib 
 ****************************************************************/
extern int TrainPosRaw_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TrainPosRaw_T_InfraLib_string(const char *str, char **endptr);
extern int string_to_TrainPosRaw_T_InfraLib(const char *str, void *pValue, char **endptr);
extern int is_TrainPosRaw_T_InfraLib_allow_double_conversion();
extern int TrainPosRaw_T_InfraLib_to_double(const void *pValue, double *nValue);
extern int get_TrainPosRaw_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TrainPosRaw_T_InfraLib(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TrainPosRaw_T_InfraLib_default_value(void *pValue);
extern SimTypeUtils _Type_TrainPosRaw_T_InfraLib_Utils;

/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg 
 ****************************************************************/
extern int CompressedPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CompressedPackets_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_CompressedPackets_T_Common_Types_Pkg_allow_double_conversion();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CompressedPackets_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_CompressedPackets_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** Metadata_T_Common_Types_Pkg 
 ****************************************************************/
extern int Metadata_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Metadata_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Metadata_T_Common_Types_Pkg_allow_double_conversion();
extern int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Metadata_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Metadata_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Metadata_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg 
 ****************************************************************/
extern int MetadataElement_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_MetadataElement_T_Common_Types_Pkg_allow_double_conversion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_MetadataElement_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_MetadataElement_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** CompressedPacketData_T_Common_Types_Pkg 
 ****************************************************************/
extern int CompressedPacketData_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CompressedPacketData_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_CompressedPacketData_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_CompressedPacketData_T_Common_Types_Pkg_allow_double_conversion();
extern int CompressedPacketData_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_CompressedPacketData_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CompressedPacketData_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CompressedPacketData_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_CompressedPacketData_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** P003V1_trackside_int_T_TM_baseline2 
 ****************************************************************/
extern int P003V1_trackside_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003V1_trackside_int_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P003V1_trackside_int_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P003V1_trackside_int_T_TM_baseline2_allow_double_conversion();
extern int P003V1_trackside_int_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P003V1_trackside_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003V1_trackside_int_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003V1_trackside_int_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P003V1_trackside_int_T_TM_baseline2_Utils;

/****************************************************************
 ** P003V1_trackide_sectionlist_T_TM_baseline2 
 ****************************************************************/
extern int P003V1_trackide_sectionlist_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003V1_trackide_sectionlist_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P003V1_trackide_sectionlist_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P003V1_trackide_sectionlist_T_TM_baseline2_allow_double_conversion();
extern int P003V1_trackide_sectionlist_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P003V1_trackide_sectionlist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003V1_trackide_sectionlist_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003V1_trackide_sectionlist_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P003V1_trackide_sectionlist_T_TM_baseline2_Utils;

/****************************************************************
 ** TelegramHeader_T_BG_Types_Pkg 
 ****************************************************************/
extern int TelegramHeader_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TelegramHeader_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_TelegramHeader_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_TelegramHeader_T_BG_Types_Pkg_allow_double_conversion();
extern int TelegramHeader_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_TelegramHeader_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TelegramHeader_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TelegramHeader_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_TelegramHeader_T_BG_Types_Pkg_Utils;


#endif /*UTRECHTAMSTERDAM_OETCS_TYPES_CONVERSION */
