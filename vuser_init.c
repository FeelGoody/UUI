#include "lrt.h"
#include "replay.vdf"

vuser_init()
{
lrt_set_env_list(env_allow_array);
lrt_tuxputenv("APPDIR={APPDIR}");
lrt_tuxputenv("ROOTDIR={TUX12}");
lrt_tuxputenv("TUXDIR={TUX12}");
lrt_tuxputenv("INCLUDE=%INCLUDE%;%ROOTDIR%\\inc");
lrt_tuxputenv("LIB=%LIB%;%ROOTDIR%\\lib");
lrt_tuxputenv("FIELDTBLS=usysflds,tptmifld,dciflds,nmflds,csmflds,rmsflds,secflds,tiflds");
lrt_tuxputenv("FLDTBLDIR={DPET_STORAGE}");
lrt_tuxputenv("VIEWDIR32={DPET_STORAGE}");
lrt_tuxputenv("VIEWFILES32=CS_ADJ_32.VV,CS_BANACT_32.VV,CS_BANAGR_32.VV,CS_BAN_32.VV,CS_BIL_32.VV,CS_CTN_32.VV,CS_CYCLE_32.VV,CS_FOLLOWUP_32.VV,CS_FTRTRX_32.VV,CS_GET_SUB_32.VV,CS_HIST_32.VV,CS_LIST_SUB_32.VV,CS_memo_list_32.VV,CS_PYM_32.VV,CS_SRCH_32.VV,CS_SRCH_SPECIAL_32.VV,CS_SUBADDACT_32.VV,CS_SUB_32.VV,CS_USAGE_32.VV,");
lrt_tuxputenv("APPDIR={APPDIR}");
lrt_tuxputenv("ROOTDIR={TUX12}");
lrt_tuxputenv("TUXDIR={TUX12}");
lrt_tuxputenv("INCLUDE=%INCLUDE%;%ROOTDIR%\\inc");
lrt_tuxputenv("LIB=%LIB%;%ROOTDIR%\\lib");
lrt_tuxputenv("FIELDTBLS=usysflds,tptmifld,dciflds,nmflds,csmflds,rmsflds,secflds,tiflds");
lrt_tuxputenv("FLDTBLDIR={DPET_STORAGE}");
lrt_tuxputenv("VIEWDIR32={DPET_STORAGE}");
lrt_tuxputenv("WSNADDR={DPET_SEC_WSN}");
tpresult_int = lrt_tpinitialize(
"usrname=99999",
"cltname=csm",
"datalen=9",
"data="binDat_1,
LRT_END_OF_PARMS);
lrt_abort_on_error();
lrt_tpsetunsol(procaddr);
lrt_tpsetunsol(procaddr);
data_2 = lrt_tpalloc("FML32", "", 100000);
lrt_Finitialize32((FBFR32*)data_2);

lrt_Fadd32_fld((FBFR32*)data_2, "name=OPERATOR_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=SP_PARAM_NAME", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=SP_SECTION", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=SEC_PARAM_SELECT_TYPE", "value=ALL", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=RUN_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=MARKET_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=ENV_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
data_1 = lrt_tpalloc("FML32", "", 100000);
tpresult_int = lrt_tpcall("seGtSecPrm00",
data_2,
0,
&data_1,
&olen,
0);
/* Returned FML32 buffer 1 */
lrt_abort_on_error();

//lr_think_time(5);
lrt_Finitialize32((FBFR32*)data_2);

lrt_Fadd32_fld((FBFR32*)data_2, "name=OPERATOR_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=RUN_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=MARKET_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=ENV_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("seGtSystDt00",
data_2,
0,
&data_1,
&olen,
0);
/* Returned FML32 buffer 2 */
lrt_abort_on_error();

if(lrt_save32_fld_val((FBFR32*)data_1, "name=SYSTEM_DATE", 0,"SYSTEM_DATE")<0) 
lr_error_message("Failed to get SYSTEM_DATE");

lrt_Finitialize32((FBFR32*)data_2);

lrt_Fadd32_fld((FBFR32*)data_2, "name=OPERATOR_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=PAGE", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=USERID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=USEID", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=APPLICATION_ID", "value=ONLINE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=RUN_DATE", "value={SYSTEM_DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=MARKET_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=USERPASSWORD", "value=f8a0cda294c8618b61c", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=ENV_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("seVerUser00",
data_2,
0,
&data_1,
&olen,
0);
/* Returned FML32 buffer 3 */
lrt_abort_on_error();

//lr_think_time(2);
lrt_Finitialize32((FBFR32*)data_2);

lrt_Fadd32_fld((FBFR32*)data_2, "name=OPERATOR_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=RUN_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=MARKET_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=ENV_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=PCCD", "value=DEF", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=ENVCD", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("seGtLclDb00",
data_2,
0,
&data_1,
&olen,
0);
/* Returned FML32 buffer 4 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_2);

lrt_Fadd32_fld((FBFR32*)data_2, "name=OPERATOR_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=USER_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=RUN_DATE", "value={SYSTEM_DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=MARKET_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=ENV_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=PROFILE_ID", "value=ALL", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=ENVCD", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("seGtGenSecPrm00",
data_2,
0,
&data_1,
&olen,
0);
/* Returned FML32 buffer 5 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_2);

lrt_Fadd32_fld((FBFR32*)data_2, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=RUN_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=PROFILE_ID", "value=ALL", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=ENVCD", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_2, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("seLsUsrPrm00",
data_2,
0,
&data_1,
&olen,
0);
/* Returned FML32 buffer 6 */
lrt_abort_on_error();

lrt_tpfree(data_1);
lrt_tpfree(data_2);
lrt_tpsetunsol(procaddr);
lrt_tpterm();
lrt_tuxputenv("APPDIR={APPDIR}");
lrt_tuxputenv("ROOTDIR={TUX12}");
lrt_tuxputenv("TUXDIR={TUX12}");
lrt_tuxputenv("INCLUDE=%INCLUDE%;%ROOTDIR%\\inc");
lrt_tuxputenv("LIB=%LIB%;%ROOTDIR%\\lib");
lrt_tuxputenv("FIELDTBLS=usysflds,tptmifld,dciflds,nmflds,csmflds,rmsflds,secflds,tiflds");
lrt_tuxputenv("FLDTBLDIR={DPET_STORAGE}");
lrt_tuxputenv("VIEWDIR32={DPET_STORAGE}");
lrt_tuxputenv("WSNADDR={DPET_APP_WSN}");
tpresult_int = lrt_tpinitialize(
"usrname={USER_ID}",
"cltname=csm",
"datalen=9",
"data="binDat_3,
LRT_END_OF_PARMS);
lrt_abort_on_error();
lrt_tpsetunsol(procaddr);
lrt_tpsetunsol(procaddr);
data_3 = lrt_tpalloc("FML32", "", 100000);
lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PAGE", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENVCD", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
data_2 = lrt_tpalloc("FML32", "", 100000);
tpresult_int = lrt_tpcall("seLsGrpEnv00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 7 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("seGtLgclDt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 8 */
lrt_abort_on_error();

if(lrt_save32_fld_val((FBFR32*)data_2, "name=DATE", 0,"DATE")<0) 
lr_error_message("Failed to get DATE");

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PAGENO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PROFILEID", "value=ALL", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICID", "value=a_csm", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("seGtAcMode00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 9 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=UI_USER_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("seLoginback00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 10 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=EVENT_SEVERITY", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=DELETE_INDICATOR", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_NAME", "value=a_csm", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTED_ENVIRONMENT", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTED_USER_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTED_PROFILE_ID", "value=ALL", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COMPUTER_LOCATION", "value=DEVCXSAMSPT009 (10.159.66.81)", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EVENT_DESCRIPTION", "value=Successful login", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=a_csm", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpacall("seInsrtLog00",
data_3,
0,
TPNOREPLY);
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PAGENO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PROFILEID", "value=ALL", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICID", "value=a_csm", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("seGtAcMode00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 11 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=USERID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("seLoginChk00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 12 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=GEN_TYPE", "value=SERVICE_CACHE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtGenCd00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 13 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsProduct00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 14 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsEquipment00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 15 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsPrdEq00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 16 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_APPL_ID", "value=CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsPrmVal00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 17 */
lrt_abort_on_error();

//lr_think_time(1);
tpresult_int = lrt_tpinitialize(
"usrname=CH",
"cltname=CH",
"datalen=8",
"data="binDat_5,
LRT_END_OF_PARMS);
lrt_abort_on_error();
tpresult_int = lrt_tpinitialize(
"usrname=CH",
"cltname=CH",
"datalen=8",
"data="binDat_7,
LRT_END_OF_PARMS);
lrt_abort_on_error();
tpresult_int = lrt_tpinitialize(
"usrname=CH",
"cltname=CH",
"datalen=8",
"data="binDat_9,
LRT_END_OF_PARMS);
lrt_abort_on_error();
lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MSG_NAME", "value=ExitAppl", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 18 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MSG_NAME", "value=SaveChanges", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 19 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("gnGtSysTime00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 20 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtDlrCd00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 21 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=I_PSEQ_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtTglOnOff00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 22 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("gnGtEnvVar00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 23 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=US_USER_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=US_LOCATION", "value=DEVCXSAMSPT009", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=a_csm", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("seCrUsrSess00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 24 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RESX", "value=1920", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RESY", "value=1080", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtWdgtCnfg00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 25 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=GEN_TYPE", "value=FRAUD_CSR_SUP_LIST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtGenCd00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 26 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsElmSecRul00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 27 */
lrt_abort_on_error();

return 0;
}