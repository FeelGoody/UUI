# 1 "c:\\users\\fgrinbe\\appdata\\local\\temp\\2\\td_80\\performancecenter\\62e73d6b\\test\\846\\846\\846\\\\combined_846.c"
# 1 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h" 1
 
 












 











# 103 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"








































































	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 266 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 505 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 508 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 532 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 566 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 589 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 613 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 692 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											int * col_name_len);
# 753 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 768 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   int const in_len,
                                   char * * const out_str,
                                   int * const out_len);
# 792 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 804 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 812 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 818 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char *buffer, long buf_size, unsigned int occurrence,
			    char *search_string, int offset, unsigned int param_val_len, 
			    char *param_name);

 
char *   lr_string (char * str);

 
# 916 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 923 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 945 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1021 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1050 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"


# 1062 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


int vtc_connect(char * servername, int portnum, int options);
int vtc_disconnect(int pvci);
int vtc_get_last_error(int pvci);
int vtc_query_column(int pvci, char * columnName, int columnIndex, char * *outvalue);
int vtc_query_row(int pvci, int rowIndex, char * **outcolumns, char * **outvalues);
int vtc_send_message(int pvci, char * column, char * message, unsigned short *outRc);
int vtc_send_if_unique(int pvci, char * column, char * message, unsigned short *outRc);
int vtc_send_row1(int pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
int vtc_update_message(int pvci, char * column, int index , char * message, unsigned short *outRc);
int vtc_update_message_ifequals(int pvci, char	*columnName, int index,	char * message, char	*ifmessage,	unsigned short 	*outRc);
int vtc_update_row1(int pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
int vtc_retrieve_message(int pvci, char * column, char * *outvalue);
int vtc_retrieve_messages1(int pvci, char * columnNames, char * delimiter, char * **outvalues);
int vtc_retrieve_row(int pvci, char * **outcolumns, char * **outvalues);
int vtc_increment(int pvci, char * column, int index , int incrValue, int *outValue);
int vtc_clear_message(int pvci, char * column, int index , unsigned short *outRc);
int vtc_clear_column(int pvci, char * column, unsigned short *outRc);
int vtc_ensure_index(int pvci, char * column, unsigned short *outRc);
int vtc_drop_index(int pvci, char * column, unsigned short *outRc);
int vtc_clear_row(int pvci, int rowIndex, unsigned short *outRc);
int vtc_create_column(int pvci, char * column,unsigned short *outRc);
int vtc_column_size(int pvci, char * column, int *size);
void vtc_free(char * msg);
void vtc_free_list(char * *msglist);
int lrvtc_connect(char * servername, int portnum, int options);
int lrvtc_disconnect();
int lrvtc_query_column(char * columnName, int columnIndex);
int lrvtc_query_row(int columnIndex);
int lrvtc_send_message(char * columnName, char * message);
int lrvtc_send_if_unique(char * columnName, char * message);
int lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
int lrvtc_update_message(char * columnName, int index , char * message);
int lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
int lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
int lrvtc_retrieve_message(char * columnName);
int lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
int lrvtc_retrieve_row();
int lrvtc_increment(char * columnName, int index , int incrValue);
int lrvtc_clear_message(char * columnName, int index);
int lrvtc_clear_column(char * columnName); 
int lrvtc_ensure_index(char * columnName); 
int lrvtc_drop_index(char * columnName); 
int lrvtc_clear_row(int rowIndex);
int lrvtc_create_column(char * columnName);
int lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char *sourceString, char *fromEncoding, char *toEncoding, char *paramName);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 

















# 1 "c:\\users\\fgrinbe\\appdata\\local\\temp\\2\\td_80\\performancecenter\\62e73d6b\\test\\846\\846\\846\\\\combined_846.c" 2

# 1 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/SharedParameter.h" 1



 
 
 
 
# 100 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/SharedParameter.h"





typedef int PVCI2;
typedef int VTCERR2;

 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(int pvci);
extern VTCERR2  vtc_get_last_error(int pvci);

 
extern VTCERR2  vtc_query_column(int pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(int pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(int pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(int pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(int pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(int pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(int pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(int pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(int pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(int pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(int pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_increment(int pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(int pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(int pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(int pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(int pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(int pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(int pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(int pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(int pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern int     lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern int     lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\fgrinbe\\appdata\\local\\temp\\2\\td_80\\performancecenter\\62e73d6b\\test\\846\\846\\846\\\\combined_846.c" 2

# 1 "vuser_init.c" 1
# 1 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrt.h" 1
 





typedef	long		TM32I;
typedef	unsigned long	TM32U;





 
















 



 










 








 
struct clientid_t {
	long	clientdata[4];		 
};
typedef struct clientid_t CLIENTID;

 
struct	tpinfo_t {
	char	usrname[30 +2];	 
	char	cltname[30 +2];	 
	char	passwd[30 +2];	 
	char	grpname[30 +2];	 
	long	flags;			 
	long	datalen;		 
	long	data;			 
};
typedef	struct	tpinfo_t TPINIT;








 
struct tp_tranid_t {
	long info[6];
};

typedef struct tp_tranid_t TPTRANID;

 

































 






 





struct tpqctl_t {		 
	long flags;		 
	long deq_time;		 
	long priority;		 
	long diagnostic;	 
	char msgid[32];	 
	char corrid[32]; 
	char replyqueue[15 +1];	 
	char failurequeue[15 +1]; 
	CLIENTID cltid;		 
	long urcode;		 
	long appkey;		 
};
typedef struct tpqctl_t TPQCTL;

 

















 















 

 







 
struct tpevctl_t {
	long flags;
	char name1[32];
	char name2[32];
	TPQCTL qctl;
};
typedef struct tpevctl_t TPEVCTL;

typedef unsigned short FLDID;
typedef unsigned short FLDLEN;
typedef int FLDOCC;

typedef struct Fbfr FBFR;

typedef TM32U FLDID32;
typedef TM32U FLDLEN32;
typedef TM32I FLDOCC32;

typedef struct Fbfr32 FBFR32;

 

 


 





struct xid_t {
	long formatID;		 
	long gtrid_length;	 
	long bqual_length;	 
	char data[128];
};
typedef struct xid_t XID;


 



 


 
typedef long COMMIT_RETURN;



 
typedef long TRANSACTION_CONTROL;



 
typedef long TRANSACTION_TIMEOUT;

 
typedef long TRANSACTION_STATE;




 
struct tx_info_t {
	XID	xid;
	COMMIT_RETURN when_return;
	TRANSACTION_CONTROL transaction_control;
	TRANSACTION_TIMEOUT transaction_timeout;
	TRANSACTION_STATE   transaction_state;
};
typedef struct tx_info_t TXINFO;

 







 





















					 


					 


					 


					 


 int lrt_dummy(long param);
 int lrtfunc_tpinitialize(char* firstParm, ...);
 int lrtfunc_tpchkauth(void);
 int lrtfunc_tpterm(void);
 char* lrtfunc_tpalloc(char* type, char* subtype, long size);
 char* lrtfunc_tprealloc(char* ptr, long size);
 void lrtfunc_tpfree(char* ptr);
 int lrtfunc_tpbegin(unsigned long timeout, long flags);
 int lrtfunc_tpscmt(long flags);
 int lrtfunc_tpcommit(long flags);
 int lrtfunc_tpabort(long flags);
 int lrtfunc_tpgetlev(void);
 int lrtfunc_tpsuspend(TPTRANID* tranid, long flags);
 int lrtfunc_tpresume(TPTRANID* tranid, long flags);
 int lrtfunc_tpcall(char* svc, char* idata, long ilen, char** odata, long* olen, long flags);
 int lrtfunc_tpacall(char* svc, char* data, long len, long flags);
 int lrtfunc_tpgetrply(int* cd, char** data, long* len, long flags);
 int lrtfunc_tpcancel(int cd);
 int lrtfunc_tpgprio(void);
 int lrtfunc_tpsprio(int prio, long flags);
 int lrtfunc_tpconnect(char* svc, char* data, long len, long flags);
 int lrtfunc_tpdiscon(int cd);
 int lrtfunc_tpsend(int cd, char* data, long len, long flags, long* revent);
 int lrtfunc_tprecv(int cd, char** data, long* len, long flags, long* revent);
 void* lrtfunc_tpsetunsol(void* func);
 int lrtfunc_tpchkunsol(void);
 int lrtfunc_tpbroadcast(char* lmid, char* username, char* cltname, char* data, long len, long flags);
 int lrtfunc_tpdequeue(char* qspace, char* qname, TPQCTL* ctl, char** data, long* len, long flags);
 int lrtfunc_tpenqueue(char* qspace, char* qname, TPQCTL* ctl, char* data, long len, long flags);
 int lrtfunc_tx_begin(void);
 int lrtfunc_tx_commit(void);
 int lrtfunc_tx_rollback(void);
 int lrtfunc_tx_open(void);
 int lrtfunc_tx_close(void);
 int lrtfunc_tx_info(TXINFO* info);
 int lrtfunc_tx_set_commit_return(COMMIT_RETURN when_return);
 int lrtfunc_tx_set_transaction_control(TRANSACTION_CONTROL control);
 int lrtfunc_tx_set_transaction_timeout(TRANSACTION_TIMEOUT timeout);
 char *  lrtfunc_AEWgetenv(char  * name);
 int  lrtfunc_AEWputenv(char  * string);
 void *  lrtfunc_AEWsetblockinghook(void  * hook);
 int  lrtfunc_AEWisblocked(void);
 long lrtfunc_tptypes(char* ptr, char* type, char* subtype);
 int lrtfunc_gettperrno(void);
 long lrtfunc_gettpurcode(void);
 char* lrtfunc_tpstrerror(int err);
 int lrtfunc_getFerror(void);
 char* lrtfunc_Fstrerror(int err);
 char* lrtfunc_CFgetalloc(FBFR* fbfr, FLDID fieldid, FLDOCC oc, int type, FLDLEN* extralen);
 char* lrtfunc_Fname(FLDID fieldid);
 void lrtfunc_Fidnm_unload(void);
 FLDID lrtfunc_Fldid(char* name);
 void lrtfunc_Fnmid_unload(void);

 int lrtfunc_getFerror32(void);
 char* lrtfunc_Fstrerror32(int err);
 char* lrtfunc_CFgetalloc32(FBFR32* fbfr, FLDID32 fieldid, FLDOCC32 oc, int type, FLDLEN32* extralen);
 char* lrtfunc_Fname32(FLDID32 fieldid);
 void lrtfunc_Fidnm_unload32(void);
 FLDID lrtfunc_Fldid32(char* name);
 void lrtfunc_Fnmid_unload32(void);

 char* lrtfunc_tuxgetenv(char * name);
 int lrtfunc_tuxputenv(char* string);
 int lrtfunc_tuxreadenv(char* file, char* label);
 int lrtfunc_tpnotify(CLIENTID* clientid, char* data, long len, long flags);
 int lrtfunc_tppost(char *eventname, char *data, long len, long flags);
 long lrtfunc_tpsubscribe(char *eventexpr, char *filter, TPEVCTL *ctl, long flags);
 int lrtfunc_tpunsubscribe(long subscription, long flags);

 int lrtfunc_Finitialize(FBFR* fbfr);
 int lrtfunc_Fadd_fld(FBFR* fbfr, ...);
 int lrtfunc_Finitialize32(FBFR32* fbfr);
 int lrtfunc_Fadd32_fld(FBFR32* fbfr, ...);
  



int lrtfunc_save_searched_string(char* buffer, long buf_size, unsigned int occurrence, char* search_string, int offset, unsigned int string_len, char* parm_name);
int lrtfunc_save_searched_string_ext(char* buffer, long buf_size, unsigned int occurrence, char* left_boundary, int offset, 
	unsigned int string_len, char* parm_name);
int lrtfunc_save_parm(char* buffer, int offset, int parm_len, char* parm_name);
 void lrt_register_file_line(char* file, int line);
 void lrt_set_env_list(char** allowedEnv);
 int lrtfunc_save_fld_val(FBFR* fbfr, char* name, FLDOCC occ, char* paramName);
 int lrtfunc_save32_fld_val(FBFR32* fbfr, char* name, FLDOCC32 occ, char* paramName);

char* lrt_libname(void);
char* procaddr;
int dllh;
























































































int lrt_Fget_fld(FBFR* fbfr, char* fieldidParm, FLDOCC oc, void* loc, FLDLEN* len);
int lrt_Fget32_fld(FBFR32* fbfr, char* fieldidParm, FLDOCC32 oc, void* loc, FLDLEN32* len);
FLDOCC lrt_Fnumfldocc(FBFR* fbfr, char* fieldidParm);
FLDOCC32 lrt_Fnumfldocc32(FBFR32* fbfr, char* fieldidParm);






extern int lrt_is_continue_on_error(void);




extern int CFget (FBFR *, FLDID, FLDOCC , char  *, FLDLEN *, int );
extern int CFadd (FBFR *, FLDID, char *, FLDLEN , int);
extern int Fget (FBFR *, FLDID , FLDOCC , char *, FLDLEN *);
extern int Fadd (FBFR *, FLDID, char *, FLDLEN);

 









int lrt_display_buffer(const char* prefix, const char* buffer, long actualLen, long expectedLen);



# 533 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrt.h"
void lrtfunc_memcpy(void* dest, const void* src, unsigned long count, unsigned long srcLen);

# 544 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrt.h"
void lrtfunc_strcpy(char* dest, const char* src);

typedef struct CARRAY_ERROR
{
	char service[32];
	char searchString[128];
	char errorMsg[128];
} CARRAY_ERROR_INFO;
void lrt_set_carray_error_list(CARRAY_ERROR_INFO* newcarrayErrors);

	int tpresult_int = 0;
	char type[32];
	char* temp_carray = 0;
	int bad_calld = -1;
	int bad_connectd = -1;
	TPTRANID bad_tranid;
	TPQCTL qctl;
	long olen;
	long revent;

# 592 "D:\\Program Files (x86)\\HP\\Performance Center Host\\include/lrt.h"


static char* env_allow_array[] = {
	"WSNADDR=",
	"TUXDIR=",
	"ROOTDIR=",
	"FIELDTBLS32=",
	"FLDTBLDIR32=",
	"FIELDTBLS=",
	"FLDTBLDIR=",
	"VIEWDIR32=",
	"VIEWFILES32=",
	0
};


# 1 "vuser_init.c" 2

# 1 "replay.vdf" 1


char* data_0;



char* data_1;
char* data_2;

 
# 458 "replay.vdf"

 
# 481 "replay.vdf"

 
# 581 "replay.vdf"

 
# 618 "replay.vdf"

 
# 664 "replay.vdf"

 
# 1345 "replay.vdf"



char* data_3;

 
# 1372 "replay.vdf"

 
# 1395 "replay.vdf"

 



 




char* data_4;

 



 
# 1421 "replay.vdf"

 
# 2131 "replay.vdf"

 
# 2204 "replay.vdf"

 
# 2253 "replay.vdf"

 
# 2307 "replay.vdf"

 
# 4972 "replay.vdf"
char* data_5;


char* data_6;


char* data_7;







 
# 5032 "replay.vdf"

 
# 5079 "replay.vdf"

 





 
# 5119 "replay.vdf"

 
# 5250 "replay.vdf"

 
# 5287 "replay.vdf"

 



 
# 5333 "replay.vdf"

 
# 5439 "replay.vdf"

 
# 7975 "replay.vdf"
char* data_8;

 
# 8032 "replay.vdf"

 
# 8101 "replay.vdf"

 
# 8291 "replay.vdf"

 
# 8337 "replay.vdf"

 
# 8383 "replay.vdf"

 
# 8421 "replay.vdf"

 
# 8509 "replay.vdf"

 
# 8555 "replay.vdf"

 
# 8600 "replay.vdf"

 
# 8663 "replay.vdf"

 
# 8697 "replay.vdf"

 
# 8731 "replay.vdf"

 
# 8783 "replay.vdf"

 
# 9362 "replay.vdf"

 
# 9399 "replay.vdf"

 
# 9436 "replay.vdf"

 
# 9530 "replay.vdf"

 
# 9588 "replay.vdf"

 
# 10042 "replay.vdf"

 
# 10122 "replay.vdf"

 






 
# 10176 "replay.vdf"

 
# 10200 "replay.vdf"

 
# 10247 "replay.vdf"

 
# 10271 "replay.vdf"

 
# 10313 "replay.vdf"

 
# 10347 "replay.vdf"

 
# 10381 "replay.vdf"

 
# 10415 "replay.vdf"

 
# 10449 "replay.vdf"

 
# 10576 "replay.vdf"

 
# 10622 "replay.vdf"

 
# 10664 "replay.vdf"

 
# 10998 "replay.vdf"

 
# 11037 "replay.vdf"

 
# 11071 "replay.vdf"

 
# 11104 "replay.vdf"

 
# 11141 "replay.vdf"

 
# 11178 "replay.vdf"

 
# 11215 "replay.vdf"

 
# 11252 "replay.vdf"

 
# 11290 "replay.vdf"

 
# 11327 "replay.vdf"

 
# 11364 "replay.vdf"

 
# 11398 "replay.vdf"

 
# 11432 "replay.vdf"

 
# 11479 "replay.vdf"

 
# 11526 "replay.vdf"

 
# 11560 "replay.vdf"

 
# 11594 "replay.vdf"

 
# 11628 "replay.vdf"

 
# 11678 "replay.vdf"

 
# 11913 "replay.vdf"

 
# 11947 "replay.vdf"

 
# 11982 "replay.vdf"

 
# 12110 "replay.vdf"

 
# 12561 "replay.vdf"

 
# 12624 "replay.vdf"

 
# 12752 "replay.vdf"

 
# 12828 "replay.vdf"

 
# 12877 "replay.vdf"

 
# 12924 "replay.vdf"
char* data_9;

 
# 12960 "replay.vdf"

 
# 13002 "replay.vdf"

 
# 13048 "replay.vdf"

 



 
# 13095 "replay.vdf"

 
# 13141 "replay.vdf"

 
# 13180 "replay.vdf"

 
# 13375 "replay.vdf"

 
# 13426 "replay.vdf"

 
# 13460 "replay.vdf"

 
# 13500 "replay.vdf"

 
# 13540 "replay.vdf"

 
# 13574 "replay.vdf"

 
# 13609 "replay.vdf"

 






 
# 13866 "replay.vdf"

 
# 13900 "replay.vdf"

 
# 13935 "replay.vdf"

 
# 13998 "replay.vdf"

 
# 14011 "replay.vdf"

 
# 14074 "replay.vdf"

 
# 14137 "replay.vdf"

 
# 14149 "replay.vdf"

 
# 14183 "replay.vdf"

 
# 14230 "replay.vdf"

 
# 14254 "replay.vdf"

 
# 14520 "replay.vdf"

 
# 14554 "replay.vdf"

 
# 14588 "replay.vdf"

 
# 14625 "replay.vdf"

 
# 14659 "replay.vdf"

 
# 14701 "replay.vdf"

 
# 14817 "replay.vdf"

 
# 14841 "replay.vdf"

 
# 14879 "replay.vdf"

 
# 14913 "replay.vdf"

 
# 14979 "replay.vdf"

 
# 15021 "replay.vdf"

 
# 15657 "replay.vdf"

 






 
# 15703 "replay.vdf"

 
# 15737 "replay.vdf"

 
# 15771 "replay.vdf"

 
# 16045 "replay.vdf"

 






 
# 16091 "replay.vdf"

 
# 16130 "replay.vdf"

 
# 16193 "replay.vdf"

 
# 16232 "replay.vdf"

 
# 18668 "replay.vdf"

 
# 21104 "replay.vdf"

 
# 21191 "replay.vdf"

 
# 21434 "replay.vdf"

 
# 21468 "replay.vdf"

 
# 21555 "replay.vdf"

 
# 21646 "replay.vdf"

 
# 21699 "replay.vdf"

 
# 21828 "replay.vdf"

 
# 21881 "replay.vdf"

 
# 21968 "replay.vdf"

 
# 22021 "replay.vdf"

 
# 22074 "replay.vdf"

 
# 22161 "replay.vdf"

 
# 22214 "replay.vdf"

 
# 22324 "replay.vdf"

 
# 22377 "replay.vdf"

 
# 22430 "replay.vdf"

 
# 22464 "replay.vdf"

 
# 22498 "replay.vdf"

 
# 22537 "replay.vdf"

 
# 22571 "replay.vdf"

 
# 22605 "replay.vdf"

 
# 22639 "replay.vdf"

 
# 22673 "replay.vdf"

 
# 22709 "replay.vdf"

 
# 22744 "replay.vdf"

 
# 22779 "replay.vdf"

 
# 22826 "replay.vdf"

 
# 22896 "replay.vdf"

 
# 23019 "replay.vdf"

 
# 23053 "replay.vdf"

 
# 23176 "replay.vdf"

 
# 23239 "replay.vdf"

 
# 23263 "replay.vdf"

 
# 23297 "replay.vdf"

 
# 23331 "replay.vdf"

 
# 23355 "replay.vdf"

 
# 23418 "replay.vdf"

 
# 23453 "replay.vdf"

 
# 23500 "replay.vdf"

 
# 23534 "replay.vdf"

 
# 23568 "replay.vdf"

 
# 23615 "replay.vdf"

 
# 23653 "replay.vdf"

 
# 23695 "replay.vdf"

 
# 23728 "replay.vdf"

 
# 23775 "replay.vdf"

 
# 23813 "replay.vdf"

 
# 23847 "replay.vdf"

 
# 23881 "replay.vdf"

 
# 23918 "replay.vdf"

 
# 23974 "replay.vdf"

 
# 24138 "replay.vdf"

 
# 24302 "replay.vdf"

 
# 24336 "replay.vdf"

 
# 24385 "replay.vdf"

 
# 24439 "replay.vdf"

 
# 24498 "replay.vdf"

 
# 24552 "replay.vdf"

 
# 24615 "replay.vdf"

 
# 24639 "replay.vdf"

 
# 24675 "replay.vdf"

 
# 24713 "replay.vdf"

 
# 24801 "replay.vdf"

 
# 24857 "replay.vdf"

 
# 24891 "replay.vdf"

 
# 24925 "replay.vdf"

 
# 24962 "replay.vdf"

 
# 24996 "replay.vdf"

 
# 25046 "replay.vdf"

 
# 25097 "replay.vdf"

 
# 25143 "replay.vdf"

 
# 25477 "replay.vdf"

 
# 25934 "replay.vdf"

 
# 25971 "replay.vdf"

 
# 26022 "replay.vdf"

 
# 26057 "replay.vdf"

 
# 26094 "replay.vdf"

 
# 26157 "replay.vdf"

 
# 26191 "replay.vdf"

 
# 26225 "replay.vdf"

 
# 26262 "replay.vdf"

 
# 26299 "replay.vdf"

 
# 26358 "replay.vdf"

 
# 26456 "replay.vdf"

 
# 26554 "replay.vdf"

 
# 26591 "replay.vdf"

 
# 26725 "replay.vdf"

 
# 27182 "replay.vdf"

 
# 27216 "replay.vdf"

 
# 27232 "replay.vdf"

 
# 27286 "replay.vdf"

 
# 27322 "replay.vdf"

 
# 27357 "replay.vdf"

 
# 27711 "replay.vdf"

 
# 27745 "replay.vdf"

 
# 27779 "replay.vdf"

 
# 27842 "replay.vdf"

 
# 27855 "replay.vdf"

 
# 27911 "replay.vdf"

 
# 28071 "replay.vdf"

 
# 28109 "replay.vdf"

 
# 28133 "replay.vdf"

 
# 28152 "replay.vdf"

 
# 28195 "replay.vdf"

 
# 28229 "replay.vdf"

 
# 28263 "replay.vdf"

 
# 28305 "replay.vdf"

 
# 28339 "replay.vdf"

 
# 28363 "replay.vdf"

 
# 28398 "replay.vdf"

 
# 28435 "replay.vdf"

 
# 28448 "replay.vdf"

 
# 28472 "replay.vdf"

 
# 28491 "replay.vdf"

 
# 29295 "replay.vdf"

 
# 29332 "replay.vdf"

 
# 29367 "replay.vdf"
char* data_10;
int calld_0;

 
# 29497 "replay.vdf"
int calld_010;

 
# 29533 "replay.vdf"
char* data_11;





 






 
# 30311 "replay.vdf"

 
# 30350 "replay.vdf"

 
# 30384 "replay.vdf"

 
# 30417 "replay.vdf"

 
# 30455 "replay.vdf"

 
# 30518 "replay.vdf"

 
# 30678 "replay.vdf"

 
# 30838 "replay.vdf"

 
# 30885 "replay.vdf"

 
# 30941 "replay.vdf"

# 2 "vuser_init.c" 2


vuser_init()
{
lrt_set_env_list(env_allow_array);
(*( lrt_register_file_line("vuser_init.c", 7),lrtfunc_tuxputenv ))("APPDIR={APPDIR}");
(*( lrt_register_file_line("vuser_init.c", 8),lrtfunc_tuxputenv ))("ROOTDIR={TUX12}");
(*( lrt_register_file_line("vuser_init.c", 9),lrtfunc_tuxputenv ))("TUXDIR={TUX12}");
(*( lrt_register_file_line("vuser_init.c", 10),lrtfunc_tuxputenv ))("INCLUDE=%INCLUDE%;%ROOTDIR%\\inc");
(*( lrt_register_file_line("vuser_init.c", 11),lrtfunc_tuxputenv ))("LIB=%LIB%;%ROOTDIR%\\lib");
(*( lrt_register_file_line("vuser_init.c", 12),lrtfunc_tuxputenv ))("FIELDTBLS=usysflds,tptmifld,dciflds,nmflds,csmflds,rmsflds,secflds,tiflds");
(*( lrt_register_file_line("vuser_init.c", 13),lrtfunc_tuxputenv ))("FLDTBLDIR={DPET_STORAGE}");
(*( lrt_register_file_line("vuser_init.c", 14),lrtfunc_tuxputenv ))("VIEWDIR32={DPET_STORAGE}");
(*( lrt_register_file_line("vuser_init.c", 15),lrtfunc_tuxputenv ))("VIEWFILES32=CS_ADJ_32.VV,CS_BANACT_32.VV,CS_BANAGR_32.VV,CS_BAN_32.VV,CS_BIL_32.VV,CS_CTN_32.VV,CS_CYCLE_32.VV,CS_FOLLOWUP_32.VV,CS_FTRTRX_32.VV,CS_GET_SUB_32.VV,CS_HIST_32.VV,CS_LIST_SUB_32.VV,CS_memo_list_32.VV,CS_PYM_32.VV,CS_SRCH_32.VV,CS_SRCH_SPECIAL_32.VV,CS_SUBADDACT_32.VV,CS_SUB_32.VV,CS_USAGE_32.VV,");
(*( lrt_register_file_line("vuser_init.c", 16),lrtfunc_tuxputenv ))("APPDIR={APPDIR}");
(*( lrt_register_file_line("vuser_init.c", 17),lrtfunc_tuxputenv ))("ROOTDIR={TUX12}");
(*( lrt_register_file_line("vuser_init.c", 18),lrtfunc_tuxputenv ))("TUXDIR={TUX12}");
(*( lrt_register_file_line("vuser_init.c", 19),lrtfunc_tuxputenv ))("INCLUDE=%INCLUDE%;%ROOTDIR%\\inc");
(*( lrt_register_file_line("vuser_init.c", 20),lrtfunc_tuxputenv ))("LIB=%LIB%;%ROOTDIR%\\lib");
(*( lrt_register_file_line("vuser_init.c", 21),lrtfunc_tuxputenv ))("FIELDTBLS=usysflds,tptmifld,dciflds,nmflds,csmflds,rmsflds,secflds,tiflds");
(*( lrt_register_file_line("vuser_init.c", 22),lrtfunc_tuxputenv ))("FLDTBLDIR={DPET_STORAGE}");
(*( lrt_register_file_line("vuser_init.c", 23),lrtfunc_tuxputenv ))("VIEWDIR32={DPET_STORAGE}");
(*( lrt_register_file_line("vuser_init.c", 24),lrtfunc_tuxputenv ))("WSNADDR={DPET_SEC_WSN}");
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 25),lrtfunc_tpinitialize ))(
"usrname=99999",
"cltname=csm",
"datalen=9",
"data=""PASSWORD"     "\x0",
(char *)0);
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};
(*( lrt_register_file_line("vuser_init.c", 32), ci_load_dll(ci_this_context,("kernel32.dll")), dllh = LoadLibraryA(lrt_libname()), procaddr = (void*)GetProcAddress(dllh, "lrt_unsolCB"), lrtfunc_tpsetunsol ))(procaddr);
(*( lrt_register_file_line("vuser_init.c", 33), ci_load_dll(ci_this_context,("kernel32.dll")), dllh = LoadLibraryA(lrt_libname()), procaddr = (void*)GetProcAddress(dllh, "lrt_unsolCB"), lrtfunc_tpsetunsol ))(procaddr);
data_2 = (*( lrt_register_file_line("vuser_init.c", 34),lrtfunc_tpalloc ))("FML32", "", 100000);
(*( lrt_register_file_line("vuser_init.c", 35),lrtfunc_Finitialize32 ))((FBFR32*)data_2);

(*( lrt_register_file_line("vuser_init.c", 37),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=OPERATOR_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 38),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 39),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 40),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 41),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=SP_PARAM_NAME", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 42),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=SP_SECTION", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 43),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=SEC_PARAM_SELECT_TYPE", "value=ALL", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 44),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 45),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=RUN_DATE", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 46),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=MARKET_CODE", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 47),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=ENV_CODE", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 48),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 49),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
data_1 = (*( lrt_register_file_line("vuser_init.c", 50),lrtfunc_tpalloc ))("FML32", "", 100000);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 51),lrtfunc_tpcall ))("seGtSecPrm00",
data_2,
0,
&data_1,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

 
(*( lrt_register_file_line("vuser_init.c", 61),lrtfunc_Finitialize32 ))((FBFR32*)data_2);

(*( lrt_register_file_line("vuser_init.c", 63),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=OPERATOR_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 64),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 65),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 66),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 67),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 68),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=RUN_DATE", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 69),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=MARKET_CODE", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 70),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=ENV_CODE", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 71),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 72),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 73),lrtfunc_tpcall ))("seGtSystDt00",
data_2,
0,
&data_1,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

if((*( lrt_register_file_line("vuser_init.c", 82),lrtfunc_save32_fld_val ))((FBFR32*)data_1, "name=SYSTEM_DATE", 0,"SYSTEM_DATE")<0) 
lr_error_message("Failed to get SYSTEM_DATE");

(*( lrt_register_file_line("vuser_init.c", 85),lrtfunc_Finitialize32 ))((FBFR32*)data_2);

(*( lrt_register_file_line("vuser_init.c", 87),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=OPERATOR_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 88),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=PAGE", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 89),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=USERID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 90),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 91),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 92),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=USEID", "value=Y", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 93),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 94),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=APPLICATION_ID", "value=ONLINE", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 95),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=RUN_DATE", "value={SYSTEM_DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 96),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=MARKET_CODE", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 97),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=USERPASSWORD", "value=f8a0cda294c8618b61c", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 98),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=ENV_CODE", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 99),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 100),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 101),lrtfunc_tpcall ))("seVerUser00",
data_2,
0,
&data_1,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

 
(*( lrt_register_file_line("vuser_init.c", 111),lrtfunc_Finitialize32 ))((FBFR32*)data_2);

(*( lrt_register_file_line("vuser_init.c", 113),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=OPERATOR_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 114),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 115),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 116),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 117),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 118),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=RUN_DATE", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 119),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=MARKET_CODE", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 120),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=ENV_CODE", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 121),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=PCCD", "value=DEF", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 122),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=ENVCD", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 123),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 124),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 125),lrtfunc_tpcall ))("seGtLclDb00",
data_2,
0,
&data_1,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 134),lrtfunc_Finitialize32 ))((FBFR32*)data_2);

(*( lrt_register_file_line("vuser_init.c", 136),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=OPERATOR_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 137),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=USER_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 138),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 139),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 140),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 141),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 142),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=RUN_DATE", "value={SYSTEM_DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 143),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=MARKET_CODE", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 144),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=ENV_CODE", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 145),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=PROFILE_ID", "value=ALL", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 146),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=ENVCD", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 147),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 148),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 149),lrtfunc_tpcall ))("seGtGenSecPrm00",
data_2,
0,
&data_1,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 158),lrtfunc_Finitialize32 ))((FBFR32*)data_2);

(*( lrt_register_file_line("vuser_init.c", 160),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 161),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 162),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 163),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 164),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 165),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=RUN_DATE", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 166),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 167),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 168),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=PROFILE_ID", "value=ALL", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 169),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=ENVCD", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 170),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 171),lrtfunc_Fadd32_fld ))((FBFR32*)data_2, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 172),lrtfunc_tpcall ))("seLsUsrPrm00",
data_2,
0,
&data_1,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 181),lrtfunc_tpfree ))(data_1);
(*( lrt_register_file_line("vuser_init.c", 182),lrtfunc_tpfree ))(data_2);
(*( lrt_register_file_line("vuser_init.c", 183), ci_load_dll(ci_this_context,("kernel32.dll")), dllh = LoadLibraryA(lrt_libname()), procaddr = (void*)GetProcAddress(dllh, "lrt_unsolCB"), lrtfunc_tpsetunsol ))(procaddr);
(*( lrt_register_file_line("vuser_init.c", 184),lrtfunc_tpterm ))();
(*( lrt_register_file_line("vuser_init.c", 185),lrtfunc_tuxputenv ))("APPDIR={APPDIR}");
(*( lrt_register_file_line("vuser_init.c", 186),lrtfunc_tuxputenv ))("ROOTDIR={TUX12}");
(*( lrt_register_file_line("vuser_init.c", 187),lrtfunc_tuxputenv ))("TUXDIR={TUX12}");
(*( lrt_register_file_line("vuser_init.c", 188),lrtfunc_tuxputenv ))("INCLUDE=%INCLUDE%;%ROOTDIR%\\inc");
(*( lrt_register_file_line("vuser_init.c", 189),lrtfunc_tuxputenv ))("LIB=%LIB%;%ROOTDIR%\\lib");
(*( lrt_register_file_line("vuser_init.c", 190),lrtfunc_tuxputenv ))("FIELDTBLS=usysflds,tptmifld,dciflds,nmflds,csmflds,rmsflds,secflds,tiflds");
(*( lrt_register_file_line("vuser_init.c", 191),lrtfunc_tuxputenv ))("FLDTBLDIR={DPET_STORAGE}");
(*( lrt_register_file_line("vuser_init.c", 192),lrtfunc_tuxputenv ))("VIEWDIR32={DPET_STORAGE}");
(*( lrt_register_file_line("vuser_init.c", 193),lrtfunc_tuxputenv ))("WSNADDR={DPET_APP_WSN}");
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 194),lrtfunc_tpinitialize ))(
"usrname={USER_ID}",
"cltname=csm",
"datalen=9",
"data=""PASSWORD"     "\x0",
(char *)0);
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};
(*( lrt_register_file_line("vuser_init.c", 201), ci_load_dll(ci_this_context,("kernel32.dll")), dllh = LoadLibraryA(lrt_libname()), procaddr = (void*)GetProcAddress(dllh, "lrt_unsolCB"), lrtfunc_tpsetunsol ))(procaddr);
(*( lrt_register_file_line("vuser_init.c", 202), ci_load_dll(ci_this_context,("kernel32.dll")), dllh = LoadLibraryA(lrt_libname()), procaddr = (void*)GetProcAddress(dllh, "lrt_unsolCB"), lrtfunc_tpsetunsol ))(procaddr);
data_3 = (*( lrt_register_file_line("vuser_init.c", 203),lrtfunc_tpalloc ))("FML32", "", 100000);
(*( lrt_register_file_line("vuser_init.c", 204),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 206),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 207),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PAGE", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 208),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 209),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 210),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 211),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 212),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 213),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 214),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 215),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENVCD", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 216),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 217),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
data_2 = (*( lrt_register_file_line("vuser_init.c", 218),lrtfunc_tpalloc ))("FML32", "", 100000);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 219),lrtfunc_tpcall ))("seLsGrpEnv00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 228),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 230),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 231),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 232),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 233),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 234),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 235),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value=", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 236),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 237),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 238),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 239),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 240),lrtfunc_tpcall ))("seGtLgclDt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

if((*( lrt_register_file_line("vuser_init.c", 249),lrtfunc_save32_fld_val ))((FBFR32*)data_2, "name=DATE", 0,"DATE")<0) 
lr_error_message("Failed to get DATE");

(*( lrt_register_file_line("vuser_init.c", 252),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 254),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 255),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PAGENO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 256),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 257),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 258),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 259),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 260),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 261),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 262),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PROFILEID", "value=ALL", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 263),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICID", "value=a_csm", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 264),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 265),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 266),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 267),lrtfunc_tpcall ))("seGtAcMode00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 276),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 278),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=UI_USER_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 279),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 280),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 281),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 282),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 283),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 284),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 285),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 286),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 287),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 288),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 289),lrtfunc_tpcall ))("seLoginback00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 298),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 300),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EVENT_SEVERITY", "value=1", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 301),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 302),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 303),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 304),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=DELETE_INDICATOR", "value=Y", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 305),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 306),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_NAME", "value=a_csm", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 307),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTED_ENVIRONMENT", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 308),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTED_USER_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 309),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTED_PROFILE_ID", "value=ALL", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 310),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COMPUTER_LOCATION", "value=DEVCXSAMSPT009 (10.159.66.81)", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 311),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EVENT_DESCRIPTION", "value=Successful login", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 312),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=a_csm", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 313),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 314),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 315),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 316),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 317),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 318),lrtfunc_tpacall ))("seInsrtLog00",
data_3,
0,
0x00000004);
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 324),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 326),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 327),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PAGENO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 328),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 329),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 330),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 331),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 332),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 333),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 334),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PROFILEID", "value=ALL", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 335),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICID", "value=a_csm", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 336),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 337),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 338),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 339),lrtfunc_tpcall ))("seGtAcMode00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 348),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 350),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 351),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=USERID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 352),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 353),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 354),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 355),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 356),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 357),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 358),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 359),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 360),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 361),lrtfunc_tpcall ))("seLoginChk00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 370),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 372),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 373),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 374),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 375),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 376),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 377),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 378),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 379),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 380),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=GEN_TYPE", "value=SERVICE_CACHE", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 381),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 382),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 383),lrtfunc_tpcall ))("rfGtGenCd00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 392),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 394),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 395),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 396),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 397),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 398),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 399),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 400),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 401),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 402),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 403),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 404),lrtfunc_tpcall ))("rfLsProduct00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 413),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 415),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 416),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 417),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 418),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 419),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 420),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 421),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 422),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 423),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 424),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 425),lrtfunc_tpcall ))("rfLsEquipment00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 434),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 436),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 437),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 438),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 439),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 440),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 441),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 442),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 443),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 444),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 445),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 446),lrtfunc_tpcall ))("rfLsPrdEq00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 455),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 457),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 458),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 459),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 460),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 461),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 462),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 463),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 464),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 465),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_APPL_ID", "value=CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 466),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 467),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 468),lrtfunc_tpcall ))("rfLsPrmVal00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

 
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 478),lrtfunc_tpinitialize ))(
"usrname=CH",
"cltname=CH",
"datalen=8",
"data=""\x0\x0\x0\x0\x0\x0\x0\x0",
(char *)0);
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 485),lrtfunc_tpinitialize ))(
"usrname=CH",
"cltname=CH",
"datalen=8",
"data=""/Ìy¨§8ßJ",
(char *)0);
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 492),lrtfunc_tpinitialize ))(
"usrname=CH",
"cltname=CH",
"datalen=8",
"data=""!"     "\x98"     "\\"     "\x1f"     "8¾êŽ",
(char *)0);
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};
(*( lrt_register_file_line("vuser_init.c", 499),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 501),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 502),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 503),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 504),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 505),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 506),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 507),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 508),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 509),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MSG_NAME", "value=ExitAppl", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 510),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 511),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 512),lrtfunc_tpcall ))("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 521),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 523),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 524),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 525),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 526),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 527),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 528),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 529),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 530),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 531),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MSG_NAME", "value=SaveChanges", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 532),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 533),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 534),lrtfunc_tpcall ))("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 543),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 545),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 546),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 547),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 548),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 549),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 550),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 551),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 552),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 553),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 554),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 555),lrtfunc_tpcall ))("gnGtSysTime00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 564),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 566),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 567),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 568),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 569),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 570),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 571),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 572),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 573),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 574),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 575),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 576),lrtfunc_tpcall ))("csGtDlrCd00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 585),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 587),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 588),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 589),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 590),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=I_PSEQ_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 591),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 592),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 593),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 594),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 595),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 596),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 597),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 598),lrtfunc_tpcall ))("rfGtTglOnOff00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 607),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 609),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 610),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 611),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 612),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 613),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 614),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 615),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 616),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 617),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 618),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 619),lrtfunc_tpcall ))("gnGtEnvVar00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 628),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 630),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=US_USER_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 631),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 632),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 633),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 634),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 635),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=US_LOCATION", "value=DEVCXSAMSPT009", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 636),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=a_csm", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 637),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 638),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 639),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 640),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 641),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 642),lrtfunc_tpcall ))("seCrUsrSess00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 651),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 653),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 654),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 655),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 656),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RESX", "value=1920", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 657),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RESY", "value=1080", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 658),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 659),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 660),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 661),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 662),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 663),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 664),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 665),lrtfunc_tpcall ))("csGtWdgtCnfg00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 674),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 676),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 677),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 678),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 679),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 680),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 681),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 682),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 683),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 684),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=GEN_TYPE", "value=FRAUD_CSR_SUP_LIST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 685),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 686),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 687),lrtfunc_tpcall ))("rfGtGenCd00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_init.c", 696),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_init.c", 698),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 699),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 700),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 701),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 702),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 703),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 704),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 705),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 706),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_init.c", 707),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_init.c", 708),lrtfunc_tpcall ))("rfLsElmSecRul00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

return 0;
}
# 3 "c:\\users\\fgrinbe\\appdata\\local\\temp\\2\\td_80\\performancecenter\\62e73d6b\\test\\846\\846\\846\\\\combined_846.c" 2

# 1 "Action.c" 1
Action()
{

data_8 = (*( lrt_register_file_line("Action.c", 4),lrtfunc_tpalloc ))("FML32", "", 100000);
(*( lrt_register_file_line("Action.c", 5),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 7),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 8),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 9),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 10),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 11),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 12),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 13),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", (char *)0);
(*( lrt_register_file_line("Action.c", 14),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 15),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 16),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 17),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 18),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 19),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 20),lrtfunc_tpcall ))("arLsBanAgr00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 29),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 31),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 32),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 33),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 34),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 35),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 36),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 37),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 38),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 39),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 40),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 41),lrtfunc_tpcall ))("rfLsAcTpDscRc00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 50),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 52),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 53),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 54),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 55),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 56),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 57),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 58),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 59),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 60),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 61),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 62),lrtfunc_tpcall ))("rfLsAcctTpRec00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 71),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 73),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 74),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 75),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 76),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 77),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 78),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 79),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 80),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 81),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=GEN_TYPE", "value=BUSSTYPE", (char *)0);
(*( lrt_register_file_line("Action.c", 82),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 83),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 84),lrtfunc_tpcall ))("rfGtGenCd00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 93),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 95),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 96),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 97),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 98),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 99),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 100),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 101),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 102),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 103),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=GEN_TYPE", "value=CORPTYPE", (char *)0);
(*( lrt_register_file_line("Action.c", 104),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 105),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 106),lrtfunc_tpcall ))("rfGtGenCd00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 115),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 117),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 118),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 119),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 120),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 121),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 122),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 123),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 124),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 125),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=GEN_TYPE", "value=OPENCHAN", (char *)0);
(*( lrt_register_file_line("Action.c", 126),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 127),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 128),lrtfunc_tpcall ))("rfGtGenCd00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 137),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 139),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 140),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 141),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 142),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 143),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 144),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 145),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 146),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 147),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=NETWORKCD", "value=TMO8", (char *)0);
(*( lrt_register_file_line("Action.c", 148),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 149),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 150),lrtfunc_tpcall ))("rfLsCarrInfo00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 160),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 162),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 163),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 164),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 165),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 166),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 167),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 168),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 169),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 170),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 171),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 172),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 173),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 174),lrtfunc_tpcall ))("rfGtAcctTpInd00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 184),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 186),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 187),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 188),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 189),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 190),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 191),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 192),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 193),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 194),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 195),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 196),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 197),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 198),lrtfunc_tpcall ))("rfGtAcctTpDsc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 207),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 209),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 210),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 211),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 212),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 213),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 214),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 215),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 216),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 217),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 218),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 219),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 220),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 221),lrtfunc_tpcall ))("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 230),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 232),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 233),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=2", (char *)0);
(*( lrt_register_file_line("Action.c", 234),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 235),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 236),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 237),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 238),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 239),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 240),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 241),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=ACCOUNT_TYPE", (char *)0);
(*( lrt_register_file_line("Action.c", 242),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=ACC_TYPE", (char *)0);
(*( lrt_register_file_line("Action.c", 243),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 244),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME2", "value=ACC_SUB_TYPE", (char *)0);
(*( lrt_register_file_line("Action.c", 245),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE2", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 246),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=DESCRIPTION", (char *)0);
(*( lrt_register_file_line("Action.c", 247),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 248),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 249),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 258),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 260),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 261),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 262),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 263),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 264),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 265),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 266),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 267),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 268),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 269),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=ACCOUNT_TYPE_DESC", (char *)0);
(*( lrt_register_file_line("Action.c", 270),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=ACCOUNT_TYPE", (char *)0);
(*( lrt_register_file_line("Action.c", 271),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 272),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=ACCOUNT_TYPE_NAME", (char *)0);
(*( lrt_register_file_line("Action.c", 273),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 274),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 275),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 284),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 286),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 287),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 288),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 289),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 290),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 291),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 292),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 293),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 294),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 295),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 296),lrtfunc_tpcall ))("rfLsIdTypCode00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 305),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 307),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 308),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 309),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 310),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 311),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 312),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 313),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 314),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 315),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 316),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 317),lrtfunc_tpcall ))("rfLsState00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 326),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 328),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 329),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 330),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 331),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 332),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 333),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 334),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 335),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 336),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ID_TYPE_CD", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 337),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 338),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 339),lrtfunc_tpcall ))("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 348),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 350),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 351),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 352),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 353),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 354),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 355),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 356),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 357),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 358),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ID_TYPE_CD", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 359),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 360),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 361),lrtfunc_tpcall ))("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 370),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 372),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 373),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 374),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 375),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 376),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 377),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 378),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 379),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 380),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 381),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 382),lrtfunc_tpcall ))("rfGtNmTl00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 391),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 393),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 394),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 395),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 396),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 397),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 398),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 399),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 400),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 401),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 402),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 403),lrtfunc_tpcall ))("rfGtNmGener00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 412),lrtfunc_tpchkunsol ))();

(*( lrt_register_file_line("Action.c", 414),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 416),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 417),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 418),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 419),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 420),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 421),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 422),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 423),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 424),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 425),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 426),lrtfunc_tpcall ))("rfLsAdrStrSuf00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 435),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 437),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 438),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 439),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 440),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 441),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 442),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 443),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 444),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 445),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 446),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 447),lrtfunc_tpcall ))("rfLsAdrUntDes00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 457),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 459),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 460),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 461),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 462),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 463),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 464),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 465),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 466),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 467),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CODE1_ZIP", "value=98006", (char *)0);
(*( lrt_register_file_line("Action.c", 468),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 469),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 470),lrtfunc_tpcall ))("gnMtchZipAdr00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 480),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 482),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 483),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 484),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 485),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 486),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 487),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_HOUSE_NO", "value=1290", (char *)0);
(*( lrt_register_file_line("Action.c", 488),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_ST_DIRECTION", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 489),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_STREET_NAME", "value=38TH", (char *)0);
(*( lrt_register_file_line("Action.c", 490),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_CITY", "value=BELLEVUE", (char *)0);
(*( lrt_register_file_line("Action.c", 491),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_STATE_CODE", "value=WA", (char *)0);
(*( lrt_register_file_line("Action.c", 492),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_ZIP", "value=98006", (char *)0);
(*( lrt_register_file_line("Action.c", 493),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_ATTENTION", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 494),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 495),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_SECONDARY_LN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 496),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_PRIMARY_LN", "value=1290 38TH ", (char *)0);
(*( lrt_register_file_line("Action.c", 497),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 498),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_STREET_SUFFIX", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 499),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_TRAILING_DIR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 500),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_APT_DESIGNATOR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 501),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 502),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 503),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 504),lrtfunc_tpcall ))("gnMatchAdr00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 513),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 515),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 516),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 517),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 518),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 519),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 520),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_TYPE", "value=S", (char *)0);
(*( lrt_register_file_line("Action.c", 521),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=COUNTY_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 522),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 523),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_CITY", "value=BELLEVUE", (char *)0);
(*( lrt_register_file_line("Action.c", 524),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_STATE_CODE", "value=WA", (char *)0);
(*( lrt_register_file_line("Action.c", 525),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_ZIP", "value=98006", (char *)0);
(*( lrt_register_file_line("Action.c", 526),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 527),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_SECONDARY_LN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 528),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_PRIMARY_LN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 529),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 530),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_ZIP_4", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 531),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 532),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CITY_NAME", "value=BELLEVUE", (char *)0);
(*( lrt_register_file_line("Action.c", 533),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 534),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 535),lrtfunc_tpcall ))("gnGtGeoCd00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 544),lrtfunc_tpchkunsol ))();

(*( lrt_register_file_line("Action.c", 546),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 548),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 549),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 550),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 551),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 552),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 553),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_HOUSE_NO", "value=12920", (char *)0);
(*( lrt_register_file_line("Action.c", 554),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_ST_DIRECTION", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 555),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_STREET_NAME", "value=38TH", (char *)0);
(*( lrt_register_file_line("Action.c", 556),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_CITY", "value=BELLEVUE", (char *)0);
(*( lrt_register_file_line("Action.c", 557),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_STATE_CODE", "value=WA", (char *)0);
(*( lrt_register_file_line("Action.c", 558),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_ZIP", "value=98006", (char *)0);
(*( lrt_register_file_line("Action.c", 559),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_ATTENTION", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 560),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 561),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_SECONDARY_LN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 562),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_PRIMARY_LN", "value=12920 38TH ", (char *)0);
(*( lrt_register_file_line("Action.c", 563),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 564),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_STREET_SUFFIX", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 565),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_TRAILING_DIR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 566),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_APT_DESIGNATOR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 567),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 568),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 569),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 570),lrtfunc_tpcall ))("gnMatchAdr00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 579),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 581),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 582),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 583),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 584),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 585),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 586),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_TYPE", "value=S", (char *)0);
(*( lrt_register_file_line("Action.c", 587),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=COUNTY_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 588),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 589),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_CITY", "value=BELLEVUE", (char *)0);
(*( lrt_register_file_line("Action.c", 590),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_STATE_CODE", "value=WA", (char *)0);
(*( lrt_register_file_line("Action.c", 591),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_ZIP", "value=98006", (char *)0);
(*( lrt_register_file_line("Action.c", 592),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 593),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_SECONDARY_LN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 594),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_PRIMARY_LN", "value=12920 SE 38TH ST", (char *)0);
(*( lrt_register_file_line("Action.c", 595),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 596),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_ZIP_4", "value=1350", (char *)0);
(*( lrt_register_file_line("Action.c", 597),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 598),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CITY_NAME", "value=BELLEVUE", (char *)0);
(*( lrt_register_file_line("Action.c", 599),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=COUNTY_CODE", "value=033", (char *)0);
(*( lrt_register_file_line("Action.c", 600),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 601),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 602),lrtfunc_tpcall ))("gnGtGeoCd00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 612),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 614),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 615),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 616),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 617),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 618),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 619),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 620),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 621),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 622),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=DEALER", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 623),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 624),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 625),lrtfunc_tpcall ))("rfGtDlrPrfNam00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 634),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 636),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 637),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 638),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 639),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 640),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 641),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 642),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 643),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 644),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 645),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=dealer_profile", (char *)0);
(*( lrt_register_file_line("Action.c", 646),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=dealer", (char *)0);
(*( lrt_register_file_line("Action.c", 647),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 648),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=sales_channel", (char *)0);
(*( lrt_register_file_line("Action.c", 649),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 650),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 651),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 660),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 662),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 663),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 664),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 665),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 666),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 667),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 668),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 669),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 670),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 671),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=dealer_profile", (char *)0);
(*( lrt_register_file_line("Action.c", 672),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=dealer", (char *)0);
(*( lrt_register_file_line("Action.c", 673),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 674),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=master_dealer", (char *)0);
(*( lrt_register_file_line("Action.c", 675),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 676),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 677),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 686),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 688),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 689),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 690),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 691),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 692),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 693),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 694),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 695),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 696),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 697),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=store_info", (char *)0);
(*( lrt_register_file_line("Action.c", 698),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=store_cd", (char *)0);
(*( lrt_register_file_line("Action.c", 699),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=9999", (char *)0);
(*( lrt_register_file_line("Action.c", 700),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=store_name", (char *)0);
(*( lrt_register_file_line("Action.c", 701),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 702),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 703),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 713),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 715),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 716),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 717),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 718),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 719),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 720),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 721),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 722),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 723),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 724),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=dealer_profile", (char *)0);
(*( lrt_register_file_line("Action.c", 725),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=dealer", (char *)0);
(*( lrt_register_file_line("Action.c", 726),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 727),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=block_ncfp_ind", (char *)0);
(*( lrt_register_file_line("Action.c", 728),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 729),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 730),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 739),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 741),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 742),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 743),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 744),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 745),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 746),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 747),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 748),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 749),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 750),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 751),lrtfunc_tpcall ))("rfLsSic00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 760),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 762),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 763),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 764),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 765),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 766),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 767),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PYM_METHOD", "value=CC", (char *)0);
(*( lrt_register_file_line("Action.c", 768),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 769),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 770),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 771),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 772),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 773),lrtfunc_tpcall ))("rfLsPymSubMtd00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 782),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 784),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 785),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 786),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 787),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 788),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 789),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 790),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 791),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 792),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 793),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 794),lrtfunc_tpcall ))("rfLsCpniCd00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 803),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 805),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 806),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 807),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 808),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 809),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 810),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 811),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 812),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 813),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 814),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 815),lrtfunc_tpcall ))("rfLsBusEnt00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 824),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 826),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 827),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 828),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 829),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 830),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 831),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 832),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 833),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 834),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 835),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 836),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 837),lrtfunc_tpcall ))("rfLsIXC00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 846),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 848),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 849),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 850),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 851),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 852),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 853),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 854),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 855),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 856),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 857),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 858),lrtfunc_tpcall ))("rfLsStdSec00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 868),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 870),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 871),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CUSTOMER_SSN", "value={SSN}", (char *)0);
(*( lrt_register_file_line("Action.c", 872),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 873),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 874),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 875),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 876),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 877),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 878),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 879),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 880),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 881),lrtfunc_tpcall ))("arChkSsnTax00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 890),lrtfunc_tpchkunsol ))();

(*( lrt_register_file_line("Action.c", 892),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 894),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 895),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 896),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 897),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 898),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 899),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 900),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 901),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 902),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", (char *)0);
(*( lrt_register_file_line("Action.c", 903),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 904),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 905),lrtfunc_tpcall ))("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 914),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 916),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 917),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 918),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 919),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 920),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 921),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 922),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 923),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 924),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", (char *)0);
(*( lrt_register_file_line("Action.c", 925),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 926),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 927),lrtfunc_tpcall ))("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 936),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 938),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 939),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 940),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 941),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 942),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 943),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 944),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 945),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 946),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", (char *)0);
(*( lrt_register_file_line("Action.c", 947),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 948),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 949),lrtfunc_tpcall ))("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 959),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 961),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 962),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 963),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 964),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 965),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 966),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 967),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 968),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 969),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", (char *)0);
(*( lrt_register_file_line("Action.c", 970),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 971),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 972),lrtfunc_tpcall ))("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 981),lrtfunc_tpchkunsol ))();

(*( lrt_register_file_line("Action.c", 983),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 985),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 986),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 987),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 988),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 989),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=LOCATION_ID", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 990),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 991),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 992),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 993),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 994),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 995),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 996),lrtfunc_tpcall ))("rfGtRmsKy00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1005),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 1007),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1008),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1009),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1010),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1011),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1012),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1013),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1014),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1015),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", (char *)0);
(*( lrt_register_file_line("Action.c", 1016),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1017),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1018),lrtfunc_tpcall ))("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1027),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 1029),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1030),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1031),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1032),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1033),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1034),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1035),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1036),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1037),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", (char *)0);
(*( lrt_register_file_line("Action.c", 1038),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1039),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1040),lrtfunc_tpcall ))("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1049),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 1051),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1052),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1053),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1054),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1055),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1056),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1057),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1058),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1059),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COMP_ID", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 1060),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=LOCATION_CODE", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 1061),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1062),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1063),lrtfunc_tpcall ))("rfGtRmsCnt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1072),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 1074),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1075),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1076),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1077),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1078),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1079),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1080),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1081),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1082),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COMP_ID", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 1083),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1084),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1085),lrtfunc_tpcall ))("rfGtRmsCnt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1094),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 1096),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MSG_CODE", "value=665025", (char *)0);
(*( lrt_register_file_line("Action.c", 1097),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1098),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1099),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1100),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1101),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1102),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1103),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1104),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1105),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1106),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1107),lrtfunc_tpcall ))("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 1117),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 1119),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MSG_CODE", "value=9102118", (char *)0);
(*( lrt_register_file_line("Action.c", 1120),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1121),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1122),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1123),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1124),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1125),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1126),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1127),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1128),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1129),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1130),lrtfunc_tpcall ))("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 1140),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 1142),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1143),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1144),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1145),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1146),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1147),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1148),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1149),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1150),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COMP_ID", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 1151),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=LOCATION_CODE", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 1152),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1153),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1154),lrtfunc_tpcall ))("rfGtRmsCnt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1163),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 1165),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1166),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1167),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1168),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1169),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1170),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1171),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1172),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1173),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COMP_ID", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 1174),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1175),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1176),lrtfunc_tpcall ))("rfGtRmsCnt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 1186),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 1188),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1189),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1190),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CUSTOMER_SSN", "value={SSN}", (char *)0);
(*( lrt_register_file_line("Action.c", 1191),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TAX_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1192),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1193),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1194),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1195),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1196),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CONTACT_TELNO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1197),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=HOME_TELNO", "value=3445555555", (char *)0);
(*( lrt_register_file_line("Action.c", 1198),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BIRTH_DATE", "value=19660816", (char *)0);
(*( lrt_register_file_line("Action.c", 1199),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OTHER_TELNO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1200),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1201),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1202),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1203),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ID_NO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1204),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1205),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=EMP_TELNO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1206),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
(*( lrt_register_file_line("Action.c", 1207),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OLD_ACC_PASSWORD", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1208),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=NEW_ACC_PASSWORD", "value=4545555555555555555", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1209),lrtfunc_tpcall ))("arValAccPwd00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1218),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 1220),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1221),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1222),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1223),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1224),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1225),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1226),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1227),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1228),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CSA_PROCESS_CODE", "value=CSM1", (char *)0);
(*( lrt_register_file_line("Action.c", 1229),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1230),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1231),lrtfunc_tpcall ))("rfLsCsStsAct00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1240),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 1242),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BILL_CYCLE", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1243),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CYCLE_CLOSE_DAY", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1244),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CAS_TOTAL_APPROVE_CTN", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1245),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CS_APPROVED_CTN_QTY", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1246),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1247),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1248),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ROWCOUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 1249),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CUSTOMER_SSN", "value={SSN}", (char *)0);
(*( lrt_register_file_line("Action.c", 1250),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TAX_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1251),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SIC_CODE", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1252),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=NAME_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1253),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=LINK_SEQ_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1254),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PARAM_COUNT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1255),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PARAM_COUNT", "value=4", (char *)0);
(*( lrt_register_file_line("Action.c", 1256),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ROW_COUNT", "value=2", (char *)0);
(*( lrt_register_file_line("Action.c", 1257),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=LNKRECCUSTOMER_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1258),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=LNKRECBAN", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1259),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=FOREIGN_SEQ_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1260),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1261),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1262),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PREV_BAN", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1263),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=DISC_TRX_ID", "value=-1", (char *)0);
(*( lrt_register_file_line("Action.c", 1264),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=GUARANTOR_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1265),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1266),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 1267),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_TYPE", "value=S", (char *)0);
(*( lrt_register_file_line("Action.c", 1268),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CREDIT_CLASS", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 1269),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ACCOUNT_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 1270),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BL_ZERO_BALANC_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 1271),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=NAME_FORMAT", "value=P", (char *)0);
(*( lrt_register_file_line("Action.c", 1272),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_STATUS", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 1273),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_FIELDED_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 1274),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=LINK_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 1275),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=NM_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 1276),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 1277),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=NM_UP_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1278),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_UP_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1279),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BL_MABLE_IND", "value=G", (char *)0);
(*( lrt_register_file_line("Action.c", 1280),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PREVIOUS_BAN", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 1281),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BL_BILL_PROD_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 1282),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BL_BAL_HANDLE_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 1283),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CS_CCIR_PROD_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 1284),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CS_CREDIT_CLASS", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 1285),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BL_NO_MNSP_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 1286),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=AUTO_GEN_PYM_TYPE", "value=R", (char *)0);
(*( lrt_register_file_line("Action.c", 1287),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CS_BAN_TRX_OFF_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 1288),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CS_HANDLE_BY_CTN_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 1289),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CS_LOCK_MECHANISM", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 1290),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BL_OLP_IMPACT_IMM", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 1291),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_INCORP_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 1292),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ACCOUNT_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 1293),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CS_CORPORATION_TYPE", "value=R", (char *)0);
(*( lrt_register_file_line("Action.c", 1294),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CS_OPEN_CHANEL", "value=R", (char *)0);
(*( lrt_register_file_line("Action.c", 1295),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CONN_MODE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 1296),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MANUAL_GEO_CODE_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 1297),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=DETERMINATION_IND", "value=E", (char *)0);
(*( lrt_register_file_line("Action.c", 1298),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ARC_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 1299),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CSN_IND", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 1300),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN_TP", "value=S", (char *)0);
(*( lrt_register_file_line("Action.c", 1301),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TAID_MAN_OVRD_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 1302),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TAID_DETERMIN_IND", "value=E", (char *)0);
(*( lrt_register_file_line("Action.c", 1303),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PCI_INDICATOR", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 1304),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CAS_ORDER_NUMBER", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1305),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=AR_BALANCE", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1306),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADDRESS_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1307),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CAS_DEP_AMT_PER_CTN", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1308),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=HIERARCHY_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1309),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PARENT_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1310),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CRD_LIMIT_SPANC_AMT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1311),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CRD_LIMIT_SUSP_AMT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1312),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SIMO_DEPOSIT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1313),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=LOCATION_DESC", "value=3964 WILLIAM PENN HWY,MONROEVI", (char *)0);
(*( lrt_register_file_line("Action.c", 1314),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1315),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1316),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1317),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=FIRST_NAME", "value={FNAME}", (char *)0);
(*( lrt_register_file_line("Action.c", 1318),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MIDDLE_INITIAL", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 1319),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=NAME_SUFFIX", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1320),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_HOUSE_NO", "value=12920", (char *)0);
(*( lrt_register_file_line("Action.c", 1321),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_ST_DIRECTION", "value=SE", (char *)0);
(*( lrt_register_file_line("Action.c", 1322),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_STREET_NAME", "value=38TH", (char *)0);
(*( lrt_register_file_line("Action.c", 1323),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_CITY", "value=BELLEVUE", (char *)0);
(*( lrt_register_file_line("Action.c", 1324),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_STATE_CODE", "value=WA", (char *)0);
(*( lrt_register_file_line("Action.c", 1325),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_ZIP", "value=98006", (char *)0);
(*( lrt_register_file_line("Action.c", 1326),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_ZIP_GEO_CODE", "value=480330040", (char *)0);
(*( lrt_register_file_line("Action.c", 1327),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_POB", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1328),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_ATTENTION", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1329),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 1330),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BUSINESS_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1331),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CONTACT_FULL_NAME", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1332),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CONTACT_TELNO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1333),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CONTACT_TN_EXTNO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1334),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BUSINESS_ENTITY", "value=DEF", (char *)0);
(*( lrt_register_file_line("Action.c", 1335),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=WORK_TELNO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1336),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=WORK_TN_EXTNO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1337),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=HOME_TELNO", "value=3445555555", (char *)0);
(*( lrt_register_file_line("Action.c", 1338),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BIRTH_DATE", "value=19660816", (char *)0);
(*( lrt_register_file_line("Action.c", 1339),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=DRIVR_LICNS_NO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1340),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=DRIVR_LICNS_STATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1341),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=EMPLOYMENT_DT", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1342),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=EMPLYR_NAME", "value=WWW", (char *)0);
(*( lrt_register_file_line("Action.c", 1343),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BUSINESS_NAME", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1344),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=DRIVR_LICNS_EXP_DT", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1345),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=EMPLOYEE_POSITION", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1346),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BUSINESS_EST_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1347),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=GUR_CR_CARD_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1348),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=GUR_CR_CARD_NO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1349),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=GUR_CR_CARD_EXP_DT", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1350),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OTHER_TELNO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1351),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OTHER_EXTNO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1352),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OTHER_TN_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1353),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ACC_PASSWORD", "value=4545555555555555555", (char *)0);
(*( lrt_register_file_line("Action.c", 1354),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CREDIT_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1355),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CREDIT_STATUS", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1356),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CAS_APPLICATION_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1357),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CAS_EXPIRE_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1358),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1359),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BL_MEDIA_CATEGORY", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 1360),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_SECONDARY_LN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1361),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_PRIMARY_LN", "value=12920 SE 38TH ST", (char *)0);
(*( lrt_register_file_line("Action.c", 1362),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1363),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=LAST_BUSINESS_NAME", "value={LNAME}", (char *)0);
(*( lrt_register_file_line("Action.c", 1364),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=NAME_TITLE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1365),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADDITIONAL_TITLE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1366),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_ZIP_4", "value=1350", (char *)0);
(*( lrt_register_file_line("Action.c", 1367),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_CARRIER_CODE", "value=C019", (char *)0);
(*( lrt_register_file_line("Action.c", 1368),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_BARCODE_SUFFIX", "value=20", (char *)0);
(*( lrt_register_file_line("Action.c", 1369),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_STREET_SUFFIX", "value=ST", (char *)0);
(*( lrt_register_file_line("Action.c", 1370),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_TRAILING_DIR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1371),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_APT_DESIGNATOR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1372),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_APT_NM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1373),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_RR_HW_CNTR_NM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1374),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_RR_HW_BOX_NM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1375),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_COUNTRY", "value=USA", (char *)0);
(*( lrt_register_file_line("Action.c", 1376),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_COUNTY", "value=033", (char *)0);
(*( lrt_register_file_line("Action.c", 1377),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ACT_CODE", "value=TEN", (char *)0);
(*( lrt_register_file_line("Action.c", 1378),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ACT_CODE", "value=SPI", (char *)0);
(*( lrt_register_file_line("Action.c", 1379),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ACT_REASON", "value=CBNB", (char *)0);
(*( lrt_register_file_line("Action.c", 1380),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=USER_TEXT", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1381),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=USER_TEXT", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1382),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=P1", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1383),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=P1", "value=0 Balance-->N", (char *)0);
(*( lrt_register_file_line("Action.c", 1384),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=P2", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1385),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=P2", "value=, Bal. Handle-->Y", (char *)0);
(*( lrt_register_file_line("Action.c", 1386),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=P3", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1387),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=P3", "value=, Bill Prod.-->Y", (char *)0);
(*( lrt_register_file_line("Action.c", 1388),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=P4", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1389),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=P4", "value=, ARC Indicator-->Y", (char *)0);
(*( lrt_register_file_line("Action.c", 1390),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CS_DEF_IXC_CODE", "value=278", (char *)0);
(*( lrt_register_file_line("Action.c", 1391),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=LOCATION", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 1392),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=LINK_ROW_ID", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1393),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=NM_EXPIRE_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1394),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=NAME_ROW_ID", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1395),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_EXPIRE_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1396),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_ROW_ID", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1397),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BL_MAJOR_ACCOUNT_NO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1398),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1399),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CS_STUDY_SEC", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1400),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CS_BTN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1401),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CS_CPNI_CODE", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 1402),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=WSNADDR", "value={DPET_APP_WSN}", (char *)0);
(*( lrt_register_file_line("Action.c", 1403),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_TAX_CITY", "value=BELLEVUE", (char *)0);
(*( lrt_register_file_line("Action.c", 1404),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CH_ACTIVITY_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1405),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ID_NO", "value=2323233 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1406),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ID_STATE", "value=WA", (char *)0);
(*( lrt_register_file_line("Action.c", 1407),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ID_EXP_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1408),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=DUNS_NUMBER", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1409),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ID_TYPE", "value=ID", (char *)0);
(*( lrt_register_file_line("Action.c", 1410),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=DEALER_CD", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 1411),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CPNI_DESC", "value=Caller ID - Send WITH Name", (char *)0);
(*( lrt_register_file_line("Action.c", 1412),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CARRIER_NAME", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1413),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CARRIER_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1414),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=EMAIL", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1415),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=STORE_CD", "value=9999", (char *)0);
(*( lrt_register_file_line("Action.c", 1416),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1417),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
(*( lrt_register_file_line("Action.c", 1418),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BILL_METHOD", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1419),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PREPAID_MSISDN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1420),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ADR_TAX_AREA_ID", "value=480330040", (char *)0);
(*( lrt_register_file_line("Action.c", 1421),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=NT_ID", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 1422),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SOURCE_MSISDN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1423),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TAX_STATUS", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1424),lrtfunc_tpcall ))("arInCstBan00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

if((*( lrt_register_file_line("Action.c", 1433),lrtfunc_save32_fld_val ))((FBFR32*)data_2, "name=CUSTOMER_ID", 0, "BAN")<0)
lr_error_message("Failed to get BAN");

(*( lrt_register_file_line("Action.c", 1436),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 1438),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1439),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1440),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1441),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1442),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1443),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1444),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1445),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1446),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=GEN_TYPE", "value=ELIGIBLE_EDI_GSA_ACCOUNTS", (char *)0);
(*( lrt_register_file_line("Action.c", 1447),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=GEN_CODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 1448),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1449),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1450),lrtfunc_tpcall ))("rfGtGenCd00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1459),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 1461),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1462),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 1463),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1464),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1465),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1466),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1467),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 1468),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1469),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1470),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1471),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ACTIVITY_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1472),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1473),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1474),lrtfunc_tpcall ))("csLsEligDAT00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1483),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 1485),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1486),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BANID", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 1487),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1488),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1489),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1490),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1491),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=REQUESTDATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1492),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1493),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1494),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1495),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1496),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1497),lrtfunc_tpcall ))("csGtCstCrd00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1506),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 1508),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1509),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 1510),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1511),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1512),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1513),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1514),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1515),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1516),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1517),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1518),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1519),lrtfunc_tpcall ))("arGtCstBan00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

if((*( lrt_register_file_line("Action.c", 1528),lrtfunc_save32_fld_val ))((FBFR32*)data_2, "name=NAME_ID", 0,"NAME_ID")<0)
lr_error_message("Failed to get NAME_ID");

if((*( lrt_register_file_line("Action.c", 1531),lrtfunc_save32_fld_val ))((FBFR32*)data_2, "name=LINK_SEQ_NO", 0,"LINK_SEQ_NO")<0)
lr_error_message("Failed to get LINK_SEQ_NO");

 
if((*( lrt_register_file_line("Action.c", 1535),lrtfunc_save32_fld_val ))((FBFR32*)data_2, "name=ADDRESS_ID", 0,"ADDRESS_ID")<0)
lr_error_message("Failed to get ADDRESS_ID");

if((*( lrt_register_file_line("Action.c", 1538),lrtfunc_save32_fld_val ))((FBFR32*)data_2, "name=LAST_UPDATE_DATE", 0, "LAST_UPDATE_DATE_0")<0)
lr_error_message("Failed to get LAST_UPDATE_DATE_0");

if((*( lrt_register_file_line("Action.c", 1541),lrtfunc_save32_fld_val ))((FBFR32*)data_2, "name=LAST_UPDATE_STAMP", 0, "LAST_UPDATE_STAMP_0")<0)
lr_error_message("Failed to get LAST_UPDATE_STAMP_0");



(*( lrt_register_file_line("Action.c", 1546),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 1548),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1549),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1550),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1551),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1552),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 1553),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 1554),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1555),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1556),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1557),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1558),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1559),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1560),lrtfunc_tpcall ))("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1569),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 1571),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1572),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=BANID", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 1573),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1574),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1575),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1576),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1577),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=REQUESTDATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1578),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1579),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1580),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1581),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1582),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1583),lrtfunc_tpcall ))("csGtCstCrd00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1592),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 1594),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1595),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1596),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1597),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1598),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1599),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1600),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1601),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1602),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1603),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1604),lrtfunc_tpcall ))("rfLsPymTypMth00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 1614),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 1616),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1617),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 1618),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1619),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1620),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1621),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 1622),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=LINE_TP", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 1623),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1624),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SUBSCRIBER_NO", "value=NEW", (char *)0);
(*( lrt_register_file_line("Action.c", 1625),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1626),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1627),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACTIVITY_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1628),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1629),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACTIVITY_CODE", "value=NAC", (char *)0);
(*( lrt_register_file_line("Action.c", 1630),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=DEALER_CD", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 1631),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1632),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1633),lrtfunc_tpcall ))("csChkAllwAct00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1642),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 1644),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MSG_CODE", "value=9100699", (char *)0);
(*( lrt_register_file_line("Action.c", 1645),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1646),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1647),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1648),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1649),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1650),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1651),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1652),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1653),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1654),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1655),lrtfunc_tpcall ))("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


data_9 = (*( lrt_register_file_line("Action.c", 1665),lrtfunc_tpalloc ))("FML32", "", 100000);
(*( lrt_register_file_line("Action.c", 1666),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 1668),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1669),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1670),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1671),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1672),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 1673),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1674),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1675),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1676),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1677),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1678),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1679),lrtfunc_tpcall ))("rfGtRtLvlDsc00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1688),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 1690),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1691),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1692),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1693),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1694),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1695),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1696),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1697),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1698),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=GEN_TYPE", "value=LINE_DESIGNATION", (char *)0);
(*( lrt_register_file_line("Action.c", 1699),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1700),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1701),lrtfunc_tpcall ))("rfGtGenCd00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1710),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 1712),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1713),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1714),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1715),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1716),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1717),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1718),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1719),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1720),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=GEN_TYPE", "value=DVC_ACT_TYPE", (char *)0);
(*( lrt_register_file_line("Action.c", 1721),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1722),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1723),lrtfunc_tpcall ))("rfGtGenCd00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1732),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 1734),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1735),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 1736),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1737),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1738),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1739),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1740),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1741),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1742),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1743),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1744),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1745),lrtfunc_tpcall ))("arGtPrePym00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1754),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 1756),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1757),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1758),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1759),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1760),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1761),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1762),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1763),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1764),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1765),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1766),lrtfunc_tpcall ))("rfGtPapWrkSts00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1775),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 1777),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1778),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1779),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1780),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1781),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1782),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1783),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1784),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1785),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=GEN_TYPE", "value=SPANC", (char *)0);
(*( lrt_register_file_line("Action.c", 1786),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1787),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1788),lrtfunc_tpcall ))("rfGtGenCd00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1797),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 1799),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1800),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1801),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1802),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1803),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1804),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1805),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1806),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1807),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1808),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1809),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1810),lrtfunc_tpcall ))("rfLsIXC00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1819),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 1821),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_0}", (char *)0);
(*( lrt_register_file_line("Action.c", 1822),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1823),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 1824),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1825),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1826),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1827),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1828),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1829),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1830),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_0}", (char *)0);
(*( lrt_register_file_line("Action.c", 1831),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1832),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1833),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1834),lrtfunc_tpcall ))("blUpCycCd00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

if((*( lrt_register_file_line("Action.c", 1843),lrtfunc_save32_fld_val ))((FBFR32*)data_2, "name=LAST_UPDATE_DATE", 0, "LAST_UPDATE_DATE_1")<0)
lr_error_message("Failed to get LAST_UPDATE_DATE_1");

if((*( lrt_register_file_line("Action.c", 1846),lrtfunc_save32_fld_val ))((FBFR32*)data_2, "name=LAST_UPDATE_STAMP", 0, "LAST_UPDATE_STAMP_1")<0)
lr_error_message("Failed to get LAST_UPDATE_STAMP_1");

(*( lrt_register_file_line("Action.c", 1849),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 1851),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CYCLE_CODE", "value=7", (char *)0);
(*( lrt_register_file_line("Action.c", 1852),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1853),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1854),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1855),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1856),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1857),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1858),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1859),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1860),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1861),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1862),lrtfunc_tpcall ))("blGtCycle00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1871),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 1873),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1874),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 1875),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1876),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1877),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1878),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1879),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1880),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1881),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1882),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=dealer_type", (char *)0);
(*( lrt_register_file_line("Action.c", 1883),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=dlr_tp_cd", (char *)0);
(*( lrt_register_file_line("Action.c", 1884),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=CS", (char *)0);
(*( lrt_register_file_line("Action.c", 1885),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=commission_deduction_ind", (char *)0);
(*( lrt_register_file_line("Action.c", 1886),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1887),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1888),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1897),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 1899),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1900),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 1901),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1902),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1903),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUB_EXTERNAL_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1904),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CST_EXTERNAL_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1905),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN_EXTERNAL_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1906),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1907),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUB_STATUS", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 1908),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 1909),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1910),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 1911),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1912),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1913),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1914),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1915),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1916),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1917),lrtfunc_tpcall ))("arLsDefAgr00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1926),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 1928),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1929),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 1930),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1931),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1932),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUB_EXTERNAL_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1933),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CST_EXTERNAL_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1934),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN_EXTERNAL_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1935),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1936),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUB_STATUS", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 1937),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 1938),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1939),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 1940),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1941),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1942),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1943),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1944),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1945),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1946),lrtfunc_tpcall ))("arLsDefFtr00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1955),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 1957),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1958),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1959),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1960),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1961),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1962),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1963),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1964),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1965),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=DEALER_CD", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 1966),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1967),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1968),lrtfunc_tpcall ))("csChkNatDlr00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 1977),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 1979),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 1980),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 1981),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1982),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 1983),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 1984),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 1985),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 1986),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 1987),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 1988),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 1989),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=NAC", (char *)0);
(*( lrt_register_file_line("Action.c", 1990),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 1991),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 1992),lrtfunc_tpcall ))("csLsEligDAT00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2001),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2003),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DIRECTIVE", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2004),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2005),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ROWCOUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 2006),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2007),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2008),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2009),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2010),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 2011),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ELIGIBLE_DAT", "value=F", (char *)0);
(*( lrt_register_file_line("Action.c", 2012),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2013),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 2014),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 2015),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2016),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2017),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTCODE", "value=NAC", (char *)0);
(*( lrt_register_file_line("Action.c", 2018),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTREASON", "value=CA", (char *)0);
(*( lrt_register_file_line("Action.c", 2019),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PPCODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 2020),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2021),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2022),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2023),lrtfunc_tpcall ))("csGtOcAmt00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2032),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2034),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NULL_VALUE", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 2035),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2036),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2037),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2038),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2039),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2040),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2041),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2042),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2043),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SEC_CLASS_ARR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 2044),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CSA_ACTIVITY_CODE", "value=NAC", (char *)0);
(*( lrt_register_file_line("Action.c", 2045),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2046),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2047),lrtfunc_tpcall ))("rfLsCsStAcSec00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2056),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 2058),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2059),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2060),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2061),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2062),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2063),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2064),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2065),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2066),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=DEALER_CD", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 2067),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2068),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2069),lrtfunc_tpcall ))("csChkNatDlr00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2078),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2080),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2081),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2082),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2083),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2084),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2085),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2086),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 2087),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2088),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2089),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2090),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=NAC", (char *)0);
(*( lrt_register_file_line("Action.c", 2091),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2092),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2093),lrtfunc_tpcall ))("csLsEligDAT00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2102),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 2104),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2105),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2106),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2107),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2108),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 2109),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 2110),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2111),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2112),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2113),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2114),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2115),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2116),lrtfunc_tpcall ))("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2125),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2127),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2128),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2129),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2130),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2131),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2132),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2133),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2134),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2135),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2136),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2137),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2138),lrtfunc_tpcall ))("arLsBilPrm00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2147),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 2149),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2150),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2151),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2152),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2153),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 2154),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 2155),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2156),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2157),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2158),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2159),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2160),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2161),lrtfunc_tpcall ))("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2170),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 2172),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2173),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2174),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2175),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2176),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 2177),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 2178),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2179),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2180),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2181),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2182),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2183),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2184),lrtfunc_tpcall ))("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2193),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 2195),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2196),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2197),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2198),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2199),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2200),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2201),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2202),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2203),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2204),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2205),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2206),lrtfunc_tpcall ))("csSubStCnt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2215),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 2217),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2218),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2219),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2220),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2221),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2222),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2223),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2224),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2225),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2226),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAMNAME", "value=PAH", (char *)0);
(*( lrt_register_file_line("Action.c", 2227),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2228),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2229),lrtfunc_tpcall ))("csGtAddPrmBuf00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2238),lrtfunc_tpchkunsol ))();

(*( lrt_register_file_line("Action.c", 2240),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2242),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2243),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2244),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2245),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2246),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2247),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_HOUSE_NO", "value=12920", (char *)0);
(*( lrt_register_file_line("Action.c", 2248),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ST_DIRECTION", "value=SE", (char *)0);
(*( lrt_register_file_line("Action.c", 2249),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_STREET_NAME", "value=38TH", (char *)0);
(*( lrt_register_file_line("Action.c", 2250),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_CITY", "value=BELLEVUE", (char *)0);
(*( lrt_register_file_line("Action.c", 2251),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_STATE_CODE", "value=WA", (char *)0);
(*( lrt_register_file_line("Action.c", 2252),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ZIP", "value=98006", (char *)0);
(*( lrt_register_file_line("Action.c", 2253),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ATTENTION", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 2254),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2255),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_SECONDARY_LN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 2256),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_PRIMARY_LN", "value=12920 SE 38TH ST ", (char *)0);
(*( lrt_register_file_line("Action.c", 2257),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2258),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_STREET_SUFFIX", "value=ST", (char *)0);
(*( lrt_register_file_line("Action.c", 2259),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_TRAILING_DIR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 2260),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_APT_DESIGNATOR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 2261),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2262),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2263),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2264),lrtfunc_tpcall ))("gnMatchAdr00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2273),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2275),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2276),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2277),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2278),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2279),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2280),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_TYPE", "value=S", (char *)0);
(*( lrt_register_file_line("Action.c", 2281),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=COUNTY_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 2282),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2283),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 2284),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_CITY", "value=BELLEVUE", (char *)0);
(*( lrt_register_file_line("Action.c", 2285),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_STATE_CODE", "value=WA", (char *)0);
(*( lrt_register_file_line("Action.c", 2286),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ZIP", "value=98006", (char *)0);
(*( lrt_register_file_line("Action.c", 2287),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2288),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_SECONDARY_LN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 2289),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_PRIMARY_LN", "value=12920 SE 38TH ST", (char *)0);
(*( lrt_register_file_line("Action.c", 2290),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2291),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ZIP_4", "value=1350", (char *)0);
(*( lrt_register_file_line("Action.c", 2292),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2293),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CITY_NAME", "value=BELLEVUE", (char *)0);
(*( lrt_register_file_line("Action.c", 2294),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=COUNTY_CODE", "value=033", (char *)0);
(*( lrt_register_file_line("Action.c", 2295),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2296),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2297),lrtfunc_tpcall ))("gnGtGeoCd00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 2307),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2309),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2310),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2311),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2312),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2313),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2314),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2315),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2316),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2317),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ZIP_CODE", "value=98006", (char *)0);
(*( lrt_register_file_line("Action.c", 2318),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2319),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2320),lrtfunc_tpcall ))("csGtNgp00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 2330),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 2332),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2333),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 2334),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2335),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2336),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2337),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2338),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2339),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2340),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2341),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=rms_location", (char *)0);
(*( lrt_register_file_line("Action.c", 2342),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=rms_location_id", (char *)0);
(*( lrt_register_file_line("Action.c", 2343),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 2344),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=location_desc", (char *)0);
(*( lrt_register_file_line("Action.c", 2345),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2346),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2347),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 2357),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 2359),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2360),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 2361),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2362),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2363),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2364),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2365),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2366),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2367),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2368),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=number_group", (char *)0);
(*( lrt_register_file_line("Action.c", 2369),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=ngp_id", (char *)0);
(*( lrt_register_file_line("Action.c", 2370),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=BLV", (char *)0);
(*( lrt_register_file_line("Action.c", 2371),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=ngp_dsc", (char *)0);
(*( lrt_register_file_line("Action.c", 2372),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2373),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2374),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2383),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2385),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2386),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2387),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2388),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2389),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2390),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NGP", "value=BLV", (char *)0);
(*( lrt_register_file_line("Action.c", 2391),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2392),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2393),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2394),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NPA", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 2395),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NXX", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 2396),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2397),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2398),lrtfunc_tpcall ))("csGtSubMkt00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2407),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 2409),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2410),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 2411),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2412),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2413),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2414),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2415),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2416),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2417),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2418),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=dealer_profile", (char *)0);
(*( lrt_register_file_line("Action.c", 2419),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=dealer", (char *)0);
(*( lrt_register_file_line("Action.c", 2420),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 2421),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=nl_cd", (char *)0);
(*( lrt_register_file_line("Action.c", 2422),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2423),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2424),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2433),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 2435),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2436),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2437),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2438),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2439),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2440),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2441),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2442),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2443),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CSA_ACTIVITY_CODE", "value=RES", (char *)0);
(*( lrt_register_file_line("Action.c", 2444),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CSA_PROCESS_CODE", "value=CSM2", (char *)0);
(*( lrt_register_file_line("Action.c", 2445),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2446),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2447),lrtfunc_tpcall ))("rfLsCsStsAct00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2456),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2458),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_1}", (char *)0);
(*( lrt_register_file_line("Action.c", 2459),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DIRECTIVE", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2460),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2461),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CUSTOMER_ID", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2462),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CUSTOMER_BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2463),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 2464),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2465),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2466),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2467),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 2468),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MEMO_SOURCE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 2469),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MEMO_PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 2470),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=GET_MODE", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 2471),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LINE_TP", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 2472),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2473),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2474),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NL", "value=GNRL", (char *)0);
(*( lrt_register_file_line("Action.c", 2475),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NGP", "value=BLV", (char *)0);
(*( lrt_register_file_line("Action.c", 2476),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2477),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2478),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_CODE", "value=RES", (char *)0);
(*( lrt_register_file_line("Action.c", 2479),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_REASON", "value=NR", (char *)0);
(*( lrt_register_file_line("Action.c", 2480),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MEMO_CTN", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2481),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=P1", "value=08/17/2017", (char *)0);
(*( lrt_register_file_line("Action.c", 2482),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_1}", (char *)0);
(*( lrt_register_file_line("Action.c", 2483),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2484),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NPA", "value={NPA}", (char *)0);
(*( lrt_register_file_line("Action.c", 2485),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NXX", "value={NXX}", (char *)0);
(*( lrt_register_file_line("Action.c", 2486),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PORT_IND", "value=RE", (char *)0);
(*( lrt_register_file_line("Action.c", 2487),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2488),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2489),lrtfunc_tpcall ))("csAutoRsv00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

if((*( lrt_register_file_line("Action.c", 2498),lrtfunc_save32_fld_val ))((FBFR32*)data_2, "name=LAST_UPDATE_DATE", 0, "LAST_UPDATE_DATE_2")<0)
lr_error_message("Failed to get LAST_UPDATE_DATE_2");

if((*( lrt_register_file_line("Action.c", 2501),lrtfunc_save32_fld_val ))((FBFR32*)data_2, "name=LAST_UPDATE_STAMP", 0, "LAST_UPDATE_STAMP_2")<0)
lr_error_message("Failed to get LAST_UPDATE_STAMP_2");

(*( lrt_register_file_line("Action.c", 2504),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2506),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2507),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2508),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2509),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2510),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2511),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_TYPE", "value=S", (char *)0);
(*( lrt_register_file_line("Action.c", 2512),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=COUNTY_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 2513),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MANUAL_GEO_CODE_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 2514),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2515),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2516),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_CITY", "value=BELLEVUE", (char *)0);
(*( lrt_register_file_line("Action.c", 2517),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_STATE_CODE", "value=WA", (char *)0);
(*( lrt_register_file_line("Action.c", 2518),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ZIP", "value=98006", (char *)0);
(*( lrt_register_file_line("Action.c", 2519),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2520),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_SECONDARY_LN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 2521),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_PRIMARY_LN", "value=12920 SE 38TH ST", (char *)0);
(*( lrt_register_file_line("Action.c", 2522),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2523),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ZIP_4", "value=1350", (char *)0);
(*( lrt_register_file_line("Action.c", 2524),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2525),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ZIP_CODE", "value=98006", (char *)0);
(*( lrt_register_file_line("Action.c", 2526),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CITY_NAME", "value=BELLEVUE", (char *)0);
(*( lrt_register_file_line("Action.c", 2527),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ZIP4_CODE", "value=1350", (char *)0);
(*( lrt_register_file_line("Action.c", 2528),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=COUNTY_CODE", "value=033", (char *)0);
(*( lrt_register_file_line("Action.c", 2529),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2530),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2531),lrtfunc_tpcall ))("gnGtGeoCd00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2540),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 2542),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2543),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2544),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2545),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2546),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2547),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2548),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2549),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2550),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NPA", "value=207", (char *)0);
(*( lrt_register_file_line("Action.c", 2551),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NXX", "value=214", (char *)0);
(*( lrt_register_file_line("Action.c", 2552),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=LR", "value={LR}", (char *)0);
(*( lrt_register_file_line("Action.c", 2553),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TODAY", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 2554),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2555),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2556),lrtfunc_tpcall ))("rfGtSubMktCd00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 2566),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 2568),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2569),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2570),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2571),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2572),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2573),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2574),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2575),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2576),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=DEALER_CD", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 2577),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2578),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2579),lrtfunc_tpcall ))("csChkNatDlr00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2588),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2590),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2591),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ROW_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 2592),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PAGE_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2593),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2594),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2595),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2596),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 2597),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACCOUNT_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 2598),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACCOUNT_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 2599),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=POOLING_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 2600),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_MATCH_IND", "value=R", (char *)0);
(*( lrt_register_file_line("Action.c", 2601),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SALE_CHANNEL_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 2602),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LINE_TP", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 2603),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2604),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2605),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2606),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2607),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2608),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUB_MARKET", "value=SEW", (char *)0);
(*( lrt_register_file_line("Action.c", 2609),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 2610),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_SALE_CHANNEL", "value=\'\'", (char *)0);
(*( lrt_register_file_line("Action.c", 2611),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2612),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2613),lrtfunc_tpcall ))("rfLsAvlPps00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2622),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 2624),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2625),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2626),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2627),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2628),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2629),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2630),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2631),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2632),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUNDATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2633),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2634),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2635),lrtfunc_tpcall ))("rfGtRjeOpSocs00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2644),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2646),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2647),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PAGE_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2648),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PAGE_SIZE", "value=600", (char *)0);
(*( lrt_register_file_line("Action.c", 2649),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2650),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2651),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2652),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2653),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2654),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2655),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2656),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUNDATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2657),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2658),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SECGROUP", "value=E", (char *)0);
(*( lrt_register_file_line("Action.c", 2659),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2660),lrtfunc_tpcall ))("rfLsSecPps00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2669),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2671),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2672),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2673),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2674),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2675),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2676),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2677),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2678),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2679),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2680),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2681),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2682),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2683),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2684),lrtfunc_tpcall ))("csGtMaxRc00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2693),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2695),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2696),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2697),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2698),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2699),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2700),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2701),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2702),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2703),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2704),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2705),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2706),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2707),lrtfunc_tpcall ))("csValNonRj1100",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2716),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2718),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2719),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2720),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2721),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2722),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 2723),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=M", (char *)0);
(*( lrt_register_file_line("Action.c", 2724),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2725),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2726),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2727),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2728),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2729),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_LST", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 2730),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_CODE", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 2731),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2732),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2733),lrtfunc_tpcall ))("rfGtPromSoc00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2742),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2744),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2745),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2746),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2747),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2748),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 2749),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 2750),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2751),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2752),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2753),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2754),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2755),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_LST", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 2756),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_CODE", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 2757),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2758),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2759),lrtfunc_tpcall ))("rfGtPromSoc00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2768),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2770),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2771),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2772),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2773),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2774),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 2775),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2776),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2777),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 2778),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2779),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2780),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2781),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 2782),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2783),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2784),lrtfunc_tpcall ))("rfLsOptSocs00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2793),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2795),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2796),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2797),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2798),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2799),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2800),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2801),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2802),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2803),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2804),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2805),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2806),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2807),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2808),lrtfunc_tpcall ))("csGtMaxRc00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2817),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2819),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2820),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2821),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2822),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2823),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2824),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2825),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2826),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2827),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2828),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2829),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2830),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2831),lrtfunc_tpcall ))("csValNonRj1100",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2840),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2842),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2843),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2844),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2845),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2846),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2847),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2848),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 2849),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2850),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2851),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2852),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=NAC", (char *)0);
(*( lrt_register_file_line("Action.c", 2853),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2854),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2855),lrtfunc_tpcall ))("csLsElgPlanTp00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2864),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 2866),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2867),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2868),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2869),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2870),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 2871),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 2872),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2873),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2874),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2875),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2876),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2877),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2878),lrtfunc_tpcall ))("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2887),lrtfunc_tpchkunsol ))();

(*( lrt_register_file_line("Action.c", 2889),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2891),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2892),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2893),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2894),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2895),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2896),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2897),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 2898),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 2899),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2900),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2901),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2902),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2903),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2904),lrtfunc_tpcall ))("csValNonRj1100",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2913),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 2915),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2916),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ROWCOUNT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2917),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PAGE_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2918),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PAGE_SIZE", "value=600", (char *)0);
(*( lrt_register_file_line("Action.c", 2919),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2920),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2921),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2922),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 2923),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 2924),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2925),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2926),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2927),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2928),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2929),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2930),lrtfunc_tpcall ))("rfLsSocAcc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2939),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 2941),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2942),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ROWCOUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 2943),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PAGE_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2944),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PAGE_SIZE", "value=600", (char *)0);
(*( lrt_register_file_line("Action.c", 2945),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2946),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2947),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2948),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2949),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 2950),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2951),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2952),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2953),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2954),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2955),lrtfunc_tpcall ))("rfLsSocAcc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2964),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 2966),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2967),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2968),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2969),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2970),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2971),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2972),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2973),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2974),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXTERNAL_SOC", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 2975),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 2976),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 2977),lrtfunc_tpcall ))("csGtSwPrm00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 2986),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 2988),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 2989),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2990),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 2991),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 2992),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 2993),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2994),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 2995),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 2996),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 2997),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 2998),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 2999),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3000),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3001),lrtfunc_tpcall ))("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3010),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3012),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3013),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3014),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3015),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3016),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3017),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3018),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3019),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3020),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CA_ACTIVITY_CODE", "value=OTC", (char *)0);
(*( lrt_register_file_line("Action.c", 3021),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3022),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3023),lrtfunc_tpcall ))("rfGtActCharge00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3032),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 3034),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3035),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3036),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3037),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3038),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3039),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3040),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3041),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3042),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXTERNAL_SOC", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 3043),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3044),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3045),lrtfunc_tpcall ))("csGtSwPrm00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3054),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3056),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3057),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3058),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3059),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3060),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3061),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3062),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=INTDAT2MI", (char *)0);
(*( lrt_register_file_line("Action.c", 3063),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3064),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3065),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3066),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 3067),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3068),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3069),lrtfunc_tpcall ))("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3078),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3080),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3081),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3082),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3083),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3084),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3085),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3086),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=INTSMSMI", (char *)0);
(*( lrt_register_file_line("Action.c", 3087),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3088),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3089),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3090),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 3091),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3092),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3093),lrtfunc_tpcall ))("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3102),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3104),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3105),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3106),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3107),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3108),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3109),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3110),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=ITSMSNCMI", (char *)0);
(*( lrt_register_file_line("Action.c", 3111),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3112),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3113),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3114),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 3115),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3116),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3117),lrtfunc_tpcall ))("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3126),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3128),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3129),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3130),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3131),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3132),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3133),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3134),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=MBBCDONLY", (char *)0);
(*( lrt_register_file_line("Action.c", 3135),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3136),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3137),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3138),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 3139),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3140),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3141),lrtfunc_tpcall ))("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3150),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 3152),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3153),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3154),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3155),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3156),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3157),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3158),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3159),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3160),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXTERNAL_SOC", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 3161),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3162),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3163),lrtfunc_tpcall ))("csGtSwPrm00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3172),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3174),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3175),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3176),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3177),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3178),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3179),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3180),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=MBBEPCDAT", (char *)0);
(*( lrt_register_file_line("Action.c", 3181),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3182),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3183),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3184),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 3185),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3186),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3187),lrtfunc_tpcall ))("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3196),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3198),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3199),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3200),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3201),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3202),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3203),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3204),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=SYNCUBO", (char *)0);
(*( lrt_register_file_line("Action.c", 3205),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3206),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3207),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3208),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 3209),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3210),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3211),lrtfunc_tpcall ))("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3220),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 3222),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3223),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3224),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3225),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3226),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3227),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3228),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3229),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3230),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXTERNAL_SOC", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 3231),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3232),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3233),lrtfunc_tpcall ))("csGtSwPrm00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3242),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3244),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3245),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3246),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3247),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3248),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3249),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3250),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=SYNTELO", (char *)0);
(*( lrt_register_file_line("Action.c", 3251),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3252),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3253),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3254),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 3255),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3256),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3257),lrtfunc_tpcall ))("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3266),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3268),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3269),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3270),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3271),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3272),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3273),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3274),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=UNLMSGSB", (char *)0);
(*( lrt_register_file_line("Action.c", 3275),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3276),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3277),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3278),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 3279),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3280),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3281),lrtfunc_tpcall ))("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3290),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3292),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3293),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3294),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3295),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3296),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3297),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3298),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=USROAMMBB", (char *)0);
(*( lrt_register_file_line("Action.c", 3299),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3300),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3301),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3302),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 3303),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3304),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3305),lrtfunc_tpcall ))("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3314),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3316),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3317),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3318),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3319),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3320),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3321),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3322),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=WELSMSMBB", (char *)0);
(*( lrt_register_file_line("Action.c", 3323),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3324),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3325),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3326),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NOT_INCLD_FTR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 3327),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3328),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3329),lrtfunc_tpcall ))("rfLsSocFtrs00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3338),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3340),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3341),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ROWCOUNT", "value=11", (char *)0);
(*( lrt_register_file_line("Action.c", 3342),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3343),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3344),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PRELATEDSOCROWCOUNT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3345),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PSOCELIINROWCOUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 3346),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3347),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=REL_TYPE", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 3348),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3349),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3350),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 3351),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=INTDAT2MI", (char *)0);
(*( lrt_register_file_line("Action.c", 3352),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=INTSMSMI", (char *)0);
(*( lrt_register_file_line("Action.c", 3353),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=ITSMSNCMI", (char *)0);
(*( lrt_register_file_line("Action.c", 3354),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=MBBCDONLY", (char *)0);
(*( lrt_register_file_line("Action.c", 3355),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=MBBEPCDAT", (char *)0);
(*( lrt_register_file_line("Action.c", 3356),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=SYNCUBO", (char *)0);
(*( lrt_register_file_line("Action.c", 3357),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=SYNTELO", (char *)0);
(*( lrt_register_file_line("Action.c", 3358),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=UNLMSGSB", (char *)0);
(*( lrt_register_file_line("Action.c", 3359),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=USROAMMBB", (char *)0);
(*( lrt_register_file_line("Action.c", 3360),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=WELSMSMBB", (char *)0);
(*( lrt_register_file_line("Action.c", 3361),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3362),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3363),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3364),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3365),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3366),lrtfunc_tpcall ))("rfLsSocEli00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3375),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3377),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3378),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3379),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3380),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3381),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3382),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3383),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3384),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3385),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=GEN_TYPE", "value=NS_EIP_RATE_PLANS", (char *)0);
(*( lrt_register_file_line("Action.c", 3386),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=GEN_CODE", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 3387),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3388),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3389),lrtfunc_tpcall ))("rfGtGenCd00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3398),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 3400),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3401),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 3402),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3403),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3404),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3405),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3406),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 3407),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3408),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3409),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3410),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=NAC", (char *)0);
(*( lrt_register_file_line("Action.c", 3411),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRICE_PLAN", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 3412),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3413),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3414),lrtfunc_tpcall ))("csLsElgPlanTp00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3423),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3425),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3426),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ROW_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 3427),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3428),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3429),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3430),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3431),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3432),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 3433),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3434),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3435),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3436),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3437),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3438),lrtfunc_tpcall ))("rfLsSocDtls00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3447),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3449),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3450),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3451),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3452),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3453),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3454),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3455),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3456),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3457),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=DEALER_CD", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 3458),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3459),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3460),lrtfunc_tpcall ))("csChkNatDlr00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3469),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3471),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3472),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ROW_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 3473),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3474),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3475),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3476),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3477),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3478),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 3479),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3480),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3481),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3482),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3483),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3484),lrtfunc_tpcall ))("rfLsSocDtls00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3493),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3495),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3496),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 3497),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3498),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3499),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3500),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3501),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3502),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3503),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3504),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=DEALER_PROFILE", (char *)0);
(*( lrt_register_file_line("Action.c", 3505),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=DEALER", (char *)0);
(*( lrt_register_file_line("Action.c", 3506),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 3507),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=MASTER_DEALER", (char *)0);
(*( lrt_register_file_line("Action.c", 3508),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3509),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3510),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3519),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3521),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3522),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3523),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3524),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3525),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3526),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3527),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3528),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3529),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3530),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
(*( lrt_register_file_line("Action.c", 3531),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MASTER_DEALER_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 3532),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PRICE_PLAN_TP", "value=NEO", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3533),lrtfunc_tpcall ))("rfLsDvcActTp00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3542),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 3544),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3545),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 3546),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3547),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3548),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3549),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3550),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 3551),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3552),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3553),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3554),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=NAC", (char *)0);
(*( lrt_register_file_line("Action.c", 3555),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3556),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3557),lrtfunc_tpcall ))("csLsEligDAT00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3566),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 3568),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3569),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 3570),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3571),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3572),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3573),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3574),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 3575),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3576),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3577),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3578),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=NAC", (char *)0);
(*( lrt_register_file_line("Action.c", 3579),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3580),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3581),lrtfunc_tpcall ))("csLsEligDAT00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3590),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3592),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MSG_CODE", "value=9101915", (char *)0);
(*( lrt_register_file_line("Action.c", 3593),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3594),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3595),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3596),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3597),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3598),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3599),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3600),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3601),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3602),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3603),lrtfunc_tpcall ))("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3612),lrtfunc_tpchkunsol ))();

(*( lrt_register_file_line("Action.c", 3614),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3616),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3617),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3618),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3619),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3620),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3621),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3622),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3623),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3624),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_APPL_ID", "value=RMS", (char *)0);
(*( lrt_register_file_line("Action.c", 3625),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3626),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3627),lrtfunc_tpcall ))("rfLsPrmVal00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3636),lrtfunc_tpchkunsol ))();

(*( lrt_register_file_line("Action.c", 3638),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 3640),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3641),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3642),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3643),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EQU_TYPE", "value=S", (char *)0);
(*( lrt_register_file_line("Action.c", 3644),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3645),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERIAL_NUMBER", "value={SIM}", (char *)0);
(*( lrt_register_file_line("Action.c", 3646),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3647),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3648),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3649),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3650),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3651),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3652),lrtfunc_tpcall ))("icGtSit00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3661),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3663),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3664),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3665),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3666),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3667),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3668),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3669),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3670),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3671),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=GEN_TYPE", "value=SIM TYPE", (char *)0);
(*( lrt_register_file_line("Action.c", 3672),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=GEN_CODE", "value=UC", (char *)0);
(*( lrt_register_file_line("Action.c", 3673),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3674),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3675),lrtfunc_tpcall ))("rfGtGenCd00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 3685),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 3687),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3688),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3689),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3690),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EQU_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 3691),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3692),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERIAL_NUMBER", "value=111111111111111", (char *)0);
(*( lrt_register_file_line("Action.c", 3693),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3694),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3695),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3696),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3697),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3698),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3699),lrtfunc_tpcall ))("icGtSit00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3708),lrtfunc_tpchkunsol ))();

(*( lrt_register_file_line("Action.c", 3710),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3712),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3713),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3714),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3715),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3716),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 3717),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 3718),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3719),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3720),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3721),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3722),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3723),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3724),lrtfunc_tpcall ))("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3733),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3735),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3736),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 3737),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3738),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3739),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3740),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3741),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3742),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3743),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3744),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3745),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3746),lrtfunc_tpcall ))("csSubStCnt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3755),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3757),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3758),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 3759),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3760),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3761),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3762),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3763),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3764),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3765),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3766),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAMNAME", "value=PAH", (char *)0);
(*( lrt_register_file_line("Action.c", 3767),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3768),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3769),lrtfunc_tpcall ))("csGtAddPrmBuf00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 3779),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3781),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3782),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3783),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3784),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3785),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3786),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3787),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3788),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3789),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=DEALER_CD", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 3790),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3791),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3792),lrtfunc_tpcall ))("csChkNatDlr00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3801),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 3803),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3804),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 3805),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3806),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3807),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3808),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3809),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3810),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3811),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3812),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3813),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3814),lrtfunc_tpcall ))("csSubStCnt00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3823),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3825),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3826),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3827),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3828),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3829),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 3830),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 3831),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3832),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3833),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3834),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3835),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3836),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3837),lrtfunc_tpcall ))("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3846),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 3848),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3849),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 3850),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3851),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3852),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3853),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3854),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3855),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3856),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3857),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3858),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3859),lrtfunc_tpcall ))("csGtEtfTp00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3868),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3870),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MSG_CODE", "value=7140083", (char *)0);
(*( lrt_register_file_line("Action.c", 3871),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3872),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3873),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3874),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3875),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3876),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3877),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3878),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3879),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3880),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3881),lrtfunc_tpcall ))("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 3891),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3893),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3894),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3895),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3896),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3897),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3898),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3899),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3900),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3901),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COMP_ID", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 3902),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=LOCATION_CODE", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 3903),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3904),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3905),lrtfunc_tpcall ))("rfGtRmsCnt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3914),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3916),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3917),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3918),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3919),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3920),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3921),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3922),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3923),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3924),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COMP_ID", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 3925),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3926),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3927),lrtfunc_tpcall ))("rfGtRmsCnt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3936),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3938),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MSG_CODE", "value=665026", (char *)0);
(*( lrt_register_file_line("Action.c", 3939),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3940),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3941),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3942),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3943),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3944),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3945),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3946),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3947),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3948),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3949),lrtfunc_tpcall ))("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3958),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3960),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3961),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3962),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3963),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3964),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3965),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3966),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3967),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3968),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=GEN_TYPE", "value=OVERRIDE_DEPOSIT_ZEOS_PP", (char *)0);
(*( lrt_register_file_line("Action.c", 3969),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3970),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3971),lrtfunc_tpcall ))("rfGtGenCd00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 3980),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 3982),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 3983),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3984),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 3985),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 3986),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 3987),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 3988),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 3989),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 3990),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=GEN_TYPE", "value=NS_EIP_RATE_PLANS", (char *)0);
(*( lrt_register_file_line("Action.c", 3991),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 3992),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 3993),lrtfunc_tpcall ))("rfGtGenCd00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4002),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 4004),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4005),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4006),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4007),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4008),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4009),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4010),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4011),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4012),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ZIP_CODE", "value=98006", (char *)0);
(*( lrt_register_file_line("Action.c", 4013),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SUB_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4014),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4015),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4016),lrtfunc_tpcall ))("csChkSubZip00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4025),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 4027),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MSG_CODE", "value=70208", (char *)0);
(*( lrt_register_file_line("Action.c", 4028),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4029),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4030),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4031),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4032),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4033),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4034),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4035),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4036),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4037),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4038),lrtfunc_tpcall ))("rfGtOlnMsgRec00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 4048),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 4050),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4051),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4052),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4053),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4054),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4055),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4056),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4057),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4058),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NPA", "value={NPA}", (char *)0);
(*( lrt_register_file_line("Action.c", 4059),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NXX", "value={NXX}", (char *)0);
(*( lrt_register_file_line("Action.c", 4060),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=LR", "value={LR}", (char *)0);
(*( lrt_register_file_line("Action.c", 4061),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TODAY", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 4062),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4063),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4064),lrtfunc_tpcall ))("rfGtSubMktCd00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4073),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 4075),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4076),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 4077),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4078),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4079),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4080),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4081),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4082),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4083),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4084),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=SPECIAL_SOC_IND", (char *)0);
(*( lrt_register_file_line("Action.c", 4085),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=SOC_IND", (char *)0);
(*( lrt_register_file_line("Action.c", 4086),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=DSP", (char *)0);
(*( lrt_register_file_line("Action.c", 4087),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=CONTRACT_IND", (char *)0);
(*( lrt_register_file_line("Action.c", 4088),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4089),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4090),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4099),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 4101),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4102),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 4103),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4104),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4105),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4106),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4107),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4108),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4109),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4110),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=SPECIAL_SOC_IND", (char *)0);
(*( lrt_register_file_line("Action.c", 4111),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=SOC_IND", (char *)0);
(*( lrt_register_file_line("Action.c", 4112),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=DSP", (char *)0);
(*( lrt_register_file_line("Action.c", 4113),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=DEVICE_SOC_IND", (char *)0);
(*( lrt_register_file_line("Action.c", 4114),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4115),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4116),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4125),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 4127),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_2}", (char *)0);
(*( lrt_register_file_line("Action.c", 4128),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4129),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ROWCOUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 4130),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4131),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=10001", (char *)0);
(*( lrt_register_file_line("Action.c", 4132),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4133),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4134),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4135),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4136),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4137),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=P", (char *)0);
(*( lrt_register_file_line("Action.c", 4138),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4139),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4140),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEPLOY_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 4141),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACC_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4142),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACC_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 4143),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUB_VAL_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 4144),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN_LEVEL_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 4145),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4146),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4147),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 4148),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4149),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4150),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_2}", (char *)0);
(*( lrt_register_file_line("Action.c", 4151),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTCODE", "value=ADS", (char *)0);
(*( lrt_register_file_line("Action.c", 4152),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4153),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EFF_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4154),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXP_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 4155),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4156),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4157),lrtfunc_tpcall ))("csChkSocElg00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4166),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 4168),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4169),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4170),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4171),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4172),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4173),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4174),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4175),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4176),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4177),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4178),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4179),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4180),lrtfunc_tpcall ))("csGtSubInv00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4189),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 4191),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4192),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ROW_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 4193),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4194),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4195),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4196),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4197),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 4198),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4199),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4200),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4201),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4202),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4203),lrtfunc_tpcall ))("rfLsSOCCat00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4212),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 4214),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4215),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ROW_COUNT", "value=10", (char *)0);
(*( lrt_register_file_line("Action.c", 4216),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4217),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4218),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4219),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4220),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=MBBCDONLY", (char *)0);
(*( lrt_register_file_line("Action.c", 4221),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=MBBEPCDAT", (char *)0);
(*( lrt_register_file_line("Action.c", 4222),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=SYNCUBO", (char *)0);
(*( lrt_register_file_line("Action.c", 4223),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=SYNTELO", (char *)0);
(*( lrt_register_file_line("Action.c", 4224),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=UNLMSGSB", (char *)0);
(*( lrt_register_file_line("Action.c", 4225),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=USROAMMBB", (char *)0);
(*( lrt_register_file_line("Action.c", 4226),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=WELSMSMBB", (char *)0);
(*( lrt_register_file_line("Action.c", 4227),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=INTDAT2MI", (char *)0);
(*( lrt_register_file_line("Action.c", 4228),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=INTSMSMI", (char *)0);
(*( lrt_register_file_line("Action.c", 4229),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=ITSMSNCMI", (char *)0);
(*( lrt_register_file_line("Action.c", 4230),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4231),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4232),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4233),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4234),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4235),lrtfunc_tpcall ))("rfLsSOCCat00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4244),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 4246),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4247),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4248),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4249),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4250),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4251),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4252),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4253),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4254),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4255),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4256),lrtfunc_tpcall ))("rfGtDepPymTp00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4265),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 4267),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4268),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4269),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4270),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4271),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4272),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4273),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SUBSIDY_TYPE", "value=F", (char *)0);
(*( lrt_register_file_line("Action.c", 4274),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=LINE_TP", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4275),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4276),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4277),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4278),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4279),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACTIVITY_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4280),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4281),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACTIVITY_CODE", "value=NAC", (char *)0);
(*( lrt_register_file_line("Action.c", 4282),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=DEALER_CD", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 4283),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4284),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
(*( lrt_register_file_line("Action.c", 4285),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RATE_PLAN_CODE", "value=NCNADR2", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4286),lrtfunc_tpcall ))("csChkAllwAct00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 4296),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 4298),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_2}", (char *)0);
(*( lrt_register_file_line("Action.c", 4299),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4300),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4301),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4302),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4303),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4304),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CREDIT_CLASS", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4305),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4306),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4307),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4308),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_2}", (char *)0);
(*( lrt_register_file_line("Action.c", 4309),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4310),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4311),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4312),lrtfunc_tpcall ))("csGtDDReqInd00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4321),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 4323),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4324),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4325),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4326),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4327),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CREDIT_CLASS", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 4328),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4329),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4330),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4331),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4332),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4333),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4334),lrtfunc_tpcall ))("rfGtCrdCls00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4343),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 4345),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_2}", (char *)0);
(*( lrt_register_file_line("Action.c", 4346),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4347),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4348),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4349),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4350),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4351),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CREDIT_CLASS", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4352),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4353),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4354),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4355),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_2}", (char *)0);
(*( lrt_register_file_line("Action.c", 4356),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4357),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4358),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4359),lrtfunc_tpcall ))("csGtDDReqInd00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4368),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 4370),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4371),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4372),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4373),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4374),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4375),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 4376),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4377),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4378),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4379),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4380),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4381),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4382),lrtfunc_tpcall ))("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4391),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 4393),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4394),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4395),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4396),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4397),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4398),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4399),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4400),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4401),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4402),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4403),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4404),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4405),lrtfunc_tpcall ))("csSubStCnt00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4414),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 4416),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4417),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ROW_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 4418),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4419),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4420),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4421),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4422),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4423),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 4424),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4425),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4426),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4427),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4428),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4429),lrtfunc_tpcall ))("rfLsSocSMkt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4438),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 4440),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4441),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4442),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4443),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4444),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4445),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4446),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4447),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4448),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NPA", "value={NPA}", (char *)0);
(*( lrt_register_file_line("Action.c", 4449),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NXX", "value={NXX}", (char *)0);
(*( lrt_register_file_line("Action.c", 4450),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=LR", "value={LR}", (char *)0);
(*( lrt_register_file_line("Action.c", 4451),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TODAY", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 4452),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4453),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4454),lrtfunc_tpcall ))("rfGtSubMktCd00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4463),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 4465),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4466),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4467),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4468),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4469),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4470),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4471),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4472),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4473),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4474),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
(*( lrt_register_file_line("Action.c", 4475),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CAPABILITY_ID", "value=OTP_VERIFICATION_REQUIRED", (char *)0);
(*( lrt_register_file_line("Action.c", 4476),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=GEN_K1", "value=NAC", (char *)0);
(*( lrt_register_file_line("Action.c", 4477),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=GEN_K2", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 4478),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=GEN_K3", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4479),lrtfunc_tpcall ))("rfGtCsmGenPrm00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4488),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 4490),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4491),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4492),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4493),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4494),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4495),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4496),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4497),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value=0000000000", (char *)0);
(*( lrt_register_file_line("Action.c", 4498),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4499),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4500),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4501),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4502),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4503),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4504),lrtfunc_tpcall ))("arLsBanAgr00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4513),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 4515),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4516),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4517),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4518),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4519),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4520),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACCOUNT_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4521),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACCOUNT_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 4522),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4523),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 4524),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4525),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4526),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4527),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4528),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4529),lrtfunc_tpcall ))("csChkSubPp00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4538),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 4540),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4541),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4542),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4543),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4544),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4545),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4546),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4547),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4548),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4549),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4550),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4551),lrtfunc_tpcall ))("csCntActSus00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

lr_start_transaction("csActvSub_IOT");

(*( lrt_register_file_line("Action.c", 4562),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 4564),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_2}", (char *)0);
(*( lrt_register_file_line("Action.c", 4565),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NUM_GSM_LINES", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4566),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4567),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ROWCOUNT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4568),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4569),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ROW_COUNT", "value=11", (char *)0);
(*( lrt_register_file_line("Action.c", 4570),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4571),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4572),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DISCELGACTIVTYBUFROW_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 4573),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PCSCHKDPELGIMPINPROW_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 4574),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PROMOCDBUFFROW_COUNT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4575),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4576),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4577),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=P", (char *)0);
(*( lrt_register_file_line("Action.c", 4578),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4579),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4580),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4581),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4582),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4583),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4584),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4585),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4586),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4587),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4588),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4589),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4590),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4591),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4592),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4593),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4594),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4595),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4596),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4597),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4598),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4599),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACCOUNT_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4600),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACCOUNT_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 4601),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4602),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4603),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4604),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4605),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4606),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4607),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4608),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4609),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4610),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4611),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_CHANGE_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4612),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBBUFFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4613),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SIM_ONLY_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4614),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4615),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4616),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4617),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4618),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4619),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4620),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4621),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4622),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4623),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4624),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOCLISTBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4625),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSIDY_TYPE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4626),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=AUTOPAY_PRED_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4627),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NEO_MIG_TRX_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4628),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4629),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4630),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4631),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4632),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4633),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4634),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4635),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4636),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4637),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4638),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4639),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4640),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ZIP", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 4641),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 4642),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=MBBCDONLY", (char *)0);
(*( lrt_register_file_line("Action.c", 4643),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=MBBEPCDAT", (char *)0);
(*( lrt_register_file_line("Action.c", 4644),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=SYNCUBO", (char *)0);
(*( lrt_register_file_line("Action.c", 4645),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=SYNTELO", (char *)0);
(*( lrt_register_file_line("Action.c", 4646),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=UNLMSGSB", (char *)0);
(*( lrt_register_file_line("Action.c", 4647),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=USROAMMBB", (char *)0);
(*( lrt_register_file_line("Action.c", 4648),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=WELSMSMBB", (char *)0);
(*( lrt_register_file_line("Action.c", 4649),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=INTDAT2MI", (char *)0);
(*( lrt_register_file_line("Action.c", 4650),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=INTSMSMI", (char *)0);
(*( lrt_register_file_line("Action.c", 4651),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=ITSMSNCMI", (char *)0);
(*( lrt_register_file_line("Action.c", 4652),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4653),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4654),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_CODE", "value=ACT", (char *)0);
(*( lrt_register_file_line("Action.c", 4655),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_REASON", "value=CA", (char *)0);
(*( lrt_register_file_line("Action.c", 4656),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_2}", (char *)0);
(*( lrt_register_file_line("Action.c", 4657),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4658),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4659),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4660),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4661),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4662),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4663),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4664),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4665),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4666),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4667),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4668),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4669),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFF_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4670),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4671),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
(*( lrt_register_file_line("Action.c", 4672),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NEW_COMMIT_START_DT", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4673),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NEW_COMMIT_END_DT", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4674),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DISC_ACTV_TP", "value=NAC", (char *)0);
(*( lrt_register_file_line("Action.c", 4675),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 4676),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 4677),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 4678),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 4679),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 4680),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 4681),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 4682),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 4683),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 4684),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 4685),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXP_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 4686),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBBUFFSUBSCRIBER_NO", "value={CTN}", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4687),lrtfunc_tpcall ))("csChkDPElgImp00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4696),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 4698),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4699),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4700),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4701),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4702),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 4703),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 4704),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 4705),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 4706),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=DEALER_CD", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 4707),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 4708),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 4709),lrtfunc_tpcall ))("csChkNatDlr00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 4718),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 4720),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ESN_LEVEL", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 4721),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ESN_LEVEL", "value=2", (char *)0);
(*( lrt_register_file_line("Action.c", 4722),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_2}", (char *)0);
(*( lrt_register_file_line("Action.c", 4723),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=COMMIT_ORIG_NO_MONTH", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4724),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DIRECTIVE", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4725),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 4726),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CUSTOMER_ID", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4727),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CUSTOMER_BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4728),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ROWCOUNT", "value=11", (char *)0);
(*( lrt_register_file_line("Action.c", 4729),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4730),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4731),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PESNBUFFERROWCOUNT", "value=2", (char *)0);
(*( lrt_register_file_line("Action.c", 4732),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NAME_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4733),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NAME_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4734),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LINK_SEQ_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4735),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LINK_SEQ_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4736),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PARAM_COUNT", "value=5", (char *)0);
(*( lrt_register_file_line("Action.c", 4737),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFROWCOUNT", "value=14", (char *)0);
(*( lrt_register_file_line("Action.c", 4738),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ROW_COUNT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4739),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LNKRECCUSTOMER_ID", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4740),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LNKRECCUSTOMER_ID", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 4741),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PNAMEADRBUFROWCOUNT", "value=2", (char *)0);
(*( lrt_register_file_line("Action.c", 4742),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ESN_SEQ_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4743),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ESN_SEQ_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4744),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=10001", (char *)0);
(*( lrt_register_file_line("Action.c", 4745),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20005", (char *)0);
(*( lrt_register_file_line("Action.c", 4746),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20010", (char *)0);
(*( lrt_register_file_line("Action.c", 4747),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20007", (char *)0);
(*( lrt_register_file_line("Action.c", 4748),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20008", (char *)0);
(*( lrt_register_file_line("Action.c", 4749),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20009", (char *)0);
(*( lrt_register_file_line("Action.c", 4750),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20006", (char *)0);
(*( lrt_register_file_line("Action.c", 4751),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20001", (char *)0);
(*( lrt_register_file_line("Action.c", 4752),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20002", (char *)0);
(*( lrt_register_file_line("Action.c", 4753),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20003", (char *)0);
(*( lrt_register_file_line("Action.c", 4754),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_SEQ_NO", "value=20004", (char *)0);
(*( lrt_register_file_line("Action.c", 4755),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20002", (char *)0);
(*( lrt_register_file_line("Action.c", 4756),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20003", (char *)0);
(*( lrt_register_file_line("Action.c", 4757),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20003", (char *)0);
(*( lrt_register_file_line("Action.c", 4758),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20003", (char *)0);
(*( lrt_register_file_line("Action.c", 4759),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20003", (char *)0);
(*( lrt_register_file_line("Action.c", 4760),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20004", (char *)0);
(*( lrt_register_file_line("Action.c", 4761),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20006", (char *)0);
(*( lrt_register_file_line("Action.c", 4762),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20008", (char *)0);
(*( lrt_register_file_line("Action.c", 4763),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20008", (char *)0);
(*( lrt_register_file_line("Action.c", 4764),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20008", (char *)0);
(*( lrt_register_file_line("Action.c", 4765),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20009", (char *)0);
(*( lrt_register_file_line("Action.c", 4766),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20010", (char *)0);
(*( lrt_register_file_line("Action.c", 4767),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20003", (char *)0);
(*( lrt_register_file_line("Action.c", 4768),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_SEQ_NO", "value=20008", (char *)0);
(*( lrt_register_file_line("Action.c", 4769),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PMKTPROGBUFROWCOUNT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4770),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4771),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4772),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PINSTLBUFROW_COUNT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4773),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4774),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", (char *)0);
(*( lrt_register_file_line("Action.c", 4775),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", (char *)0);
(*( lrt_register_file_line("Action.c", 4776),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", (char *)0);
(*( lrt_register_file_line("Action.c", 4777),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", (char *)0);
(*( lrt_register_file_line("Action.c", 4778),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", (char *)0);
(*( lrt_register_file_line("Action.c", 4779),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", (char *)0);
(*( lrt_register_file_line("Action.c", 4780),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", (char *)0);
(*( lrt_register_file_line("Action.c", 4781),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", (char *)0);
(*( lrt_register_file_line("Action.c", 4782),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", (char *)0);
(*( lrt_register_file_line("Action.c", 4783),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC_SEQ_NO", "value=10001", (char *)0);
(*( lrt_register_file_line("Action.c", 4784),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUB_EXTERNAL_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4785),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CST_EXTERNAL_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4786),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN_EXTERNAL_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4787),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXT_ID", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 4788),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXT_ID", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 4789),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXT_ID", "value=-1", (char *)0);
(*( lrt_register_file_line("Action.c", 4790),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXT_ID", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 4791),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXT_ID", "value=-1", (char *)0);
(*( lrt_register_file_line("Action.c", 4792),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXT_ID", "value=-1", (char *)0);
(*( lrt_register_file_line("Action.c", 4793),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXT_ID", "value=-1", (char *)0);
(*( lrt_register_file_line("Action.c", 4794),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXT_ID", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 4795),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXT_ID", "value=-1", (char *)0);
(*( lrt_register_file_line("Action.c", 4796),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXT_ID", "value=-1", (char *)0);
(*( lrt_register_file_line("Action.c", 4797),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EXT_ID", "value=-1", (char *)0);
(*( lrt_register_file_line("Action.c", 4798),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSWPARAMBUFROW_COUNT", "value=3", (char *)0);
(*( lrt_register_file_line("Action.c", 4799),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PADDPARAMROWCOUNT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4800),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DISC_TRX_ID", "value=-1", (char *)0);
(*( lrt_register_file_line("Action.c", 4801),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PPROMOCDBUFFROW_COUNT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4802),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSTKGRPROW_COUNT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 4803),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MISSING_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 4804),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MISSING_IND", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4805),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=IN_REPAIR_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 4806),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=IN_REPAIR_IND", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4807),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=IN_TRANSIT_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 4808),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=IN_TRANSIT_IND", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4809),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=COMITED_TO_POS_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 4810),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=COMITED_TO_POS_IND", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4811),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATION_STATUS", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4812),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATION_STATUS", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4813),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ITEM_OWNERSHIP", "value=S", (char *)0);
(*( lrt_register_file_line("Action.c", 4814),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ITEM_OWNERSHIP", "value=S", (char *)0);
(*( lrt_register_file_line("Action.c", 4815),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CURR_POSSESSION", "value=P", (char *)0);
(*( lrt_register_file_line("Action.c", 4816),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CURR_POSSESSION", "value=P", (char *)0);
(*( lrt_register_file_line("Action.c", 4817),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=POOL", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 4818),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=POOL", "value=P", (char *)0);
(*( lrt_register_file_line("Action.c", 4819),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EQU_TYPE", "value=S", (char *)0);
(*( lrt_register_file_line("Action.c", 4820),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EQU_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4821),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4822),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4823),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4824),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4825),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4826),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4827),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4828),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4829),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4830),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4831),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4832),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4833),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_TYPE", "value=S", (char *)0);
(*( lrt_register_file_line("Action.c", 4834),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_TYPE", "value=S", (char *)0);
(*( lrt_register_file_line("Action.c", 4835),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=P", (char *)0);
(*( lrt_register_file_line("Action.c", 4836),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4837),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4838),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4839),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4840),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4841),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4842),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4843),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4844),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4845),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4846),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4847),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4848),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4849),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4850),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4851),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4852),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4853),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4854),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4855),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4856),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_LEVEL_CODE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4857),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NAME_FORMAT", "value=P", (char *)0);
(*( lrt_register_file_line("Action.c", 4858),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NAME_FORMAT", "value=P", (char *)0);
(*( lrt_register_file_line("Action.c", 4859),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_STATUS", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4860),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_STATUS", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4861),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_FIELDED_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 4862),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_FIELDED_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 4863),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LINK_TYPE", "value=U", (char *)0);
(*( lrt_register_file_line("Action.c", 4864),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LINK_TYPE", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 4865),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=UPGRADE_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4866),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=UPGRADE_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4867),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 4868),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 4869),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 4870),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 4871),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 4872),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 4873),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 4874),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 4875),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 4876),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 4877),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 4878),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 4879),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 4880),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFF_RSN_CODE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 4881),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4882),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4883),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4884),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4885),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4886),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4887),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4888),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4889),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4890),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4891),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4892),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4893),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4894),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXP_RSN_CODE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4895),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MEMO_SOURCE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 4896),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4897),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4898),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4899),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4900),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4901),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4902),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4903),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4904),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4905),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4906),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4907),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4908),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4909),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4910),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4911),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4912),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4913),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4914),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4915),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4916),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4917),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4918),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4919),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4920),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4921),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NM_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4922),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NM_MODE", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 4923),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4924),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_MODE", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 4925),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTVFEEIND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 4926),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVERSNIND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 4927),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NM_UP_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4928),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NM_UP_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4929),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_UP_TYPE", "value=P", (char *)0);
(*( lrt_register_file_line("Action.c", 4930),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_UP_TYPE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 4931),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=P", (char *)0);
(*( lrt_register_file_line("Action.c", 4932),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", (char *)0);
(*( lrt_register_file_line("Action.c", 4933),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", (char *)0);
(*( lrt_register_file_line("Action.c", 4934),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", (char *)0);
(*( lrt_register_file_line("Action.c", 4935),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", (char *)0);
(*( lrt_register_file_line("Action.c", 4936),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", (char *)0);
(*( lrt_register_file_line("Action.c", 4937),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", (char *)0);
(*( lrt_register_file_line("Action.c", 4938),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", (char *)0);
(*( lrt_register_file_line("Action.c", 4939),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", (char *)0);
(*( lrt_register_file_line("Action.c", 4940),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", (char *)0);
(*( lrt_register_file_line("Action.c", 4941),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SRV_SUB_MODE", "value=T", (char *)0);
(*( lrt_register_file_line("Action.c", 4942),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", (char *)0);
(*( lrt_register_file_line("Action.c", 4943),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", (char *)0);
(*( lrt_register_file_line("Action.c", 4944),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", (char *)0);
(*( lrt_register_file_line("Action.c", 4945),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", (char *)0);
(*( lrt_register_file_line("Action.c", 4946),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", (char *)0);
(*( lrt_register_file_line("Action.c", 4947),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", (char *)0);
(*( lrt_register_file_line("Action.c", 4948),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", (char *)0);
(*( lrt_register_file_line("Action.c", 4949),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", (char *)0);
(*( lrt_register_file_line("Action.c", 4950),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", (char *)0);
(*( lrt_register_file_line("Action.c", 4951),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", (char *)0);
(*( lrt_register_file_line("Action.c", 4952),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", (char *)0);
(*( lrt_register_file_line("Action.c", 4953),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", (char *)0);
(*( lrt_register_file_line("Action.c", 4954),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", (char *)0);
(*( lrt_register_file_line("Action.c", 4955),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_SUB_MODE", "value=H", (char *)0);
(*( lrt_register_file_line("Action.c", 4956),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SW_STATE_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 4957),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SW_STATE_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 4958),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NEXT_ACTV_CODE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4959),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NEXT_ACTV_CODE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 4960),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_INCORP_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 4961),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_INCORP_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 4962),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FM_TYPE", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4963),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FM_TYPE", "value=U", (char *)0);
(*( lrt_register_file_line("Action.c", 4964),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FM_TYPE", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4965),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FM_TYPE", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4966),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FM_TYPE", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4967),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FM_TYPE", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4968),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FM_TYPE", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4969),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FM_TYPE", "value=U", (char *)0);
(*( lrt_register_file_line("Action.c", 4970),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FM_TYPE", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4971),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FM_TYPE", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4972),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FM_TYPE", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4973),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FM_TYPE", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4974),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FM_TYPE", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4975),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FM_TYPE", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 4976),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MEMO_PRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4977),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LNKRECPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4978),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LNKRECPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4979),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4980),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4981),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4982),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4983),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4984),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4985),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4986),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4987),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4988),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4989),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4990),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4991),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4992),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4993),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSUBRECPRODUCT_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 4994),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EQ_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4995),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EQ_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 4996),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=COURTESY_STMT", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 4997),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WELCOME_LETTER_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 4998),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 4999),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5000),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5001),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5002),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5003),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5004),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5005),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5006),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5007),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5008),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5009),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CONN_MODE", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5010),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRIMARY_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5011),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEPOSIT_MTD", "value=S", (char *)0);
(*( lrt_register_file_line("Action.c", 5012),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MANUAL_GEO_CODE_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5013),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MANUAL_GEO_CODE_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5014),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DETERMINATION_IND", "value=E", (char *)0);
(*( lrt_register_file_line("Action.c", 5015),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DETERMINATION_IND", "value=E", (char *)0);
(*( lrt_register_file_line("Action.c", 5016),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_CATEGORY", "value=E", (char *)0);
(*( lrt_register_file_line("Action.c", 5017),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_CATEGORY", "value=R", (char *)0);
(*( lrt_register_file_line("Action.c", 5018),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_CATEGORY", "value=R", (char *)0);
(*( lrt_register_file_line("Action.c", 5019),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 5020),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 5021),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 5022),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BILL_CTG_SUM_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 5023),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ZERO_VM_SUM_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 5024),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ZERO_MSG_SUM_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 5025),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5026),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5027),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5028),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5029),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5030),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5031),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5032),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5033),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5034),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5035),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5036),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5037),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5038),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDN_PORT_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5039),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=UMA_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5040),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=UMA_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5041),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=UMA_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5042),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=UMA_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5043),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=UMA_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5044),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=UMA_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5045),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=UMA_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5046),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=UMA_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5047),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=UMA_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5048),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=UMA_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5049),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=UMA_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 5050),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_UNCERTAINTY_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5051),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_UNCERTAINTY_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5052),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SIMFEEPAIDIND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 5053),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSIDY_TYPE", "value=F", (char *)0);
(*( lrt_register_file_line("Action.c", 5054),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LINE_TP", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 5055),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TAID_MAN_OVRD_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5056),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TAID_MAN_OVRD_IND", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 5057),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TAID_DETERMIN_IND", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 5058),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TAID_DETERMIN_IND", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 5059),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REQ_DEPOSIT_AMT", "value=25", (char *)0);
(*( lrt_register_file_line("Action.c", 5060),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTIVATIONFEE", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5061),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDRESS_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5062),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDRESS_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5063),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=HIERARCHY_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5064),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5065),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5066),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5067),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5068),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5069),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5070),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5071),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5072),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5073),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5074),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_OC_AMT", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5075),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ITEM_ID", "value=VSITEM", (char *)0);
(*( lrt_register_file_line("Action.c", 5076),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ITEM_ID", "value=UNKNOWN ", (char *)0);
(*( lrt_register_file_line("Action.c", 5077),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LOCATION_ID", "value=9999", (char *)0);
(*( lrt_register_file_line("Action.c", 5078),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LOCATION_ID", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5079),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ITEM_OWNERSHIP_DT", "value={DATE}104253", (char *)0);
(*( lrt_register_file_line("Action.c", 5080),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ITEM_OWNERSHIP_DT", "value={DATE}104259", (char *)0);
(*( lrt_register_file_line("Action.c", 5081),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CURR_POSSESSION_DT", "value={DATE}104253", (char *)0);
(*( lrt_register_file_line("Action.c", 5082),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CURR_POSSESSION_DT", "value={DATE}104259", (char *)0);
(*( lrt_register_file_line("Action.c", 5083),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=COMITED_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5084),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=COMITED_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5085),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTIVITY_REASON", "value=SIM", (char *)0);
(*( lrt_register_file_line("Action.c", 5086),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTIVITY_REASON", "value=IMEI", (char *)0);
(*( lrt_register_file_line("Action.c", 5087),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXPECTED_RTRN_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5088),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXPECTED_RTRN_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5089),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=POLICE_REPORT_NO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5090),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=POLICE_REPORT_NO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5091),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=POLICE_REPORT_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5092),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=POLICE_REPORT_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5093),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=POLICE_STATION", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5094),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=POLICE_STATION", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5095),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5096),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 5097),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5098),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5099),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5100),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5101),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5102),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5103),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5104),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5105),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5106),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5107),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5108),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=INIT_ACTIVATION_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5109),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FIRST_NAME", "value={FNAME}", (char *)0);
(*( lrt_register_file_line("Action.c", 5110),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FIRST_NAME", "value={FNAME}", (char *)0);
(*( lrt_register_file_line("Action.c", 5111),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MIDDLE_INITIAL", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 5112),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MIDDLE_INITIAL", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 5113),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NAME_SUFFIX", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5114),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NAME_SUFFIX", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5115),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_HOUSE_NO", "value=12920", (char *)0);
(*( lrt_register_file_line("Action.c", 5116),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_HOUSE_NO", "value=12920", (char *)0);
(*( lrt_register_file_line("Action.c", 5117),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ST_DIRECTION", "value=SE", (char *)0);
(*( lrt_register_file_line("Action.c", 5118),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ST_DIRECTION", "value=SE", (char *)0);
(*( lrt_register_file_line("Action.c", 5119),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_STREET_NAME", "value=38TH", (char *)0);
(*( lrt_register_file_line("Action.c", 5120),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_STREET_NAME", "value=38TH", (char *)0);
(*( lrt_register_file_line("Action.c", 5121),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_CITY", "value=BELLEVUE", (char *)0);
(*( lrt_register_file_line("Action.c", 5122),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_CITY", "value=BELLEVUE", (char *)0);
(*( lrt_register_file_line("Action.c", 5123),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_STATE_CODE", "value=WA", (char *)0);
(*( lrt_register_file_line("Action.c", 5124),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_STATE_CODE", "value=WA", (char *)0);
(*( lrt_register_file_line("Action.c", 5125),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ZIP", "value=98006", (char *)0);
(*( lrt_register_file_line("Action.c", 5126),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ZIP", "value=98006", (char *)0);
(*( lrt_register_file_line("Action.c", 5127),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ZIP_GEO_CODE", "value=480330040", (char *)0);
(*( lrt_register_file_line("Action.c", 5128),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ZIP_GEO_CODE", "value=480330040", (char *)0);
(*( lrt_register_file_line("Action.c", 5129),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_POB", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5130),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_POB", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5131),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ATTENTION", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5132),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ATTENTION", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5133),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=IXC_CODE", "value=278", (char *)0);
(*( lrt_register_file_line("Action.c", 5134),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=IXC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5135),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PAPER_WORK_STATUS", "value=AO", (char *)0);
(*( lrt_register_file_line("Action.c", 5136),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PAPER_WORK_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5137),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 5138),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 5139),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 5140),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 5141),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 5142),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 5143),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 5144),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 5145),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 5146),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 5147),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 5148),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 5149),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=MBBEPCDAT", (char *)0);
(*( lrt_register_file_line("Action.c", 5150),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=WELSMSMBB", (char *)0);
(*( lrt_register_file_line("Action.c", 5151),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=SYNTELO", (char *)0);
(*( lrt_register_file_line("Action.c", 5152),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=UNLMSGSB", (char *)0);
(*( lrt_register_file_line("Action.c", 5153),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=USROAMMBB", (char *)0);
(*( lrt_register_file_line("Action.c", 5154),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=SYNCUBO", (char *)0);
(*( lrt_register_file_line("Action.c", 5155),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=INTDAT2MI", (char *)0);
(*( lrt_register_file_line("Action.c", 5156),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=INTSMSMI", (char *)0);
(*( lrt_register_file_line("Action.c", 5157),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=ITSMSNCMI", (char *)0);
(*( lrt_register_file_line("Action.c", 5158),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC", "value=MBBCDONLY", (char *)0);
(*( lrt_register_file_line("Action.c", 5159),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5160),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5161),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5162),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5163),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5164),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5165),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5166),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5167),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5168),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5169),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5170),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=UNIT_ESN", "value={SIM}", (char *)0);
(*( lrt_register_file_line("Action.c", 5171),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=UNIT_ESN", "value=111111111111111", (char *)0);
(*( lrt_register_file_line("Action.c", 5172),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FEATURE_CODE", "value=SMSINT", (char *)0);
(*( lrt_register_file_line("Action.c", 5173),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FEATURE_CODE", "value=FMSMS", (char *)0);
(*( lrt_register_file_line("Action.c", 5174),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FEATURE_CODE", "value=SMOINT", (char *)0);
(*( lrt_register_file_line("Action.c", 5175),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FEATURE_CODE", "value=SMORM", (char *)0);
(*( lrt_register_file_line("Action.c", 5176),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FEATURE_CODE", "value=SMTRM", (char *)0);
(*( lrt_register_file_line("Action.c", 5177),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FEATURE_CODE", "value=CD", (char *)0);
(*( lrt_register_file_line("Action.c", 5178),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FEATURE_CODE", "value=SYNCUB", (char *)0);
(*( lrt_register_file_line("Action.c", 5179),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FEATURE_CODE", "value=FMSMS", (char *)0);
(*( lrt_register_file_line("Action.c", 5180),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FEATURE_CODE", "value=SMO", (char *)0);
(*( lrt_register_file_line("Action.c", 5181),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FEATURE_CODE", "value=SMT", (char *)0);
(*( lrt_register_file_line("Action.c", 5182),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FEATURE_CODE", "value=USROAM", (char *)0);
(*( lrt_register_file_line("Action.c", 5183),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FEATURE_CODE", "value=WELSMS", (char *)0);
(*( lrt_register_file_line("Action.c", 5184),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FEATURE_CODE", "value=STD", (char *)0);
(*( lrt_register_file_line("Action.c", 5185),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FEATURE_CODE", "value=CPKG", (char *)0);
(*( lrt_register_file_line("Action.c", 5186),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5187),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5188),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5189),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5190),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5191),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5192),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5193),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5194),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5195),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5196),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5197),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5198),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5199),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5200),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5201),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5202),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5203),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5204),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5205),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5206),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5207),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5208),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5209),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5210),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5211),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5212),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_SECONDARY_LN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5213),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_SECONDARY_LN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5214),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_PRIMARY_LN", "value=12920 SE 38TH ST", (char *)0);
(*( lrt_register_file_line("Action.c", 5215),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_PRIMARY_LN", "value=12920 SE 38TH ST", (char *)0);
(*( lrt_register_file_line("Action.c", 5216),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5217),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_BUSINESS_NAME", "value={LNAME}", (char *)0);
(*( lrt_register_file_line("Action.c", 5218),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_BUSINESS_NAME", "value={LNAME}", (char *)0);
(*( lrt_register_file_line("Action.c", 5219),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NAME_TITLE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5220),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NAME_TITLE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5221),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDITIONAL_TITLE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5222),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADDITIONAL_TITLE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5223),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ZIP_4", "value=1350", (char *)0);
(*( lrt_register_file_line("Action.c", 5224),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ZIP_4", "value=1350", (char *)0);
(*( lrt_register_file_line("Action.c", 5225),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_CARRIER_CODE", "value=C019", (char *)0);
(*( lrt_register_file_line("Action.c", 5226),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_CARRIER_CODE", "value=C019", (char *)0);
(*( lrt_register_file_line("Action.c", 5227),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_BARCODE_SUFFIX", "value=20", (char *)0);
(*( lrt_register_file_line("Action.c", 5228),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_BARCODE_SUFFIX", "value=20", (char *)0);
(*( lrt_register_file_line("Action.c", 5229),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_STREET_SUFFIX", "value=ST", (char *)0);
(*( lrt_register_file_line("Action.c", 5230),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_STREET_SUFFIX", "value=ST", (char *)0);
(*( lrt_register_file_line("Action.c", 5231),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_TRAILING_DIR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5232),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_TRAILING_DIR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5233),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_APT_DESIGNATOR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5234),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_APT_DESIGNATOR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5235),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_APT_NM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5236),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_APT_NM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5237),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_RR_HW_CNTR_NM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5238),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_RR_HW_CNTR_NM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5239),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_RR_HW_BOX_NM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5240),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_RR_HW_BOX_NM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5241),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_COUNTRY", "value=USA", (char *)0);
(*( lrt_register_file_line("Action.c", 5242),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_COUNTRY", "value=USA", (char *)0);
(*( lrt_register_file_line("Action.c", 5243),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5244),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5245),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5246),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5247),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5248),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5249),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5250),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5251),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5252),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5253),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5254),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5255),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5256),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_EXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5257),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NUMLOC", "value=GNRL", (char *)0);
(*( lrt_register_file_line("Action.c", 5258),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_COUNTY", "value=033", (char *)0);
(*( lrt_register_file_line("Action.c", 5259),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_COUNTY", "value=033", (char *)0);
(*( lrt_register_file_line("Action.c", 5260),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", (char *)0);
(*( lrt_register_file_line("Action.c", 5261),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", (char *)0);
(*( lrt_register_file_line("Action.c", 5262),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", (char *)0);
(*( lrt_register_file_line("Action.c", 5263),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", (char *)0);
(*( lrt_register_file_line("Action.c", 5264),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", (char *)0);
(*( lrt_register_file_line("Action.c", 5265),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", (char *)0);
(*( lrt_register_file_line("Action.c", 5266),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", (char *)0);
(*( lrt_register_file_line("Action.c", 5267),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", (char *)0);
(*( lrt_register_file_line("Action.c", 5268),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", (char *)0);
(*( lrt_register_file_line("Action.c", 5269),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", (char *)0);
(*( lrt_register_file_line("Action.c", 5270),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_CODE", "value=OTC", (char *)0);
(*( lrt_register_file_line("Action.c", 5271),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_REASON", "value=CA", (char *)0);
(*( lrt_register_file_line("Action.c", 5272),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MEMO_CTN", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 5273),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=P1", "value=08/17/2017", (char *)0);
(*( lrt_register_file_line("Action.c", 5274),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=P2", "value=CTN Activation", (char *)0);
(*( lrt_register_file_line("Action.c", 5275),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=P3", "value=25.00", (char *)0);
(*( lrt_register_file_line("Action.c", 5276),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=P4", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 5277),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=P5", "value=278", (char *)0);
(*( lrt_register_file_line("Action.c", 5278),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_2}", (char *)0);
(*( lrt_register_file_line("Action.c", 5279),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=COMMIT_START_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5280),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=COMMIT_END_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5281),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=COMMIT_REASON_CODE", "value=PPD", (char *)0);
(*( lrt_register_file_line("Action.c", 5282),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PAPER_WORK_REF_NO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5283),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=INTSMSMI", (char *)0);
(*( lrt_register_file_line("Action.c", 5284),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=ITSMSNCMI", (char *)0);
(*( lrt_register_file_line("Action.c", 5285),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=ITSMSNCMI", (char *)0);
(*( lrt_register_file_line("Action.c", 5286),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=ITSMSNCMI", (char *)0);
(*( lrt_register_file_line("Action.c", 5287),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=ITSMSNCMI", (char *)0);
(*( lrt_register_file_line("Action.c", 5288),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=MBBCDONLY", (char *)0);
(*( lrt_register_file_line("Action.c", 5289),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=SYNCUBO", (char *)0);
(*( lrt_register_file_line("Action.c", 5290),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=UNLMSGSB", (char *)0);
(*( lrt_register_file_line("Action.c", 5291),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=UNLMSGSB", (char *)0);
(*( lrt_register_file_line("Action.c", 5292),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=UNLMSGSB", (char *)0);
(*( lrt_register_file_line("Action.c", 5293),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=USROAMMBB", (char *)0);
(*( lrt_register_file_line("Action.c", 5294),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=WELSMSMBB", (char *)0);
(*( lrt_register_file_line("Action.c", 5295),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=ITSMSNCMI", (char *)0);
(*( lrt_register_file_line("Action.c", 5296),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC", "value=UNLMSGSB", (char *)0);
(*( lrt_register_file_line("Action.c", 5297),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PHYDEVARRAYEXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5298),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PHYDEVARRAYEXPIRATION_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5299),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTIVITY_DATE", "value={DATE}000000", (char *)0);
(*( lrt_register_file_line("Action.c", 5300),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTIVITY_DATE", "value={DATE}000000", (char *)0);
(*( lrt_register_file_line("Action.c", 5301),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVERSN", "value=ATST", (char *)0);
(*( lrt_register_file_line("Action.c", 5302),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5303),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5304),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5305),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5306),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5307),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5308),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5309),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5310),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5311),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5312),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5313),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5314),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5315),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFSOC_EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5316),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LINK_ROW_ID", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5317),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LINK_ROW_ID", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5318),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NM_EXPIRE_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5319),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NM_EXPIRE_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5320),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NAME_ROW_ID", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5321),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NAME_ROW_ID", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5322),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_EXPIRE_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5323),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_EXPIRE_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5324),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ROW_ID", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5325),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_ROW_ID", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5326),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LNKRECSUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 5327),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LNKRECSUBSCRIBER_NO", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 5328),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LNKRECEFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5329),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LNKRECEFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5330),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5331),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SWITCH_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5332),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SWITCH_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5333),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SWITCH_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5334),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SWITCH_CODE", "value=SMSO", (char *)0);
(*( lrt_register_file_line("Action.c", 5335),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SWITCH_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5336),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SWITCH_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5337),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SWITCH_CODE", "value=SYNCUB", (char *)0);
(*( lrt_register_file_line("Action.c", 5338),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SWITCH_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5339),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SWITCH_CODE", "value=SMSO", (char *)0);
(*( lrt_register_file_line("Action.c", 5340),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SWITCH_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5341),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SWITCH_CODE", "value=USROAM", (char *)0);
(*( lrt_register_file_line("Action.c", 5342),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SWITCH_CODE", "value=NCFP", (char *)0);
(*( lrt_register_file_line("Action.c", 5343),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SWITCH_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5344),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SWITCH_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5345),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=ACTV", (char *)0);
(*( lrt_register_file_line("Action.c", 5346),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=ACTV", (char *)0);
(*( lrt_register_file_line("Action.c", 5347),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SPANC_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5348),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5349),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5350),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5351),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5352),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5353),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5354),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5355),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5356),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5357),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5358),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5359),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5360),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5361),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_ADD_PARAM", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5362),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5363),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5364),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5365),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5366),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5367),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5368),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5369),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5370),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5371),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5372),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5373),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5374),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5375),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FTR_VAD_TN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5376),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SUB_ACTV_LOCATION", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 5377),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_SW_ACTV_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5378),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_SW_ACTV_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5379),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NEXT_ACTV_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5380),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NEXT_ACTV_DATE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5381),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NEXT_ACTV_ISSUE_DT", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5382),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NEXT_ACTV_ISSUE_DT", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5383),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PHYDEVARRAYEFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5384),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PHYDEVARRAYEFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5385),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WSNADDR", "value={DPET_APP_WSN}", (char *)0);
(*( lrt_register_file_line("Action.c", 5386),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LST_COM_ACTV_DLR", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 5387),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LST_COM_SPLT_DLR", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5388),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5389),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5390),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5391),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5392),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5393),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5394),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5395),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5396),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5397),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5398),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SPLIT_DEALER_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5399),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_TAX_CITY", "value=BELLEVUE", (char *)0);
(*( lrt_register_file_line("Action.c", 5400),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_TAX_CITY", "value=BELLEVUE", (char *)0);
(*( lrt_register_file_line("Action.c", 5401),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=IXC_CHG_DLR_CD", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 5402),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=IXC_CHG_DLR_SPLT_CD", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5403),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSUBRECDEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 5404),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5405),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 5406),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 5407),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 5408),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 5409),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 5410),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 5411),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 5412),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 5413),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 5414),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=REL_SOC", "value=NCNADR2", (char *)0);
(*( lrt_register_file_line("Action.c", 5415),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PPARAMRECACT_CODE", "value=NAC", (char *)0);
(*( lrt_register_file_line("Action.c", 5416),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MSISDN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5417),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MSISDN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5418),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MSISDN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5419),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MSISDN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5420),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MSISDN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5421),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MSISDN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5422),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MSISDN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5423),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MSISDN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5424),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MSISDN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5425),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MSISDN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5426),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MSISDN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5427),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MSISDN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5428),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MSISDN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5429),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MSISDN", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5430),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5431),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5432),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5433),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5434),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5435),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5436),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5437),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5438),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5439),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5440),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=WAIVE_REASON_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5441),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=GG", (char *)0);
(*( lrt_register_file_line("Action.c", 5442),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=GG", (char *)0);
(*( lrt_register_file_line("Action.c", 5443),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=AG", (char *)0);
(*( lrt_register_file_line("Action.c", 5444),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=GG", (char *)0);
(*( lrt_register_file_line("Action.c", 5445),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=AG", (char *)0);
(*( lrt_register_file_line("Action.c", 5446),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=AG", (char *)0);
(*( lrt_register_file_line("Action.c", 5447),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=AG", (char *)0);
(*( lrt_register_file_line("Action.c", 5448),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=GG", (char *)0);
(*( lrt_register_file_line("Action.c", 5449),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=AG", (char *)0);
(*( lrt_register_file_line("Action.c", 5450),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=AG", (char *)0);
(*( lrt_register_file_line("Action.c", 5451),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRODUCT_SUB_TYPE", "value=AG", (char *)0);
(*( lrt_register_file_line("Action.c", 5452),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSUBRECPRODUCT_SUB_TYPE", "value=GG", (char *)0);
(*( lrt_register_file_line("Action.c", 5453),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5454),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5455),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5456),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5457),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5458),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5459),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5460),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5461),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5462),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5463),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5464),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5465),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5466),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PSOCFTRBUFPRODUCT_SUB_TYPE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5467),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CD", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 5468),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_NAME", "value=SIM", (char *)0);
(*( lrt_register_file_line("Action.c", 5469),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_NAME", "value=IMSI", (char *)0);
(*( lrt_register_file_line("Action.c", 5470),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_NAME", "value=MSISDN", (char *)0);
(*( lrt_register_file_line("Action.c", 5471),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_PROPERTIES", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5472),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_PROPERTIES", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5473),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_PROPERTIES", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5474),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_TYPE", "value=S", (char *)0);
(*( lrt_register_file_line("Action.c", 5475),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 5476),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_TYPE", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 5477),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_VALUES", "value={SIM}", (char *)0);
(*( lrt_register_file_line("Action.c", 5478),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_VALUES", "value=310260380654475", (char *)0);
(*( lrt_register_file_line("Action.c", 5479),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PRM_VALUES", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 5480),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PORT_IND", "value=RE", (char *)0);
(*( lrt_register_file_line("Action.c", 5481),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOCS_EXT_ID", "value=1, 1, 1, 1", (char *)0);
(*( lrt_register_file_line("Action.c", 5482),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOCS_EXT_ID", "value=1, 1, 1, 1", (char *)0);
(*( lrt_register_file_line("Action.c", 5483),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOCS_EXT_ID", "value=1, 1, 1, 1", (char *)0);
(*( lrt_register_file_line("Action.c", 5484),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EMAIL", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5485),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=EMAIL", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5486),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_LAT_LONG", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5487),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_LAT_LONG", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5488),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_IND", "value=NEO", (char *)0);
(*( lrt_register_file_line("Action.c", 5489),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_IND", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5490),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_IND", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5491),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_IND", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5492),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_IND", "value=DSP", (char *)0);
(*( lrt_register_file_line("Action.c", 5493),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_IND", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5494),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_IND", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5495),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_IND", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5496),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_IND", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5497),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_IND", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5498),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SOC_IND", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5499),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=STORE_CD", "value=9999", (char *)0);
(*( lrt_register_file_line("Action.c", 5500),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5501),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SMSSUBSCRIBER", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5502),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=IMPI1", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5503),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=IMPI1", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5504),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
(*( lrt_register_file_line("Action.c", 5505),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPT_OUT_RSN_CD", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5506),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_TAX_AREA_ID", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5507),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ADR_TAX_AREA_ID", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 5508),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TMOID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5509),lrtfunc_tpcall ))("csActvSub00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

lr_end_transaction("csActvSub_IOT",2);	

 
 
 
 
 


(*( lrt_register_file_line("Action.c", 5527),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 5529),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CYCLE_CODE", "value=7", (char *)0);
(*( lrt_register_file_line("Action.c", 5530),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5531),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5532),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5533),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5534),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5535),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5536),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5537),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5538),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5539),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5540),lrtfunc_tpcall ))("blGtCycle00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5549),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 5551),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5552),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5553),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5554),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5555),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5556),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PYM_METHOD", "value=CC", (char *)0);
(*( lrt_register_file_line("Action.c", 5557),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5558),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5559),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5560),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5561),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5562),lrtfunc_tpcall ))("rfLsPymSubMtd00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5571),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 5573),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5574),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5575),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5576),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5577),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5578),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5579),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5580),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5581),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5582),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5583),lrtfunc_tpcall ))("rfLsBusEnt00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5592),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 5594),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5595),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 5596),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5597),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5598),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5599),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5600),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5601),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5602),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5603),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5604),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5605),lrtfunc_tpcall ))("arGtCstBan00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5614),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 5616),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5617),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5618),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5619),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5620),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5621),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5622),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5623),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5624),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", (char *)0);
(*( lrt_register_file_line("Action.c", 5625),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5626),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5627),lrtfunc_tpcall ))("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5636),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 5638),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CYCLE_CODE", "value=7", (char *)0);
(*( lrt_register_file_line("Action.c", 5639),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5640),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5641),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5642),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5643),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5644),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5645),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5646),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5647),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5648),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5649),lrtfunc_tpcall ))("blGtCycle00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5658),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 5660),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5661),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 5662),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5663),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5664),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5665),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 5666),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5667),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", (char *)0);
(*( lrt_register_file_line("Action.c", 5668),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5669),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5670),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5671),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5672),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5673),lrtfunc_tpcall ))("csGtTaxEx00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5682),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 5684),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5685),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 5686),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5687),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5688),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5689),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5690),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5691),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5692),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5693),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5694),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5695),lrtfunc_tpcall ))("arGtNeoInd00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5704),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 5706),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5707),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5708),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5709),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5710),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 5711),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACC_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 5712),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5713),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5714),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5715),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5716),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5717),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5718),lrtfunc_tpcall ))("rfGtAcctTpFmt00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5727),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 5729),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5730),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 5731),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5732),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5733),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5734),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5735),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5736),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5737),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5738),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=dealer_profile", (char *)0);
(*( lrt_register_file_line("Action.c", 5739),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=dealer", (char *)0);
(*( lrt_register_file_line("Action.c", 5740),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 5741),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=dlr_name", (char *)0);
(*( lrt_register_file_line("Action.c", 5742),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5743),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5744),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5753),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 5755),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5756),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 5757),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5758),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5759),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5760),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5761),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5762),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5763),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5764),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=ixc", (char *)0);
(*( lrt_register_file_line("Action.c", 5765),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=ixc_code", (char *)0);
(*( lrt_register_file_line("Action.c", 5766),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=278", (char *)0);
(*( lrt_register_file_line("Action.c", 5767),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=ixc_name", (char *)0);
(*( lrt_register_file_line("Action.c", 5768),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5769),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5770),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5779),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 5781),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5782),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5783),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5784),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5785),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5786),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5787),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5788),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5789),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", (char *)0);
(*( lrt_register_file_line("Action.c", 5790),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5791),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5792),lrtfunc_tpcall ))("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5801),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 5803),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5804),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5805),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5806),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5807),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5808),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5809),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5810),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5811),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ID_TYPE_CD", "value=ID", (char *)0);
(*( lrt_register_file_line("Action.c", 5812),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5813),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5814),lrtfunc_tpcall ))("rfGtIdTypData00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5823),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 5825),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5826),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 5827),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5828),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5829),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5830),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SELECTMODE", "value=E", (char *)0);
(*( lrt_register_file_line("Action.c", 5831),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SUBSTATUS", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 5832),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5833),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5834),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5835),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5836),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5837),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5838),lrtfunc_tpcall ))("csGtOneSub00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5847),lrtfunc_tpfree ))(data_8);

data_8 = (*( lrt_register_file_line("Action.c", 5849),lrtfunc_tpalloc ))("FML32", "", 100000);
(*( lrt_register_file_line("Action.c", 5850),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 5852),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5853),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 5854),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5855),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5856),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5857),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATION_MODE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 5858),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5859),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5860),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5861),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5862),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5863),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5864),lrtfunc_tpcall ))("arGtBanHdr00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5873),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 5875),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5876),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 5877),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5878),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5879),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5880),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5881),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5882),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5883),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5884),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5885),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5886),lrtfunc_tpcall ))("arGtBanHdr00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5895),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 5897),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5898),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 5899),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5900),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5901),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5902),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5903),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5904),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5905),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5906),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5907),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5908),lrtfunc_tpcall ))("arGtFailCnt00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5917),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 5919),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5920),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5921),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5922),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5923),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5924),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5925),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5926),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5927),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5928),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
(*( lrt_register_file_line("Action.c", 5929),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=WINDOW_NAME", "value=w_main_frame", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5930),lrtfunc_tpcall ))("rfLsWdNmRec00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5939),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 5941),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5942),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 5943),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5944),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5945),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5946),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5947),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5948),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5949),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5950),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5951),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5952),lrtfunc_tpcall ))("arGtCstBan00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

 

if((*( lrt_register_file_line("Action.c", 5963),lrtfunc_save32_fld_val ))((FBFR32*)data_2, "name=LAST_UPDATE_DATE", 0, "LAST_UPDATE_DATE_3")<0)
lr_error_message("Failed to get LAST_UPDATE_DATE_3");

if((*( lrt_register_file_line("Action.c", 5966),lrtfunc_save32_fld_val ))((FBFR32*)data_2, "name=LAST_UPDATE_STAMP", 0, "LAST_UPDATE_STAMP_3")<0)
lr_error_message("Failed to get LAST_UPDATE_STAMP_3");

(*( lrt_register_file_line("Action.c", 5969),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 5971),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 5972),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=2", (char *)0);
(*( lrt_register_file_line("Action.c", 5973),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5974),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 5975),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 5976),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 5977),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 5978),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 5979),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 5980),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=csm_status_activity", (char *)0);
(*( lrt_register_file_line("Action.c", 5981),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=csa_activity_code", (char *)0);
(*( lrt_register_file_line("Action.c", 5982),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=NAC", (char *)0);
(*( lrt_register_file_line("Action.c", 5983),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME2", "value=csa_activity_rsn_code", (char *)0);
(*( lrt_register_file_line("Action.c", 5984),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE2", "value=CA", (char *)0);
(*( lrt_register_file_line("Action.c", 5985),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=csa_activity_rsn_desc", (char *)0);
(*( lrt_register_file_line("Action.c", 5986),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 5987),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 5988),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 5997),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 5999),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BILL_SEQ_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6000),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6001),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6002),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BILL_DATE_INT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 6003),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6004),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6005),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6006),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BILL_CONF_STATUS", "value=C", (char *)0);
(*( lrt_register_file_line("Action.c", 6007),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6008),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6009),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6010),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6011),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6012),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6013),lrtfunc_tpcall ))("blGtBilInfo00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6022),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6024),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6025),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6026),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6027),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6028),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6029),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=INCLUDEHISTORYIND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 6030),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6031),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6032),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6033),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6034),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6035),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6036),lrtfunc_tpcall ))("csLsPBInfo00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6045),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 6047),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6048),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ROWCOUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 6049),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6050),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6051),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6052),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6053),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6054),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SUBSCRIBER_NO", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 6055),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6056),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6057),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6058),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6059),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAMNMBUF", "value=EPS_IND", (char *)0);
(*( lrt_register_file_line("Action.c", 6060),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6061),lrtfunc_tpcall ))("csGtSplIndVal00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6070),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6072),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6073),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6074),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6075),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6076),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6077),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 6078),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6079),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", (char *)0);
(*( lrt_register_file_line("Action.c", 6080),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6081),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6082),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6083),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6084),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6085),lrtfunc_tpcall ))("csGtTaxEx00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6094),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6096),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6097),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6098),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6099),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6100),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6101),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6102),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6103),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6104),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PGTMKTINPMARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6105),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6106),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6107),lrtfunc_tpcall ))("rfGtMktByRm00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6116),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 6118),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6119),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 6120),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6121),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6122),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6123),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6124),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6125),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6126),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6127),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=business_entity", (char *)0);
(*( lrt_register_file_line("Action.c", 6128),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=business_entity_code", (char *)0);
(*( lrt_register_file_line("Action.c", 6129),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=DEF", (char *)0);
(*( lrt_register_file_line("Action.c", 6130),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=business_entity_desc", (char *)0);
(*( lrt_register_file_line("Action.c", 6131),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6132),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6133),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6142),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6144),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6145),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6146),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6147),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6148),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6149),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6150),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6151),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6152),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6153),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6154),lrtfunc_tpcall ))("rfLsCompCdDsc00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6163),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6165),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6166),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6167),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PAGE", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6168),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6169),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6170),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6171),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SELECTMODE", "value=E", (char *)0);
(*( lrt_register_file_line("Action.c", 6172),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SUBSTATUS", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 6173),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6174),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6175),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6176),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6177),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6178),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6179),lrtfunc_tpcall ))("csLsBanSub00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6188),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6190),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6191),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6192),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6193),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6194),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6195),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6196),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6197),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6198),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6199),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6200),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6201),lrtfunc_tpcall ))("arLsBilPrm00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6210),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6212),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6213),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6214),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6215),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6216),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6217),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 6218),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6219),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", (char *)0);
(*( lrt_register_file_line("Action.c", 6220),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6221),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6222),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6223),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6224),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6225),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6226),lrtfunc_tpcall ))("arLsBanAgr00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6235),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 6237),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6238),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6239),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6240),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6241),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6242),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATION_MODE", "value=L", (char *)0);
(*( lrt_register_file_line("Action.c", 6243),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6244),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6245),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6246),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6247),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6248),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6249),lrtfunc_tpcall ))("arGtBanHdr00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6258),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6260),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6261),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6262),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6263),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6264),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6265),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6266),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6267),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6268),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=GEN_TYPE", "value=EARLY_UPGRADE_FEE", (char *)0);
(*( lrt_register_file_line("Action.c", 6269),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=GEN_CODE", "value=EARLY_UPGRADE_MENU", (char *)0);
(*( lrt_register_file_line("Action.c", 6270),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6271),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6272),lrtfunc_tpcall ))("rfGtGenCd00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6281),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6283),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6284),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6285),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6286),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6287),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6288),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6289),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6290),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6291),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6292),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6293),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6294),lrtfunc_tpcall ))("csSubStCnt00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6303),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 6305),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6306),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6307),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6308),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6309),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6310),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6311),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6312),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6313),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6314),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6315),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6316),lrtfunc_tpcall ))("evGtScPymElg00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6325),lrtfunc_tpfree ))(data_9);
(*( lrt_register_file_line("Action.c", 6326),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6328),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6329),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6330),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6331),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6332),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6333),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6334),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6335),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6336),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6337),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6338),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6339),lrtfunc_tpcall ))("csGtCustPin00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6348),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 6350),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6351),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 6352),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6353),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6354),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6355),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6356),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6357),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6358),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6359),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=account_type_desc", (char *)0);
(*( lrt_register_file_line("Action.c", 6360),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=account_type", (char *)0);
(*( lrt_register_file_line("Action.c", 6361),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 6362),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=account_type_name", (char *)0);
(*( lrt_register_file_line("Action.c", 6363),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6364),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6365),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6374),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 6376),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6377),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 6378),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6379),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6380),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6381),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6382),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6383),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6384),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6385),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=account_type", (char *)0);
(*( lrt_register_file_line("Action.c", 6386),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=acc_sub_type", (char *)0);
(*( lrt_register_file_line("Action.c", 6387),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 6388),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=description", (char *)0);
(*( lrt_register_file_line("Action.c", 6389),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6390),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6391),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6400),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 6402),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6403),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6404),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6405),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6406),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6407),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6408),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6409),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6410),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=DEALER", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 6411),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6412),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6413),lrtfunc_tpcall ))("rfGtDlrPrfNam00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6422),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 6424),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6425),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARAM_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 6426),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6427),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6428),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6429),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6430),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6431),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6432),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6433),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TABLE_NAME", "value=STORE_INFO", (char *)0);
(*( lrt_register_file_line("Action.c", 6434),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_NAME1", "value=store_cd", (char *)0);
(*( lrt_register_file_line("Action.c", 6435),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COLUMN_VALUE1", "value=9999", (char *)0);
(*( lrt_register_file_line("Action.c", 6436),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OUTPUT_COLUMN", "value=store_name", (char *)0);
(*( lrt_register_file_line("Action.c", 6437),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6438),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6439),lrtfunc_tpcall ))("rfGtDynDesc00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

data_9 = (*( lrt_register_file_line("Action.c", 6448),lrtfunc_tpalloc ))("FML32", "", 100000);
(*( lrt_register_file_line("Action.c", 6449),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 6451),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6452),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6453),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6454),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6455),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6456),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6457),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6458),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6459),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6460),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6461),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6462),lrtfunc_tpcall ))("csSubStCnt00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6471),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 6473),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_3}", (char *)0);
(*( lrt_register_file_line("Action.c", 6474),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6475),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6476),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6477),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6478),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6479),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FU_STATUS", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6480),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6481),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6482),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6483),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_3}", (char *)0);
(*( lrt_register_file_line("Action.c", 6484),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=FU_TYPE", "value=VERF", (char *)0);
(*( lrt_register_file_line("Action.c", 6485),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6486),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6487),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6488),lrtfunc_tpcall ))("mmGtFuInd00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6497),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6499),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6500),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6501),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6502),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6503),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6504),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6505),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6506),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6507),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6508),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6509),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6510),lrtfunc_tpcall ))("arGtNeoInd00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6519),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6521),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6522),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6523),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6524),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6525),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6526),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6527),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6528),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6529),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6530),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6531),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6532),lrtfunc_tpcall ))("arLsBilPrm00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6541),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6543),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6544),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6545),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6546),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6547),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6548),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6549),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6550),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6551),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6552),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6553),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6554),lrtfunc_tpcall ))("csSubStCnt00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6563),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 6565),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6566),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6567),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6568),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6569),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6570),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6571),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6572),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6573),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6574),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6575),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6576),lrtfunc_tpcall ))("evGtScPymElg00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6585),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 6587),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6588),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6589),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6590),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6591),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6592),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6593),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6594),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6595),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6596),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
(*( lrt_register_file_line("Action.c", 6597),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=WINDOW_NAME", "value=w_ban", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6598),lrtfunc_tpcall ))("rfLsWdNmRec00",
data_3,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 6608),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 6610),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_3}", (char *)0);
(*( lrt_register_file_line("Action.c", 6611),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6612),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CUSTOMER_ID", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6613),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=PARAM_COUNT", "value=2", (char *)0);
(*( lrt_register_file_line("Action.c", 6614),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6615),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6616),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6617),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=VERIFIED_BY_PIN", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 6618),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=VERIFIED_BY_SSN", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 6619),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=VERIFIED_BY_PASSWORD", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 6620),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6621),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6622),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6623),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACT_CODE", "value=VER", (char *)0);
(*( lrt_register_file_line("Action.c", 6624),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MEMO_CTN", "value={CTN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6625),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=USER_TEXT", "value=The Mobile number details were verified by user: {USER_ID} on 8/17/2017, Dealer code is: 0000002, Store ID is : 9999.", (char *)0);
(*( lrt_register_file_line("Action.c", 6626),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=P1", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6627),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=P2", "value=8/17/2017", (char *)0);
(*( lrt_register_file_line("Action.c", 6628),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_3}", (char *)0);
(*( lrt_register_file_line("Action.c", 6629),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=VERIFIED_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6630),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6631),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=NT_USER_ID", "value=ivolkov", (char *)0);
(*( lrt_register_file_line("Action.c", 6632),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6633),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
(*( lrt_register_file_line("Action.c", 6634),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=UCID", "value=", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6635),lrtfunc_tpcall ))("arSvBanVer00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6644),lrtfunc_Finitialize32 ))((FBFR32*)data_9);

(*( lrt_register_file_line("Action.c", 6646),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6647),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6648),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6649),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6650),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6651),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6652),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=DEALER_CODE", "value=0000002", (char *)0);
(*( lrt_register_file_line("Action.c", 6653),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6654),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6655),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6656),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=ACTIVITY_CODE", "value=", (char *)0);
(*( lrt_register_file_line("Action.c", 6657),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6658),lrtfunc_Fadd32_fld ))((FBFR32*)data_9, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6659),lrtfunc_tpcall ))("csLsEligDAT00",
data_9,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6668),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 6670),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6671),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6672),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=USER_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6673),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PERF_SESSION_KEY", "value=809055025", (char *)0);
(*( lrt_register_file_line("Action.c", 6674),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6675),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6676),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6677),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACTIVITY_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 6678),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6679),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6680),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6681),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6682),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=NT_USER_ID", "value=ivolkov", (char *)0);
(*( lrt_register_file_line("Action.c", 6683),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6684),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
(*( lrt_register_file_line("Action.c", 6685),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=HOSTCODE", "value=DEVCXSAMSPT009", (char *)0);
(*( lrt_register_file_line("Action.c", 6686),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=WIDGET_NAME", "value=360_VIEW", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6687),lrtfunc_tpacall ))("csSvWdgtWAna00",
data_3,
0,
0);
calld_0 = tpresult_int;
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6694),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6696),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6697),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BANID", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6698),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6699),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6700),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6701),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6702),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=REQUESTDATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6703),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6704),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6705),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6706),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6707),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6708),lrtfunc_tpcall ))("csGtCstCrd00",
data_8,
0,
&data_2,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

data_4 = (*( lrt_register_file_line("Action.c", 6717),lrtfunc_tpalloc ))("FML32", "", 100000);
tpresult_int = (*( lrt_register_file_line("Action.c", 6718),lrtfunc_tpgetrply ))(&calld_010, &data_4, &olen, 0x00000080);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6722),lrtfunc_tpfree ))(data_2);
(*( lrt_register_file_line("Action.c", 6723),lrtfunc_tpchkunsol ))();

(*( lrt_register_file_line("Action.c", 6725),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 6727),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=PARTITION_ID", "value=3", (char *)0);
(*( lrt_register_file_line("Action.c", 6728),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6729),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SEQ_NO", "value=6633", (char *)0);
(*( lrt_register_file_line("Action.c", 6730),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6731),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6732),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6733),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ACTIVITY_MODE", "value=U", (char *)0);
(*( lrt_register_file_line("Action.c", 6734),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6735),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6736),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6737),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6738),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6739),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6740),lrtfunc_tpacall ))("csSvWdgtWAna00",
data_3,
0,
0x00000004);
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6746),lrtfunc_tpchkunsol ))();
(*( lrt_register_file_line("Action.c", 6747),lrtfunc_tpchkunsol ))();

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

(*( lrt_register_file_line("Action.c", 6766),lrtfunc_tpfree ))(data_2);
(*( lrt_register_file_line("Action.c", 6767),lrtfunc_tpfree ))(data_10);
(*( lrt_register_file_line("Action.c", 6768),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6770),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6771),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6772),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6773),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6774),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6775),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 6776),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=AUTO_QUAL_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 6777),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PLAN_TYPE", "value=R", (char *)0);
(*( lrt_register_file_line("Action.c", 6778),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=DP_VER_EFF_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 6779),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=WORK_FOR_OBJ_TYPE", "value=B", (char *)0);
(*( lrt_register_file_line("Action.c", 6780),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6781),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", (char *)0);
(*( lrt_register_file_line("Action.c", 6782),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6783),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6784),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6785),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6786),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6787),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6788),lrtfunc_tpcall ))("csLsAvailDPs00",
data_8,
0,
&data_4,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6797),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6799),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6800),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6801),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6802),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6803),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6804),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 6805),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=GET_INHERITED_DP", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 6806),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6807),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", (char *)0);
(*( lrt_register_file_line("Action.c", 6808),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6809),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6810),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6811),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6812),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6813),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6814),lrtfunc_tpcall ))("csLsBanSubDPs00",
data_8,
0,
&data_4,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6823),lrtfunc_tpchkunsol ))();

(*( lrt_register_file_line("Action.c", 6825),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6827),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6828),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6829),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ROW_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 6830),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6831),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6832),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6833),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 6834),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ACCOUNT_TYPE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 6835),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ACCOUNT_SUB_TYPE", "value=Q", (char *)0);
(*( lrt_register_file_line("Action.c", 6836),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=DISC_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 6837),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6838),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", (char *)0);
(*( lrt_register_file_line("Action.c", 6839),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6840),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=EXPIRATION_DATE", "value=20190717", (char *)0);
(*( lrt_register_file_line("Action.c", 6841),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6842),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6843),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6844),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6845),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
(*( lrt_register_file_line("Action.c", 6846),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MANUAL_DISC_CD", "value=PIXBONE", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6847),lrtfunc_tpcall ))("csChkDiscConf00",
data_8,
0,
&data_4,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6856),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6858),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=LAST_UPDATE_STAMP", "value={LAST_UPDATE_STAMP_3}", (char *)0);
(*( lrt_register_file_line("Action.c", 6859),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6860),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6861),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ROW_COUNT", "value=1", (char *)0);
(*( lrt_register_file_line("Action.c", 6862),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6863),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6864),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=DISC_TRX_ID", "value=-1", (char *)0);
(*( lrt_register_file_line("Action.c", 6865),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6866),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=A", (char *)0);
(*( lrt_register_file_line("Action.c", 6867),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=VALDT_PLNS_IND", "value=N", (char *)0);
(*( lrt_register_file_line("Action.c", 6868),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=DISCOUNT_MODE", "value=I", (char *)0);
(*( lrt_register_file_line("Action.c", 6869),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SKIP_SMS_MEMO_IND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 6870),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6871),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", (char *)0);
(*( lrt_register_file_line("Action.c", 6872),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=EFFECTIVE_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6873),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=EXPIRATION_DATE", "value=20190717", (char *)0);
(*( lrt_register_file_line("Action.c", 6874),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=DISCOUNT_CODE", "value=PIXBONE", (char *)0);
(*( lrt_register_file_line("Action.c", 6875),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6876),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6877),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=LAST_UPDATE_DATE", "value={LAST_UPDATE_DATE_3}", (char *)0);
(*( lrt_register_file_line("Action.c", 6878),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6879),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ACT_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6880),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6881),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6882),lrtfunc_tpcall ))("csSaveDPs00",
data_8,
0,
&data_4,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6891),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 6893),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6894),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6895),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6896),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6897),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6898),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6899),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6900),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6901),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=GEN_TYPE", "value=BUSI_FAMILY_DISCOUNT", (char *)0);
(*( lrt_register_file_line("Action.c", 6902),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6903),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6904),lrtfunc_tpcall ))("rfGtGenCd00",
data_8,
0,
&data_4,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6913),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 6915),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6916),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6917),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6918),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6919),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6920),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SELECTMODE", "value= ", (char *)0);
(*( lrt_register_file_line("Action.c", 6921),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=LASTMEMOIND", "value=Y", (char *)0);
(*( lrt_register_file_line("Action.c", 6922),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6923),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6924),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6925),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6926),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6927),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6928),lrtfunc_tpcall ))("arGtBanAct00",
data_3,
0,
&data_4,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6937),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 6939),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6940),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6941),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6942),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6943),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6944),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATION_MODE", "value=L", (char *)0);
(*( lrt_register_file_line("Action.c", 6945),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6946),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6947),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6948),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6949),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6950),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6951),lrtfunc_tpcall ))("arGtBanHdr00",
data_3,
0,
&data_4,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 6960),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 6962),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6963),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 6964),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6965),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6966),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6967),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATION_MODE", "value=L", (char *)0);
(*( lrt_register_file_line("Action.c", 6968),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6969),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6970),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6971),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6972),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6973),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6974),lrtfunc_tpcall ))("arGtBanHdr00",
data_3,
0,
&data_4,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 6984),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("Action.c", 6986),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MSG_CODE", "value=3100", (char *)0);
(*( lrt_register_file_line("Action.c", 6987),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 6988),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6989),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 6990),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 6991),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 6992),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 6993),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 6994),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 6995),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 6996),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 6997),lrtfunc_tpcall ))("rfGtOlnMsgRec00",
data_3,
0,
&data_4,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};


(*( lrt_register_file_line("Action.c", 7007),lrtfunc_Finitialize32 ))((FBFR32*)data_8);

(*( lrt_register_file_line("Action.c", 7009),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("Action.c", 7010),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=BAN", "value={BAN}", (char *)0);
(*( lrt_register_file_line("Action.c", 7011),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 7012),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("Action.c", 7013),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("Action.c", 7014),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=PRODUCT_TYPE", "value=@", (char *)0);
(*( lrt_register_file_line("Action.c", 7015),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=APPLICATION_ID", "value=A_CSM", (char *)0);
(*( lrt_register_file_line("Action.c", 7016),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SUBSCRIBER_NO", "value=0000000000", (char *)0);
(*( lrt_register_file_line("Action.c", 7017),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 7018),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("Action.c", 7019),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("Action.c", 7020),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("Action.c", 7021),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("Action.c", 7022),lrtfunc_Fadd32_fld ))((FBFR32*)data_8, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("Action.c", 7023),lrtfunc_tpcall ))("arLsBanAgr00",
data_8,
0,
&data_4,
&olen,
0);
 
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("Action.c", 7032),lrtfunc_tpfree ))(data_8);
return 0;
}
# 4 "c:\\users\\fgrinbe\\appdata\\local\\temp\\2\\td_80\\performancecenter\\62e73d6b\\test\\846\\846\\846\\\\combined_846.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
 
(*( lrt_register_file_line("vuser_end.c", 4),lrtfunc_Finitialize32 ))((FBFR32*)data_3);

(*( lrt_register_file_line("vuser_end.c", 6),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EVENT_SEVERITY", "value=2", (char *)0);
(*( lrt_register_file_line("vuser_end.c", 7),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=OPERATOR_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_end.c", 8),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SESSION_ID", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_end.c", 9),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ONLINE_TRX_NO", "value=0", (char *)0);
(*( lrt_register_file_line("vuser_end.c", 10),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=DELETE_INDICATOR", "value=Y", (char *)0);
(*( lrt_register_file_line("vuser_end.c", 11),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=TRANSACTION_MODE", "value=O", (char *)0);
(*( lrt_register_file_line("vuser_end.c", 12),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_NAME", "value=a_csm", (char *)0);
(*( lrt_register_file_line("vuser_end.c", 13),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTED_ENVIRONMENT", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_end.c", 14),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTED_USER_ID", "value={USER_ID}", (char *)0);
(*( lrt_register_file_line("vuser_end.c", 15),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EFFECTED_PROFILE_ID", "value=ALL", (char *)0);
(*( lrt_register_file_line("vuser_end.c", 16),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=COMPUTER_LOCATION", "value=DEVCXSAMSPT009 (10.159.66.81)", (char *)0);
(*( lrt_register_file_line("vuser_end.c", 17),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=EVENT_DESCRIPTION", "value=User has been logged off.", (char *)0);
(*( lrt_register_file_line("vuser_end.c", 18),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=APPLICATION_ID", "value=a_csm", (char *)0);
(*( lrt_register_file_line("vuser_end.c", 19),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=RUN_DATE", "value={DATE}", (char *)0);
(*( lrt_register_file_line("vuser_end.c", 20),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=MARKET_CODE", "value=VST", (char *)0);
(*( lrt_register_file_line("vuser_end.c", 21),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=ENV_CODE", "value=PETOLN", (char *)0);
(*( lrt_register_file_line("vuser_end.c", 22),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=CHANNEL_ID", "value=4 ", (char *)0);
(*( lrt_register_file_line("vuser_end.c", 23),lrtfunc_Fadd32_fld ))((FBFR32*)data_3, "name=SERVICE_PARTNER_ID", "value=ALL", (char *)0);
tpresult_int = (*( lrt_register_file_line("vuser_end.c", 24),lrtfunc_tpacall ))("seInsrtLog00",
data_3,
0,
0x00000004);
if ((tpresult_int == -1)  && !lrt_is_continue_on_error()) {lr_set_transaction_status(1); return -1;};

(*( lrt_register_file_line("vuser_end.c", 30),lrtfunc_tpfree ))(data_4);
(*( lrt_register_file_line("vuser_end.c", 31),lrtfunc_tpfree ))(data_3);
(*( lrt_register_file_line("vuser_end.c", 32),lrtfunc_tpfree ))(data_9);
(*( lrt_register_file_line("vuser_end.c", 33), ci_load_dll(ci_this_context,("kernel32.dll")), dllh = LoadLibraryA(lrt_libname()), procaddr = (void*)GetProcAddress(dllh, "lrt_unsolCB"), lrtfunc_tpsetunsol ))(procaddr);
(*( lrt_register_file_line("vuser_end.c", 34),lrtfunc_tpterm ))();
(*( lrt_register_file_line("vuser_end.c", 35),lrtfunc_tpterm ))();
return 0;
}
# 5 "c:\\users\\fgrinbe\\appdata\\local\\temp\\2\\td_80\\performancecenter\\62e73d6b\\test\\846\\846\\846\\\\combined_846.c" 2

