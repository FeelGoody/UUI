Action()//2nd commit
{

data_8 = lrt_tpalloc("FML32", "", 100000);
lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arLsBanAgr00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 28 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsAcTpDscRc00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 29 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsAcctTpRec00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 30 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=GEN_TYPE", "value=BUSSTYPE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtGenCd00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 31 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=GEN_TYPE", "value=CORPTYPE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtGenCd00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 32 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=GEN_TYPE", "value=OPENCHAN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtGenCd00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 33 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=NETWORKCD", "value=TMO8", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsCarrInfo00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 34 */
lrt_abort_on_error();


lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtAcctTpInd00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 35 */
lrt_abort_on_error();


lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtAcctTpDsc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 36 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 37 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=ACCOUNT_TYPE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=ACC_TYPE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME2", "value=ACC_SUB_TYPE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE2", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=DESCRIPTION", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 38 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=ACCOUNT_TYPE_DESC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=ACCOUNT_TYPE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=ACCOUNT_TYPE_NAME", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 39 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsIdTypCode00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 40 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsState00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 41 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=ID_TYPE_CD", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 42 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=ID_TYPE_CD", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 43 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtNmTl00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 44 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtNmGener00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 45 */
lrt_abort_on_error();

lrt_tpchkunsol();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsAdrStrSuf00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 46 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsAdrUntDes00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 47 */
lrt_abort_on_error();


lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CODE1_ZIP", "value=98006", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("gnMtchZipAdr00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 48 */
lrt_abort_on_error();


lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_HOUSE_NO", "value=1290", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_ST_DIRECTION", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_STREET_NAME", "value=38TH", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_CITY", "value=BELLEVUE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_STATE_CODE", "value=WA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_ZIP", "value=98006", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_ATTENTION", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_SECONDARY_LN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_PRIMARY_LN", "value=1290 38TH ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_STREET_SUFFIX", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_TRAILING_DIR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_APT_DESIGNATOR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("gnMatchAdr00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 49 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_TYPE", "value=S", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=COUNTY_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_CITY", "value=BELLEVUE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_STATE_CODE", "value=WA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_ZIP", "value=98006", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_SECONDARY_LN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_PRIMARY_LN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_ZIP_4", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CITY_NAME", "value=BELLEVUE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("gnGtGeoCd00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 50 */
lrt_abort_on_error();

lrt_tpchkunsol();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_HOUSE_NO", "value=12920", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_ST_DIRECTION", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_STREET_NAME", "value=38TH", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_CITY", "value=BELLEVUE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_STATE_CODE", "value=WA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_ZIP", "value=98006", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_ATTENTION", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_SECONDARY_LN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_PRIMARY_LN", "value=12920 38TH ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_STREET_SUFFIX", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_TRAILING_DIR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_APT_DESIGNATOR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("gnMatchAdr00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 51 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_TYPE", "value=S", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=COUNTY_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_CITY", "value=BELLEVUE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_STATE_CODE", "value=WA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_ZIP", "value=98006", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_SECONDARY_LN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_PRIMARY_LN", "value=12920 SE 38TH ST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_ZIP_4", "value=1350", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CITY_NAME", "value=BELLEVUE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=COUNTY_CODE", "value=033", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("gnGtGeoCd00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 52 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=DEALER", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDlrPrfNam00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 53 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=dealer_profile", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=dealer", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=sales_channel", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 54 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=dealer_profile", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=dealer", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=master_dealer", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 55 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=store_info", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=store_cd", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=9999", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=store_name", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 56 */
lrt_abort_on_error();


lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=dealer_profile", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=dealer", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=block_ncfp_ind", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 57 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSic00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 58 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PYM_METHOD", "value=CC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsPymSubMtd00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 59 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsCpniCd00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 60 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsBusEnt00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 61 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsIXC00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 62 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsStdSec00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 63 */
lrt_abort_on_error();


lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CUSTOMER_SSN", "value={SSN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arChkSsnTax00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 64 */
lrt_abort_on_error();

lrt_tpchkunsol();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 65 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 66 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 67 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 68 */
lrt_abort_on_error();

lrt_tpchkunsol();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=LOCATION_ID", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtRmsKy00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 69 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 70 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 71 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=COMP_ID", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=LOCATION_CODE", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtRmsCnt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 72 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=COMP_ID", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtRmsCnt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 73 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=MSG_CODE", "value=665025", LRT_END_OF_PARMS);
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
tpresult_int = lrt_tpcall("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 74 */
lrt_abort_on_error();


lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=MSG_CODE", "value=9102118", LRT_END_OF_PARMS);
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
tpresult_int = lrt_tpcall("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 75 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=COMP_ID", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=LOCATION_CODE", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtRmsCnt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 76 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=COMP_ID", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtRmsCnt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 77 */
lrt_abort_on_error();


lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CUSTOMER_SSN", "value={SSN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TAX_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CONTACT_TELNO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=HOME_TELNO", "value=3445555555", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BIRTH_DATE", "value=19660816", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=OTHER_TELNO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ID_NO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=EMP_TELNO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=OLD_ACC_PASSWORD", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=NEW_ACC_PASSWORD", "value=4545555555555555555", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arValAccPwd00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 78 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CSA_PROCESS_CODE", "value=CSM1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsCsStsAct00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 79 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=BILL_CYCLE", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CYCLE_CLOSE_DAY", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CAS_TOTAL_APPROVE_CTN", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CS_APPROVED_CTN_QTY", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ROWCOUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CUSTOMER_SSN", "value={SSN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TAX_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SIC_CODE", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=NAME_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=LINK_SEQ_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PARAM_COUNT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PARAM_COUNT", "value=4", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ROW_COUNT", "value=2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=LNKRECCUSTOMER_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=LNKRECBAN", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=FOREIGN_SEQ_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PREV_BAN", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=DISC_TRX_ID", "value=-1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=GUARANTOR_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_TYPE", "value=S", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CREDIT_CLASS", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ACCOUNT_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BL_ZERO_BALANC_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=NAME_FORMAT", "value=P", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_STATUS", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_FIELDED_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=LINK_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=NM_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=NM_UP_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_UP_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BL_MABLE_IND", "value=G", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PREVIOUS_BAN", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BL_BILL_PROD_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BL_BAL_HANDLE_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CS_CCIR_PROD_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CS_CREDIT_CLASS", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BL_NO_MNSP_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=AUTO_GEN_PYM_TYPE", "value=R", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CS_BAN_TRX_OFF_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CS_HANDLE_BY_CTN_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CS_LOCK_MECHANISM", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BL_OLP_IMPACT_IMM", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_INCORP_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ACCOUNT_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CS_CORPORATION_TYPE", "value=R", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CS_OPEN_CHANEL", "value=R", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CONN_MODE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MANUAL_GEO_CODE_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=DETERMINATION_IND", "value=E", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ARC_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CSN_IND", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN_TP", "value=S", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TAID_MAN_OVRD_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TAID_DETERMIN_IND", "value=E", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PCI_INDICATOR", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CAS_ORDER_NUMBER", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=AR_BALANCE", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADDRESS_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CAS_DEP_AMT_PER_CTN", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=HIERARCHY_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PARENT_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CRD_LIMIT_SPANC_AMT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CRD_LIMIT_SUSP_AMT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SIMO_DEPOSIT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=LOCATION_DESC", "value=3964 WILLIAM PENN HWY,MONROEVI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=FIRST_NAME", "value={FNAME}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MIDDLE_INITIAL", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=NAME_SUFFIX", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_HOUSE_NO", "value=12920", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_ST_DIRECTION", "value=SE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_STREET_NAME", "value=38TH", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_CITY", "value=BELLEVUE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_STATE_CODE", "value=WA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_ZIP", "value=98006", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_ZIP_GEO_CODE", "value=480330040", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_POB", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_ATTENTION", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BUSINESS_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CONTACT_FULL_NAME", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CONTACT_TELNO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CONTACT_TN_EXTNO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BUSINESS_ENTITY", "value=DEF", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=WORK_TELNO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=WORK_TN_EXTNO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=HOME_TELNO", "value=3445555555", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BIRTH_DATE", "value=19660816", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=DRIVR_LICNS_NO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=DRIVR_LICNS_STATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=EMPLOYMENT_DT", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=EMPLYR_NAME", "value=WWW", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BUSINESS_NAME", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=DRIVR_LICNS_EXP_DT", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=EMPLOYEE_POSITION", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BUSINESS_EST_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=GUR_CR_CARD_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=GUR_CR_CARD_NO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=GUR_CR_CARD_EXP_DT", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=OTHER_TELNO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=OTHER_EXTNO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=OTHER_TN_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ACC_PASSWORD", "value=4545555555555555555", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CREDIT_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CREDIT_STATUS", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CAS_APPLICATION_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CAS_EXPIRE_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BL_MEDIA_CATEGORY", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_SECONDARY_LN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_PRIMARY_LN", "value=12920 SE 38TH ST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=LAST_BUSINESS_NAME", "value={LNAME}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=NAME_TITLE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADDITIONAL_TITLE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_ZIP_4", "value=1350", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_CARRIER_CODE", "value=C019", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_BARCODE_SUFFIX", "value=20", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_STREET_SUFFIX", "value=ST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_TRAILING_DIR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_APT_DESIGNATOR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_APT_NM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_RR_HW_CNTR_NM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_RR_HW_BOX_NM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_COUNTRY", "value=USA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_COUNTY", "value=033", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ACT_CODE", "value=TEN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ACT_CODE", "value=SPI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ACT_REASON", "value=CBNB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=USER_TEXT", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=USER_TEXT", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=P1", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=P1", "value=0 Balance-->N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=P2", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=P2", "value=, Bal. Handle-->Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=P3", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=P3", "value=, Bill Prod.-->Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=P4", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=P4", "value=, ARC Indicator-->Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CS_DEF_IXC_CODE", "value=278", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=LOCATION", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=LINK_ROW_ID", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=NM_EXPIRE_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=NAME_ROW_ID", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_EXPIRE_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_ROW_ID", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BL_MAJOR_ACCOUNT_NO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CS_STUDY_SEC", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CS_BTN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CS_CPNI_CODE", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=WSNADDR", "value={DPET_APP_WSN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_TAX_CITY", "value=BELLEVUE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CH_ACTIVITY_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ID_NO", "value=2323233 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ID_STATE", "value=WA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ID_EXP_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=DUNS_NUMBER", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ID_TYPE", "value=ID", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=DEALER_CD", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CPNI_DESC", "value=Caller ID - Send WITH Name", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CARRIER_NAME", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CARRIER_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=EMAIL", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=STORE_CD", "value=9999", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BILL_METHOD", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PREPAID_MSISDN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ADR_TAX_AREA_ID", "value=480330040", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=NT_ID", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SOURCE_MSISDN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TAX_STATUS", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arInCstBan00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 80 */
lrt_abort_on_error();

if(lrt_save32_fld_val((FBFR32*)data_2, "name=CUSTOMER_ID", 0, "BAN")<0)
lr_error_message("Failed to get BAN");

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=GEN_TYPE", "value=ELIGIBLE_EDI_GSA_ACCOUNTS", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=GEN_CODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtGenCd00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 81 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ACTIVITY_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csLsEligDAT00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 82 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BANID", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=REQUESTDATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtCstCrd00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 83 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arGtCstBan00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 84 */
lrt_abort_on_error();

if(lrt_save32_fld_val((FBFR32*)data_2, "name=NAME_ID", 0,"NAME_ID")<0)
lr_error_message("Failed to get NAME_ID");

if(lrt_save32_fld_val((FBFR32*)data_2, "name=LINK_SEQ_NO", 0,"LINK_SEQ_NO")<0)
lr_error_message("Failed to get LINK_SEQ_NO");

//ADDRESS_ID
if(lrt_save32_fld_val((FBFR32*)data_2, "name=ADDRESS_ID", 0,"ADDRESS_ID")<0)
lr_error_message("Failed to get ADDRESS_ID");

if(lrt_save32_fld_val((FBFR32*)data_2, "name=LAST_UPDATE_DATE", 0, "LAST_UPDATE_DATE_0")<0)
lr_error_message("Failed to get LAST_UPDATE_DATE_0");

if(lrt_save32_fld_val((FBFR32*)data_2, "name=LAST_UPDATE_STAMP", 0, "LAST_UPDATE_STAMP_0")<0)
lr_error_message("Failed to get LAST_UPDATE_STAMP_0");



lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 85 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=BANID", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=REQUESTDATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtCstCrd00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 86 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsPymTypMth00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 87 */
lrt_abort_on_error();


lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=LINE_TP", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SUBSCRIBER_NO", "value=NEW", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACTIVITY_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACTIVITY_CODE", "value=NAC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=DEALER_CD", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csChkAllwAct00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 88 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=MSG_CODE", "value=9100699", LRT_END_OF_PARMS);
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
tpresult_int = lrt_tpcall("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 89 */
lrt_abort_on_error();


data_9 = lrt_tpalloc("FML32", "", 100000);
lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtRtLvlDsc00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 90 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=GEN_TYPE", "value=LINE_DESIGNATION", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtGenCd00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 91 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=GEN_TYPE", "value=DVC_ACT_TYPE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtGenCd00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 92 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arGtPrePym00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 93 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtPapWrkSts00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 94 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=GEN_TYPE", "value=SPANC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtGenCd00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 95 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsIXC00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 96 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_0}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_0}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("blUpCycCd00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 97 */
lrt_abort_on_error();

if(lrt_save32_fld_val((FBFR32*)data_2, "name=LAST_UPDATE_DATE", 0, "LAST_UPDATE_DATE_1")<0)
lr_error_message("Failed to get LAST_UPDATE_DATE_1");

if(lrt_save32_fld_val((FBFR32*)data_2, "name=LAST_UPDATE_STAMP", 0, "LAST_UPDATE_STAMP_1")<0)
lr_error_message("Failed to get LAST_UPDATE_STAMP_1");

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=CYCLE_CODE", "value=7", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("blGtCycle00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 98 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=dealer_type", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=dlr_tp_cd", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=CS", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=commission_deduction_ind", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 99 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUB_EXTERNAL_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CST_EXTERNAL_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN_EXTERNAL_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUB_STATUS", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arLsDefAgr00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 100 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUB_EXTERNAL_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CST_EXTERNAL_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN_EXTERNAL_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUB_STATUS", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arLsDefFtr00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 101 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=DEALER_CD", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csChkNatDlr00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 102 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=NAC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csLsEligDAT00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 103 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=DIRECTIVE", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ROWCOUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ELIGIBLE_DAT", "value=F", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTCODE", "value=NAC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTREASON", "value=CA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PPCODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtOcAmt00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 104 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=NULL_VALUE", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SEC_CLASS_ARR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CSA_ACTIVITY_CODE", "value=NAC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsCsStAcSec00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 105 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=DEALER_CD", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csChkNatDlr00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 106 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=NAC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csLsEligDAT00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 107 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 108 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arLsBilPrm00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 109 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 110 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 111 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csSubStCnt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 112 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAMNAME", "value=PAH", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtAddPrmBuf00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 113 */
lrt_abort_on_error();

lrt_tpchkunsol();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_HOUSE_NO", "value=12920", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ST_DIRECTION", "value=SE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_STREET_NAME", "value=38TH", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_CITY", "value=BELLEVUE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_STATE_CODE", "value=WA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ZIP", "value=98006", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ATTENTION", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_SECONDARY_LN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_PRIMARY_LN", "value=12920 SE 38TH ST ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_STREET_SUFFIX", "value=ST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_TRAILING_DIR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_APT_DESIGNATOR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("gnMatchAdr00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 114 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_TYPE", "value=S", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=COUNTY_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_CITY", "value=BELLEVUE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_STATE_CODE", "value=WA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ZIP", "value=98006", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_SECONDARY_LN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_PRIMARY_LN", "value=12920 SE 38TH ST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ZIP_4", "value=1350", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CITY_NAME", "value=BELLEVUE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=COUNTY_CODE", "value=033", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("gnGtGeoCd00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 115 */
lrt_abort_on_error();


lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ZIP_CODE", "value=98006", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtNgp00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 116 */
lrt_abort_on_error();


lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=rms_location", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=rms_location_id", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=location_desc", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 117 */
lrt_abort_on_error();


lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=number_group", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=ngp_id", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=BLV", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=ngp_dsc", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 118 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NGP", "value=BLV", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NPA", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NXX", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtSubMkt00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 119 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=dealer_profile", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=dealer", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=nl_cd", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 120 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=CSA_ACTIVITY_CODE", "value=RES", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CSA_PROCESS_CODE", "value=CSM2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsCsStsAct00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 121 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_1}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DIRECTIVE", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CUSTOMER_ID", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CUSTOMER_BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MEMO_SOURCE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MEMO_PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=GET_MODE", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LINE_TP", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NL", "value=GNRL", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NGP", "value=BLV", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_CODE", "value=RES", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_REASON", "value=NR", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MEMO_CTN", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=P1", "value=08/17/2017", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_1}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NPA", "value={NPA}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NXX", "value={NXX}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PORT_IND", "value=RE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csAutoRsv00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 122 */
lrt_abort_on_error();

if(lrt_save32_fld_val((FBFR32*)data_2, "name=LAST_UPDATE_DATE", 0, "LAST_UPDATE_DATE_2")<0)
lr_error_message("Failed to get LAST_UPDATE_DATE_2");

if(lrt_save32_fld_val((FBFR32*)data_2, "name=LAST_UPDATE_STAMP", 0, "LAST_UPDATE_STAMP_2")<0)
lr_error_message("Failed to get LAST_UPDATE_STAMP_2");

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_TYPE", "value=S", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=COUNTY_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MANUAL_GEO_CODE_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_CITY", "value=BELLEVUE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_STATE_CODE", "value=WA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ZIP", "value=98006", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_SECONDARY_LN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_PRIMARY_LN", "value=12920 SE 38TH ST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ZIP_4", "value=1350", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ZIP_CODE", "value=98006", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CITY_NAME", "value=BELLEVUE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ZIP4_CODE", "value=1350", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=COUNTY_CODE", "value=033", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("gnGtGeoCd00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 123 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=NPA", "value=207", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=NXX", "value=214", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=LR", "value={LR}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TODAY", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtSubMktCd00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 124 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=DEALER_CD", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csChkNatDlr00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 125 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ROW_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PAGE_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACCOUNT_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACCOUNT_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=POOLING_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_MATCH_IND", "value=R", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SALE_CHANNEL_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LINE_TP", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUB_MARKET", "value=SEW", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_SALE_CHANNEL", "value=\'\'", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsAvlPps00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 126 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUNDATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtRjeOpSocs00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 127 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PAGE_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PAGE_SIZE", "value=600", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUNDATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SECGROUP", "value=E", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSecPps00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 128 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtMaxRc00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 129 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csValNonRj1100",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 130 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=M", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_LST", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_CODE", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtPromSoc00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 131 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_LST", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_CODE", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtPromSoc00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 132 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsOptSocs00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 133 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtMaxRc00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 134 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csValNonRj1100",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 135 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=NAC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csLsElgPlanTp00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 136 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 137 */
lrt_abort_on_error();

lrt_tpchkunsol();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csValNonRj1100",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 138 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ROWCOUNT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PAGE_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PAGE_SIZE", "value=600", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSocAcc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 139 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ROWCOUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PAGE_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PAGE_SIZE", "value=600", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSocAcc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 140 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXTERNAL_SOC", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtSwPrm00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 141 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 142 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=CA_ACTIVITY_CODE", "value=OTC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtActCharge00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 143 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXTERNAL_SOC", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtSwPrm00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 144 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=INTDAT2MI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 145 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=INTSMSMI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 146 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=ITSMSNCMI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 147 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=MBBCDONLY", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 148 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXTERNAL_SOC", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtSwPrm00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 149 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=MBBEPCDAT", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 150 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=SYNCUBO", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 151 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXTERNAL_SOC", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtSwPrm00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 152 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=SYNTELO", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 153 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=UNLMSGSB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 154 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=USROAMMBB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 155 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=WELSMSMBB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 156 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ROWCOUNT", "value=11", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PRELATEDSOCROWCOUNT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PSOCELIINROWCOUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=REL_TYPE", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=INTDAT2MI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=INTSMSMI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=ITSMSNCMI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=MBBCDONLY", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=MBBEPCDAT", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=SYNCUBO", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=SYNTELO", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=UNLMSGSB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=USROAMMBB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=WELSMSMBB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSocEli00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 157 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=GEN_TYPE", "value=NS_EIP_RATE_PLANS", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=GEN_CODE", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtGenCd00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 158 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=NAC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRICE_PLAN", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csLsElgPlanTp00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 159 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ROW_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSocDtls00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 160 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=DEALER_CD", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csChkNatDlr00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 161 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ROW_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSocDtls00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 162 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=DEALER_PROFILE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=DEALER", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=MASTER_DEALER", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 163 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=MASTER_DEALER_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PRICE_PLAN_TP", "value=NEO", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsDvcActTp00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 164 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=NAC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csLsEligDAT00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 165 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=NAC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csLsEligDAT00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 166 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=MSG_CODE", "value=9101915", LRT_END_OF_PARMS);
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
tpresult_int = lrt_tpcall("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 167 */
lrt_abort_on_error();

lrt_tpchkunsol();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_APPL_ID", "value=RMS", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsPrmVal00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 168 */
lrt_abort_on_error();

lrt_tpchkunsol();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EQU_TYPE", "value=S", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERIAL_NUMBER", "value={SIM}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("icGtSit00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 169 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=GEN_TYPE", "value=SIM TYPE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=GEN_CODE", "value=UC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtGenCd00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 170 */
lrt_abort_on_error();


lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EQU_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERIAL_NUMBER", "value=111111111111111", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("icGtSit00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 171 */
lrt_abort_on_error();

lrt_tpchkunsol();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 172 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csSubStCnt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 173 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAMNAME", "value=PAH", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtAddPrmBuf00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 174 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=DEALER_CD", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csChkNatDlr00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 175 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csSubStCnt00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 176 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 177 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtEtfTp00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 178 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=MSG_CODE", "value=7140083", LRT_END_OF_PARMS);
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
tpresult_int = lrt_tpcall("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 179 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=COMP_ID", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=LOCATION_CODE", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtRmsCnt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 180 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=COMP_ID", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtRmsCnt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 181 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=MSG_CODE", "value=665026", LRT_END_OF_PARMS);
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
tpresult_int = lrt_tpcall("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 182 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=GEN_TYPE", "value=OVERRIDE_DEPOSIT_ZEOS_PP", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtGenCd00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 183 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=GEN_TYPE", "value=NS_EIP_RATE_PLANS", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtGenCd00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 184 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=ZIP_CODE", "value=98006", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SUB_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csChkSubZip00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 185 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=MSG_CODE", "value=70208", LRT_END_OF_PARMS);
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
tpresult_int = lrt_tpcall("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 186 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=NPA", "value={NPA}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=NXX", "value={NXX}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=LR", "value={LR}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TODAY", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtSubMktCd00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 187 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=SPECIAL_SOC_IND", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=SOC_IND", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=DSP", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=CONTRACT_IND", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 188 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=SPECIAL_SOC_IND", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=SOC_IND", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=DSP", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=DEVICE_SOC_IND", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 189 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_2}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ROWCOUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=10001", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=P", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEPLOY_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACC_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACC_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUB_VAL_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN_LEVEL_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_2}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTCODE", "value=ADS", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EFF_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXP_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csChkSocElg00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 190 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtSubInv00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 191 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ROW_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSOCCat00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 192 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ROW_COUNT", "value=10", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=MBBCDONLY", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=MBBEPCDAT", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=SYNCUBO", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=SYNTELO", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=UNLMSGSB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=USROAMMBB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=WELSMSMBB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=INTDAT2MI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=INTSMSMI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=ITSMSNCMI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSOCCat00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 193 */
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
tpresult_int = lrt_tpcall("rfGtDepPymTp00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 194 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SUBSIDY_TYPE", "value=F", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=LINE_TP", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACTIVITY_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACTIVITY_CODE", "value=NAC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=DEALER_CD", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RATE_PLAN_CODE", "value=NCNADR2", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csChkAllwAct00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 195 */
lrt_abort_on_error();


lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_2}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CREDIT_CLASS", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_2}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtDDReqInd00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 196 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CREDIT_CLASS", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtCrdCls00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 197 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_2}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CREDIT_CLASS", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_2}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtDDReqInd00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 198 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 199 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csSubStCnt00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 200 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ROW_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsSocSMkt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 201 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=NPA", "value={NPA}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=NXX", "value={NXX}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=LR", "value={LR}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TODAY", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtSubMktCd00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 202 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=CAPABILITY_ID", "value=OTP_VERIFICATION_REQUIRED", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=GEN_K1", "value=NAC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=GEN_K2", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=GEN_K3", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtCsmGenPrm00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 203 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value=0000000000", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arLsBanAgr00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 204 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACCOUNT_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACCOUNT_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csChkSubPp00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 205 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csCntActSus00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 206 */
lrt_abort_on_error();

lr_start_transaction("csActvSub_IOT");

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_2}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NUM_GSM_LINES", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ROWCOUNT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ROW_COUNT", "value=11", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DISCELGACTIVTYBUFROW_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PCSCHKDPELGIMPINPROW_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PROMOCDBUFFROW_COUNT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=P", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACCOUNT_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACCOUNT_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBBUFFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SIM_ONLY_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSIDY_TYPE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=AUTOPAY_PRED_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NEO_MIG_TRX_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ZIP", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=MBBCDONLY", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=MBBEPCDAT", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=SYNCUBO", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=SYNTELO", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=UNLMSGSB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=USROAMMBB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=WELSMSMBB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=INTDAT2MI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=INTSMSMI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=ITSMSNCMI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_CODE", "value=ACT", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_REASON", "value=CA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_2}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NEW_COMMIT_START_DT", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NEW_COMMIT_END_DT", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DISC_ACTV_TP", "value=NAC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBBUFFSUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csChkDPElgImp00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 207 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=DEALER_CD", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csChkNatDlr00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 208 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=ESN_LEVEL", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ESN_LEVEL", "value=2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_2}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=COMMIT_ORIG_NO_MONTH", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DIRECTIVE", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CUSTOMER_ID", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CUSTOMER_BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ROWCOUNT", "value=11", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PESNBUFFERROWCOUNT", "value=2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NAME_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NAME_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LINK_SEQ_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LINK_SEQ_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PARAM_COUNT", "value=5", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFROWCOUNT", "value=14", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ROW_COUNT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LNKRECCUSTOMER_ID", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LNKRECCUSTOMER_ID", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PNAMEADRBUFROWCOUNT", "value=2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ESN_SEQ_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ESN_SEQ_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=10001", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20005", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20010", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20007", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20008", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20009", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20006", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20001", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20003", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20004", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20003", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20003", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20003", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20003", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20004", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20006", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20008", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20008", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20008", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20009", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20010", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20003", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20008", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PMKTPROGBUFROWCOUNT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PINSTLBUFROW_COUNT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUB_EXTERNAL_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CST_EXTERNAL_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN_EXTERNAL_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXT_ID", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXT_ID", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXT_ID", "value=-1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXT_ID", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXT_ID", "value=-1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXT_ID", "value=-1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXT_ID", "value=-1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXT_ID", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXT_ID", "value=-1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXT_ID", "value=-1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EXT_ID", "value=-1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSWPARAMBUFROW_COUNT", "value=3", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PADDPARAMROWCOUNT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DISC_TRX_ID", "value=-1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PPROMOCDBUFFROW_COUNT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSTKGRPROW_COUNT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MISSING_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MISSING_IND", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=IN_REPAIR_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=IN_REPAIR_IND", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=IN_TRANSIT_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=IN_TRANSIT_IND", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=COMITED_TO_POS_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=COMITED_TO_POS_IND", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATION_STATUS", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATION_STATUS", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ITEM_OWNERSHIP", "value=S", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ITEM_OWNERSHIP", "value=S", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CURR_POSSESSION", "value=P", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CURR_POSSESSION", "value=P", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=POOL", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=POOL", "value=P", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EQU_TYPE", "value=S", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EQU_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_TYPE", "value=S", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_TYPE", "value=S", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=P", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NAME_FORMAT", "value=P", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NAME_FORMAT", "value=P", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_STATUS", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_STATUS", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_FIELDED_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_FIELDED_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LINK_TYPE", "value=U", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LINK_TYPE", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=UPGRADE_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=UPGRADE_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MEMO_SOURCE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NM_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NM_MODE", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_MODE", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTVFEEIND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVERSNIND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NM_UP_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NM_UP_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_UP_TYPE", "value=P", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_UP_TYPE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=P", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SW_STATE_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SW_STATE_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NEXT_ACTV_CODE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NEXT_ACTV_CODE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_INCORP_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_INCORP_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FM_TYPE", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FM_TYPE", "value=U", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FM_TYPE", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FM_TYPE", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FM_TYPE", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FM_TYPE", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FM_TYPE", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FM_TYPE", "value=U", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FM_TYPE", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FM_TYPE", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FM_TYPE", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FM_TYPE", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FM_TYPE", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FM_TYPE", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MEMO_PRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LNKRECPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LNKRECPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSUBRECPRODUCT_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EQ_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EQ_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=COURTESY_STMT", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WELCOME_LETTER_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CONN_MODE", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRIMARY_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEPOSIT_MTD", "value=S", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MANUAL_GEO_CODE_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MANUAL_GEO_CODE_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DETERMINATION_IND", "value=E", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DETERMINATION_IND", "value=E", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_CATEGORY", "value=E", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_CATEGORY", "value=R", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_CATEGORY", "value=R", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BILL_CTG_SUM_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ZERO_VM_SUM_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ZERO_MSG_SUM_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=UMA_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=UMA_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=UMA_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=UMA_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=UMA_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=UMA_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=UMA_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=UMA_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=UMA_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=UMA_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=UMA_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_UNCERTAINTY_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_UNCERTAINTY_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SIMFEEPAIDIND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSIDY_TYPE", "value=F", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LINE_TP", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TAID_MAN_OVRD_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TAID_MAN_OVRD_IND", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TAID_DETERMIN_IND", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TAID_DETERMIN_IND", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REQ_DEPOSIT_AMT", "value=25", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTIVATIONFEE", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDRESS_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDRESS_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=HIERARCHY_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ITEM_ID", "value=VSITEM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ITEM_ID", "value=UNKNOWN ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LOCATION_ID", "value=9999", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LOCATION_ID", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ITEM_OWNERSHIP_DT", "value={DATE}104253", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ITEM_OWNERSHIP_DT", "value={DATE}104259", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CURR_POSSESSION_DT", "value={DATE}104253", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CURR_POSSESSION_DT", "value={DATE}104259", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=COMITED_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=COMITED_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTIVITY_REASON", "value=SIM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTIVITY_REASON", "value=IMEI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXPECTED_RTRN_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXPECTED_RTRN_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=POLICE_REPORT_NO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=POLICE_REPORT_NO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=POLICE_REPORT_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=POLICE_REPORT_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=POLICE_STATION", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=POLICE_STATION", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=INIT_ACTIVATION_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FIRST_NAME", "value={FNAME}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FIRST_NAME", "value={FNAME}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MIDDLE_INITIAL", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MIDDLE_INITIAL", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NAME_SUFFIX", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NAME_SUFFIX", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_HOUSE_NO", "value=12920", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_HOUSE_NO", "value=12920", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ST_DIRECTION", "value=SE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ST_DIRECTION", "value=SE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_STREET_NAME", "value=38TH", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_STREET_NAME", "value=38TH", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_CITY", "value=BELLEVUE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_CITY", "value=BELLEVUE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_STATE_CODE", "value=WA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_STATE_CODE", "value=WA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ZIP", "value=98006", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ZIP", "value=98006", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ZIP_GEO_CODE", "value=480330040", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ZIP_GEO_CODE", "value=480330040", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_POB", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_POB", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ATTENTION", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ATTENTION", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=IXC_CODE", "value=278", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=IXC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PAPER_WORK_STATUS", "value=AO", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PAPER_WORK_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=MBBEPCDAT", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=WELSMSMBB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=SYNTELO", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=UNLMSGSB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=USROAMMBB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=SYNCUBO", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=INTDAT2MI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=INTSMSMI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=ITSMSNCMI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC", "value=MBBCDONLY", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=UNIT_ESN", "value={SIM}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=UNIT_ESN", "value=111111111111111", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FEATURE_CODE", "value=SMSINT", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FEATURE_CODE", "value=FMSMS", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FEATURE_CODE", "value=SMOINT", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FEATURE_CODE", "value=SMORM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FEATURE_CODE", "value=SMTRM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FEATURE_CODE", "value=CD", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FEATURE_CODE", "value=SYNCUB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FEATURE_CODE", "value=FMSMS", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FEATURE_CODE", "value=SMO", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FEATURE_CODE", "value=SMT", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FEATURE_CODE", "value=USROAM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FEATURE_CODE", "value=WELSMS", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FEATURE_CODE", "value=STD", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FEATURE_CODE", "value=CPKG", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_SECONDARY_LN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_SECONDARY_LN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_PRIMARY_LN", "value=12920 SE 38TH ST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_PRIMARY_LN", "value=12920 SE 38TH ST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_BUSINESS_NAME", "value={LNAME}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_BUSINESS_NAME", "value={LNAME}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NAME_TITLE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NAME_TITLE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDITIONAL_TITLE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADDITIONAL_TITLE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ZIP_4", "value=1350", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ZIP_4", "value=1350", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_CARRIER_CODE", "value=C019", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_CARRIER_CODE", "value=C019", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_BARCODE_SUFFIX", "value=20", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_BARCODE_SUFFIX", "value=20", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_STREET_SUFFIX", "value=ST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_STREET_SUFFIX", "value=ST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_TRAILING_DIR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_TRAILING_DIR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_APT_DESIGNATOR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_APT_DESIGNATOR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_APT_NM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_APT_NM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_RR_HW_CNTR_NM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_RR_HW_CNTR_NM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_RR_HW_BOX_NM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_RR_HW_BOX_NM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_COUNTRY", "value=USA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_COUNTRY", "value=USA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NUMLOC", "value=GNRL", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_COUNTY", "value=033", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_COUNTY", "value=033", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_REASON", "value=CA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MEMO_CTN", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=P1", "value=08/17/2017", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=P2", "value=CTN Activation", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=P3", "value=25.00", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=P4", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=P5", "value=278", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_2}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=COMMIT_START_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=COMMIT_END_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=COMMIT_REASON_CODE", "value=PPD", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PAPER_WORK_REF_NO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=INTSMSMI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=ITSMSNCMI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=ITSMSNCMI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=ITSMSNCMI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=ITSMSNCMI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=MBBCDONLY", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=SYNCUBO", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=UNLMSGSB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=UNLMSGSB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=UNLMSGSB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=USROAMMBB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=WELSMSMBB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=ITSMSNCMI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=UNLMSGSB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PHYDEVARRAYEXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PHYDEVARRAYEXPIRATION_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTIVITY_DATE", "value={DATE}000000", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTIVITY_DATE", "value={DATE}000000", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVERSN", "value=ATST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LINK_ROW_ID", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LINK_ROW_ID", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NM_EXPIRE_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NM_EXPIRE_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NAME_ROW_ID", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NAME_ROW_ID", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_EXPIRE_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_EXPIRE_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ROW_ID", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_ROW_ID", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LNKRECSUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LNKRECSUBSCRIBER_NO", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LNKRECEFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LNKRECEFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SWITCH_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SWITCH_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SWITCH_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SWITCH_CODE", "value=SMSO", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SWITCH_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SWITCH_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SWITCH_CODE", "value=SYNCUB", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SWITCH_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SWITCH_CODE", "value=SMSO", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SWITCH_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SWITCH_CODE", "value=USROAM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SWITCH_CODE", "value=NCFP", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SWITCH_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SWITCH_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=ACTV", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=ACTV", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SPANC_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SUB_ACTV_LOCATION", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_SW_ACTV_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_SW_ACTV_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NEXT_ACTV_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NEXT_ACTV_DATE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NEXT_ACTV_ISSUE_DT", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NEXT_ACTV_ISSUE_DT", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PHYDEVARRAYEFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PHYDEVARRAYEFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WSNADDR", "value={DPET_APP_WSN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LST_COM_ACTV_DLR", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LST_COM_SPLT_DLR", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_TAX_CITY", "value=BELLEVUE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_TAX_CITY", "value=BELLEVUE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=IXC_CHG_DLR_CD", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=IXC_CHG_DLR_SPLT_CD", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSUBRECDEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PPARAMRECACT_CODE", "value=NAC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MSISDN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MSISDN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MSISDN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MSISDN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MSISDN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MSISDN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MSISDN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MSISDN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MSISDN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MSISDN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MSISDN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MSISDN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MSISDN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MSISDN", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=GG", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=GG", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=AG", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=GG", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=AG", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=AG", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=AG", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=GG", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=AG", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=AG", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=AG", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSUBRECPRODUCT_SUB_TYPE", "value=GG", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CD", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_NAME", "value=SIM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_NAME", "value=IMSI", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_NAME", "value=MSISDN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_PROPERTIES", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_PROPERTIES", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_PROPERTIES", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_TYPE", "value=S", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_TYPE", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_VALUES", "value={SIM}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_VALUES", "value=310260380654475", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PRM_VALUES", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PORT_IND", "value=RE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOCS_EXT_ID", "value=1, 1, 1, 1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOCS_EXT_ID", "value=1, 1, 1, 1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOCS_EXT_ID", "value=1, 1, 1, 1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EMAIL", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=EMAIL", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_LAT_LONG", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_LAT_LONG", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_IND", "value=NEO", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_IND", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_IND", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_IND", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_IND", "value=DSP", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_IND", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_IND", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_IND", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_IND", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_IND", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SOC_IND", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=STORE_CD", "value=9999", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SMSSUBSCRIBER", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=IMPI1", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=IMPI1", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=OPT_OUT_RSN_CD", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_TAX_AREA_ID", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ADR_TAX_AREA_ID", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TMOID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csActvSub00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 209 */
lrt_abort_on_error();

lr_end_transaction("csActvSub_IOT",LR_AUTO);	

//	if(lrt_save32_fld_val((FBFR32*)data_2, "name=LAST_UPDATE_DATE", 0, "LAST_UPDATE_DATE_3")<0)
//	lr_error_message("Failed to get LAST_UPDATE_DATE_3");
//
// if(lrt_save32_fld_val((FBFR32*)data_2, "name=LAST_UPDATE_STAMP", 0, "LAST_UPDATE_STAMP_3")<0)
//	lr_error_message("Failed to get LAST_UPDATE_STAMP_3");


lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=CYCLE_CODE", "value=7", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("blGtCycle00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 210 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PYM_METHOD", "value=CC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsPymSubMtd00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 211 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsBusEnt00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 212 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arGtCstBan00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 213 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 214 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=CYCLE_CODE", "value=7", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("blGtCycle00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 215 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtTaxEx00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 216 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arGtNeoInd00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 217 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 218 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=dealer_profile", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=dealer", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=dlr_name", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 219 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=ixc", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=ixc_code", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=278", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=ixc_name", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 220 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 221 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 222 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SELECTMODE", "value=E", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SUBSTATUS", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtOneSub00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 223 */
lrt_abort_on_error();

lrt_tpfree(data_8);

data_8 = lrt_tpalloc("FML32", "", 100000);
lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATION_MODE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arGtBanHdr00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 224 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arGtBanHdr00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 225 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arGtFailCnt00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 226 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=WINDOW_NAME", "value=w_main_frame", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsWdNmRec00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 227 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arGtCstBan00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 228 */
lrt_abort_on_error();

//Igor

if(lrt_save32_fld_val((FBFR32*)data_2, "name=LAST_UPDATE_DATE", 0, "LAST_UPDATE_DATE_3")<0)
lr_error_message("Failed to get LAST_UPDATE_DATE_3");

if(lrt_save32_fld_val((FBFR32*)data_2, "name=LAST_UPDATE_STAMP", 0, "LAST_UPDATE_STAMP_3")<0)
lr_error_message("Failed to get LAST_UPDATE_STAMP_3");

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=csm_status_activity", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=csa_activity_code", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=NAC", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME2", "value=csa_activity_rsn_code", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE2", "value=CA", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=csa_activity_rsn_desc", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 229 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=BILL_SEQ_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BILL_DATE_INT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BILL_CONF_STATUS", "value=C", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("blGtBilInfo00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 230 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=INCLUDEHISTORYIND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csLsPBInfo00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 231 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ROWCOUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SUBSCRIBER_NO", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAMNMBUF", "value=EPS_IND", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtSplIndVal00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 232 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtTaxEx00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 233 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PGTMKTINPMARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtMktByRm00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 234 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=business_entity", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=business_entity_code", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=DEF", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=business_entity_desc", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 235 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsCompCdDsc00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 236 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PAGE", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SELECTMODE", "value=E", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SUBSTATUS", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csLsBanSub00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 237 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arLsBilPrm00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 238 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arLsBanAgr00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 239 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATION_MODE", "value=L", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arGtBanHdr00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 240 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=GEN_TYPE", "value=EARLY_UPGRADE_FEE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=GEN_CODE", "value=EARLY_UPGRADE_MENU", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtGenCd00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 241 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csSubStCnt00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 242 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("evGtScPymElg00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 243 */
lrt_abort_on_error();

lrt_tpfree(data_9);
lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtCustPin00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 244 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=account_type_desc", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=account_type", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=account_type_name", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 245 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=account_type", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=acc_sub_type", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=description", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 246 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=DEALER", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDlrPrfNam00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 247 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TABLE_NAME", "value=STORE_INFO", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_NAME1", "value=store_cd", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=9999", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=store_name", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 248 */
lrt_abort_on_error();

data_9 = lrt_tpalloc("FML32", "", 100000);
lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csSubStCnt00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 249 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_3}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FU_STATUS", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_3}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=FU_TYPE", "value=VERF", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("mmGtFuInd00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 250 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arGtNeoInd00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 251 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arLsBilPrm00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 252 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csSubStCnt00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 253 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("evGtScPymElg00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 254 */
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=WINDOW_NAME", "value=w_ban", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfLsWdNmRec00",
data_3,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 255 */
lrt_abort_on_error();


lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_3}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CUSTOMER_ID", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=PARAM_COUNT", "value=2", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=VERIFIED_BY_PIN", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=VERIFIED_BY_SSN", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=VERIFIED_BY_PASSWORD", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACT_CODE", "value=VER", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MEMO_CTN", "value={CTN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=USER_TEXT", "value=The Mobile number details were verified by user: {USER_ID} on 8/17/2017, Dealer code is: 0000002, Store ID is : 9999.", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=P1", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=P2", "value=8/17/2017", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_3}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=VERIFIED_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=NT_USER_ID", "value=ivolkov", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=UCID", "value=", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arSvBanVer00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 256 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_9);

lrt_Fadd32_fld((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csLsEligDAT00",
data_9,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 257 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=USER_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=PERF_SESSION_KEY", "value=809055025", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACTIVITY_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=NT_USER_ID", "value=ivolkov", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=HOSTCODE", "value=DEVCXSAMSPT009", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=WIDGET_NAME", "value=360_VIEW", LRT_END_OF_PARMS);
tpresult_int = lrt_tpacall("csSvWdgtWAna00",
data_3,
0,
0);
calld_0 = tpresult_int;
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BANID", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=REQUESTDATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csGtCstCrd00",
data_8,
0,
&data_2,
&olen,
0);
/* Returned FML32 buffer 258 */
lrt_abort_on_error();

data_4 = lrt_tpalloc("FML32", "", 100000);
tpresult_int = lrt_tpgetrply(&calld_010, &data_4, &olen, TPGETANY);
/* Returned FML32 buffer 259 */
lrt_abort_on_error();

lrt_tpfree(data_2);
lrt_tpchkunsol();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=PARTITION_ID", "value=3", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SEQ_NO", "value=6633", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ACTIVITY_MODE", "value=U", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpacall("csSvWdgtWAna00",
data_3,
0,
TPNOREPLY);
lrt_abort_on_error();

lrt_tpchkunsol();
lrt_tpchkunsol();

//	data_2 = lrt_tpalloc("FML32", "", 236);
//	lrt_Finitialize32((FBFR32*)data_2);
//	
//	lrt_Fadd32_fld((FBFR32*)data_2, "name=XFNT_MEMO_ID", "value=18", LRT_END_OF_PARMS);
//	lrt_Fadd32_fld((FBFR32*)data_2, "id=167773256", "value=VST", LRT_END_OF_PARMS);
//	lrt_Fadd32_fld((FBFR32*)data_2, "name=ENV_CODE", "value=", LRT_END_OF_PARMS);
//	lrt_Fadd32_fld((FBFR32*)data_2, "id=201339592", "value="binDat_11, "len=18", LRT_END_OF_PARMS);
//	data_10 = lrt_tpalloc("FML32", "", 0);
//	tpresult_int = lrt_tpcall("DISP",
//	data_2,
//	0,
//	&data_10,
//	&olen,
//	0);
//	/* Returned FML32 buffer 260 */
//	lrt_abort_on_error();

lrt_tpfree(data_2);
lrt_tpfree(data_10);
lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=AUTO_QUAL_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PLAN_TYPE", "value=R", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=DP_VER_EFF_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=WORK_FOR_OBJ_TYPE", "value=B", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csLsAvailDPs00",
data_8,
0,
&data_4,
&olen,
0);
/* Returned FML32 buffer 261 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=GET_INHERITED_DP", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csLsBanSubDPs00",
data_8,
0,
&data_4,
&olen,
0);
/* Returned FML32 buffer 262 */
lrt_abort_on_error();

lrt_tpchkunsol();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ROW_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ACCOUNT_TYPE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ACCOUNT_SUB_TYPE", "value=Q", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=DISC_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=EXPIRATION_DATE", "value=20190717", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MANUAL_DISC_CD", "value=PIXBONE", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csChkDiscConf00",
data_8,
0,
&data_4,
&olen,
0);
/* Returned FML32 buffer 263 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_3}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ROW_COUNT", "value=1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=DISC_TRX_ID", "value=-1", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=A", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=VALDT_PLNS_IND", "value=N", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=DISCOUNT_MODE", "value=I", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SKIP_SMS_MEMO_IND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=EFFECTIVE_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=EXPIRATION_DATE", "value=20190717", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=DISCOUNT_CODE", "value=PIXBONE", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_3}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ACT_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("csSaveDPs00",
data_8,
0,
&data_4,
&olen,
0);
/* Returned FML32 buffer 264 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=GEN_TYPE", "value=BUSI_FAMILY_DISCOUNT", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("rfGtGenCd00",
data_8,
0,
&data_4,
&olen,
0);
/* Returned FML32 buffer 265 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SELECTMODE", "value= ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=LASTMEMOIND", "value=Y", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arGtBanAct00",
data_3,
0,
&data_4,
&olen,
0);
/* Returned FML32 buffer 266 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATION_MODE", "value=L", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arGtBanHdr00",
data_3,
0,
&data_4,
&olen,
0);
/* Returned FML32 buffer 267 */
lrt_abort_on_error();

lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=OPERATION_MODE", "value=L", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arGtBanHdr00",
data_3,
0,
&data_4,
&olen,
0);
/* Returned FML32 buffer 268 */
lrt_abort_on_error();


lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=MSG_CODE", "value=3100", LRT_END_OF_PARMS);
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
tpresult_int = lrt_tpcall("rfGtOlnMsgRec00",
data_3,
0,
&data_4,
&olen,
0);
/* Returned FML32 buffer 269 */
lrt_abort_on_error();


lrt_Finitialize32((FBFR32*)data_8);

lrt_Fadd32_fld((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=BAN", "value={BAN}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SESSION_ID", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=@", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpcall("arLsBanAgr00",
data_8,
0,
&data_4,
&olen,
0);
/* Returned FML32 buffer 270 */
lrt_abort_on_error();

lrt_tpfree(data_8);
return 0;
}