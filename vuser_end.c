vuser_end()
{
//lr_think_time(10);
lrt_Finitialize32((FBFR32*)data_3);

lrt_Fadd32_fld((FBFR32*)data_3, "name=EVENT_SEVERITY", "value=2", LRT_END_OF_PARMS);
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
lrt_Fadd32_fld((FBFR32*)data_3, "name=EVENT_DESCRIPTION", "value=User has been logged off.", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=APPLICATION_ID", "value=a_csm", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", LRT_END_OF_PARMS);
lrt_Fadd32_fld((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", LRT_END_OF_PARMS);
tpresult_int = lrt_tpacall("seInsrtLog00",
data_3,
0,
TPNOREPLY);
lrt_abort_on_error();

lrt_tpfree(data_4);
lrt_tpfree(data_3);
lrt_tpfree(data_9);
lrt_tpsetunsol(procaddr);
lrt_tpterm();
lrt_tpterm();
return 0;
}